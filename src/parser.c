#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 14
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 2,
  [9] = 7,
  [10] = 6,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 24,
  [28] = 19,
  [29] = 20,
  [30] = 21,
  [31] = 22,
  [32] = 16,
  [33] = 18,
  [34] = 14,
  [35] = 25,
  [36] = 15,
  [37] = 37,
  [38] = 37,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 41,
  [48] = 46,
  [49] = 40,
  [50] = 45,
  [51] = 44,
  [52] = 43,
  [53] = 53,
  [54] = 40,
  [55] = 42,
  [56] = 18,
  [57] = 16,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(42);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '&') ADVANCE(54);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(42);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(60);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_immediate_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_raw_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_raw_character);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_label_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_label_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_sub_label_definition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_sub_label_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_relative_pad_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_label_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_label_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_macro_definition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {(TSStateId)(-1)},
  [57] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_immediate_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [sym_source_file] = STATE(53),
    [sym__token] = STATE(12),
    [sym_comment] = STATE(1),
    [sym_immediate] = STATE(12),
    [sym__rune] = STATE(12),
    [sym_absolute_pad] = STATE(12),
    [sym_literal_hex] = STATE(12),
    [sym_relative_pad] = STATE(12),
    [sym_label] = STATE(12),
    [sym_brackets] = STATE(12),
    [sym_macro_definition] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_raw_character] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_label_definition] = ACTIONS(13),
    [sym_sub_label_definition] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_macro_definition_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(35),
    [sym_raw_character] = ACTIONS(38),
    [anon_sym_POUND] = ACTIONS(41),
    [sym_label_definition] = ACTIONS(38),
    [sym_sub_label_definition] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(27),
    [aux_sym_macro_definition_token1] = ACTIONS(53),
    [sym_identifier] = ACTIONS(56),
  },
  [3] = {
    [sym__token] = STATE(8),
    [sym_comment] = STATE(3),
    [sym_immediate] = STATE(8),
    [sym__rune] = STATE(8),
    [sym_absolute_pad] = STATE(8),
    [sym_literal_hex] = STATE(8),
    [sym_relative_pad] = STATE(8),
    [sym_label] = STATE(8),
    [sym_brackets] = STATE(8),
    [sym_macro_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_raw_character] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_label_definition] = ACTIONS(65),
    [sym_sub_label_definition] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_macro_definition_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
  },
  [4] = {
    [sym__token] = STATE(8),
    [sym_comment] = STATE(4),
    [sym_immediate] = STATE(8),
    [sym__rune] = STATE(8),
    [sym_absolute_pad] = STATE(8),
    [sym_literal_hex] = STATE(8),
    [sym_relative_pad] = STATE(8),
    [sym_label] = STATE(8),
    [sym_brackets] = STATE(8),
    [sym_macro_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_raw_character] = ACTIONS(65),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_label_definition] = ACTIONS(65),
    [sym_sub_label_definition] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_macro_definition_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym_identifier] = ACTIONS(79),
  },
  [5] = {
    [sym__token] = STATE(4),
    [sym_comment] = STATE(5),
    [sym_immediate] = STATE(4),
    [sym__rune] = STATE(4),
    [sym_absolute_pad] = STATE(4),
    [sym_literal_hex] = STATE(4),
    [sym_relative_pad] = STATE(4),
    [sym_label] = STATE(4),
    [sym_brackets] = STATE(4),
    [sym_macro_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_raw_character] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_label_definition] = ACTIONS(83),
    [sym_sub_label_definition] = ACTIONS(83),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_macro_definition_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(6),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_raw_character] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_label_definition] = ACTIONS(89),
    [sym_sub_label_definition] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(91),
    [aux_sym_macro_definition_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(93),
  },
  [7] = {
    [sym__token] = STATE(6),
    [sym_comment] = STATE(7),
    [sym_immediate] = STATE(6),
    [sym__rune] = STATE(6),
    [sym_absolute_pad] = STATE(6),
    [sym_literal_hex] = STATE(6),
    [sym_relative_pad] = STATE(6),
    [sym_label] = STATE(6),
    [sym_brackets] = STATE(6),
    [sym_macro_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_raw_character] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_label_definition] = ACTIONS(95),
    [sym_sub_label_definition] = ACTIONS(95),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(97),
    [aux_sym_macro_definition_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(99),
  },
  [8] = {
    [sym__token] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_immediate] = STATE(8),
    [sym__rune] = STATE(8),
    [sym_absolute_pad] = STATE(8),
    [sym_literal_hex] = STATE(8),
    [sym_relative_pad] = STATE(8),
    [sym_label] = STATE(8),
    [sym_brackets] = STATE(8),
    [sym_macro_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_raw_character] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(113),
    [sym_label_definition] = ACTIONS(110),
    [sym_sub_label_definition] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym__] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(122),
    [aux_sym_macro_definition_token1] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
  },
  [9] = {
    [sym__token] = STATE(10),
    [sym_comment] = STATE(9),
    [sym_immediate] = STATE(10),
    [sym__rune] = STATE(10),
    [sym_absolute_pad] = STATE(10),
    [sym_literal_hex] = STATE(10),
    [sym_relative_pad] = STATE(10),
    [sym_label] = STATE(10),
    [sym_brackets] = STATE(10),
    [sym_macro_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_raw_character] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_label_definition] = ACTIONS(133),
    [sym_sub_label_definition] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(135),
    [aux_sym_macro_definition_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(137),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(10),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_raw_character] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_label_definition] = ACTIONS(89),
    [sym_sub_label_definition] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(139),
    [aux_sym_macro_definition_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(93),
  },
  [11] = {
    [sym__token] = STATE(3),
    [sym_comment] = STATE(11),
    [sym_immediate] = STATE(3),
    [sym__rune] = STATE(3),
    [sym_absolute_pad] = STATE(3),
    [sym_literal_hex] = STATE(3),
    [sym_relative_pad] = STATE(3),
    [sym_label] = STATE(3),
    [sym_brackets] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_raw_character] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_label_definition] = ACTIONS(141),
    [sym_sub_label_definition] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [aux_sym_macro_definition_token1] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
  },
  [12] = {
    [sym__token] = STATE(2),
    [sym_comment] = STATE(12),
    [sym_immediate] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_absolute_pad] = STATE(2),
    [sym_literal_hex] = STATE(2),
    [sym_relative_pad] = STATE(2),
    [sym_label] = STATE(2),
    [sym_brackets] = STATE(2),
    [sym_macro_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_raw_character] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_label_definition] = ACTIONS(89),
    [sym_sub_label_definition] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_macro_definition_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(93),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_QMARK] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(149),
    [sym_raw_character] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_label_definition] = ACTIONS(149),
    [sym_sub_label_definition] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [aux_sym_label_token2] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [aux_sym_macro_definition_token1] = ACTIONS(151),
    [sym_identifier] = ACTIONS(151),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(14), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(155), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [28] = 3,
    STATE(15), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(159), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [56] = 3,
    STATE(16), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(163), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [84] = 4,
    ACTIONS(167), 1,
      aux_sym_label_token2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(151), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(149), 14,
      anon_sym_LPAREN,
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
  [114] = 3,
    STATE(18), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [142] = 3,
    STATE(19), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [170] = 3,
    STATE(20), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(177), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [198] = 3,
    STATE(21), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(181), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [226] = 3,
    STATE(22), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(185), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [254] = 3,
    STATE(23), 1,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(189), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [282] = 3,
    STATE(24), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [310] = 3,
    STATE(25), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      sym_identifier,
    ACTIONS(197), 16,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
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
  [338] = 3,
    STATE(26), 1,
      sym_comment,
    ACTIONS(191), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(189), 14,
      anon_sym_LPAREN,
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
  [365] = 3,
    STATE(27), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(193), 14,
      anon_sym_LPAREN,
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
  [392] = 3,
    STATE(28), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(173), 14,
      anon_sym_LPAREN,
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
  [419] = 3,
    STATE(29), 1,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(177), 14,
      anon_sym_LPAREN,
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
  [446] = 3,
    STATE(30), 1,
      sym_comment,
    ACTIONS(183), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(181), 14,
      anon_sym_LPAREN,
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
  [473] = 3,
    STATE(31), 1,
      sym_comment,
    ACTIONS(187), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(185), 14,
      anon_sym_LPAREN,
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
  [500] = 3,
    STATE(32), 1,
      sym_comment,
    ACTIONS(165), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(163), 14,
      anon_sym_LPAREN,
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
  [527] = 3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(169), 14,
      anon_sym_LPAREN,
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
  [554] = 3,
    STATE(34), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(155), 14,
      anon_sym_LPAREN,
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
  [581] = 3,
    STATE(35), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(197), 14,
      anon_sym_LPAREN,
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
  [608] = 3,
    STATE(36), 1,
      sym_comment,
    ACTIONS(161), 5,
      anon_sym_QMARK,
      anon_sym_BANG,
      aux_sym_macro_definition_token1,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(159), 14,
      anon_sym_LPAREN,
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
  [635] = 4,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      sym_comment_content,
    STATE(37), 1,
      sym_comment,
  [648] = 4,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      sym_comment_content,
    STATE(38), 1,
      sym_comment,
  [661] = 4,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      sym_comment_content,
    STATE(39), 1,
      sym_comment,
  [674] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_comment,
  [684] = 3,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      aux_sym_label_token1,
    STATE(41), 1,
      sym_comment,
  [694] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_comment,
  [704] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      aux_sym_immediate_token1,
    STATE(43), 1,
      sym_comment,
  [714] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_number_token1,
    STATE(44), 1,
      sym_comment,
  [724] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      aux_sym_number_token1,
    STATE(45), 1,
      sym_comment,
  [734] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      aux_sym_relative_pad_token1,
    STATE(46), 1,
      sym_comment,
  [744] = 3,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      aux_sym_label_token1,
    STATE(47), 1,
      sym_comment,
  [754] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      aux_sym_relative_pad_token1,
    STATE(48), 1,
      sym_comment,
  [764] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_comment,
  [774] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      aux_sym_number_token1,
    STATE(50), 1,
      sym_comment,
  [784] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym_number_token1,
    STATE(51), 1,
      sym_comment,
  [794] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      aux_sym_immediate_token1,
    STATE(52), 1,
      sym_comment,
  [804] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
  [814] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_comment,
  [824] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_comment,
  [834] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [838] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 28,
  [SMALL_STATE(16)] = 56,
  [SMALL_STATE(17)] = 84,
  [SMALL_STATE(18)] = 114,
  [SMALL_STATE(19)] = 142,
  [SMALL_STATE(20)] = 170,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 226,
  [SMALL_STATE(23)] = 254,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 310,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 392,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 500,
  [SMALL_STATE(33)] = 527,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 581,
  [SMALL_STATE(36)] = 608,
  [SMALL_STATE(37)] = 635,
  [SMALL_STATE(38)] = 648,
  [SMALL_STATE(39)] = 661,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 684,
  [SMALL_STATE(42)] = 694,
  [SMALL_STATE(43)] = 704,
  [SMALL_STATE(44)] = 714,
  [SMALL_STATE(45)] = 724,
  [SMALL_STATE(46)] = 734,
  [SMALL_STATE(47)] = 744,
  [SMALL_STATE(48)] = 754,
  [SMALL_STATE(49)] = 764,
  [SMALL_STATE(50)] = 774,
  [SMALL_STATE(51)] = 784,
  [SMALL_STATE(52)] = 794,
  [SMALL_STATE(53)] = 804,
  [SMALL_STATE(54)] = 814,
  [SMALL_STATE(55)] = 824,
  [SMALL_STATE(56)] = 834,
  [SMALL_STATE(57)] = 838,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brackets, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brackets, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_pad, 2, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_pad, 2, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_hex, 2, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_hex, 2, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_pad, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relative_pad, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brackets, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brackets, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
