#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  sym_is_sum_marker = 1,
  sym__varid = 2,
  sym__conid = 3,
  sym__doc_comment = 4,
  aux_sym_comment_token1 = 5,
  aux_sym_comment_token2 = 6,
  anon_sym_Id = 7,
  anon_sym_Primary = 8,
  sym__attribute = 9,
  sym__field_strictness_prefix = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym__cascade_action = 13,
  anon_sym_Foreign = 14,
  anon_sym_References = 15,
  anon_sym_deriving = 16,
  sym__newline = 17,
  sym__indent = 18,
  sym__dedent = 19,
  sym__string_start = 20,
  sym__string_content = 21,
  sym__string_end = 22,
  sym_quasi_quotation = 23,
  sym_entity_definition = 24,
  sym_entity_body = 25,
  sym_comment = 26,
  sym__entity_name = 27,
  sym_field_name = 28,
  sym__haskell_constraint_name = 29,
  sym__entity_header = 30,
  sym__entity_line_definition = 31,
  sym__entity_key = 32,
  sym__surrogate_key = 33,
  sym__natural_key = 34,
  sym__key_attribute = 35,
  sym__entity_attribute = 36,
  sym__field_attribute = 37,
  sym_field_definition = 38,
  sym_field_type = 39,
  aux_sym__cascade_actions = 40,
  sym__unique_constraint = 41,
  sym__unique_constraint_attribute = 42,
  sym__constraint_name = 43,
  sym__foreign_constraint = 44,
  sym__class_name = 45,
  sym__entity_derives = 46,
  aux_sym_quasi_quotation_repeat1 = 47,
  aux_sym_entity_body_repeat1 = 48,
  aux_sym_entity_body_repeat2 = 49,
  aux_sym__entity_header_repeat1 = 50,
  aux_sym__surrogate_key_repeat1 = 51,
  aux_sym__natural_key_repeat1 = 52,
  aux_sym_field_definition_repeat1 = 53,
  aux_sym__unique_constraint_repeat1 = 54,
  aux_sym__entity_derives_repeat1 = 55,
  alias_sym_identifier = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_is_sum_marker] = "is_sum_marker",
  [sym__varid] = "_varid",
  [sym__conid] = "_conid",
  [sym__doc_comment] = "_doc_comment",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_Id] = "Id",
  [anon_sym_Primary] = "Primary",
  [sym__attribute] = "_attribute",
  [sym__field_strictness_prefix] = "_field_strictness_prefix",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__cascade_action] = "_cascade_action",
  [anon_sym_Foreign] = "Foreign",
  [anon_sym_References] = "References",
  [anon_sym_deriving] = "deriving",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "_string_start",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "_string_end",
  [sym_quasi_quotation] = "quasi_quotation",
  [sym_entity_definition] = "entity_definition",
  [sym_entity_body] = "entity_body",
  [sym_comment] = "comment",
  [sym__entity_name] = "_entity_name",
  [sym_field_name] = "field_name",
  [sym__haskell_constraint_name] = "_haskell_constraint_name",
  [sym__entity_header] = "_entity_header",
  [sym__entity_line_definition] = "_entity_line_definition",
  [sym__entity_key] = "_entity_key",
  [sym__surrogate_key] = "_surrogate_key",
  [sym__natural_key] = "_natural_key",
  [sym__key_attribute] = "_key_attribute",
  [sym__entity_attribute] = "_entity_attribute",
  [sym__field_attribute] = "_field_attribute",
  [sym_field_definition] = "field_definition",
  [sym_field_type] = "field_type",
  [aux_sym__cascade_actions] = "_cascade_actions",
  [sym__unique_constraint] = "_unique_constraint",
  [sym__unique_constraint_attribute] = "_unique_constraint_attribute",
  [sym__constraint_name] = "_constraint_name",
  [sym__foreign_constraint] = "_foreign_constraint",
  [sym__class_name] = "_class_name",
  [sym__entity_derives] = "_entity_derives",
  [aux_sym_quasi_quotation_repeat1] = "quasi_quotation_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_entity_body_repeat2] = "entity_body_repeat2",
  [aux_sym__entity_header_repeat1] = "_entity_header_repeat1",
  [aux_sym__surrogate_key_repeat1] = "_surrogate_key_repeat1",
  [aux_sym__natural_key_repeat1] = "_natural_key_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym__unique_constraint_repeat1] = "_unique_constraint_repeat1",
  [aux_sym__entity_derives_repeat1] = "_entity_derives_repeat1",
  [alias_sym_identifier] = "identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_is_sum_marker] = sym_is_sum_marker,
  [sym__varid] = sym__varid,
  [sym__conid] = sym__conid,
  [sym__doc_comment] = sym__doc_comment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_Primary] = anon_sym_Primary,
  [sym__attribute] = sym__attribute,
  [sym__field_strictness_prefix] = sym__field_strictness_prefix,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__cascade_action] = sym__cascade_action,
  [anon_sym_Foreign] = anon_sym_Foreign,
  [anon_sym_References] = anon_sym_References,
  [anon_sym_deriving] = anon_sym_deriving,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_end,
  [sym_quasi_quotation] = sym_quasi_quotation,
  [sym_entity_definition] = sym_entity_definition,
  [sym_entity_body] = sym_entity_body,
  [sym_comment] = sym_comment,
  [sym__entity_name] = sym__entity_name,
  [sym_field_name] = sym_field_name,
  [sym__haskell_constraint_name] = sym__haskell_constraint_name,
  [sym__entity_header] = sym__entity_header,
  [sym__entity_line_definition] = sym__entity_line_definition,
  [sym__entity_key] = sym__entity_key,
  [sym__surrogate_key] = sym__surrogate_key,
  [sym__natural_key] = sym__natural_key,
  [sym__key_attribute] = sym__key_attribute,
  [sym__entity_attribute] = sym__entity_attribute,
  [sym__field_attribute] = sym__field_attribute,
  [sym_field_definition] = sym_field_definition,
  [sym_field_type] = sym_field_type,
  [aux_sym__cascade_actions] = aux_sym__cascade_actions,
  [sym__unique_constraint] = sym__unique_constraint,
  [sym__unique_constraint_attribute] = sym__unique_constraint_attribute,
  [sym__constraint_name] = sym__constraint_name,
  [sym__foreign_constraint] = sym__foreign_constraint,
  [sym__class_name] = sym__class_name,
  [sym__entity_derives] = sym__entity_derives,
  [aux_sym_quasi_quotation_repeat1] = aux_sym_quasi_quotation_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_entity_body_repeat2] = aux_sym_entity_body_repeat2,
  [aux_sym__entity_header_repeat1] = aux_sym__entity_header_repeat1,
  [aux_sym__surrogate_key_repeat1] = aux_sym__surrogate_key_repeat1,
  [aux_sym__natural_key_repeat1] = aux_sym__natural_key_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym__unique_constraint_repeat1] = aux_sym__unique_constraint_repeat1,
  [aux_sym__entity_derives_repeat1] = aux_sym__entity_derives_repeat1,
  [alias_sym_identifier] = alias_sym_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_is_sum_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__varid] = {
    .visible = false,
    .named = true,
  },
  [sym__conid] = {
    .visible = false,
    .named = true,
  },
  [sym__doc_comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Primary] = {
    .visible = true,
    .named = false,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__field_strictness_prefix] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__cascade_action] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_References] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_quasi_quotation] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_body] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__entity_name] = {
    .visible = false,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym__haskell_constraint_name] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_header] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_line_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_key] = {
    .visible = false,
    .named = true,
  },
  [sym__surrogate_key] = {
    .visible = false,
    .named = true,
  },
  [sym__natural_key] = {
    .visible = false,
    .named = true,
  },
  [sym__key_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__field_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__cascade_actions] = {
    .visible = false,
    .named = false,
  },
  [sym__unique_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__unique_constraint_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__constraint_name] = {
    .visible = false,
    .named = true,
  },
  [sym__foreign_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_derives] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_quasi_quotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entity_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__surrogate_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__natural_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unique_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entity_derives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_identifier,
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 65,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 25,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
};

