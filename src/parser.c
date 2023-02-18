#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  aux_sym_number_token1 = 3,
  anon_sym_QMARK = 4,
  aux_sym_immediate_token1 = 5,
  anon_sym_BANG = 6,
  anon_sym_PIPE = 7,
  sym_raw_character = 8,
  anon_sym_POUND = 9,
  sym_label_definition = 10,
  sym_sub_label_definition = 11,
  anon_sym_DOLLAR = 12,
  aux_sym_relative_pad_token1 = 13,
  anon_sym_COMMA = 14,
  anon_sym_DOT = 15,
  anon_sym_SEMI = 16,
  anon_sym__ = 17,
  anon_sym_DASH = 18,
  anon_sym_EQ = 19,
  aux_sym_label_token1 = 20,
  aux_sym_label_token2 = 21,
  anon_sym_SLASH = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  aux_sym_macro_definition_token1 = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_identifier = 28,
  sym_comment_content = 29,
  sym_source_file = 30,
  sym__token = 31,
  sym_comment = 32,
  sym_immediate = 33,
  sym__rune = 34,
  sym_absolute_pad = 35,
  sym_literal_hex = 36,
  sym_relative_pad = 37,
  sym_label = 38,
  sym_brackets = 39,
  sym_macro_definition = 40,
  aux_sym_source_file_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_QMARK] = "\?",
  [aux_sym_immediate_token1] = "immediate_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [sym_raw_character] = "raw_character",
  [anon_sym_POUND] = "#",
  [sym_label_definition] = "label_definition",
  [sym_sub_label_definition] = "sub_label_definition",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_relative_pad_token1] = "number",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym__] = "_",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_label_token2] = "sub_label",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_macro_definition_token1] = "macro_definition_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_comment_content] = "comment_content",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_comment] = "comment",
  [sym_immediate] = "immediate",
  [sym__rune] = "_rune",
  [sym_absolute_pad] = "absolute_pad",
  [sym_literal_hex] = "literal_hex",
  [sym_relative_pad] = "relative_pad",
  [sym_label] = "label",
  [sym_brackets] = "brackets",
  [sym_macro_definition] = "macro_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_immediate_token1] = aux_sym_immediate_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_raw_character] = sym_raw_character,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_label_definition] = sym_label_definition,
  [sym_sub_label_definition] = sym_sub_label_definition,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_relative_pad_token1] = aux_sym_relative_pad_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym__] = anon_sym__,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [aux_sym_label_token2] = aux_sym_label_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_macro_definition_token1] = aux_sym_macro_definition_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_comment_content] = sym_comment_content,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_comment] = sym_comment,
  [sym_immediate] = sym_immediate,
  [sym__rune] = sym__rune,
  [sym_absolute_pad] = sym_absolute_pad,
  [sym_literal_hex] = sym_literal_hex,
  [sym_relative_pad] = sym_relative_pad,
  [sym_label] = sym_label,
  [sym_brackets] = sym_brackets,
  [sym_macro_definition] = sym_macro_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_immediate_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_label_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_label_definition] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relative_pad_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym__rune] = {
    .visible = false,
    .named = true,
  },
  [sym_absolute_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_relative_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_brackets] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = aux_sym_relative_pad_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '#'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < '='
      ? (c < ';'
        ? (c >= ',' && c <= '.')
        : c <= ';')
      : (c <= '=' || c == '|'))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < ','
        ? (c >= '#' && c <= '$')
        : c <= '.')))
    : (c <= ';' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '|'
        ? c == '_'
        : c <= '|')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '?') ADVANCE(28);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(33);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(12);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 13:
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '?') ADVANCE(28);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '?') ADVANCE(28);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_immediate_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_immediate_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_raw_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_raw_character);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_label_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_label_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_sub_label_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_sub_label_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_relative_pad_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_label_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_macro_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_macro_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_immediate_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_relative_pad_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__token] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_immediate] = STATE(3),
    [sym__rune] = STATE(3),
    [sym_absolute_pad] = STATE(3),
    [sym_literal_hex] = STATE(3),
    [sym_relative_pad] = STATE(3),
    [sym_label] = STATE(3),
    [sym_brackets] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_raw_character] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_label_definition] = ACTIONS(11),
    [sym_sub_label_definition] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [aux_sym_macro_definition_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(30),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(33),
    [sym_raw_character] = ACTIONS(36),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_label_definition] = ACTIONS(36),
    [sym_sub_label_definition] = ACTIONS(36),
    [anon_sym_DOLLAR] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym__] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(25),
    [aux_sym_macro_definition_token1] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_raw_character] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_label_definition] = ACTIONS(61),
    [sym_sub_label_definition] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [aux_sym_macro_definition_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(63),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_raw_character] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_label_definition] = ACTIONS(61),
    [sym_sub_label_definition] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [aux_sym_macro_definition_token1] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(63),
  },
  [5] = {
    [sym__token] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_immediate] = STATE(4),
    [sym__rune] = STATE(4),
    [sym_absolute_pad] = STATE(4),
    [sym_literal_hex] = STATE(4),
    [sym_relative_pad] = STATE(4),
    [sym_label] = STATE(4),
    [sym_brackets] = STATE(4),
    [sym_macro_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_raw_character] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_label_definition] = ACTIONS(67),
    [sym_sub_label_definition] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [aux_sym_macro_definition_token1] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_raw_character] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_label_definition] = ACTIONS(61),
    [sym_sub_label_definition] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(73),
    [aux_sym_macro_definition_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(63),
  },
  [7] = {
    [sym__token] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_immediate] = STATE(6),
    [sym__rune] = STATE(6),
    [sym_absolute_pad] = STATE(6),
    [sym_literal_hex] = STATE(6),
    [sym_relative_pad] = STATE(6),
    [sym_label] = STATE(6),
    [sym_brackets] = STATE(6),
    [sym_macro_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(9),
    [sym_raw_character] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_label_definition] = ACTIONS(75),
    [sym_sub_label_definition] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(77),
    [aux_sym_macro_definition_token1] = ACTIONS(21),
    [sym_identifier] = ACTIONS(79),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_raw_character] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [sym_label_definition] = ACTIONS(81),
    [sym_sub_label_definition] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [aux_sym_label_token2] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [aux_sym_macro_definition_token1] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(89), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(87), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [26] = 2,
    ACTIONS(93), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(91), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [52] = 2,
    ACTIONS(97), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(95), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [78] = 2,
    ACTIONS(101), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(99), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [104] = 2,
    ACTIONS(105), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(103), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [130] = 2,
    ACTIONS(109), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [156] = 2,
    ACTIONS(113), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [182] = 2,
    ACTIONS(117), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [208] = 2,
    ACTIONS(121), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [234] = 2,
    ACTIONS(125), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [260] = 2,
    ACTIONS(129), 6,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(127), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_raw_character,
      anon_sym_POUND,
      sym_label_definition,
      sym_sub_label_definition,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym__,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [286] = 2,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      sym_comment_content,
  [293] = 1,
    ACTIONS(135), 1,
      aux_sym_label_token1,
  [297] = 1,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
  [301] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [305] = 1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [309] = 1,
    ACTIONS(143), 1,
      aux_sym_relative_pad_token1,
  [313] = 1,
    ACTIONS(145), 1,
      aux_sym_number_token1,
  [317] = 1,
    ACTIONS(147), 1,
      aux_sym_number_token1,
  [321] = 1,
    ACTIONS(149), 1,
      aux_sym_immediate_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 26,
  [SMALL_STATE(11)] = 52,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 301,
  [SMALL_STATE(24)] = 305,
  [SMALL_STATE(25)] = 309,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 317,
  [SMALL_STATE(28)] = 321,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_pad, 2, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_pad, 2, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_hex, 2, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_hex, 2, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_pad, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_pad, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brackets, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brackets, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brackets, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brackets, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_uxntal(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
