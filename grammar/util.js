const

parens = (...rule) => seq('(', ...rule, ')')

braces = (...rule) => seq('{', ...rule, '}')

brackets = (...rule) => seq('[', ...rule, ']')

ticked = (...rule) => seq('`', ...rule, '`')

quote = '\''

qualified = ($, id) => seq($._qualifying_module, id)

sep = (sep, rule) => optional(seq(rule, repeat(seq(sep, rule))))

sep1 = (sep, rule) => seq(rule, repeat(seq(sep, rule)))

sep2 = (sep, rule) => seq(rule, repeat1(seq(sep, rule)))

varid_pattern = /[_\p{Ll}](\w|')*#?/u

module.exports = {
  parens,
  braces,
  brackets,
  ticked,
  quote,
  qualified,
  sep,
  sep1,
  sep2,
  varid_pattern,
}
