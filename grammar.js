module.exports = grammar({
	name: 'gold',

	extras: $ => [
		/\s/,
		$.line_comment,
	],

	supertypes: $ => [
		$._literal,
	],

	rules: {
		source_file: $ => choice(
			$.module,
			$.class,
		),

		identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

		_type_identifier: $ => alias($.identifier, $.type_identifier),

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
			optional('endModule'),
		),

		class: $ => seq(
			$._class,
			optional('endClass'),
		),

		class_item: $ => seq(
			$._class,
			'endClass',
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
			$.function_item,
		),

		uses_item: $ => seq(
			'uses',
			sepBy1(',', $._type_identifier),
			optional(','),
		),

		const_item: $ => seq(
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
			// $.record_item,
		),

		function_item: $ => seq(
			choice('func', 'function', 'proc', 'procedure'),
			field('name', $.identifier),
			field('parameters', optional($.function_parameters)),
			optional($.function_return_type),
			optional($.function_modifiers),
			choice(
				$.forward_modifiers,
				$.function_modifiers_external,
				$._function_definition,
			),
		),

		// other modifiers except 'forward' and 'external'
		function_modifiers: $ => repeat1(choice(
			$.visibility_modifiers,
			$._override_modifiers,
		)),

		forward_modifiers: _ => seq('forward'),

		_function_definition: $ => seq(
			optional($.function_body_statements),
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

		function_parameters: $ => seq(
			'(',
			sepBy1(',', $.function_parameter_declaration),
			optional(','),
			')',
		),

		function_parameter_declaration: $ => seq(
			optional($.function_parameter_modifiers),
			field('name', $.identifier),
			':',
			field('type', $._type_identifier),
		),

		function_parameter_modifiers: _ => choice('inOut', 'var', 'const'),

		function_return_type: $ => seq(
			'return',
			$._type_identifier,
		),

		function_body_statements: $ => seq(
			repeat1($.statement)
		),

		variable_declaration: $ => seq(
			'var',
			field('name', $.identifier),
			':',
			field('type', $._type_identifier),
		),

		statement: $ => choice(
			$.declaration_statement,
			// $.expression_statement,
		),

		declaration_statement: $ => choice(
			$.uses_item,
			$._type_item,
			$.variable_declaration,
		),

		// expression_statement: $ => {
		//	// TODO: to be implemented
		//},

		_override_modifiers: _ => choice(
			'final',
			'override',
		),

		visibility_modifiers: $ => choice(
			'private',
			'protected',
		),

		enum_item: $ => seq(
			'type',
			field('name', $._type_identifier),
			':',
			optional(field('derived', $.enum_derived)),
			field('body', $.enum_variant_list),
			optional($.enum_modifiers),
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

		set_item: $ => seq(
			'type',
			field('name', $._type_identifier),
			':',
			'[',
			field('enum_type', $._type_identifier),
			']',
		),

		pointer_type_item: $ => seq(
			'type',
			field('name', $._type_identifier),
			':',
			'.',
			field('type', $._type_identifier),
		),

		annotation: $ => seq(
			'[',
			'model',
			$.annotation_attribute_list,
			token.immediate(']'),
		),

		annotation_attribute_list: $ => seq(
			'(',
			sepBy1(',', $.annotation_attribute),
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
			$.string_literal,
			$.text_literal,
			$.integer_literal,
			$.boolean_literal,
			// TODO: to be added
		),

		_string_literal: $ => seq(
			'\'',
			// TODO: should probably use external scanner, since there's an error with comment highlight inside string
			repeat(/[\u0020-\u007E\u00A0-\u00FF]/),
			token.immediate('\''),
		),
		string_literal: $ => $._string_literal,

		text_literal: $ => seq(
			'{',
			sepBy1(',', $._string_literal),
			optional(','),
			'}',
		),

		_integer_literal: _ => token(seq(/-?[0-9][0-9]*/)),
		integer_literal: $ => $._integer_literal,

		boolean_literal: _ => choice('true', 'True', 'false', 'False'),

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
