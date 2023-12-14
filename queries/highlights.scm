(source_file
  name: (identifier) @module
)


(function_declaration
  (identifier) @function
)

(function_parameter_declaration
  name: (identifier) @variable
  type: (type_identifier) @type
)
 
[
  "module"
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
] @keyword

[
  "("
  ")"
] @punctuation.bracket

[
  ":"
  "."
  ","
] @punctuation.delimiter