static inline bool sym__varid_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 285
            ? (c < 265
              ? (c < 248
                ? (c < 181
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 181 || (c >= 223 && c <= 246)))
                : (c <= 255 || (c < 261
                  ? (c < 259
                    ? c == 257
                    : c <= 259)
                  : (c <= 261 || c == 263))))
              : (c <= 265 || (c < 275
                ? (c < 271
                  ? (c < 269
                    ? c == 267
                    : c <= 269)
                  : (c <= 271 || c == 273))
                : (c <= 275 || (c < 281
                  ? (c < 279
                    ? c == 277
                    : c <= 279)
                  : (c <= 281 || c == 283))))))
            : (c <= 285 || (c < 305
              ? (c < 295
                ? (c < 291
                  ? (c < 289
                    ? c == 287
                    : c <= 289)
                  : (c <= 291 || c == 293))
                : (c <= 295 || (c < 301
                  ? (c < 299
                    ? c == 297
                    : c <= 299)
                  : (c <= 301 || c == 303))))
              : (c <= 305 || (c < 316
                ? (c < 311
                  ? (c < 309
                    ? c == 307
                    : c <= 309)
                  : (c <= 312 || c == 314))
                : (c <= 316 || (c < 322
                  ? (c < 320
                    ? c == 318
                    : c <= 320)
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym__varid_character_set_2(int32_t c) {
  return (c < 8458
    ? (c < 5112
      ? (c < 887
        ? (c < 248
          ? (c < 181
            ? (c < 'a'
              ? c == '_'
              : c <= 'z')
            : (c <= 181 || (c >= 223 && c <= 246)))
          : (c <= 442 || (c < 661
            ? (c < 454
              ? (c >= 445 && c <= 447)
              : c <= 659)
            : (c <= 687 || (c >= 881 && c <= 883)))))
        : (c <= 887 || (c < 1163
          ? (c < 940
            ? (c < 912
              ? (c >= 891 && c <= 893)
              : c <= 912)
            : (c <= 1013 || (c >= 1016 && c <= 1153)))
          : (c <= 1327 || (c < 4304
            ? (c >= 1376 && c <= 1416)
            : (c <= 4346 || (c >= 4349 && c <= 4351)))))))
      : (c <= 5117 || (c < 8118
        ? (c < 7681
          ? (c < 7531
            ? (c < 7424
              ? (c >= 7296 && c <= 7304)
              : c <= 7467)
            : (c <= 7543 || (c >= 7545 && c <= 7578)))
          : (c <= 7957 || (c < 8032
            ? (c < 8016
              ? (c >= 7968 && c <= 8005)
              : c <= 8023)
            : (c <= 8061 || (c >= 8064 && c <= 8116)))))
        : (c <= 8119 || (c < 8150
          ? (c < 8134
            ? (c < 8130
              ? c == 8126
              : c <= 8132)
            : (c <= 8135 || (c >= 8144 && c <= 8147)))
          : (c <= 8151 || (c < 8178
            ? (c >= 8160 && c <= 8167)
            : (c <= 8180 || (c >= 8182 && c <= 8183)))))))))
    : (c <= 8467 || (c < 42897
      ? (c < 11507
        ? (c < 8526
          ? (c < 8508
            ? (c < 8505
              ? (c >= 8495 && c <= 8500)
              : c <= 8505)
            : (c <= 8509 || (c >= 8518 && c <= 8521)))
          : (c <= 8526 || (c < 11393
            ? (c < 11312
              ? c == 8580
              : c <= 11387)
            : (c <= 11492 || (c >= 11500 && c <= 11502)))))
        : (c <= 11507 || (c < 42625
          ? (c < 11565
            ? (c < 11559
              ? (c >= 11520 && c <= 11557)
              : c <= 11559)
            : (c <= 11565 || (c >= 42561 && c <= 42605)))
          : (c <= 42651 || (c < 42865
            ? (c >= 42787 && c <= 42863)
            : (c <= 42887 || (c >= 42892 && c <= 42894)))))))
      : (c <= 42954 || (c < 64256
        ? (c < 43002
          ? (c < 42965
            ? (c < 42963
              ? c == 42961
              : c <= 42963)
            : (c <= 42969 || c == 42998))
          : (c <= 43002 || (c < 43872
            ? (c >= 43824 && c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym__conid_character_set_1(int32_t c) {
  return (c < 7738
    ? (c < 931
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 522
          ? (c < 480
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 453 || (c >= 455 && c <= 456)))))
              : (c <= 459 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 475
                  ? (c < 473
                    ? c == 471
                    : c <= 473)
                  : (c <= 475 || c == 478))))))
            : (c <= 480 || (c < 502
              ? (c < 490
                ? (c < 486
                  ? (c < 484
                    ? c == 482
                    : c <= 484)
                  : (c <= 486 || c == 488))
                : (c <= 490 || (c < 497
                  ? (c < 494
                    ? c == 492
                    : c <= 494)
                  : (c <= 498 || c == 500))))
              : (c <= 504 || (c < 514
                ? (c < 510
                  ? (c < 508
                    ? c == 506
                    : c <= 508)
                  : (c <= 510 || c == 512))
                : (c <= 514 || (c < 518
                  ? c == 516
                  : (c <= 518 || c == 520))))))))
          : (c <= 522 || (c < 560
            ? (c < 542
              ? (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))
              : (c <= 542 || (c < 552
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || c == 550))
                : (c <= 552 || (c < 556
                  ? c == 554
                  : (c <= 556 || c == 558))))))
            : (c <= 560 || (c < 880
              ? (c < 579
                ? (c < 573
                  ? (c < 570
                    ? c == 562
                    : c <= 571)
                  : (c <= 574 || c == 577))
                : (c <= 582 || (c < 588
                  ? (c < 586
                    ? c == 584
                    : c <= 586)
                  : (c <= 588 || c == 590))))
              : (c <= 880 || (c < 904
                ? (c < 895
                  ? (c < 886
                    ? c == 882
                    : c <= 886)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 911 || (c >= 913 && c <= 929)))))))))))))
      : (c <= 939 || (c < 1246
        ? (c < 1168
          ? (c < 1122
            ? (c < 998
              ? (c < 988
                ? (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))
                : (c <= 988 || (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))))
              : (c <= 998 || (c < 1012
                ? (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))
                : (c <= 1012 || (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || c == 1120))))))
            : (c <= 1122 || (c < 1142
              ? (c < 1132
                ? (c < 1128
                  ? (c < 1126
                    ? c == 1124
                    : c <= 1126)
                  : (c <= 1128 || c == 1130))
                : (c <= 1132 || (c < 1138
                  ? (c < 1136
                    ? c == 1134
                    : c <= 1136)
                  : (c <= 1138 || c == 1140))))
              : (c <= 1142 || (c < 1152
                ? (c < 1148
                  ? (c < 1146
                    ? c == 1144
                    : c <= 1146)
                  : (c <= 1148 || c == 1150))
                : (c <= 1152 || (c < 1164
                  ? c == 1162
                  : (c <= 1164 || c == 1166))))))))
          : (c <= 1168 || (c < 1206
            ? (c < 1188
              ? (c < 1178
                ? (c < 1174
                  ? (c < 1172
                    ? c == 1170
                    : c <= 1172)
                  : (c <= 1174 || c == 1176))
                : (c <= 1178 || (c < 1184
                  ? (c < 1182
                    ? c == 1180
                    : c <= 1182)
                  : (c <= 1184 || c == 1186))))
              : (c <= 1188 || (c < 1198
                ? (c < 1194
                  ? (c < 1192
                    ? c == 1190
                    : c <= 1192)
                  : (c <= 1194 || c == 1196))
                : (c <= 1198 || (c < 1202
                  ? c == 1200
                  : (c <= 1202 || c == 1204))))))
            : (c <= 1206 || (c < 1227
              ? (c < 1216
                ? (c < 1212
                  ? (c < 1210
                    ? c == 1208
                    : c <= 1210)
                  : (c <= 1212 || c == 1214))
                : (c <= 1217 || (c < 1223
                  ? (c < 1221
                    ? c == 1219
                    : c <= 1221)
                  : (c <= 1223 || c == 1225))))
              : (c <= 1227 || (c < 1238
                ? (c < 1234
                  ? (c < 1232
                    ? c == 1229
                    : c <= 1232)
                  : (c <= 1234 || c == 1236))
                : (c <= 1238 || (c < 1242
                  ? c == 1240
                  : (c <= 1242 || c == 1244))))))))))
        : (c <= 1246 || (c < 1324
          ? (c < 1286
            ? (c < 1266
              ? (c < 1256
                ? (c < 1252
                  ? (c < 1250
                    ? c == 1248
                    : c <= 1250)
                  : (c <= 1252 || c == 1254))
                : (c <= 1256 || (c < 1262
                  ? (c < 1260
                    ? c == 1258
                    : c <= 1260)
                  : (c <= 1262 || c == 1264))))
              : (c <= 1266 || (c < 1276
                ? (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))
                : (c <= 1276 || (c < 1282
                  ? (c < 1280
                    ? c == 1278
                    : c <= 1280)
                  : (c <= 1282 || c == 1284))))))
            : (c <= 1286 || (c < 1306
              ? (c < 1296
                ? (c < 1292
                  ? (c < 1290
                    ? c == 1288
                    : c <= 1290)
                  : (c <= 1292 || c == 1294))
                : (c <= 1296 || (c < 1302
                  ? (c < 1300
                    ? c == 1298
                    : c <= 1300)
                  : (c <= 1302 || c == 1304))))
              : (c <= 1306 || (c < 1316
                ? (c < 1312
                  ? (c < 1310
                    ? c == 1308
                    : c <= 1310)
                  : (c <= 1312 || c == 1314))
                : (c <= 1316 || (c < 1320
                  ? c == 1318
                  : (c <= 1320 || c == 1322))))))))
          : (c <= 1324 || (c < 7700
            ? (c < 7682
              ? (c < 4301
                ? (c < 4256
                  ? (c < 1329
                    ? c == 1326
                    : c <= 1366)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 7357
                  ? (c < 7312
                    ? (c >= 5024 && c <= 5109)
                    : c <= 7354)
                  : (c <= 7359 || c == 7680))))
              : (c <= 7682 || (c < 7692
                ? (c < 7688
                  ? (c < 7686
                    ? c == 7684
                    : c <= 7686)
                  : (c <= 7688 || c == 7690))
                : (c <= 7692 || (c < 7696
                  ? c == 7694
                  : (c <= 7696 || c == 7698))))))
            : (c <= 7700 || (c < 7720
              ? (c < 7710
                ? (c < 7706
                  ? (c < 7704
                    ? c == 7702
                    : c <= 7704)
                  : (c <= 7706 || c == 7708))
                : (c <= 7710 || (c < 7716
                  ? (c < 7714
                    ? c == 7712
                    : c <= 7714)
                  : (c <= 7716 || c == 7718))))
              : (c <= 7720 || (c < 7730
                ? (c < 7726
                  ? (c < 7724
                    ? c == 7722
                    : c <= 7724)
                  : (c <= 7726 || c == 7728))
                : (c <= 7730 || (c < 7734
                  ? c == 7732
                  : (c <= 7734 || c == 7736))))))))))))))
    : (c <= 7738 || (c < 11428
      ? (c < 7900
        ? (c < 7816
          ? (c < 7778
            ? (c < 7758
              ? (c < 7748
                ? (c < 7744
                  ? (c < 7742
                    ? c == 7740
                    : c <= 7742)
                  : (c <= 7744 || c == 7746))
                : (c <= 7748 || (c < 7754
                  ? (c < 7752
                    ? c == 7750
                    : c <= 7752)
                  : (c <= 7754 || c == 7756))))
              : (c <= 7758 || (c < 7768
                ? (c < 7764
                  ? (c < 7762
                    ? c == 7760
                    : c <= 7762)
                  : (c <= 7764 || c == 7766))
                : (c <= 7768 || (c < 7774
                  ? (c < 7772
                    ? c == 7770
                    : c <= 7772)
                  : (c <= 7774 || c == 7776))))))
            : (c <= 7778 || (c < 7798
              ? (c < 7788
                ? (c < 7784
                  ? (c < 7782
                    ? c == 7780
                    : c <= 7782)
                  : (c <= 7784 || c == 7786))
                : (c <= 7788 || (c < 7794
                  ? (c < 7792
                    ? c == 7790
                    : c <= 7792)
                  : (c <= 7794 || c == 7796))))
              : (c <= 7798 || (c < 7808
                ? (c < 7804
                  ? (c < 7802
                    ? c == 7800
                    : c <= 7802)
                  : (c <= 7804 || c == 7806))
                : (c <= 7808 || (c < 7812
                  ? c == 7810
                  : (c <= 7812 || c == 7814))))))))
          : (c <= 7816 || (c < 7862
            ? (c < 7844
              ? (c < 7826
                ? (c < 7822
                  ? (c < 7820
                    ? c == 7818
                    : c <= 7820)
                  : (c <= 7822 || c == 7824))
                : (c <= 7826 || (c < 7840
                  ? (c < 7838
                    ? c == 7828
                    : c <= 7838)
                  : (c <= 7840 || c == 7842))))
              : (c <= 7844 || (c < 7854
                ? (c < 7850
                  ? (c < 7848
                    ? c == 7846
                    : c <= 7848)
                  : (c <= 7850 || c == 7852))
                : (c <= 7854 || (c < 7858
                  ? c == 7856
                  : (c <= 7858 || c == 7860))))))
            : (c <= 7862 || (c < 7882
              ? (c < 7872
                ? (c < 7868
                  ? (c < 7866
                    ? c == 7864
                    : c <= 7866)
                  : (c <= 7868 || c == 7870))
                : (c <= 7872 || (c < 7878
                  ? (c < 7876
                    ? c == 7874
                    : c <= 7876)
                  : (c <= 7878 || c == 7880))))
              : (c <= 7882 || (c < 7892
                ? (c < 7888
                  ? (c < 7886
                    ? c == 7884
                    : c <= 7886)
                  : (c <= 7888 || c == 7890))
                : (c <= 7892 || (c < 7896
                  ? c == 7894
                  : (c <= 7896 || c == 7898))))))))))
        : (c <= 7900 || (c < 8464
          ? (c < 7976
            ? (c < 7920
              ? (c < 7910
                ? (c < 7906
                  ? (c < 7904
                    ? c == 7902
                    : c <= 7904)
                  : (c <= 7906 || c == 7908))
                : (c <= 7910 || (c < 7916
                  ? (c < 7914
                    ? c == 7912
                    : c <= 7914)
                  : (c <= 7916 || c == 7918))))
              : (c <= 7920 || (c < 7930
                ? (c < 7926
                  ? (c < 7924
                    ? c == 7922
                    : c <= 7924)
                  : (c <= 7926 || c == 7928))
                : (c <= 7930 || (c < 7944
                  ? (c < 7934
                    ? c == 7932
                    : c <= 7934)
                  : (c <= 7951 || (c >= 7960 && c <= 7965)))))))
            : (c <= 7983 || (c < 8104
              ? (c < 8029
                ? (c < 8025
                  ? (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8072
                  ? (c < 8040
                    ? c == 8031
                    : c <= 8047)
                  : (c <= 8079 || (c >= 8088 && c <= 8095)))))
              : (c <= 8111 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8124)
                    : c <= 8140)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8188 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool aux_sym_comment_token2_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= ' ' || c == 160))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8202)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(0)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == 'F') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(86);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 39:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 41:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(41)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == 'F') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(86);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(74);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 42:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(42)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead == 's') ADVANCE(56);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 43:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(43)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(15);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(46)
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == 's') ADVANCE(56);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(74);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'q') ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 41, .external_lex_state = 2},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41, .external_lex_state = 2},
  [5] = {.lex_state = 41, .external_lex_state = 2},
  [6] = {.lex_state = 41, .external_lex_state = 2},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46, .external_lex_state = 3},
  [9] = {.lex_state = 46, .external_lex_state = 3},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 42, .external_lex_state = 3},
  [12] = {.lex_state = 43, .external_lex_state = 2},
  [13] = {.lex_state = 42, .external_lex_state = 3},
  [14] = {.lex_state = 42, .external_lex_state = 3},
  [15] = {.lex_state = 43, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 46, .external_lex_state = 4},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 46, .external_lex_state = 4},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 42, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 46, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 43, .external_lex_state = 2},
  [34] = {.lex_state = 43, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 43, .external_lex_state = 2},
  [37] = {.lex_state = 46, .external_lex_state = 4},
  [38] = {.lex_state = 46, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 42, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 46, .external_lex_state = 3},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 46, .external_lex_state = 3},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 43, .external_lex_state = 2},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 42},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 43, .external_lex_state = 2},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 46},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 43, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 46},
  [87] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token__string_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_is_sum_marker] = ACTIONS(1),
    [sym__varid] = ACTIONS(1),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Primary] = ACTIONS(1),
    [sym__attribute] = ACTIONS(1),
    [sym__field_strictness_prefix] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__cascade_action] = ACTIONS(1),
    [anon_sym_Foreign] = ACTIONS(1),
    [anon_sym_References] = ACTIONS(1),
    [anon_sym_deriving] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_quasi_quotation] = STATE(84),
    [sym_entity_definition] = STATE(53),
    [sym_comment] = STATE(1),
    [sym__entity_name] = STATE(39),
    [sym__entity_header] = STATE(38),
    [aux_sym_quasi_quotation_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_is_sum_marker] = ACTIONS(7),
    [sym__conid] = ACTIONS(11),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__varid,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(17), 1,
      anon_sym_Id,
    ACTIONS(19), 1,
      anon_sym_Primary,
    ACTIONS(21), 1,
      sym__field_strictness_prefix,
    ACTIONS(23), 1,
      anon_sym_Foreign,
    ACTIONS(25), 1,
      anon_sym_deriving,
    ACTIONS(27), 1,
      sym__dedent,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_entity_body_repeat1,
    STATE(6), 1,
      sym__entity_line_definition,
    STATE(34), 1,
      aux_sym_entity_body_repeat2,
    STATE(47), 1,
      sym_field_name,
    STATE(60), 1,
      sym__haskell_constraint_name,
    STATE(75), 1,
      sym__entity_derives,
    STATE(82), 2,
      sym__surrogate_key,
      sym__natural_key,
    STATE(80), 4,
      sym__entity_key,
      sym_field_definition,
      sym__unique_constraint,
      sym__foreign_constraint,
  [65] = 20,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__varid,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(17), 1,
      anon_sym_Id,
    ACTIONS(19), 1,
      anon_sym_Primary,
    ACTIONS(21), 1,
      sym__field_strictness_prefix,
    ACTIONS(23), 1,
      anon_sym_Foreign,
    ACTIONS(25), 1,
      anon_sym_deriving,
    STATE(2), 1,
      aux_sym_entity_body_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      sym__entity_line_definition,
    STATE(36), 1,
      aux_sym_entity_body_repeat2,
    STATE(47), 1,
      sym_field_name,
    STATE(60), 1,
      sym__haskell_constraint_name,
    STATE(75), 1,
      sym__entity_derives,
    STATE(85), 1,
      sym_entity_body,
    STATE(82), 2,
      sym__surrogate_key,
      sym__natural_key,
    STATE(80), 4,
      sym__entity_key,
      sym_field_definition,
      sym__unique_constraint,
      sym__foreign_constraint,
  [130] = 17,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      sym__varid,
    ACTIONS(32), 1,
      sym__conid,
    ACTIONS(35), 1,
      anon_sym_Id,
    ACTIONS(38), 1,
      anon_sym_Primary,
    ACTIONS(41), 1,
      sym__field_strictness_prefix,
    ACTIONS(44), 1,
      anon_sym_Foreign,
    ACTIONS(47), 1,
      anon_sym_deriving,
    ACTIONS(49), 1,
      sym__dedent,
    STATE(6), 1,
      sym__entity_line_definition,
    STATE(47), 1,
      sym_field_name,
    STATE(60), 1,
      sym__haskell_constraint_name,
    STATE(4), 2,
      sym_comment,
      aux_sym_entity_body_repeat1,
    STATE(82), 2,
      sym__surrogate_key,
      sym__natural_key,
    STATE(80), 4,
      sym__entity_key,
      sym_field_definition,
      sym__unique_constraint,
      sym__foreign_constraint,
  [187] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(5), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(51), 6,
      sym__varid,
      sym__conid,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
  [212] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(6), 1,
      sym_comment,
    ACTIONS(57), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(55), 6,
      sym__varid,
      sym__conid,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
  [237] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_is_sum_marker,
    ACTIONS(64), 1,
      sym__conid,
    STATE(38), 1,
      sym__entity_header,
    STATE(39), 1,
      sym__entity_name,
    STATE(53), 1,
      sym_entity_definition,
    STATE(7), 2,
      sym_comment,
      aux_sym_quasi_quotation_repeat1,
  [269] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(67), 1,
      sym__varid,
    ACTIONS(69), 1,
      sym__attribute,
    ACTIONS(71), 1,
      sym__newline,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__natural_key_repeat1,
    STATE(23), 1,
      aux_sym__unique_constraint_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(71), 1,
      sym__unique_constraint_attribute,
  [303] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(67), 1,
      sym__varid,
    ACTIONS(73), 1,
      sym__attribute,
    ACTIONS(75), 1,
      sym__newline,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__natural_key_repeat1,
    STATE(30), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(61), 1,
      sym__key_attribute,
  [337] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_quasi_quotation_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(38), 1,
      sym__entity_header,
    STATE(39), 1,
      sym__entity_name,
    STATE(53), 1,
      sym_entity_definition,
    ACTIONS(7), 2,
      sym_is_sum_marker,
      aux_sym_comment_token2,
  [369] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(79), 1,
      sym__varid,
    STATE(41), 1,
      sym_field_name,
    STATE(11), 2,
      sym_comment,
      aux_sym__natural_key_repeat1,
    ACTIONS(82), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [394] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(84), 1,
      sym__conid,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__entity_derives_repeat1,
    STATE(49), 1,
      sym__class_name,
    ACTIONS(86), 2,
      sym__dedent,
      anon_sym_deriving,
  [420] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    ACTIONS(90), 1,
      anon_sym_References,
    ACTIONS(92), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__natural_key_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(41), 1,
      sym_field_name,
  [448] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    ACTIONS(94), 1,
      anon_sym_References,
    ACTIONS(96), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__natural_key_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(41), 1,
      sym_field_name,
  [476] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(98), 1,
      sym__conid,
    STATE(49), 1,
      sym__class_name,
    ACTIONS(101), 2,
      sym__dedent,
      anon_sym_deriving,
    STATE(15), 2,
      sym_comment,
      aux_sym__entity_derives_repeat1,
  [500] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(103), 1,
      sym__attribute,
    ACTIONS(106), 1,
      sym__newline,
    STATE(61), 1,
      sym__key_attribute,
    STATE(16), 2,
      sym_comment,
      aux_sym__surrogate_key_repeat1,
  [523] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(108), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [542] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(110), 1,
      sym__attribute,
    ACTIONS(112), 1,
      sym__newline,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym__entity_header_repeat1,
    STATE(77), 1,
      sym__entity_attribute,
  [567] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(19), 1,
      sym_comment,
    ACTIONS(114), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [586] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(116), 1,
      sym__attribute,
    ACTIONS(119), 1,
      sym__newline,
    STATE(77), 1,
      sym__entity_attribute,
    STATE(20), 2,
      sym_comment,
      aux_sym__entity_header_repeat1,
  [609] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(121), 1,
      sym__attribute,
    ACTIONS(123), 1,
      sym__newline,
    STATE(21), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_field_definition_repeat1,
    STATE(68), 1,
      sym__field_attribute,
  [634] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(121), 1,
      sym__attribute,
    ACTIONS(125), 1,
      sym__newline,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_field_definition_repeat1,
    STATE(68), 1,
      sym__field_attribute,
  [659] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(69), 1,
      sym__attribute,
    ACTIONS(127), 1,
      sym__newline,
    STATE(23), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym__unique_constraint_repeat1,
    STATE(71), 1,
      sym__unique_constraint_attribute,
  [684] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(121), 1,
      sym__attribute,
    ACTIONS(129), 1,
      sym__newline,
    STATE(24), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_field_definition_repeat1,
    STATE(68), 1,
      sym__field_attribute,
  [709] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(131), 1,
      sym__varid,
    STATE(25), 1,
      sym_comment,
    ACTIONS(133), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [730] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(110), 1,
      sym__attribute,
    ACTIONS(135), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym__entity_header_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(77), 1,
      sym__entity_attribute,
  [755] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(137), 1,
      sym__varid,
    ACTIONS(139), 1,
      sym__cascade_action,
    STATE(27), 1,
      sym_comment,
    STATE(54), 1,
      sym__constraint_name,
    STATE(55), 1,
      aux_sym__cascade_actions,
  [780] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(121), 1,
      sym__attribute,
    ACTIONS(141), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym_field_definition_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(68), 1,
      sym__field_attribute,
  [805] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(143), 1,
      sym__attribute,
    ACTIONS(146), 1,
      sym__newline,
    STATE(68), 1,
      sym__field_attribute,
    STATE(29), 2,
      sym_comment,
      aux_sym_field_definition_repeat1,
  [828] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(73), 1,
      sym__attribute,
    ACTIONS(148), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(61), 1,
      sym__key_attribute,
  [853] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(150), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [872] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(73), 1,
      sym__attribute,
    ACTIONS(152), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(61), 1,
      sym__key_attribute,
  [897] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(154), 1,
      anon_sym_deriving,
    ACTIONS(157), 1,
      sym__dedent,
    STATE(75), 1,
      sym__entity_derives,
    STATE(33), 2,
      sym_comment,
      aux_sym_entity_body_repeat2,
  [920] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(159), 1,
      anon_sym_deriving,
    ACTIONS(161), 1,
      sym__dedent,
    STATE(33), 1,
      aux_sym_entity_body_repeat2,
    STATE(34), 1,
      sym_comment,
    STATE(75), 1,
      sym__entity_derives,
  [945] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(110), 1,
      sym__attribute,
    ACTIONS(163), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__entity_header_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(77), 1,
      sym__entity_attribute,
  [970] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(27), 1,
      sym__dedent,
    ACTIONS(159), 1,
      anon_sym_deriving,
    STATE(33), 1,
      aux_sym_entity_body_repeat2,
    STATE(36), 1,
      sym_comment,
    STATE(75), 1,
      sym__entity_derives,
  [995] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(165), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [1014] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(169), 1,
      sym__indent,
    STATE(38), 1,
      sym_comment,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [1035] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(110), 1,
      sym__attribute,
    ACTIONS(171), 1,
      sym__newline,
    STATE(26), 1,
      aux_sym__entity_header_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(77), 1,
      sym__entity_attribute,
  [1060] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(73), 1,
      sym__attribute,
    ACTIONS(173), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(61), 1,
      sym__key_attribute,
  [1085] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(175), 1,
      sym__varid,
    STATE(41), 1,
      sym_comment,
    ACTIONS(177), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [1106] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(179), 1,
      sym__attribute,
    ACTIONS(182), 1,
      sym__newline,
    STATE(71), 1,
      sym__unique_constraint_attribute,
    STATE(42), 2,
      sym_comment,
      aux_sym__unique_constraint_repeat1,
  [1129] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    ACTIONS(184), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__natural_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(43), 1,
      sym_comment,
  [1154] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(137), 1,
      sym__varid,
    ACTIONS(139), 1,
      sym__cascade_action,
    STATE(27), 1,
      aux_sym__cascade_actions,
    STATE(44), 1,
      sym_comment,
    STATE(46), 1,
      sym__constraint_name,
  [1179] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    ACTIONS(186), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__natural_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(45), 1,
      sym_comment,
  [1204] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    STATE(14), 1,
      aux_sym__natural_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(46), 1,
      sym_comment,
  [1226] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(188), 1,
      sym__conid,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_field_type,
    STATE(47), 1,
      sym_comment,
  [1248] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [1266] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(49), 1,
      sym_comment,
    ACTIONS(194), 3,
      sym__dedent,
      sym__conid,
      anon_sym_deriving,
  [1284] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    STATE(41), 1,
      sym_field_name,
    STATE(45), 1,
      aux_sym__natural_key_repeat1,
    STATE(50), 1,
      sym_comment,
  [1306] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(188), 1,
      sym__conid,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_field_type,
    STATE(51), 1,
      sym_comment,
  [1328] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    STATE(41), 1,
      sym_field_name,
    STATE(43), 1,
      aux_sym__natural_key_repeat1,
    STATE(52), 1,
      sym_comment,
  [1350] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [1368] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    STATE(13), 1,
      aux_sym__natural_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(54), 1,
      sym_comment,
  [1390] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(198), 1,
      sym__varid,
    ACTIONS(200), 1,
      sym__cascade_action,
    STATE(55), 2,
      sym_comment,
      aux_sym__cascade_actions,
  [1410] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(188), 1,
      sym__conid,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_field_type,
    STATE(56), 1,
      sym_comment,
  [1432] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(203), 3,
      sym__dedent,
      sym__conid,
      anon_sym_deriving,
  [1450] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    STATE(9), 1,
      aux_sym__natural_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(58), 1,
      sym_comment,
  [1472] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(84), 1,
      sym__conid,
    STATE(12), 1,
      aux_sym__entity_derives_repeat1,
    STATE(49), 1,
      sym__class_name,
    STATE(59), 1,
      sym_comment,
  [1494] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      sym__varid,
    STATE(8), 1,
      aux_sym__natural_key_repeat1,
    STATE(41), 1,
      sym_field_name,
    STATE(60), 1,
      sym_comment,
  [1516] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(61), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym__newline,
      sym__attribute,
  [1533] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(62), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym__newline,
      sym__attribute,
  [1550] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    STATE(35), 1,
      sym__entity_name,
    STATE(63), 1,
      sym_comment,
  [1569] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(64), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym__varid,
      sym__cascade_action,
  [1586] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym__varid,
      sym__cascade_action,
  [1603] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(213), 1,
      sym__conid,
    STATE(44), 1,
      sym__entity_name,
    STATE(66), 1,
      sym_comment,
  [1622] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym__newline,
      sym__attribute,
  [1639] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(68), 1,
      sym_comment,
    ACTIONS(217), 2,
      sym__newline,
      sym__attribute,
  [1656] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(219), 1,
      sym__varid,
    STATE(51), 1,
      sym_field_name,
    STATE(69), 1,
      sym_comment,
  [1675] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(70), 1,
      sym_comment,
    ACTIONS(221), 2,
      sym__newline,
      sym__attribute,
  [1692] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(71), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym__newline,
      sym__attribute,
  [1709] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(72), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym__newline,
      sym__attribute,
  [1726] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(73), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym__newline,
      sym__attribute,
  [1743] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(74), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym__newline,
      sym__attribute,
  [1760] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(75), 1,
      sym_comment,
    ACTIONS(229), 2,
      sym__dedent,
      anon_sym_deriving,
  [1777] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(76), 1,
      sym_comment,
    ACTIONS(231), 2,
      sym__newline,
      sym__attribute,
  [1794] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(77), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym__newline,
      sym__attribute,
  [1811] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(78), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym__conid,
      anon_sym_LBRACK,
  [1828] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_comment,
  [1844] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(237), 1,
      sym__newline,
    STATE(80), 1,
      sym_comment,
  [1860] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(239), 1,
      sym__varid,
    STATE(81), 1,
      sym_comment,
  [1876] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(241), 1,
      sym__newline,
    STATE(82), 1,
      sym_comment,
  [1892] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(243), 1,
      sym__conid,
    STATE(83), 1,
      sym_comment,
  [1908] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_comment,
  [1924] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(247), 1,
      sym__dedent,
    STATE(85), 1,
      sym_comment,
  [1940] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(249), 1,
      sym__varid,
    STATE(86), 1,
      sym_comment,
  [1956] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 187,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 337,
  [SMALL_STATE(11)] = 369,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 523,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 567,
  [SMALL_STATE(20)] = 586,
  [SMALL_STATE(21)] = 609,
  [SMALL_STATE(22)] = 634,
  [SMALL_STATE(23)] = 659,
  [SMALL_STATE(24)] = 684,
  [SMALL_STATE(25)] = 709,
  [SMALL_STATE(26)] = 730,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 780,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 828,
  [SMALL_STATE(31)] = 853,
  [SMALL_STATE(32)] = 872,
  [SMALL_STATE(33)] = 897,
  [SMALL_STATE(34)] = 920,
  [SMALL_STATE(35)] = 945,
  [SMALL_STATE(36)] = 970,
  [SMALL_STATE(37)] = 995,
  [SMALL_STATE(38)] = 1014,
  [SMALL_STATE(39)] = 1035,
  [SMALL_STATE(40)] = 1060,
  [SMALL_STATE(41)] = 1085,
  [SMALL_STATE(42)] = 1106,
  [SMALL_STATE(43)] = 1129,
  [SMALL_STATE(44)] = 1154,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1204,
  [SMALL_STATE(47)] = 1226,
  [SMALL_STATE(48)] = 1248,
  [SMALL_STATE(49)] = 1266,
  [SMALL_STATE(50)] = 1284,
  [SMALL_STATE(51)] = 1306,
  [SMALL_STATE(52)] = 1328,
  [SMALL_STATE(53)] = 1350,
  [SMALL_STATE(54)] = 1368,
  [SMALL_STATE(55)] = 1390,
  [SMALL_STATE(56)] = 1410,
  [SMALL_STATE(57)] = 1432,
  [SMALL_STATE(58)] = 1450,
  [SMALL_STATE(59)] = 1472,
  [SMALL_STATE(60)] = 1494,
  [SMALL_STATE(61)] = 1516,
  [SMALL_STATE(62)] = 1533,
  [SMALL_STATE(63)] = 1550,
  [SMALL_STATE(64)] = 1569,
  [SMALL_STATE(65)] = 1586,
  [SMALL_STATE(66)] = 1603,
  [SMALL_STATE(67)] = 1622,
  [SMALL_STATE(68)] = 1639,
  [SMALL_STATE(69)] = 1656,
  [SMALL_STATE(70)] = 1675,
  [SMALL_STATE(71)] = 1692,
  [SMALL_STATE(72)] = 1709,
  [SMALL_STATE(73)] = 1726,
  [SMALL_STATE(74)] = 1743,
  [SMALL_STATE(75)] = 1760,
  [SMALL_STATE(76)] = 1777,
  [SMALL_STATE(77)] = 1794,
  [SMALL_STATE(78)] = 1811,
  [SMALL_STATE(79)] = 1828,
  [SMALL_STATE(80)] = 1844,
  [SMALL_STATE(81)] = 1860,
  [SMALL_STATE(82)] = 1876,
  [SMALL_STATE(83)] = 1892,
  [SMALL_STATE(84)] = 1908,
  [SMALL_STATE(85)] = 1924,
  [SMALL_STATE(86)] = 1940,
  [SMALL_STATE(87)] = 1956,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(78),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(81),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(56),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(58),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(66),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(63),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(72),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__natural_key, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__natural_key_repeat1, 2), SHIFT_REPEAT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__natural_key_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_derives, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 4),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_derives_repeat1, 2), SHIFT_REPEAT(57),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_derives_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__surrogate_key_repeat1, 2), SHIFT_REPEAT(76),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__surrogate_key_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(62),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 4),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(67),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__natural_key, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__surrogate_key, 3),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(59),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__surrogate_key, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__natural_key_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__natural_key_repeat1, 1),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unique_constraint_repeat1, 2), SHIFT_REPEAT(70),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unique_constraint_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_derives_repeat1, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cascade_actions, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cascade_actions, 2), SHIFT_REPEAT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__surrogate_key_repeat1, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_attribute, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cascade_actions, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_name, 1, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_attribute, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint_attribute, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unique_constraint_repeat1, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_type, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_type, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_attribute, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__haskell_constraint_name, 1, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_key, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_name, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_haskell_persistent_external_scanner_create(void);
void tree_sitter_haskell_persistent_external_scanner_destroy(void *);
bool tree_sitter_haskell_persistent_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_haskell_persistent_external_scanner_serialize(void *, char *);
void tree_sitter_haskell_persistent_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_haskell_persistent(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_haskell_persistent_external_scanner_create,
      tree_sitter_haskell_persistent_external_scanner_destroy,
      tree_sitter_haskell_persistent_external_scanner_scan,
      tree_sitter_haskell_persistent_external_scanner_serialize,
      tree_sitter_haskell_persistent_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
