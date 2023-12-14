module.exports = grammar({
	name: 'gold',

	extras: $ => [
		/\s/,
		$.line_comment,
	],

	rules: {
		source_file: $ => seq(
			'module',
			field('name', $.identifier),
			repeat($._module_item_declaration),
		),

		identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

		_type_identifier: $ => alias($.identifier, $.type_identifier),

		comment: $ => choice(
			$.line_comment,
		),

		line_comment: _ => token(seq(
			';', /.*/,
		)),

		_module_item_declaration: $ => choice(
			$.uses_item,
			$._type_item,
			$.function_item,
		),

		uses_item: $ => seq(
			'uses',
			sepBy1(',', $._type_identifier),
			optional(','),
		),

		_type_item: $ => choice(
			$.enum_item,
			// $.record_item,
		),

		function_item: $ => seq(
			choice('func', 'function', 'proc', 'procedure'),
			field('name', $.identifier),
			field('parameters', optional($.function_parameters)),
			optional($.function_return_type),
			optional($.visibility_modifiers),
			optional($.function_modifiers),
			choice(
				$.function_modifiers_forward,
				$.function_modifiers_external,
				$._function_definition,
			),
		),

		// other modifiers except 'forward' and 'external'
		function_modifiers: _ => repeat1(choice(
			'final',
			'override'
		)),

		function_modifiers_forward: _ => seq('forward'),

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

		visibility_modifiers: $ => choice(
			'private',
			'protected',
		),

		enum_item: $ => seq(
			'type',
			$._type_identifier,
			':',
			$.enum_definition,
		),

		enum_definition: $ => seq(
			'(',
			sepBy1(',', $.enum_variant),
			optional(','),
			')',
		),

		enum_variant: $ => seq(
			$._type_identifier,
		),
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
