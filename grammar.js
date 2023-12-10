module.exports = grammar({
	name: 'gold',

	rules: {
		source_file: $ => seq(
			token('module'),
			field('module_name', $.identifier),
			repeat($.declaration_statement),
		),

		identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

		_type_identifier: $ => alias($.identifier, $.type_identifier),

		declaration_statement: $ => choice(
			$.use_declaration,
			$.type_declaration,
			$.function_declaration,
		),

		use_declaration: $ => seq(
			'uses',
			sepBy1(',', $._type_identifier),
			optional(','),
		),

		type_declaration: $ => choice(
			$.enum_item,
			// $.record_item,
		),

		function_declaration: $ => choice(
			$.function_forward_declaration,
			$.function_definition,
		),

		function_forward_declaration: $ => seq(
			$.function_token_begin,
			field('function_name', $.identifier),
			optional($.function_parameters),
			optional($.function_return_type),
			token('forward'),
		),

		function_definition: $ => seq(
			$.function_token_begin,
			field('function_name', $.identifier),
			optional($.function_parameters),
			optional($.function_return_type),
			$.function_token_end,
		),

		function_token_begin: _ => token(choice('function', 'func', 'procedure', 'proc')),

		function_token_end: _ => token(choice('end', 'endFunc', 'endProc')),

		function_parameters: $ => seq(
			token('('),
			sepBy1(',', $.function_parameter_declaration),
			optional(','),
			token(')'),
		),

		function_parameter_declaration: $ => seq(
			optional(choice('inOut', 'var', 'const')),
			field('parameter_name', $.identifier),
			token(':'),
			field('parameter_type', $._type_identifier),
		),

		function_return_type: $ => seq(
			token('return'),
			$._type_identifier,
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
