(module
  name: (identifier) @class
)

(class
  name: (identifier) @class
)

(function_item
  (identifier) @function
)

(function_modifiers_external) @string

(const_item
  name: (identifier) @constant
)

(variable_identifier) @variable
(variable_or_function_identifier) @variable
(type_identifier) @type
(type_primitive) @type

(pointer_type "." @operator)
(pointer_type_item "." @operator)
; (deref_expression "." @operator)

[
  "class"
  "endClass"
  "record"
  "endRecord"
  "nativeRecord"
  "endNativeRecord"
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
  "end" ; TODO: fix issue with word "append" where the "end" is highlighted
  "external"
  "forward"
  "absolute"
  "private"
  "protected"
  "final"
  "override"
  "multiLang"
  "type"
  "memory"
  "refTo"
  "listOf"
  "inverse"
  "array"
  "to"
  "of"
  "instanceOf"
] @keyword

(intrinsic) @keyword

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ":"
  "."
  ","
] @punctuation.delimiter

[
  "+="
  "-="
  "="
  "+"
  "@"
  ; "-"
  ; ":="
] @operator

(line_comment) @comment

(string_literal) @string
(text_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin
(ascii_literal) @constant.builtin
(nil_literal) @constant.builtin
(sized) @constant.builtin
(enum_variant_redefine_value) @constant.builtin

(self) @variable.builtin
(result) @variable.builtin

(annotation "model" @attribute)
(annotation_attribute name: (identifier) @attribute)
(reference_modifiers) @attribute

; [
;   "int"
;   "boolean"
;   "string"
;   "cstring"
;   "num"
;   "Decimal"
;   "Int1"
;   "Int2"
;   "Int4"
;   "Int8"
;   "Int"
;   "Boolean"
;   "String"
;   "CString"
;   "Num"
;   "Num4"
;   "Num8"
;   "Num10"
;   "Date"
;   "IDEName"
;   "IDEid"
;   "IDEversion"
; ] @type.builtin
