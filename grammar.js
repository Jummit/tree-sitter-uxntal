module.exports = grammar({
  name: 'uxntal',

  rules: {
    source_file: $ => repeat(choice($.comment, $.opcode, $._rune)),

    opcode: $ => choice('BRK', 'INC', 'POP', 'NIP', 'SWP', 'ROT', 'DUP', 'OVR', 'EQU', 'NEQ', 'GTH', 'LTH', 'JMP', 'JCN', 'JSR', 'STH', 'LDZ', 'STZ', 'LDR', 'STR', 'LDA', 'STA', 'DEI', 'DEO', 'ADD', 'SUB', 'MUL', 'DIV', 'AND', 'ORA', 'EOR', 'SFT', 'JCI', 'JMI', 'JSI', 'LIT'),

    _rune: $ => choice($.absolute_pad, $.raw_character, $.literal_hex, $.label, $.sub_label, $.relative_pad),

    absolute_pad: $ => /|[0-9]+/,
    raw_character: $ => /\"./,
    literal_hex: $ => /#[^\s]+/,
    label: $ => /@[^\s]+/,
    sub_label: $ => /&[^\s]+/,
    relative_pad: $ => /\$[0-9]+/,
    
    comment: $ => choice(seq(
      '(',
      $.comment_content,
      ')'
    ), seq('(', ')')),

    comment_content: $ => /[^\)]+/
  }
});


