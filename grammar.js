module.exports = grammar({
	name: 'gold',
	rules: {
		source_file: $ => seq(
			token('module'),
			field('module_name', $.identifier),
			repeat($.module_item_declaration),
		),

		identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

		_type_identifier: $ => alias($.identifier, $.type_identifier),

		module_item_declaration: $ => choice(
			$.use_declaration,
			$.type_declaration,
			$.function_declaration,
		),

		use_declaration: $ => seq(
			$.kw_uses,
			sepBy1(',', $._type_identifier),
			optional(','),
		),

		type_declaration: $ => choice(
			$.enum_item,
			// $.record_item,
		),

		function_declaration: $ => seq(
			$.kw_function_begin,
			field('function_name', $.identifier),
			optional($.function_parameters),
			optional($.function_return_type),
			optional($.visibility),
			optional($.kw_final),
			optional($.kw_override),
			choice(
				$.function_forward_declaration,
				$.function_definition,
				$.function_external,
			),
		),

		function_forward_declaration: $ => $.kw_forward,

		function_definition: $ => seq(
			optional($.function_body_statements),
			$.kw_function_end,
		),

		function_external: $ => seq(
			$.kw_external,
			token('\''),
			field('dll_name', $.identifier),
			token('.'),
			field('dll_function_name', $.identifier),
			token('\''),
		),

		kw_function_begin: $ => choice(
			$.kw_func, $.kw_function,
			$.kw_proc, $.kw_procedure,
		),

		kw_function_end: $ => choice(
			token('endFunc'),
			token('endProc'),
			$.kw_end,
		),

		function_parameters: $ => seq(
			token('('),
			sepBy1(',', $.function_parameter_declaration),
			optional(','),
			token(')'),
		),

		function_parameter_declaration: $ => seq(
			optional(choice($.kw_inOut, $.kw_var, $.kw_const)),
			field('parameter_name', $.identifier),
			token(':'),
			field('parameter_type', $._type_identifier),
		),

		function_return_type: $ => seq(
			$.kw_return,
			$._type_identifier,
		),

		function_body_statements: $ => seq(
			repeat1($.statement)
		),

		variable_declaration: $ => seq(
			$.kw_var,
			field('variable_name', $.identifier),
			token(':'),
			field('variable_type', $._type_identifier),
		),

		statement: $ => choice(
			$.declaration_statement,
			// $.expression_statement,
		),

		declaration_statement: $ => choice(
			$.use_declaration,
			$.type_declaration,
			$.variable_declaration,
		),

		// expression_statement: $ => {
		//	// TODO: to be implemented
		//},

		visibility: $ => choice(
			$.kw_private,
			$.kw_protected,
		),

		kw_uses: _ => token('uses'),
		kw_var: _ => token('var'),
		kw_inOut: _ => token('inOut'),
		kw_const: _ => token('const'),
		kw_func: _ => token('func'),
		kw_function: _ => token('function'),
		kw_proc: _ => token('proc'),
		kw_procedure: _ => token('procedure'),
		kw_return: _ => token('return'),
		kw_end: _ => token('end'),
		kw_external: _ => token('external'),
		kw_forward: _ => token('forward'),
		kw_private: _ => token('private'),
		kw_protected: _ => token('protected'),
		kw_final: _ => token('final'),
		kw_override: _ => token('override'),

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
