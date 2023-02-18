#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BRK = 1,
  anon_sym_INC = 2,
  anon_sym_POP = 3,
  anon_sym_NIP = 4,
  anon_sym_SWP = 5,
  anon_sym_ROT = 6,
  anon_sym_DUP = 7,
  anon_sym_OVR = 8,
  anon_sym_EQU = 9,
  anon_sym_NEQ = 10,
  anon_sym_GTH = 11,
  anon_sym_LTH = 12,
  anon_sym_JMP = 13,
  anon_sym_JCN = 14,
  anon_sym_JSR = 15,
  anon_sym_STH = 16,
  anon_sym_LDZ = 17,
  anon_sym_STZ = 18,
  anon_sym_LDR = 19,
  anon_sym_STR = 20,
  anon_sym_LDA = 21,
  anon_sym_STA = 22,
  anon_sym_DEI = 23,
  anon_sym_DEO = 24,
  anon_sym_ADD = 25,
  anon_sym_SUB = 26,
  anon_sym_MUL = 27,
  anon_sym_DIV = 28,
  anon_sym_AND = 29,
  anon_sym_ORA = 30,
  anon_sym_EOR = 31,
  anon_sym_SFT = 32,
  anon_sym_JCI = 33,
  anon_sym_JMI = 34,
  anon_sym_JSI = 35,
  anon_sym_LIT = 36,
  sym_absolute_pad = 37,
  sym_raw_character = 38,
  sym_literal_hex = 39,
  sym_label = 40,
  sym_sub_label = 41,
  sym_relative_pad = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  sym_comment_content = 45,
  sym_source_file = 46,
  sym_opcode = 47,
  sym__rune = 48,
  sym_comment = 49,
  aux_sym_source_file_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BRK] = "BRK",
  [anon_sym_INC] = "INC",
  [anon_sym_POP] = "POP",
  [anon_sym_NIP] = "NIP",
  [anon_sym_SWP] = "SWP",
  [anon_sym_ROT] = "ROT",
  [anon_sym_DUP] = "DUP",
  [anon_sym_OVR] = "OVR",
  [anon_sym_EQU] = "EQU",
  [anon_sym_NEQ] = "NEQ",
  [anon_sym_GTH] = "GTH",
  [anon_sym_LTH] = "LTH",
  [anon_sym_JMP] = "JMP",
  [anon_sym_JCN] = "JCN",
  [anon_sym_JSR] = "JSR",
  [anon_sym_STH] = "STH",
  [anon_sym_LDZ] = "LDZ",
  [anon_sym_STZ] = "STZ",
  [anon_sym_LDR] = "LDR",
  [anon_sym_STR] = "STR",
  [anon_sym_LDA] = "LDA",
  [anon_sym_STA] = "STA",
  [anon_sym_DEI] = "DEI",
  [anon_sym_DEO] = "DEO",
  [anon_sym_ADD] = "ADD",
  [anon_sym_SUB] = "SUB",
  [anon_sym_MUL] = "MUL",
  [anon_sym_DIV] = "DIV",
  [anon_sym_AND] = "AND",
  [anon_sym_ORA] = "ORA",
  [anon_sym_EOR] = "EOR",
  [anon_sym_SFT] = "SFT",
  [anon_sym_JCI] = "JCI",
  [anon_sym_JMI] = "JMI",
  [anon_sym_JSI] = "JSI",
  [anon_sym_LIT] = "LIT",
  [sym_absolute_pad] = "absolute_pad",
  [sym_raw_character] = "raw_character",
  [sym_literal_hex] = "literal_hex",
  [sym_label] = "label",
  [sym_sub_label] = "sub_label",
  [sym_relative_pad] = "relative_pad",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment_content] = "comment_content",
  [sym_source_file] = "source_file",
  [sym_opcode] = "opcode",
  [sym__rune] = "_rune",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BRK] = anon_sym_BRK,
  [anon_sym_INC] = anon_sym_INC,
  [anon_sym_POP] = anon_sym_POP,
  [anon_sym_NIP] = anon_sym_NIP,
  [anon_sym_SWP] = anon_sym_SWP,
  [anon_sym_ROT] = anon_sym_ROT,
  [anon_sym_DUP] = anon_sym_DUP,
  [anon_sym_OVR] = anon_sym_OVR,
  [anon_sym_EQU] = anon_sym_EQU,
  [anon_sym_NEQ] = anon_sym_NEQ,
  [anon_sym_GTH] = anon_sym_GTH,
  [anon_sym_LTH] = anon_sym_LTH,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_JCN] = anon_sym_JCN,
  [anon_sym_JSR] = anon_sym_JSR,
  [anon_sym_STH] = anon_sym_STH,
  [anon_sym_LDZ] = anon_sym_LDZ,
  [anon_sym_STZ] = anon_sym_STZ,
  [anon_sym_LDR] = anon_sym_LDR,
  [anon_sym_STR] = anon_sym_STR,
  [anon_sym_LDA] = anon_sym_LDA,
  [anon_sym_STA] = anon_sym_STA,
  [anon_sym_DEI] = anon_sym_DEI,
  [anon_sym_DEO] = anon_sym_DEO,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_MUL] = anon_sym_MUL,
  [anon_sym_DIV] = anon_sym_DIV,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_ORA] = anon_sym_ORA,
  [anon_sym_EOR] = anon_sym_EOR,
  [anon_sym_SFT] = anon_sym_SFT,
  [anon_sym_JCI] = anon_sym_JCI,
  [anon_sym_JMI] = anon_sym_JMI,
  [anon_sym_JSI] = anon_sym_JSI,
  [anon_sym_LIT] = anon_sym_LIT,
  [sym_absolute_pad] = sym_absolute_pad,
  [sym_raw_character] = sym_raw_character,
  [sym_literal_hex] = sym_literal_hex,
  [sym_label] = sym_label,
  [sym_sub_label] = sym_sub_label,
  [sym_relative_pad] = sym_relative_pad,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_comment_content] = sym_comment_content,
  [sym_source_file] = sym_source_file,
  [sym_opcode] = sym_opcode,
  [sym__rune] = sym__rune,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BRK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NIP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ROT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OVR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JCN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JCI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIT] = {
    .visible = true,
    .named = false,
  },
  [sym_absolute_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_character] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_label] = {
    .visible = true,
    .named = true,
  },
  [sym_relative_pad] = {
    .visible = true,
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
  [sym_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__rune] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'E') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'J') ADVANCE(6);
      if (lookahead == 'L') ADVANCE(9);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'Z') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == 'U') ADVANCE(5);
      if (lookahead == 'W') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'K') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'Q') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'Q') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(3);
      if (lookahead == 'V') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'V') ADVANCE(76);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BRK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_INC);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POP);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_NIP);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SWP);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ROT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DUP);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_OVR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQU);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_NEQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GTH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LTH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_JCN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_JSR);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LDZ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STZ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LDR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LDA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DEI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DEO);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ADD);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_MUL);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ORA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EOR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SFT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_JCI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_JMI);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_JSI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LIT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_absolute_pad);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_absolute_pad);
      if (eof) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_character);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literal_hex);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sub_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_relative_pad);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 86},
  [6] = {.lex_state = 86},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BRK] = ACTIONS(1),
    [anon_sym_INC] = ACTIONS(1),
    [anon_sym_POP] = ACTIONS(1),
    [anon_sym_NIP] = ACTIONS(1),
    [anon_sym_SWP] = ACTIONS(1),
    [anon_sym_ROT] = ACTIONS(1),
    [anon_sym_DUP] = ACTIONS(1),
    [anon_sym_OVR] = ACTIONS(1),
    [anon_sym_EQU] = ACTIONS(1),
    [anon_sym_NEQ] = ACTIONS(1),
    [anon_sym_GTH] = ACTIONS(1),
    [anon_sym_LTH] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JCN] = ACTIONS(1),
    [anon_sym_JSR] = ACTIONS(1),
    [anon_sym_STH] = ACTIONS(1),
    [anon_sym_LDZ] = ACTIONS(1),
    [anon_sym_STZ] = ACTIONS(1),
    [anon_sym_LDR] = ACTIONS(1),
    [anon_sym_STR] = ACTIONS(1),
    [anon_sym_LDA] = ACTIONS(1),
    [anon_sym_STA] = ACTIONS(1),
    [anon_sym_DEI] = ACTIONS(1),
    [anon_sym_DEO] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MUL] = ACTIONS(1),
    [anon_sym_DIV] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_ORA] = ACTIONS(1),
    [anon_sym_EOR] = ACTIONS(1),
    [anon_sym_SFT] = ACTIONS(1),
    [anon_sym_JCI] = ACTIONS(1),
    [anon_sym_JMI] = ACTIONS(1),
    [anon_sym_JSI] = ACTIONS(1),
    [anon_sym_LIT] = ACTIONS(1),
    [sym_raw_character] = ACTIONS(1),
    [sym_literal_hex] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_sub_label] = ACTIONS(1),
    [sym_relative_pad] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_opcode] = STATE(2),
    [sym__rune] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BRK] = ACTIONS(5),
    [anon_sym_INC] = ACTIONS(5),
    [anon_sym_POP] = ACTIONS(5),
    [anon_sym_NIP] = ACTIONS(5),
    [anon_sym_SWP] = ACTIONS(5),
    [anon_sym_ROT] = ACTIONS(5),
    [anon_sym_DUP] = ACTIONS(5),
    [anon_sym_OVR] = ACTIONS(5),
    [anon_sym_EQU] = ACTIONS(5),
    [anon_sym_NEQ] = ACTIONS(5),
    [anon_sym_GTH] = ACTIONS(5),
    [anon_sym_LTH] = ACTIONS(5),
    [anon_sym_JMP] = ACTIONS(5),
    [anon_sym_JCN] = ACTIONS(5),
    [anon_sym_JSR] = ACTIONS(5),
    [anon_sym_STH] = ACTIONS(5),
    [anon_sym_LDZ] = ACTIONS(5),
    [anon_sym_STZ] = ACTIONS(5),
    [anon_sym_LDR] = ACTIONS(5),
    [anon_sym_STR] = ACTIONS(5),
    [anon_sym_LDA] = ACTIONS(5),
    [anon_sym_STA] = ACTIONS(5),
    [anon_sym_DEI] = ACTIONS(5),
    [anon_sym_DEO] = ACTIONS(5),
    [anon_sym_ADD] = ACTIONS(5),
    [anon_sym_SUB] = ACTIONS(5),
    [anon_sym_MUL] = ACTIONS(5),
    [anon_sym_DIV] = ACTIONS(5),
    [anon_sym_AND] = ACTIONS(5),
    [anon_sym_ORA] = ACTIONS(5),
    [anon_sym_EOR] = ACTIONS(5),
    [anon_sym_SFT] = ACTIONS(5),
    [anon_sym_JCI] = ACTIONS(5),
    [anon_sym_JMI] = ACTIONS(5),
    [anon_sym_JSI] = ACTIONS(5),
    [anon_sym_LIT] = ACTIONS(5),
    [sym_absolute_pad] = ACTIONS(7),
    [sym_raw_character] = ACTIONS(9),
    [sym_literal_hex] = ACTIONS(9),
    [sym_label] = ACTIONS(9),
    [sym_sub_label] = ACTIONS(9),
    [sym_relative_pad] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [2] = {
    [sym_opcode] = STATE(3),
    [sym__rune] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_BRK] = ACTIONS(5),
    [anon_sym_INC] = ACTIONS(5),
    [anon_sym_POP] = ACTIONS(5),
    [anon_sym_NIP] = ACTIONS(5),
    [anon_sym_SWP] = ACTIONS(5),
    [anon_sym_ROT] = ACTIONS(5),
    [anon_sym_DUP] = ACTIONS(5),
    [anon_sym_OVR] = ACTIONS(5),
    [anon_sym_EQU] = ACTIONS(5),
    [anon_sym_NEQ] = ACTIONS(5),
    [anon_sym_GTH] = ACTIONS(5),
    [anon_sym_LTH] = ACTIONS(5),
    [anon_sym_JMP] = ACTIONS(5),
    [anon_sym_JCN] = ACTIONS(5),
    [anon_sym_JSR] = ACTIONS(5),
    [anon_sym_STH] = ACTIONS(5),
    [anon_sym_LDZ] = ACTIONS(5),
    [anon_sym_STZ] = ACTIONS(5),
    [anon_sym_LDR] = ACTIONS(5),
    [anon_sym_STR] = ACTIONS(5),
    [anon_sym_LDA] = ACTIONS(5),
    [anon_sym_STA] = ACTIONS(5),
    [anon_sym_DEI] = ACTIONS(5),
    [anon_sym_DEO] = ACTIONS(5),
    [anon_sym_ADD] = ACTIONS(5),
    [anon_sym_SUB] = ACTIONS(5),
    [anon_sym_MUL] = ACTIONS(5),
    [anon_sym_DIV] = ACTIONS(5),
    [anon_sym_AND] = ACTIONS(5),
    [anon_sym_ORA] = ACTIONS(5),
    [anon_sym_EOR] = ACTIONS(5),
    [anon_sym_SFT] = ACTIONS(5),
    [anon_sym_JCI] = ACTIONS(5),
    [anon_sym_JMI] = ACTIONS(5),
    [anon_sym_JSI] = ACTIONS(5),
    [anon_sym_LIT] = ACTIONS(5),
    [sym_absolute_pad] = ACTIONS(15),
    [sym_raw_character] = ACTIONS(17),
    [sym_literal_hex] = ACTIONS(17),
    [sym_label] = ACTIONS(17),
    [sym_sub_label] = ACTIONS(17),
    [sym_relative_pad] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [3] = {
    [sym_opcode] = STATE(3),
    [sym__rune] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_BRK] = ACTIONS(21),
    [anon_sym_INC] = ACTIONS(21),
    [anon_sym_POP] = ACTIONS(21),
    [anon_sym_NIP] = ACTIONS(21),
    [anon_sym_SWP] = ACTIONS(21),
    [anon_sym_ROT] = ACTIONS(21),
    [anon_sym_DUP] = ACTIONS(21),
    [anon_sym_OVR] = ACTIONS(21),
    [anon_sym_EQU] = ACTIONS(21),
    [anon_sym_NEQ] = ACTIONS(21),
    [anon_sym_GTH] = ACTIONS(21),
    [anon_sym_LTH] = ACTIONS(21),
    [anon_sym_JMP] = ACTIONS(21),
    [anon_sym_JCN] = ACTIONS(21),
    [anon_sym_JSR] = ACTIONS(21),
    [anon_sym_STH] = ACTIONS(21),
    [anon_sym_LDZ] = ACTIONS(21),
    [anon_sym_STZ] = ACTIONS(21),
    [anon_sym_LDR] = ACTIONS(21),
    [anon_sym_STR] = ACTIONS(21),
    [anon_sym_LDA] = ACTIONS(21),
    [anon_sym_STA] = ACTIONS(21),
    [anon_sym_DEI] = ACTIONS(21),
    [anon_sym_DEO] = ACTIONS(21),
    [anon_sym_ADD] = ACTIONS(21),
    [anon_sym_SUB] = ACTIONS(21),
    [anon_sym_MUL] = ACTIONS(21),
    [anon_sym_DIV] = ACTIONS(21),
    [anon_sym_AND] = ACTIONS(21),
    [anon_sym_ORA] = ACTIONS(21),
    [anon_sym_EOR] = ACTIONS(21),
    [anon_sym_SFT] = ACTIONS(21),
    [anon_sym_JCI] = ACTIONS(21),
    [anon_sym_JMI] = ACTIONS(21),
    [anon_sym_JSI] = ACTIONS(21),
    [anon_sym_LIT] = ACTIONS(21),
    [sym_absolute_pad] = ACTIONS(24),
    [sym_raw_character] = ACTIONS(27),
    [sym_literal_hex] = ACTIONS(27),
    [sym_label] = ACTIONS(27),
    [sym_sub_label] = ACTIONS(27),
    [sym_relative_pad] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(30),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_BRK] = ACTIONS(35),
    [anon_sym_INC] = ACTIONS(35),
    [anon_sym_POP] = ACTIONS(35),
    [anon_sym_NIP] = ACTIONS(35),
    [anon_sym_SWP] = ACTIONS(35),
    [anon_sym_ROT] = ACTIONS(35),
    [anon_sym_DUP] = ACTIONS(35),
    [anon_sym_OVR] = ACTIONS(35),
    [anon_sym_EQU] = ACTIONS(35),
    [anon_sym_NEQ] = ACTIONS(35),
    [anon_sym_GTH] = ACTIONS(35),
    [anon_sym_LTH] = ACTIONS(35),
    [anon_sym_JMP] = ACTIONS(35),
    [anon_sym_JCN] = ACTIONS(35),
    [anon_sym_JSR] = ACTIONS(35),
    [anon_sym_STH] = ACTIONS(35),
    [anon_sym_LDZ] = ACTIONS(35),
    [anon_sym_STZ] = ACTIONS(35),
    [anon_sym_LDR] = ACTIONS(35),
    [anon_sym_STR] = ACTIONS(35),
    [anon_sym_LDA] = ACTIONS(35),
    [anon_sym_STA] = ACTIONS(35),
    [anon_sym_DEI] = ACTIONS(35),
    [anon_sym_DEO] = ACTIONS(35),
    [anon_sym_ADD] = ACTIONS(35),
    [anon_sym_SUB] = ACTIONS(35),
    [anon_sym_MUL] = ACTIONS(35),
    [anon_sym_DIV] = ACTIONS(35),
    [anon_sym_AND] = ACTIONS(35),
    [anon_sym_ORA] = ACTIONS(35),
    [anon_sym_EOR] = ACTIONS(35),
    [anon_sym_SFT] = ACTIONS(35),
    [anon_sym_JCI] = ACTIONS(35),
    [anon_sym_JMI] = ACTIONS(35),
    [anon_sym_JSI] = ACTIONS(35),
    [anon_sym_LIT] = ACTIONS(35),
    [sym_absolute_pad] = ACTIONS(33),
    [sym_raw_character] = ACTIONS(35),
    [sym_literal_hex] = ACTIONS(35),
    [sym_label] = ACTIONS(35),
    [sym_sub_label] = ACTIONS(35),
    [sym_relative_pad] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_BRK] = ACTIONS(39),
    [anon_sym_INC] = ACTIONS(39),
    [anon_sym_POP] = ACTIONS(39),
    [anon_sym_NIP] = ACTIONS(39),
    [anon_sym_SWP] = ACTIONS(39),
    [anon_sym_ROT] = ACTIONS(39),
    [anon_sym_DUP] = ACTIONS(39),
    [anon_sym_OVR] = ACTIONS(39),
    [anon_sym_EQU] = ACTIONS(39),
    [anon_sym_NEQ] = ACTIONS(39),
    [anon_sym_GTH] = ACTIONS(39),
    [anon_sym_LTH] = ACTIONS(39),
    [anon_sym_JMP] = ACTIONS(39),
    [anon_sym_JCN] = ACTIONS(39),
    [anon_sym_JSR] = ACTIONS(39),
    [anon_sym_STH] = ACTIONS(39),
    [anon_sym_LDZ] = ACTIONS(39),
    [anon_sym_STZ] = ACTIONS(39),
    [anon_sym_LDR] = ACTIONS(39),
    [anon_sym_STR] = ACTIONS(39),
    [anon_sym_LDA] = ACTIONS(39),
    [anon_sym_STA] = ACTIONS(39),
    [anon_sym_DEI] = ACTIONS(39),
    [anon_sym_DEO] = ACTIONS(39),
    [anon_sym_ADD] = ACTIONS(39),
    [anon_sym_SUB] = ACTIONS(39),
    [anon_sym_MUL] = ACTIONS(39),
    [anon_sym_DIV] = ACTIONS(39),
    [anon_sym_AND] = ACTIONS(39),
    [anon_sym_ORA] = ACTIONS(39),
    [anon_sym_EOR] = ACTIONS(39),
    [anon_sym_SFT] = ACTIONS(39),
    [anon_sym_JCI] = ACTIONS(39),
    [anon_sym_JMI] = ACTIONS(39),
    [anon_sym_JSI] = ACTIONS(39),
    [anon_sym_LIT] = ACTIONS(39),
    [sym_absolute_pad] = ACTIONS(37),
    [sym_raw_character] = ACTIONS(39),
    [sym_literal_hex] = ACTIONS(39),
    [sym_label] = ACTIONS(39),
    [sym_sub_label] = ACTIONS(39),
    [sym_relative_pad] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_BRK] = ACTIONS(43),
    [anon_sym_INC] = ACTIONS(43),
    [anon_sym_POP] = ACTIONS(43),
    [anon_sym_NIP] = ACTIONS(43),
    [anon_sym_SWP] = ACTIONS(43),
    [anon_sym_ROT] = ACTIONS(43),
    [anon_sym_DUP] = ACTIONS(43),
    [anon_sym_OVR] = ACTIONS(43),
    [anon_sym_EQU] = ACTIONS(43),
    [anon_sym_NEQ] = ACTIONS(43),
    [anon_sym_GTH] = ACTIONS(43),
    [anon_sym_LTH] = ACTIONS(43),
    [anon_sym_JMP] = ACTIONS(43),
    [anon_sym_JCN] = ACTIONS(43),
    [anon_sym_JSR] = ACTIONS(43),
    [anon_sym_STH] = ACTIONS(43),
    [anon_sym_LDZ] = ACTIONS(43),
    [anon_sym_STZ] = ACTIONS(43),
    [anon_sym_LDR] = ACTIONS(43),
    [anon_sym_STR] = ACTIONS(43),
    [anon_sym_LDA] = ACTIONS(43),
    [anon_sym_STA] = ACTIONS(43),
    [anon_sym_DEI] = ACTIONS(43),
    [anon_sym_DEO] = ACTIONS(43),
    [anon_sym_ADD] = ACTIONS(43),
    [anon_sym_SUB] = ACTIONS(43),
    [anon_sym_MUL] = ACTIONS(43),
    [anon_sym_DIV] = ACTIONS(43),
    [anon_sym_AND] = ACTIONS(43),
    [anon_sym_ORA] = ACTIONS(43),
    [anon_sym_EOR] = ACTIONS(43),
    [anon_sym_SFT] = ACTIONS(43),
    [anon_sym_JCI] = ACTIONS(43),
    [anon_sym_JMI] = ACTIONS(43),
    [anon_sym_JSI] = ACTIONS(43),
    [anon_sym_LIT] = ACTIONS(43),
    [sym_absolute_pad] = ACTIONS(41),
    [sym_raw_character] = ACTIONS(43),
    [sym_literal_hex] = ACTIONS(43),
    [sym_label] = ACTIONS(43),
    [sym_sub_label] = ACTIONS(43),
    [sym_relative_pad] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      sym_comment_content,
  [7] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 7,
  [SMALL_STATE(9)] = 11,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
