
const PREC = {
	variable: 1,
	assign: 0,
};

const numeric_types = [
	'int',
	'num',
	'Decimal',
];

const primitive_types = numeric_types.concat([
	'boolean',
	'string',
	'cstring',
	'char',
]);

module.exports = grammar({
	name: 'gold',

	extras: $ => [
		/\s/,
		$.line_comment,
	],

	supertypes: $ => [
		$._literal,
	],

	conflicts: $ => [
		[$._type_identifier, $.function_type_item],
		[$.function_item, $.function_signature_item],
	],

	rules: {
		source_file: $ => choice(
			$.module,
			$.class,
		),

		identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

		_type_identifier: $ => alias($.identifier, $.type_identifier),
		_variable_identifier: $ => alias($.identifier, $.variable_identifier),

		comment: $ => choice(
			$.line_comment,
		),

		line_comment: _ => token(seq(
			';', /.*/,
		)),

		module: $ => seq(
			optional($.annotation),
			'module',
			field('name', $.identifier),
			repeat($._module_item_declaration),
			optional(choice('end', 'endModule')),
		),

		class: $ => seq(
			$._class,
			optional(choice('end', 'endClass')),
		),

		class_item: $ => seq(
			$._class,
			choice('end', 'endClass'),
		),

		_class: $ => seq(
			optional($.annotation),
			'class',
			field('name', $.identifier),
			optional(field('derived', seq(
				'(',
				$.identifier,
				')',
			))),
			repeat($._class_item_declaration),
		),

		_module_item_declaration: $ => choice(
			$.class_item,
			$._item_declaration,
		),

		_class_item_declaration: $ => choice(
			$._item_declaration,
		),

		_item_declaration: $ => choice(
			$.uses_item,
			$.const_item,
			$._type_item,
			$.variable_item,
			$.function_item,
			$.function_signature_item,
		),

		uses_item: $ => seq(
			'uses',
			sepBy1(',', $.identifier),
			// optional(','), 
			// TODO: cannot use trailing comma because it will conflict with with variable_item
		),

		const_item: $ => seq(
			optional($.annotation),
			'const',
			field('name', $.identifier),
			'=',
			$._literal,
			optional($.const_modifiers),
		),

		const_modifiers: _ => seq(
			'multiLang',
		),

		_type_item: $ => choice(
			$.enum_item,
			$.set_item,
			$.pointer_type_item,
			$.function_type_item,
			$.record_item,
			$.range_item,
			$.retyped_item,
			$.array_item,
			$.instanceof_item,
			$.reference_item,
		),

		_type: $ => choice(
			$._type_identifier_or_primitive,
			$.enum_type,
			$.set_type,
			$.pointer_type,
			$.function_type,
			$.record_type,
			$.range_type,
			$.array_type,
			$.instanceof_type,
			$.reference_type,
		),

		_type_identifier_or_primitive: $ => seq(
			choice(
				$._type_identifier,
				$.type_primitive,
			),
		),

		type_primitive: $ => seq(
			choice(...primitive_types),
			optional($.sized),
		),

		sized: $ => seq(
			'(',
			$._integer_literal,
			')',
		),

		retyped_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._type_identifier_or_primitive,
		),

		_variable_item: $ => seq(
			optional($.annotation),
			optional($.memory_modifiers),
			field('name', $._variable_identifier),
			':',
			field('type', $._type),
			optional($.variable_modifiers),
		),

		variable_item: $ => $._variable_item,

		// all modifiers except `memory`
		variable_modifiers: $ => repeat1(choice(
			$.visibility_modifiers,
			$._override_modifiers,
			$.absolute_modifiers,
		)),

		memory_modifiers: _ => seq('memory'),

		_reference_type: $ => seq(
			choice('refTo', 'listOf'),
			optional($.reference_modifiers),
			$._type_identifier,
			optional($.reference_inverse_modifiers),
		),
		reference_type: $ => $._reference_type,

		// other modifiers except inverse
		reference_modifiers: $ => seq(
			'[',
			sepBy1(',', token(choice(
				'V', 'isVersioned', 'Versioned',
				'T', 'inTransaction',
				'O', 'isOwner',
				'P', 'isCurProject',
				'I', 'isIntegral',
				'A', 'isActive',
			))),
			optional(','),
			']',
		),

		reference_inverse_modifiers: $ => seq(
			'inverse',
			field('backref', $._variable_identifier),
		),

		reference_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._reference_type,
		),

		_function_type: $ => seq(
			choice('func', 'function', 'proc', 'procedure'),
			optional($.parameter_list),
			optional($.function_return_type),
			// TODO: there shouldn't be anymore modifiers or definition here. to be checked.
		),
		function_type: $ => $._function_type,

		function_type_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._function_type,
		),

		function_item: $ => seq(
			optional($.annotation),
			choice('func', 'function', 'proc', 'procedure'),
			field('name', $.identifier),
			optional($.parameter_list),
			optional($.function_return_type),
			optional($.function_modifiers),
			choice(
				$.forward_modifiers,
				$.function_modifiers_external,
				$._function_definition,
			),
		),

		function_signature_item: $ => seq(
			optional($.annotation),
			choice('func', 'function', 'proc', 'procedure'),
			field('name', $.identifier),
			optional($.parameter_list),
			optional($.function_return_type),
			optional($.function_modifiers),
		),

		// other modifiers except 'forward' and 'external'
		function_modifiers: $ => repeat1(choice(
			$.visibility_modifiers,
			$._override_modifiers,
		)),

		forward_modifiers: _ => seq('forward'),

		_function_definition: $ => seq(
			optional($.function_body),
			choice('endFunc', 'endProc', 'end'),
		),

		function_modifiers_external: $ => seq(
			'external',
			'\'',
			field('dll_name', $.identifier),
			'.',
			field('dll_function_name', $.identifier),
			'\'',
		),

		parameter_list: $ => seq(
			'(',
			sepBy1(',', $.parameter),
			optional(','),
			')',
		),

		parameter: $ =>
			choice(
				$._parameter_untyped,
				$._parameter_typed,
			),

		_parameter_typed: $ => seq(
			optional($.parameter_modifiers),
			field('name', $._variable_identifier),
			':',
			field('type', $._type_identifier_or_primitive),
		),

		_parameter_untyped: $ => seq(
			$.parameter_modifiers,
			field('name', $._variable_identifier),
		),

		parameter_modifiers: _ => choice('inOut', 'var', 'const'),

		function_return_type: $ => seq(
			'return',
			$._type_identifier_or_primitive,
		),

		function_body: $ => seq(
			repeat1($._statement)
		),

		variable_declaration: $ => seq(
			'var',
			field('name', $._variable_identifier),
			':',
			field('type', $._type_identifier_or_primitive),
		),

		_statement: $ => choice(
			$.declaration_statement,
			$.expression_statement,
		),

		self: _ => 'self',
		result: _ => '_Result',

		expression_statement: $ => $._expression,

		_expression: $ => choice(
			$.result_expression,
			$.assignment_expression,
			$.compound_assignment_expression,
			$._literal,
			prec.left($.identifier),
			$.self,
			$.variable_expression,
		),

		// special assignment to _Result variable
		result_expression: $ => prec.left(PREC.assign, seq(
			field('left', $.result),
			'=',
			field('right', $._expression),
		)),

		// any assignment except to _Result
		assignment_expression: $ => prec.left(PREC.assign, seq(
			field('left', $._expression),
			'=',
			field('right', $._expression),
		)),

		compound_assignment_expression: $ => prec.left(PREC.assign, seq(
			field('left', $._expression),
			field('operator', choice('+=', '-=')),
			field('right', $._expression),
		)),

		variable_expression: $ => prec.left(PREC.variable, seq(
			field('value', $._expression),
			'.',
			field('variable', $._variable_identifier),
		)),

		declaration_statement: $ => choice(
			$.uses_item,
			$._type_item,
			$.variable_declaration,
		),

		absolute_modifiers: $ => seq(
			'absolute',
			$._variable_identifier,
		),

		_override_modifiers: _ => choice(
			'final',
			'override',
		),

		visibility_modifiers: $ => choice(
			'private',
			'protected',
		),

		_enum_type: $ => seq(
			optional(field('derived', $.enum_derived)),
			field('body', $.enum_variant_list),
			optional($.enum_modifiers),
		),
		enum_type: $ => $._enum_type,

		enum_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._enum_type,
		),

		enum_derived: $ => seq(
			field('type', $._type_identifier),
			'+',
		),

		enum_modifiers: _ => choice(
			'multiLang',
		),

		enum_variant_list: $ => seq(
			'(',
			sepBy1(',', $.enum_variant),
			optional(','),
			')',
		),

		enum_variant: $ => seq(
			optional($.annotation),
			field('name', $.identifier),
			optional($.enum_variant_redefine_value),
		),

		enum_variant_redefine_value: $ => seq(
			'=',
			$._integer_literal,
		),

		_set_type: $ => seq(
			'[',
			field('enum_type', $._type_identifier),
			']',
		),
		set_type: $ => $._set_type,

		set_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._set_type,
		),

		_pointer_type: $ => seq(
			'.',
			field('type', $._type_identifier_or_primitive),
		),
		pointer_type: $ => $._pointer_type,

		pointer_type_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._pointer_type,
		),

		_record_type: $ => seq(
			choice('record', 'nativeRecord'),
			optional($.record_derived),
			optional($.record_variable_list),
			choice('end', 'endRecord', 'endNativeRecord'),
		),
		record_type: $ => $._record_type,

		record_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._record_type,
		),

		record_derived: $ => seq(
			'(',
			field('type', $._type_identifier),
			')',
		),

		record_variable_list: $ => seq(
			repeat1($.record_variable),
		),

		record_variable: $ => seq(
			optional($.annotation),
			field('name', $.identifier),
			':',
			field('type', $._type),
			optional($.variable_modifiers),
		),

		_range_type: $ => seq(
			field('begin', $._range_value),
			'to',
			field('end', $._range_value),
		),
		range_type: $ => $._range_type,

		_range_value: $ => choice(
			$.identifier,
			$.integer_literal,
			$.string_literal,
		),

		range_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._range_type,
		),

		_array_type: $ => seq(
			'array',
			'[',
			field('size', choice($.range_type, $._type_identifier)),
			']',
			'of',
			field('type', $._type_identifier_or_primitive),
		),
		array_type: $ => $._array_type,

		array_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._array_type,
		),

		_instanceof_type: $ => seq(
			'instanceOf',
			field('class', $.identifier),
		),
		instanceof_type: $ => $._instanceof_type,

		instanceof_item: $ => seq(
			optional($.annotation),
			'type',
			field('name', $._type_identifier),
			':',
			$._instanceof_type,
		),

		annotation: $ => seq(
			'[',
			optional(seq('type', ':')), // on annotating variable_item in module/class
			'model',
			$.annotation_attribute_list,
			token.immediate(']'),
		),

		annotation_attribute_list: $ => seq(
			'(',
			sepBy1(',', $.annotation_attribute),
			optional(','),
			')',
		),

		annotation_attribute: $ => seq(
			field('name', $.identifier),
			':',
			$._inner_annotation,
		),

		_inner_annotation: $ => choice(
			$._literal,
			$.identifier,
			$.annotation_attribute_list,
		),

		_literal: $ => choice(
			$.nil_literal,
			$.string_literal,
			$.text_literal,
			$.integer_literal,
			$.boolean_literal,
			// TODO: to be added
		),

		_string_literal: $ => seq(
			'\'',
			// TODO: should probably use external scanner, since there's an error with comment highlight inside string
			optional(repeat(/[\u0020-\u007E\u00A0-\u00FF]/)),
			token.immediate('\''),
		),
		string_literal: $ => $._string_literal,

		text_literal: $ => seq(
			'{',
			sepBy1(',', $._string_literal),
			optional(','),
			'}',
		),

		_integer_literal: _ => token(seq(/-?[0-9][0-9]*/, optional('L'))),
		integer_literal: $ => $._integer_literal,

		boolean_literal: _ => choice('true', 'True', 'false', 'False'),

		nil_literal: _ => token('nil'),

	},
});

/**
 * Creates a rule to match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function sepBy1(sep, rule) {
	return seq(rule, repeat(seq(sep, rule)));
}


/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
	return optional(sepBy1(sep, rule));
}
