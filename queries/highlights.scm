(module
  name: (identifier) @class
)

(class
  name: (identifier) @class
)

(function_item
  (identifier) @function
)

(function_parameter_declaration
  name: (identifier) @variable
)

(function_modifiers_external) @string

(const_item
  name: (identifier) @constant
)

(type_identifier) @type

[
  "class"
  "endClass"
  "module"
  "endModule"
  "uses"
  "var"
  "inOut"
  "const"
  "func"
  "function"
  "endFunc"
  "proc"
  "procedure"
  "endProc"
  "return"
  "end"
  "external"
  "forward"
  "private"
  "protected"
  "final"
  "override"
  "multiLang"
  "type"
] @keyword

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  ":"
  "."
  ","
] @punctuation.delimiter

[
  "+"
] @operator

(line_comment) @comment

(string_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin

(annotation "model" @attribute)
(annotation_attribute name: (identifier) @attribute)
