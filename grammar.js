module.exports = grammar({
  name: 'uxntal',
  extras: $ => [$.comment, /\s+/],
  rules: {
    source_file: $ => repeat($._token),

    _token: $ => choice($.comment, $._rune, $.brackets, $.immediate, $.identifier),

    comment: $ => choice(seq(
      '(',
      $.comment_content,
      ')'
    ), seq('(', ')')),

    number: $ => /[\da-f]{2}|[\da-f]{4}/,

    // TODO: Figure out what can come after this.
    immediate: $ => choice(seq('?', token.immediate(/[^\s]/)), seq('!', token.immediate(/[^\s]/))),

    _rune: $ => choice($.absolute_pad, $.raw_character, $.literal_hex, $.label_definition, $.sub_label_definition, $.relative_pad, $.macro_definition, $.label),

    // FIXME: Use $.number here when https://github.com/tree-sitter/tree-sitter/issues/449 is fixed.
    absolute_pad: $ => seq('|', alias(/[\da-f]{2}|[\da-f]{4}/, $.number)),
    raw_character: $ => /\"[^\s]+/,
    literal_hex: $ => seq('#', alias(/[\da-f]{2}|[\da-f]{4}/, $.number)),
    label_definition: $ => /@[^\s]+/,
    sub_label_definition: $ => /&[^\s]+/,
    relative_pad: $ => seq('$', alias(token.immediate(/[\da-f]+/), $.number)),

    label: $ => seq(
      choice(',', '.', ';', '_', '-', '='),
      token.immediate(/[^/\s]+/),
      optional(alias(token.immediate(seq('/', token.immediate(/[^\s]+/))), $.sub_label))
    ),
    sub_label: $ => seq('/', token.immediate(/[^\s]+/)),

    brackets: $ => seq(
      '[',
      repeat($._token),
      ']'
    ),

    macro_definition: $ => seq(
      /%[\dA-z]+/,
      '{',
      repeat($._token),
      '}'
    ),

    // Does this need to be this verbose? Understanding precedence could make this cleaner.
    identifier: $ => /[^,\|\$\[\]\(\.;_\-=#\s][\dA-z]*[^\s]*/,
    
    comment_content: $ => /[^\)]+/
  },
});


