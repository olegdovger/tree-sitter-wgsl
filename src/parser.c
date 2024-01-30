#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 367
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 213
#define ALIAS_COUNT 0
#define TOKEN_COUNT 137
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 18

enum {
  sym_identifier = 1,
  sym_line_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_EQ = 4,
  anon_sym_let = 5,
  anon_sym_override = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_alias = 10,
  anon_sym_fn = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_struct = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_enable = 16,
  anon_sym_AT = 17,
  anon_sym__ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_PERCENT_EQ = 23,
  anon_sym_AMP_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_CARET_EQ = 26,
  anon_sym_if = 27,
  anon_sym_else = 28,
  anon_sym_switch = 29,
  anon_sym_case = 30,
  anon_sym_COLON = 31,
  anon_sym_default = 32,
  anon_sym_fallthrough = 33,
  anon_sym_loop = 34,
  anon_sym_for = 35,
  anon_sym_while = 36,
  anon_sym_break = 37,
  anon_sym_continue = 38,
  anon_sym_continuing = 39,
  anon_sym_return = 40,
  anon_sym_discard = 41,
  anon_sym_var = 42,
  anon_sym_const = 43,
  anon_sym_LT = 44,
  anon_sym_GT = 45,
  anon_sym_PLUS_PLUS = 46,
  anon_sym_DASH_DASH = 47,
  sym_int_literal = 48,
  aux_sym_float_literal_token1 = 49,
  aux_sym_float_literal_token2 = 50,
  anon_sym_true = 51,
  anon_sym_false = 52,
  anon_sym_bool = 53,
  anon_sym_u32 = 54,
  anon_sym_i32 = 55,
  anon_sym_f32 = 56,
  anon_sym_f16 = 57,
  anon_sym_array = 58,
  anon_sym_ptr = 59,
  anon_sym_sampler = 60,
  anon_sym_sampler_comparison = 61,
  anon_sym_texture_depth_2d = 62,
  anon_sym_texture_depth_2d_array = 63,
  anon_sym_texture_depth_cube = 64,
  anon_sym_texture_depth_cube_array = 65,
  anon_sym_texture_depth_multisampled_2d = 66,
  anon_sym_texture_1d = 67,
  anon_sym_texture_2d = 68,
  anon_sym_texture_2d_array = 69,
  anon_sym_texture_3d = 70,
  anon_sym_texture_cube = 71,
  anon_sym_texture_cube_array = 72,
  anon_sym_texture_multisampled_2d = 73,
  anon_sym_texture_storage_1d = 74,
  anon_sym_texture_storage_2d = 75,
  anon_sym_texture_storage_2d_array = 76,
  anon_sym_texture_storage_3d = 77,
  anon_sym_vec2 = 78,
  anon_sym_vec3 = 79,
  anon_sym_vec4 = 80,
  anon_sym_mat2x2 = 81,
  anon_sym_mat2x3 = 82,
  anon_sym_mat2x4 = 83,
  anon_sym_mat3x2 = 84,
  anon_sym_mat3x3 = 85,
  anon_sym_mat3x4 = 86,
  anon_sym_mat4x2 = 87,
  anon_sym_mat4x3 = 88,
  anon_sym_mat4x4 = 89,
  anon_sym_rgba8unorm = 90,
  anon_sym_rgba8snorm = 91,
  anon_sym_rgba8uint = 92,
  anon_sym_rgba8sint = 93,
  anon_sym_rgba16uint = 94,
  anon_sym_rgba16sint = 95,
  anon_sym_rgba16float = 96,
  anon_sym_r32uint = 97,
  anon_sym_r32sint = 98,
  anon_sym_r32float = 99,
  anon_sym_rg32uint = 100,
  anon_sym_rg32sint = 101,
  anon_sym_rg32float = 102,
  anon_sym_rgba32uint = 103,
  anon_sym_rgba32sint = 104,
  anon_sym_rgba32float = 105,
  anon_sym_function = 106,
  anon_sym_private = 107,
  anon_sym_workgroup = 108,
  anon_sym_uniform = 109,
  anon_sym_storage = 110,
  anon_sym_read = 111,
  anon_sym_write = 112,
  anon_sym_read_write = 113,
  anon_sym_bitcast = 114,
  anon_sym_PIPE_PIPE = 115,
  anon_sym_AMP_AMP = 116,
  anon_sym_PIPE = 117,
  anon_sym_CARET = 118,
  anon_sym_AMP = 119,
  anon_sym_EQ_EQ = 120,
  anon_sym_BANG_EQ = 121,
  anon_sym_LT_EQ = 122,
  anon_sym_GT_EQ = 123,
  anon_sym_LT_LT = 124,
  anon_sym_GT_GT = 125,
  anon_sym_PLUS = 126,
  anon_sym_DASH = 127,
  anon_sym_STAR = 128,
  anon_sym_SLASH = 129,
  anon_sym_PERCENT = 130,
  anon_sym_BANG = 131,
  anon_sym_TILDE = 132,
  anon_sym_LBRACK = 133,
  anon_sym_RBRACK = 134,
  anon_sym_DOT = 135,
  sym_block_comment = 136,
  sym_source_file = 137,
  sym__declaration = 138,
  sym_global_variable_declaration = 139,
  sym_global_constant_declaration = 140,
  sym_type_alias_declaration = 141,
  sym_const_expression = 142,
  sym_function_declaration = 143,
  sym_function_return_type_declaration = 144,
  sym_struct_declaration = 145,
  sym_struct_member = 146,
  sym_enable_directive = 147,
  sym_attribute = 148,
  sym__literal_or_identifier = 149,
  sym_parameter_list = 150,
  sym_parameter = 151,
  sym__statement = 152,
  sym_compound_statement = 153,
  sym_assignment_statement = 154,
  sym_compound_assignment_operator = 155,
  sym_if_statement = 156,
  sym_else_statement = 157,
  sym_switch_statement = 158,
  sym_switch_body = 159,
  sym_case_selectors = 160,
  sym_case_compound_statement = 161,
  sym_fallthrough_statement = 162,
  sym_loop_statement = 163,
  sym_for_statement = 164,
  sym_for_header = 165,
  sym_while_statement = 166,
  sym_break_statement = 167,
  sym_break_if_statement = 168,
  sym_continue_statement = 169,
  sym_continuing_statement = 170,
  sym_continuing_compound_statement = 171,
  sym_return_statement = 172,
  sym_discard_statement = 173,
  sym_variable_statement = 174,
  sym_variable_declaration = 175,
  sym_const_declaration = 176,
  sym_variable_qualifier = 177,
  sym_variable_identifier_declaration = 178,
  sym_increment_statement = 179,
  sym_decrement_statement = 180,
  sym__expression = 181,
  sym_const_literal = 182,
  sym_float_literal = 183,
  sym_bool_literal = 184,
  sym_parenthesized_expression = 185,
  sym_type_constructor_or_function_call_expression = 186,
  sym_type_declaration = 187,
  sym__vec_prefix = 188,
  sym__mat_prefix = 189,
  sym_texel_format = 190,
  sym_address_space = 191,
  sym_access_mode = 192,
  sym_argument_list_expression = 193,
  sym_bitcast_expression = 194,
  sym_binary_expression = 195,
  sym_unary_expression = 196,
  sym_postfix_expression = 197,
  sym_subscript_expression = 198,
  sym_lhs_expression = 199,
  sym_composite_value_decomposition_expression = 200,
  aux_sym_source_file_repeat1 = 201,
  aux_sym_source_file_repeat2 = 202,
  aux_sym_global_variable_declaration_repeat1 = 203,
  aux_sym_const_expresssion_repeat1 = 204,
  aux_sym_struct_declaration_repeat1 = 205,
  aux_sym_attribute_repeat1 = 206,
  aux_sym_parameter_list_repeat1 = 207,
  aux_sym_compound_statement_repeat1 = 208,
  aux_sym_switch_statement_repeat1 = 209,
  aux_sym_case_selectors_repeat1 = 210,
  aux_sym_argument_list_expression_repeat1 = 211,
  aux_sym_lhs_expression_repeat1 = 212,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_line_comment] = "line_comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_override] = "override",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_alias] = "alias",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enable] = "enable",
  [anon_sym_AT] = "@",
  [anon_sym__] = "_",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
  [anon_sym_fallthrough] = "fallthrough",
  [anon_sym_loop] = "loop",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_continuing] = "continuing",
  [anon_sym_return] = "return",
  [anon_sym_discard] = "discard",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [sym_int_literal] = "int_literal",
  [aux_sym_float_literal_token1] = "float_literal_token1",
  [aux_sym_float_literal_token2] = "float_literal_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_bool] = "bool",
  [anon_sym_u32] = "u32",
  [anon_sym_i32] = "i32",
  [anon_sym_f32] = "f32",
  [anon_sym_f16] = "f16",
  [anon_sym_array] = "array",
  [anon_sym_ptr] = "ptr",
  [anon_sym_sampler] = "sampler",
  [anon_sym_sampler_comparison] = "sampler_comparison",
  [anon_sym_texture_depth_2d] = "texture_depth_2d",
  [anon_sym_texture_depth_2d_array] = "texture_depth_2d_array",
  [anon_sym_texture_depth_cube] = "texture_depth_cube",
  [anon_sym_texture_depth_cube_array] = "texture_depth_cube_array",
  [anon_sym_texture_depth_multisampled_2d] = "texture_depth_multisampled_2d",
  [anon_sym_texture_1d] = "texture_1d",
  [anon_sym_texture_2d] = "texture_2d",
  [anon_sym_texture_2d_array] = "texture_2d_array",
  [anon_sym_texture_3d] = "texture_3d",
  [anon_sym_texture_cube] = "texture_cube",
  [anon_sym_texture_cube_array] = "texture_cube_array",
  [anon_sym_texture_multisampled_2d] = "texture_multisampled_2d",
  [anon_sym_texture_storage_1d] = "texture_storage_1d",
  [anon_sym_texture_storage_2d] = "texture_storage_2d",
  [anon_sym_texture_storage_2d_array] = "texture_storage_2d_array",
  [anon_sym_texture_storage_3d] = "texture_storage_3d",
  [anon_sym_vec2] = "vec2",
  [anon_sym_vec3] = "vec3",
  [anon_sym_vec4] = "vec4",
  [anon_sym_mat2x2] = "mat2x2",
  [anon_sym_mat2x3] = "mat2x3",
  [anon_sym_mat2x4] = "mat2x4",
  [anon_sym_mat3x2] = "mat3x2",
  [anon_sym_mat3x3] = "mat3x3",
  [anon_sym_mat3x4] = "mat3x4",
  [anon_sym_mat4x2] = "mat4x2",
  [anon_sym_mat4x3] = "mat4x3",
  [anon_sym_mat4x4] = "mat4x4",
  [anon_sym_rgba8unorm] = "rgba8unorm",
  [anon_sym_rgba8snorm] = "rgba8snorm",
  [anon_sym_rgba8uint] = "rgba8uint",
  [anon_sym_rgba8sint] = "rgba8sint",
  [anon_sym_rgba16uint] = "rgba16uint",
  [anon_sym_rgba16sint] = "rgba16sint",
  [anon_sym_rgba16float] = "rgba16float",
  [anon_sym_r32uint] = "r32uint",
  [anon_sym_r32sint] = "r32sint",
  [anon_sym_r32float] = "r32float",
  [anon_sym_rg32uint] = "rg32uint",
  [anon_sym_rg32sint] = "rg32sint",
  [anon_sym_rg32float] = "rg32float",
  [anon_sym_rgba32uint] = "rgba32uint",
  [anon_sym_rgba32sint] = "rgba32sint",
  [anon_sym_rgba32float] = "rgba32float",
  [anon_sym_function] = "function",
  [anon_sym_private] = "private",
  [anon_sym_workgroup] = "workgroup",
  [anon_sym_uniform] = "uniform",
  [anon_sym_storage] = "storage",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_read_write] = "read_write",
  [anon_sym_bitcast] = "bitcast",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_global_variable_declaration] = "global_variable_declaration",
  [sym_global_constant_declaration] = "global_constant_declaration",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_const_expression] = "const_expression",
  [sym_function_declaration] = "function_declaration",
  [sym_function_return_type_declaration] = "function_return_type_declaration",
  [sym_struct_declaration] = "struct_declaration",
  [sym_struct_member] = "struct_member",
  [sym_enable_directive] = "enable_directive",
  [sym_attribute] = "attribute",
  [sym__literal_or_identifier] = "_literal_or_identifier",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym__statement] = "_statement",
  [sym_compound_statement] = "compound_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_compound_assignment_operator] = "compound_assignment_operator",
  [sym_if_statement] = "if_statement",
  [sym_else_statement] = "else_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_body] = "switch_body",
  [sym_case_selectors] = "case_selectors",
  [sym_case_compound_statement] = "case_compound_statement",
  [sym_fallthrough_statement] = "fallthrough_statement",
  [sym_loop_statement] = "loop_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_header] = "for_header",
  [sym_while_statement] = "while_statement",
  [sym_break_statement] = "break_statement",
  [sym_break_if_statement] = "break_if_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_continuing_statement] = "continuing_statement",
  [sym_continuing_compound_statement] = "continuing_compound_statement",
  [sym_return_statement] = "return_statement",
  [sym_discard_statement] = "discard_statement",
  [sym_variable_statement] = "variable_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_variable_qualifier] = "variable_qualifier",
  [sym_variable_identifier_declaration] = "variable_identifier_declaration",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym__expression] = "_expression",
  [sym_const_literal] = "const_literal",
  [sym_float_literal] = "float_literal",
  [sym_bool_literal] = "bool_literal",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_type_constructor_or_function_call_expression] = "type_constructor_or_function_call_expression",
  [sym_type_declaration] = "type_declaration",
  [sym__vec_prefix] = "_vec_prefix",
  [sym__mat_prefix] = "_mat_prefix",
  [sym_texel_format] = "texel_format",
  [sym_address_space] = "address_space",
  [sym_access_mode] = "access_mode",
  [sym_argument_list_expression] = "argument_list_expression",
  [sym_bitcast_expression] = "bitcast_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_postfix_expression] = "postfix_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_lhs_expression] = "lhs_expression",
  [sym_composite_value_decomposition_expression] = "composite_value_decomposition_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_global_variable_declaration_repeat1] = "global_variable_declaration_repeat1",
  [aux_sym_const_expresssion_repeat1] = "const_expresssion_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_case_selectors_repeat1] = "case_selectors_repeat1",
  [aux_sym_argument_list_expression_repeat1] = "argument_list_expression_repeat1",
  [aux_sym_lhs_expression_repeat1] = "lhs_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym__] = anon_sym__,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_fallthrough] = anon_sym_fallthrough,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_continuing] = anon_sym_continuing,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_int_literal] = sym_int_literal,
  [aux_sym_float_literal_token1] = aux_sym_float_literal_token1,
  [aux_sym_float_literal_token2] = aux_sym_float_literal_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_sampler] = anon_sym_sampler,
  [anon_sym_sampler_comparison] = anon_sym_sampler_comparison,
  [anon_sym_texture_depth_2d] = anon_sym_texture_depth_2d,
  [anon_sym_texture_depth_2d_array] = anon_sym_texture_depth_2d_array,
  [anon_sym_texture_depth_cube] = anon_sym_texture_depth_cube,
  [anon_sym_texture_depth_cube_array] = anon_sym_texture_depth_cube_array,
  [anon_sym_texture_depth_multisampled_2d] = anon_sym_texture_depth_multisampled_2d,
  [anon_sym_texture_1d] = anon_sym_texture_1d,
  [anon_sym_texture_2d] = anon_sym_texture_2d,
  [anon_sym_texture_2d_array] = anon_sym_texture_2d_array,
  [anon_sym_texture_3d] = anon_sym_texture_3d,
  [anon_sym_texture_cube] = anon_sym_texture_cube,
  [anon_sym_texture_cube_array] = anon_sym_texture_cube_array,
  [anon_sym_texture_multisampled_2d] = anon_sym_texture_multisampled_2d,
  [anon_sym_texture_storage_1d] = anon_sym_texture_storage_1d,
  [anon_sym_texture_storage_2d] = anon_sym_texture_storage_2d,
  [anon_sym_texture_storage_2d_array] = anon_sym_texture_storage_2d_array,
  [anon_sym_texture_storage_3d] = anon_sym_texture_storage_3d,
  [anon_sym_vec2] = anon_sym_vec2,
  [anon_sym_vec3] = anon_sym_vec3,
  [anon_sym_vec4] = anon_sym_vec4,
  [anon_sym_mat2x2] = anon_sym_mat2x2,
  [anon_sym_mat2x3] = anon_sym_mat2x3,
  [anon_sym_mat2x4] = anon_sym_mat2x4,
  [anon_sym_mat3x2] = anon_sym_mat3x2,
  [anon_sym_mat3x3] = anon_sym_mat3x3,
  [anon_sym_mat3x4] = anon_sym_mat3x4,
  [anon_sym_mat4x2] = anon_sym_mat4x2,
  [anon_sym_mat4x3] = anon_sym_mat4x3,
  [anon_sym_mat4x4] = anon_sym_mat4x4,
  [anon_sym_rgba8unorm] = anon_sym_rgba8unorm,
  [anon_sym_rgba8snorm] = anon_sym_rgba8snorm,
  [anon_sym_rgba8uint] = anon_sym_rgba8uint,
  [anon_sym_rgba8sint] = anon_sym_rgba8sint,
  [anon_sym_rgba16uint] = anon_sym_rgba16uint,
  [anon_sym_rgba16sint] = anon_sym_rgba16sint,
  [anon_sym_rgba16float] = anon_sym_rgba16float,
  [anon_sym_r32uint] = anon_sym_r32uint,
  [anon_sym_r32sint] = anon_sym_r32sint,
  [anon_sym_r32float] = anon_sym_r32float,
  [anon_sym_rg32uint] = anon_sym_rg32uint,
  [anon_sym_rg32sint] = anon_sym_rg32sint,
  [anon_sym_rg32float] = anon_sym_rg32float,
  [anon_sym_rgba32uint] = anon_sym_rgba32uint,
  [anon_sym_rgba32sint] = anon_sym_rgba32sint,
  [anon_sym_rgba32float] = anon_sym_rgba32float,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_workgroup] = anon_sym_workgroup,
  [anon_sym_uniform] = anon_sym_uniform,
  [anon_sym_storage] = anon_sym_storage,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_read_write] = anon_sym_read_write,
  [anon_sym_bitcast] = anon_sym_bitcast,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_global_variable_declaration] = sym_global_variable_declaration,
  [sym_global_constant_declaration] = sym_global_constant_declaration,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_const_expression] = sym_const_expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_return_type_declaration] = sym_function_return_type_declaration,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_struct_member] = sym_struct_member,
  [sym_enable_directive] = sym_enable_directive,
  [sym_attribute] = sym_attribute,
  [sym__literal_or_identifier] = sym__literal_or_identifier,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__statement] = sym__statement,
  [sym_compound_statement] = sym_compound_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_compound_assignment_operator] = sym_compound_assignment_operator,
  [sym_if_statement] = sym_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_body] = sym_switch_body,
  [sym_case_selectors] = sym_case_selectors,
  [sym_case_compound_statement] = sym_case_compound_statement,
  [sym_fallthrough_statement] = sym_fallthrough_statement,
  [sym_loop_statement] = sym_loop_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_header] = sym_for_header,
  [sym_while_statement] = sym_while_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_break_if_statement] = sym_break_if_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_continuing_statement] = sym_continuing_statement,
  [sym_continuing_compound_statement] = sym_continuing_compound_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_discard_statement] = sym_discard_statement,
  [sym_variable_statement] = sym_variable_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_variable_qualifier] = sym_variable_qualifier,
  [sym_variable_identifier_declaration] = sym_variable_identifier_declaration,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym__expression] = sym__expression,
  [sym_const_literal] = sym_const_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_type_constructor_or_function_call_expression] = sym_type_constructor_or_function_call_expression,
  [sym_type_declaration] = sym_type_declaration,
  [sym__vec_prefix] = sym__vec_prefix,
  [sym__mat_prefix] = sym__mat_prefix,
  [sym_texel_format] = sym_texel_format,
  [sym_address_space] = sym_address_space,
  [sym_access_mode] = sym_access_mode,
  [sym_argument_list_expression] = sym_argument_list_expression,
  [sym_bitcast_expression] = sym_bitcast_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_postfix_expression] = sym_postfix_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_lhs_expression] = sym_lhs_expression,
  [sym_composite_value_decomposition_expression] = sym_composite_value_decomposition_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_global_variable_declaration_repeat1] = aux_sym_global_variable_declaration_repeat1,
  [aux_sym_const_expresssion_repeat1] = aux_sym_const_expresssion_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_case_selectors_repeat1] = aux_sym_case_selectors_repeat1,
  [aux_sym_argument_list_expression_repeat1] = aux_sym_argument_list_expression_repeat1,
  [aux_sym_lhs_expression_repeat1] = aux_sym_lhs_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
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
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallthrough] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continuing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler_comparison] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_depth_2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_depth_2d_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_depth_cube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_depth_cube_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_depth_multisampled_2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_1d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_2d_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_cube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_cube_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_multisampled_2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_storage_1d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_storage_2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_storage_2d_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture_storage_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat2x2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat2x3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat2x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat3x2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat3x3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat3x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat4x2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat4x3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat4x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8unorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8snorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba16uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba16sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba16float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rg32uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rg32sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rg32float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba32uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba32sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba32float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uniform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_global_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_global_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_const_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_return_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__literal_or_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_body] = {
    .visible = true,
    .named = true,
  },
  [sym_case_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_case_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_fallthrough_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_header] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_discard_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_const_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor_or_function_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__vec_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__mat_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_texel_format] = {
    .visible = true,
    .named = true,
  },
  [sym_address_space] = {
    .visible = true,
    .named = true,
  },
  [sym_access_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bitcast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_composite_value_decomposition_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_variable_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_expresssion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lhs_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_accessor = 1,
  field_alternative = 2,
  field_argument = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_left = 7,
  field_name = 8,
  field_parameters = 9,
  field_right = 10,
  field_subscript = 11,
  field_type = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_accessor] = "accessor",
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_subscript] = "subscript",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 4},
  [12] = {.index = 24, .length = 3},
  [13] = {.index = 27, .length = 3},
  [14] = {.index = 30, .length = 2},
  [15] = {.index = 32, .length = 1},
  [16] = {.index = 33, .length = 4},
  [17] = {.index = 37, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_type, 2},
  [2] =
    {field_argument, 1},
  [3] =
    {field_body, 4},
    {field_name, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_left, 0},
    {field_right, 2},
  [8] =
    {field_accessor, 2},
    {field_value, 0},
  [10] =
    {field_body, 5},
    {field_name, 1},
    {field_type, 4},
  [13] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 3},
  [16] =
    {field_body, 5},
    {field_name, 2},
  [18] =
    {field_subscript, 2},
    {field_value, 0},
  [20] =
    {field_body, 6},
    {field_name, 1},
    {field_parameters, 3},
    {field_type, 5},
  [24] =
    {field_body, 6},
    {field_name, 2},
    {field_type, 5},
  [27] =
    {field_body, 6},
    {field_name, 2},
    {field_parameters, 4},
  [30] =
    {field_condition, 1},
    {field_consequence, 2},
  [32] =
    {field_condition, 1},
  [33] =
    {field_body, 7},
    {field_name, 2},
    {field_parameters, 4},
    {field_type, 6},
  [37] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(97);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '&') ADVANCE(78);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(77);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '0') ADVANCE(20);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 26:
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(96);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_int_literal);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == 'f') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_float_literal_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_float_literal_token2);
      if (lookahead == 'f') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_float_literal_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == '6') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == '3') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '4') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == '2') ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 95:
      if (lookahead == '2') ADVANCE(134);
      if (lookahead == '3') ADVANCE(135);
      if (lookahead == '4') ADVANCE(136);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 115:
      if (lookahead == 'x') ADVANCE(152);
      END_STATE();
    case 116:
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 117:
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '3') ADVANCE(166);
      if (lookahead == '8') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_vec2);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_vec3);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_vec4);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == '2') ADVANCE(184);
      if (lookahead == '3') ADVANCE(185);
      if (lookahead == '4') ADVANCE(186);
      END_STATE();
    case 153:
      if (lookahead == '2') ADVANCE(187);
      if (lookahead == '3') ADVANCE(188);
      if (lookahead == '4') ADVANCE(189);
      END_STATE();
    case 154:
      if (lookahead == '2') ADVANCE(190);
      if (lookahead == '3') ADVANCE(191);
      if (lookahead == '4') ADVANCE(192);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 160:
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 165:
      if (lookahead == '6') ADVANCE(203);
      END_STATE();
    case 166:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_mat2x2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_mat2x3);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_mat2x4);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_mat3x2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_mat3x3);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_mat3x4);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_mat4x2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_mat4x3);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_mat4x4);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_bitcast);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_r32sint);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_r32uint);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_sampler);
      if (lookahead == '_') ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_storage);
      END_STATE();
    case 241:
      if (lookahead == '_') ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_uniform);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_r32float);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_rg32sint);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_rg32uint);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 265:
      if (lookahead == '1') ADVANCE(282);
      if (lookahead == '2') ADVANCE(283);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 268:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_rg32float);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_rgba8sint);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_rgba8uint);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_workgroup);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_continuing);
      END_STATE();
    case 291:
      if (lookahead == 'h') ADVANCE(309);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_read_write);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_rgba16sint);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_rgba16uint);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_rgba32sint);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_rgba32uint);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_rgba8snorm);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_rgba8unorm);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_texture_1d);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_texture_2d);
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_texture_3d);
      END_STATE();
    case 305:
      if (lookahead == 'b') ADVANCE(314);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_rgba16float);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_rgba32float);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_texture_cube);
      if (lookahead == '_') ADVANCE(326);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 327:
      if (lookahead == '_') ADVANCE(333);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 329:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 333:
      if (lookahead == '2') ADVANCE(339);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 337:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 338:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 340:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 342:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 343:
      if (lookahead == '_') ADVANCE(351);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_texture_2d_array);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_texture_depth_2d);
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 348:
      if (lookahead == 'b') ADVANCE(355);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 351:
      if (lookahead == '1') ADVANCE(358);
      if (lookahead == '2') ADVANCE(359);
      if (lookahead == '3') ADVANCE(360);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 353:
      if (lookahead == 'y') ADVANCE(362);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_sampler_comparison);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_texture_cube_array);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_texture_depth_cube);
      if (lookahead == '_') ADVANCE(371);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_texture_storage_1d);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_texture_storage_2d);
      if (lookahead == '_') ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_texture_storage_3d);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(383);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 380:
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 382:
      if (lookahead == 'm') ADVANCE(387);
      END_STATE();
    case 383:
      if (lookahead == '2') ADVANCE(388);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_texture_depth_2d_array);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 390:
      if (lookahead == 'y') ADVANCE(394);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_texture_multisampled_2d);
      END_STATE();
    case 393:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_texture_depth_cube_array);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_texture_storage_2d_array);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == '_') ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == '2') ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_texture_depth_multisampled_2d);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 27, .external_lex_state = 1},
  [3] = {.lex_state = 27, .external_lex_state = 1},
  [4] = {.lex_state = 27, .external_lex_state = 1},
  [5] = {.lex_state = 27, .external_lex_state = 1},
  [6] = {.lex_state = 27, .external_lex_state = 1},
  [7] = {.lex_state = 27, .external_lex_state = 1},
  [8] = {.lex_state = 27, .external_lex_state = 1},
  [9] = {.lex_state = 27, .external_lex_state = 1},
  [10] = {.lex_state = 27, .external_lex_state = 1},
  [11] = {.lex_state = 27, .external_lex_state = 1},
  [12] = {.lex_state = 27, .external_lex_state = 1},
  [13] = {.lex_state = 27, .external_lex_state = 1},
  [14] = {.lex_state = 27, .external_lex_state = 1},
  [15] = {.lex_state = 27, .external_lex_state = 1},
  [16] = {.lex_state = 27, .external_lex_state = 1},
  [17] = {.lex_state = 27, .external_lex_state = 1},
  [18] = {.lex_state = 27, .external_lex_state = 1},
  [19] = {.lex_state = 27, .external_lex_state = 1},
  [20] = {.lex_state = 27, .external_lex_state = 1},
  [21] = {.lex_state = 27, .external_lex_state = 1},
  [22] = {.lex_state = 27, .external_lex_state = 1},
  [23] = {.lex_state = 27, .external_lex_state = 1},
  [24] = {.lex_state = 27, .external_lex_state = 1},
  [25] = {.lex_state = 27, .external_lex_state = 1},
  [26] = {.lex_state = 27, .external_lex_state = 1},
  [27] = {.lex_state = 27, .external_lex_state = 1},
  [28] = {.lex_state = 27, .external_lex_state = 1},
  [29] = {.lex_state = 27, .external_lex_state = 1},
  [30] = {.lex_state = 27, .external_lex_state = 1},
  [31] = {.lex_state = 27, .external_lex_state = 1},
  [32] = {.lex_state = 27, .external_lex_state = 1},
  [33] = {.lex_state = 27, .external_lex_state = 1},
  [34] = {.lex_state = 27, .external_lex_state = 1},
  [35] = {.lex_state = 27, .external_lex_state = 1},
  [36] = {.lex_state = 27, .external_lex_state = 1},
  [37] = {.lex_state = 27, .external_lex_state = 1},
  [38] = {.lex_state = 27, .external_lex_state = 1},
  [39] = {.lex_state = 27, .external_lex_state = 1},
  [40] = {.lex_state = 27, .external_lex_state = 1},
  [41] = {.lex_state = 27, .external_lex_state = 1},
  [42] = {.lex_state = 27, .external_lex_state = 1},
  [43] = {.lex_state = 27, .external_lex_state = 1},
  [44] = {.lex_state = 27, .external_lex_state = 1},
  [45] = {.lex_state = 27, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 27, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 27, .external_lex_state = 1},
  [50] = {.lex_state = 0, .external_lex_state = 1},
  [51] = {.lex_state = 27, .external_lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 27, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 27, .external_lex_state = 1},
  [64] = {.lex_state = 27, .external_lex_state = 1},
  [65] = {.lex_state = 27, .external_lex_state = 1},
  [66] = {.lex_state = 27, .external_lex_state = 1},
  [67] = {.lex_state = 27, .external_lex_state = 1},
  [68] = {.lex_state = 27, .external_lex_state = 1},
  [69] = {.lex_state = 27, .external_lex_state = 1},
  [70] = {.lex_state = 27, .external_lex_state = 1},
  [71] = {.lex_state = 27, .external_lex_state = 1},
  [72] = {.lex_state = 27, .external_lex_state = 1},
  [73] = {.lex_state = 1, .external_lex_state = 1},
  [74] = {.lex_state = 1, .external_lex_state = 1},
  [75] = {.lex_state = 1, .external_lex_state = 1},
  [76] = {.lex_state = 1, .external_lex_state = 1},
  [77] = {.lex_state = 1, .external_lex_state = 1},
  [78] = {.lex_state = 1, .external_lex_state = 1},
  [79] = {.lex_state = 1, .external_lex_state = 1},
  [80] = {.lex_state = 1, .external_lex_state = 1},
  [81] = {.lex_state = 1, .external_lex_state = 1},
  [82] = {.lex_state = 1, .external_lex_state = 1},
  [83] = {.lex_state = 1, .external_lex_state = 1},
  [84] = {.lex_state = 1, .external_lex_state = 1},
  [85] = {.lex_state = 1, .external_lex_state = 1},
  [86] = {.lex_state = 1, .external_lex_state = 1},
  [87] = {.lex_state = 1, .external_lex_state = 1},
  [88] = {.lex_state = 1, .external_lex_state = 1},
  [89] = {.lex_state = 1, .external_lex_state = 1},
  [90] = {.lex_state = 1, .external_lex_state = 1},
  [91] = {.lex_state = 1, .external_lex_state = 1},
  [92] = {.lex_state = 1, .external_lex_state = 1},
  [93] = {.lex_state = 1, .external_lex_state = 1},
  [94] = {.lex_state = 1, .external_lex_state = 1},
  [95] = {.lex_state = 1, .external_lex_state = 1},
  [96] = {.lex_state = 1, .external_lex_state = 1},
  [97] = {.lex_state = 27, .external_lex_state = 1},
  [98] = {.lex_state = 27, .external_lex_state = 1},
  [99] = {.lex_state = 27, .external_lex_state = 1},
  [100] = {.lex_state = 1, .external_lex_state = 1},
  [101] = {.lex_state = 1, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 1, .external_lex_state = 1},
  [104] = {.lex_state = 1, .external_lex_state = 1},
  [105] = {.lex_state = 1, .external_lex_state = 1},
  [106] = {.lex_state = 27, .external_lex_state = 1},
  [107] = {.lex_state = 1, .external_lex_state = 1},
  [108] = {.lex_state = 1, .external_lex_state = 1},
  [109] = {.lex_state = 27, .external_lex_state = 1},
  [110] = {.lex_state = 27, .external_lex_state = 1},
  [111] = {.lex_state = 27, .external_lex_state = 1},
  [112] = {.lex_state = 1, .external_lex_state = 1},
  [113] = {.lex_state = 1, .external_lex_state = 1},
  [114] = {.lex_state = 27, .external_lex_state = 1},
  [115] = {.lex_state = 27, .external_lex_state = 1},
  [116] = {.lex_state = 1, .external_lex_state = 1},
  [117] = {.lex_state = 27, .external_lex_state = 1},
  [118] = {.lex_state = 27, .external_lex_state = 1},
  [119] = {.lex_state = 27, .external_lex_state = 1},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 1, .external_lex_state = 1},
  [122] = {.lex_state = 27, .external_lex_state = 1},
  [123] = {.lex_state = 1, .external_lex_state = 1},
  [124] = {.lex_state = 1, .external_lex_state = 1},
  [125] = {.lex_state = 27, .external_lex_state = 1},
  [126] = {.lex_state = 1, .external_lex_state = 1},
  [127] = {.lex_state = 27, .external_lex_state = 1},
  [128] = {.lex_state = 1, .external_lex_state = 1},
  [129] = {.lex_state = 1, .external_lex_state = 1},
  [130] = {.lex_state = 1, .external_lex_state = 1},
  [131] = {.lex_state = 1, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 2, .external_lex_state = 1},
  [137] = {.lex_state = 2, .external_lex_state = 1},
  [138] = {.lex_state = 2, .external_lex_state = 1},
  [139] = {.lex_state = 2, .external_lex_state = 1},
  [140] = {.lex_state = 2, .external_lex_state = 1},
  [141] = {.lex_state = 2, .external_lex_state = 1},
  [142] = {.lex_state = 2, .external_lex_state = 1},
  [143] = {.lex_state = 2, .external_lex_state = 1},
  [144] = {.lex_state = 2, .external_lex_state = 1},
  [145] = {.lex_state = 2, .external_lex_state = 1},
  [146] = {.lex_state = 2, .external_lex_state = 1},
  [147] = {.lex_state = 2, .external_lex_state = 1},
  [148] = {.lex_state = 2, .external_lex_state = 1},
  [149] = {.lex_state = 2, .external_lex_state = 1},
  [150] = {.lex_state = 2, .external_lex_state = 1},
  [151] = {.lex_state = 2, .external_lex_state = 1},
  [152] = {.lex_state = 2, .external_lex_state = 1},
  [153] = {.lex_state = 2, .external_lex_state = 1},
  [154] = {.lex_state = 2, .external_lex_state = 1},
  [155] = {.lex_state = 2, .external_lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 27, .external_lex_state = 1},
  [159] = {.lex_state = 27, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 1},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 1},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 27, .external_lex_state = 1},
  [174] = {.lex_state = 0, .external_lex_state = 1},
  [175] = {.lex_state = 27, .external_lex_state = 1},
  [176] = {.lex_state = 27, .external_lex_state = 1},
  [177] = {.lex_state = 27, .external_lex_state = 1},
  [178] = {.lex_state = 27, .external_lex_state = 1},
  [179] = {.lex_state = 27, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 27, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 27, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 27, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 27, .external_lex_state = 1},
  [192] = {.lex_state = 27, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 27, .external_lex_state = 1},
  [198] = {.lex_state = 27, .external_lex_state = 1},
  [199] = {.lex_state = 27, .external_lex_state = 1},
  [200] = {.lex_state = 0, .external_lex_state = 1},
  [201] = {.lex_state = 27, .external_lex_state = 1},
  [202] = {.lex_state = 27, .external_lex_state = 1},
  [203] = {.lex_state = 0, .external_lex_state = 1},
  [204] = {.lex_state = 0, .external_lex_state = 1},
  [205] = {.lex_state = 0, .external_lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 1},
  [207] = {.lex_state = 0, .external_lex_state = 1},
  [208] = {.lex_state = 0, .external_lex_state = 1},
  [209] = {.lex_state = 2, .external_lex_state = 1},
  [210] = {.lex_state = 2, .external_lex_state = 1},
  [211] = {.lex_state = 27, .external_lex_state = 1},
  [212] = {.lex_state = 0, .external_lex_state = 1},
  [213] = {.lex_state = 2, .external_lex_state = 1},
  [214] = {.lex_state = 0, .external_lex_state = 1},
  [215] = {.lex_state = 0, .external_lex_state = 1},
  [216] = {.lex_state = 2, .external_lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 1},
  [218] = {.lex_state = 0, .external_lex_state = 1},
  [219] = {.lex_state = 0, .external_lex_state = 1},
  [220] = {.lex_state = 0, .external_lex_state = 1},
  [221] = {.lex_state = 0, .external_lex_state = 1},
  [222] = {.lex_state = 0, .external_lex_state = 1},
  [223] = {.lex_state = 0, .external_lex_state = 1},
  [224] = {.lex_state = 0, .external_lex_state = 1},
  [225] = {.lex_state = 0, .external_lex_state = 1},
  [226] = {.lex_state = 27, .external_lex_state = 1},
  [227] = {.lex_state = 0, .external_lex_state = 1},
  [228] = {.lex_state = 0, .external_lex_state = 1},
  [229] = {.lex_state = 0, .external_lex_state = 1},
  [230] = {.lex_state = 27, .external_lex_state = 1},
  [231] = {.lex_state = 0, .external_lex_state = 1},
  [232] = {.lex_state = 0, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 27, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 27, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 27, .external_lex_state = 1},
  [242] = {.lex_state = 27, .external_lex_state = 1},
  [243] = {.lex_state = 0, .external_lex_state = 1},
  [244] = {.lex_state = 0, .external_lex_state = 1},
  [245] = {.lex_state = 0, .external_lex_state = 1},
  [246] = {.lex_state = 27, .external_lex_state = 1},
  [247] = {.lex_state = 27, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 27, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 27, .external_lex_state = 1},
  [252] = {.lex_state = 0, .external_lex_state = 1},
  [253] = {.lex_state = 27, .external_lex_state = 1},
  [254] = {.lex_state = 27, .external_lex_state = 1},
  [255] = {.lex_state = 0, .external_lex_state = 1},
  [256] = {.lex_state = 0, .external_lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 2, .external_lex_state = 1},
  [261] = {.lex_state = 0, .external_lex_state = 1},
  [262] = {.lex_state = 0, .external_lex_state = 1},
  [263] = {.lex_state = 27, .external_lex_state = 1},
  [264] = {.lex_state = 27, .external_lex_state = 1},
  [265] = {.lex_state = 0, .external_lex_state = 1},
  [266] = {.lex_state = 27, .external_lex_state = 1},
  [267] = {.lex_state = 0, .external_lex_state = 1},
  [268] = {.lex_state = 27, .external_lex_state = 1},
  [269] = {.lex_state = 0, .external_lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 1},
  [271] = {.lex_state = 0, .external_lex_state = 1},
  [272] = {.lex_state = 0, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 0, .external_lex_state = 1},
  [275] = {.lex_state = 0, .external_lex_state = 1},
  [276] = {.lex_state = 0, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 0, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 0, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 0, .external_lex_state = 1},
  [284] = {.lex_state = 0, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 27, .external_lex_state = 1},
  [288] = {.lex_state = 27, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 0, .external_lex_state = 1},
  [291] = {.lex_state = 27, .external_lex_state = 1},
  [292] = {.lex_state = 27, .external_lex_state = 1},
  [293] = {.lex_state = 0, .external_lex_state = 1},
  [294] = {.lex_state = 0, .external_lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 27, .external_lex_state = 1},
  [298] = {.lex_state = 0, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 0, .external_lex_state = 1},
  [305] = {.lex_state = 0, .external_lex_state = 1},
  [306] = {.lex_state = 27, .external_lex_state = 1},
  [307] = {.lex_state = 0, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 0, .external_lex_state = 1},
  [310] = {.lex_state = 27, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 0, .external_lex_state = 1},
  [315] = {.lex_state = 0, .external_lex_state = 1},
  [316] = {.lex_state = 0, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 0, .external_lex_state = 1},
  [320] = {.lex_state = 0, .external_lex_state = 1},
  [321] = {.lex_state = 0, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 0, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 0, .external_lex_state = 1},
  [327] = {.lex_state = 0, .external_lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 1},
  [329] = {.lex_state = 0, .external_lex_state = 1},
  [330] = {.lex_state = 0, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 0, .external_lex_state = 1},
  [335] = {.lex_state = 0, .external_lex_state = 1},
  [336] = {.lex_state = 0, .external_lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 1},
  [338] = {.lex_state = 27, .external_lex_state = 1},
  [339] = {.lex_state = 0, .external_lex_state = 1},
  [340] = {.lex_state = 0, .external_lex_state = 1},
  [341] = {.lex_state = 0, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 0, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 0, .external_lex_state = 1},
  [346] = {.lex_state = 0, .external_lex_state = 1},
  [347] = {.lex_state = 0, .external_lex_state = 1},
  [348] = {.lex_state = 27, .external_lex_state = 1},
  [349] = {.lex_state = 27, .external_lex_state = 1},
  [350] = {.lex_state = 27, .external_lex_state = 1},
  [351] = {.lex_state = 0, .external_lex_state = 1},
  [352] = {.lex_state = 0, .external_lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 1},
  [354] = {.lex_state = 0, .external_lex_state = 1},
  [355] = {.lex_state = 0, .external_lex_state = 1},
  [356] = {.lex_state = 0, .external_lex_state = 1},
  [357] = {.lex_state = 0, .external_lex_state = 1},
  [358] = {.lex_state = 0, .external_lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 1},
  [360] = {.lex_state = 0, .external_lex_state = 1},
  [361] = {.lex_state = 0, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 1},
  [363] = {.lex_state = 0, .external_lex_state = 1},
  [364] = {.lex_state = 0, .external_lex_state = 1},
  [365] = {.lex_state = 0, .external_lex_state = 1},
  [366] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token_block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_fallthrough] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_continuing] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [aux_sym_float_literal_token1] = ACTIONS(1),
    [aux_sym_float_literal_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_sampler] = ACTIONS(1),
    [anon_sym_sampler_comparison] = ACTIONS(1),
    [anon_sym_texture_depth_2d] = ACTIONS(1),
    [anon_sym_texture_depth_2d_array] = ACTIONS(1),
    [anon_sym_texture_depth_cube] = ACTIONS(1),
    [anon_sym_texture_depth_cube_array] = ACTIONS(1),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(1),
    [anon_sym_texture_1d] = ACTIONS(1),
    [anon_sym_texture_2d] = ACTIONS(1),
    [anon_sym_texture_2d_array] = ACTIONS(1),
    [anon_sym_texture_3d] = ACTIONS(1),
    [anon_sym_texture_cube] = ACTIONS(1),
    [anon_sym_texture_cube_array] = ACTIONS(1),
    [anon_sym_texture_multisampled_2d] = ACTIONS(1),
    [anon_sym_texture_storage_1d] = ACTIONS(1),
    [anon_sym_texture_storage_2d] = ACTIONS(1),
    [anon_sym_texture_storage_2d_array] = ACTIONS(1),
    [anon_sym_texture_storage_3d] = ACTIONS(1),
    [anon_sym_vec2] = ACTIONS(1),
    [anon_sym_vec3] = ACTIONS(1),
    [anon_sym_vec4] = ACTIONS(1),
    [anon_sym_mat2x2] = ACTIONS(1),
    [anon_sym_mat2x3] = ACTIONS(1),
    [anon_sym_mat2x4] = ACTIONS(1),
    [anon_sym_mat3x2] = ACTIONS(1),
    [anon_sym_mat3x3] = ACTIONS(1),
    [anon_sym_mat3x4] = ACTIONS(1),
    [anon_sym_mat4x2] = ACTIONS(1),
    [anon_sym_mat4x3] = ACTIONS(1),
    [anon_sym_mat4x4] = ACTIONS(1),
    [anon_sym_rgba8unorm] = ACTIONS(1),
    [anon_sym_rgba8snorm] = ACTIONS(1),
    [anon_sym_rgba8uint] = ACTIONS(1),
    [anon_sym_rgba8sint] = ACTIONS(1),
    [anon_sym_rgba16uint] = ACTIONS(1),
    [anon_sym_rgba16sint] = ACTIONS(1),
    [anon_sym_rgba16float] = ACTIONS(1),
    [anon_sym_r32uint] = ACTIONS(1),
    [anon_sym_r32sint] = ACTIONS(1),
    [anon_sym_r32float] = ACTIONS(1),
    [anon_sym_rg32uint] = ACTIONS(1),
    [anon_sym_rg32sint] = ACTIONS(1),
    [anon_sym_rg32float] = ACTIONS(1),
    [anon_sym_rgba32uint] = ACTIONS(1),
    [anon_sym_rgba32sint] = ACTIONS(1),
    [anon_sym_rgba32float] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_workgroup] = ACTIONS(1),
    [anon_sym_uniform] = ACTIONS(1),
    [anon_sym_storage] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_read_write] = ACTIONS(1),
    [anon_sym_bitcast] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(358),
    [sym__declaration] = STATE(134),
    [sym_global_variable_declaration] = STATE(357),
    [sym_global_constant_declaration] = STATE(357),
    [sym_type_alias_declaration] = STATE(357),
    [sym_function_declaration] = STATE(134),
    [sym_struct_declaration] = STATE(134),
    [sym_enable_directive] = STATE(102),
    [sym_attribute] = STATE(184),
    [sym_variable_declaration] = STATE(246),
    [aux_sym_source_file_repeat1] = STATE(102),
    [aux_sym_source_file_repeat2] = STATE(134),
    [aux_sym_global_variable_declaration_repeat1] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_override] = ACTIONS(11),
    [anon_sym_alias] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_enable] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(100),
    [sym_const_literal] = STATE(100),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(100),
    [sym_type_constructor_or_function_call_expression] = STATE(100),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_subscript_expression] = STATE(100),
    [sym_composite_value_decomposition_expression] = STATE(100),
    [aux_sym_argument_list_expression_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(124),
    [sym_const_literal] = STATE(124),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(124),
    [sym_type_constructor_or_function_call_expression] = STATE(124),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_unary_expression] = STATE(124),
    [sym_subscript_expression] = STATE(124),
    [sym_composite_value_decomposition_expression] = STATE(124),
    [aux_sym_argument_list_expression_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(55),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_int_literal] = ACTIONS(61),
    [aux_sym_float_literal_token1] = ACTIONS(64),
    [aux_sym_float_literal_token2] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_bool] = ACTIONS(70),
    [anon_sym_u32] = ACTIONS(70),
    [anon_sym_i32] = ACTIONS(70),
    [anon_sym_f32] = ACTIONS(70),
    [anon_sym_f16] = ACTIONS(70),
    [anon_sym_array] = ACTIONS(73),
    [anon_sym_ptr] = ACTIONS(76),
    [anon_sym_sampler] = ACTIONS(70),
    [anon_sym_sampler_comparison] = ACTIONS(70),
    [anon_sym_texture_depth_2d] = ACTIONS(70),
    [anon_sym_texture_depth_2d_array] = ACTIONS(70),
    [anon_sym_texture_depth_cube] = ACTIONS(70),
    [anon_sym_texture_depth_cube_array] = ACTIONS(70),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(70),
    [anon_sym_texture_1d] = ACTIONS(79),
    [anon_sym_texture_2d] = ACTIONS(79),
    [anon_sym_texture_2d_array] = ACTIONS(79),
    [anon_sym_texture_3d] = ACTIONS(79),
    [anon_sym_texture_cube] = ACTIONS(79),
    [anon_sym_texture_cube_array] = ACTIONS(79),
    [anon_sym_texture_multisampled_2d] = ACTIONS(79),
    [anon_sym_texture_storage_1d] = ACTIONS(82),
    [anon_sym_texture_storage_2d] = ACTIONS(82),
    [anon_sym_texture_storage_2d_array] = ACTIONS(82),
    [anon_sym_texture_storage_3d] = ACTIONS(82),
    [anon_sym_vec2] = ACTIONS(85),
    [anon_sym_vec3] = ACTIONS(85),
    [anon_sym_vec4] = ACTIONS(85),
    [anon_sym_mat2x2] = ACTIONS(85),
    [anon_sym_mat2x3] = ACTIONS(85),
    [anon_sym_mat2x4] = ACTIONS(85),
    [anon_sym_mat3x2] = ACTIONS(85),
    [anon_sym_mat3x3] = ACTIONS(85),
    [anon_sym_mat3x4] = ACTIONS(85),
    [anon_sym_mat4x2] = ACTIONS(85),
    [anon_sym_mat4x3] = ACTIONS(85),
    [anon_sym_mat4x4] = ACTIONS(85),
    [anon_sym_bitcast] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(104),
    [sym_const_literal] = STATE(104),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(104),
    [sym_type_constructor_or_function_call_expression] = STATE(104),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(104),
    [sym_binary_expression] = STATE(104),
    [sym_unary_expression] = STATE(104),
    [sym_subscript_expression] = STATE(104),
    [sym_composite_value_decomposition_expression] = STATE(104),
    [aux_sym_argument_list_expression_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expression] = STATE(121),
    [sym_const_literal] = STATE(121),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(121),
    [sym_type_constructor_or_function_call_expression] = STATE(121),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_subscript_expression] = STATE(121),
    [sym_composite_value_decomposition_expression] = STATE(121),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__expression] = STATE(108),
    [sym_const_literal] = STATE(108),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(108),
    [sym_type_constructor_or_function_call_expression] = STATE(108),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_unary_expression] = STATE(108),
    [sym_subscript_expression] = STATE(108),
    [sym_composite_value_decomposition_expression] = STATE(108),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__expression] = STATE(112),
    [sym_const_literal] = STATE(112),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(112),
    [sym_type_constructor_or_function_call_expression] = STATE(112),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_subscript_expression] = STATE(112),
    [sym_composite_value_decomposition_expression] = STATE(112),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__expression] = STATE(123),
    [sym_const_literal] = STATE(123),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(123),
    [sym_type_constructor_or_function_call_expression] = STATE(123),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_unary_expression] = STATE(123),
    [sym_subscript_expression] = STATE(123),
    [sym_composite_value_decomposition_expression] = STATE(123),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__expression] = STATE(120),
    [sym_const_literal] = STATE(120),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(120),
    [sym_type_constructor_or_function_call_expression] = STATE(120),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_unary_expression] = STATE(120),
    [sym_subscript_expression] = STATE(120),
    [sym_composite_value_decomposition_expression] = STATE(120),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__expression] = STATE(88),
    [sym_const_literal] = STATE(88),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(88),
    [sym_type_constructor_or_function_call_expression] = STATE(88),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(88),
    [sym_binary_expression] = STATE(88),
    [sym_unary_expression] = STATE(88),
    [sym_subscript_expression] = STATE(88),
    [sym_composite_value_decomposition_expression] = STATE(88),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__expression] = STATE(78),
    [sym_const_literal] = STATE(78),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(78),
    [sym_type_constructor_or_function_call_expression] = STATE(78),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(78),
    [sym_binary_expression] = STATE(78),
    [sym_unary_expression] = STATE(78),
    [sym_subscript_expression] = STATE(78),
    [sym_composite_value_decomposition_expression] = STATE(78),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__expression] = STATE(90),
    [sym_const_literal] = STATE(90),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(90),
    [sym_type_constructor_or_function_call_expression] = STATE(90),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(90),
    [sym_binary_expression] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [sym_subscript_expression] = STATE(90),
    [sym_composite_value_decomposition_expression] = STATE(90),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__expression] = STATE(128),
    [sym_const_literal] = STATE(128),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(128),
    [sym_type_constructor_or_function_call_expression] = STATE(128),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(128),
    [sym_binary_expression] = STATE(128),
    [sym_unary_expression] = STATE(128),
    [sym_subscript_expression] = STATE(128),
    [sym_composite_value_decomposition_expression] = STATE(128),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__expression] = STATE(130),
    [sym_const_literal] = STATE(130),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(130),
    [sym_type_constructor_or_function_call_expression] = STATE(130),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(130),
    [sym_binary_expression] = STATE(130),
    [sym_unary_expression] = STATE(130),
    [sym_subscript_expression] = STATE(130),
    [sym_composite_value_decomposition_expression] = STATE(130),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__expression] = STATE(105),
    [sym_const_literal] = STATE(105),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(105),
    [sym_type_constructor_or_function_call_expression] = STATE(105),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(105),
    [sym_binary_expression] = STATE(105),
    [sym_unary_expression] = STATE(105),
    [sym_subscript_expression] = STATE(105),
    [sym_composite_value_decomposition_expression] = STATE(105),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__expression] = STATE(131),
    [sym_const_literal] = STATE(131),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(131),
    [sym_type_constructor_or_function_call_expression] = STATE(131),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(131),
    [sym_binary_expression] = STATE(131),
    [sym_unary_expression] = STATE(131),
    [sym_subscript_expression] = STATE(131),
    [sym_composite_value_decomposition_expression] = STATE(131),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__expression] = STATE(101),
    [sym_const_literal] = STATE(101),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(101),
    [sym_type_constructor_or_function_call_expression] = STATE(101),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [sym_unary_expression] = STATE(101),
    [sym_subscript_expression] = STATE(101),
    [sym_composite_value_decomposition_expression] = STATE(101),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__expression] = STATE(107),
    [sym_const_literal] = STATE(107),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(107),
    [sym_type_constructor_or_function_call_expression] = STATE(107),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_unary_expression] = STATE(107),
    [sym_subscript_expression] = STATE(107),
    [sym_composite_value_decomposition_expression] = STATE(107),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__expression] = STATE(93),
    [sym_const_literal] = STATE(93),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(93),
    [sym_type_constructor_or_function_call_expression] = STATE(93),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_subscript_expression] = STATE(93),
    [sym_composite_value_decomposition_expression] = STATE(93),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__expression] = STATE(103),
    [sym_const_literal] = STATE(103),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(103),
    [sym_type_constructor_or_function_call_expression] = STATE(103),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(103),
    [sym_binary_expression] = STATE(103),
    [sym_unary_expression] = STATE(103),
    [sym_subscript_expression] = STATE(103),
    [sym_composite_value_decomposition_expression] = STATE(103),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__expression] = STATE(94),
    [sym_const_literal] = STATE(94),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(94),
    [sym_type_constructor_or_function_call_expression] = STATE(94),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_unary_expression] = STATE(94),
    [sym_subscript_expression] = STATE(94),
    [sym_composite_value_decomposition_expression] = STATE(94),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__expression] = STATE(86),
    [sym_const_literal] = STATE(86),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(86),
    [sym_type_constructor_or_function_call_expression] = STATE(86),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(86),
    [sym_binary_expression] = STATE(86),
    [sym_unary_expression] = STATE(86),
    [sym_subscript_expression] = STATE(86),
    [sym_composite_value_decomposition_expression] = STATE(86),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__expression] = STATE(95),
    [sym_const_literal] = STATE(95),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(95),
    [sym_type_constructor_or_function_call_expression] = STATE(95),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_unary_expression] = STATE(95),
    [sym_subscript_expression] = STATE(95),
    [sym_composite_value_decomposition_expression] = STATE(95),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__expression] = STATE(113),
    [sym_const_literal] = STATE(113),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(113),
    [sym_type_constructor_or_function_call_expression] = STATE(113),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(113),
    [sym_binary_expression] = STATE(113),
    [sym_unary_expression] = STATE(113),
    [sym_subscript_expression] = STATE(113),
    [sym_composite_value_decomposition_expression] = STATE(113),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__expression] = STATE(82),
    [sym_const_literal] = STATE(82),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(82),
    [sym_type_constructor_or_function_call_expression] = STATE(82),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(82),
    [sym_binary_expression] = STATE(82),
    [sym_unary_expression] = STATE(82),
    [sym_subscript_expression] = STATE(82),
    [sym_composite_value_decomposition_expression] = STATE(82),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__expression] = STATE(116),
    [sym_const_literal] = STATE(116),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(116),
    [sym_type_constructor_or_function_call_expression] = STATE(116),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(116),
    [sym_binary_expression] = STATE(116),
    [sym_unary_expression] = STATE(116),
    [sym_subscript_expression] = STATE(116),
    [sym_composite_value_decomposition_expression] = STATE(116),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__expression] = STATE(126),
    [sym_const_literal] = STATE(126),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(126),
    [sym_type_constructor_or_function_call_expression] = STATE(126),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(126),
    [sym_binary_expression] = STATE(126),
    [sym_unary_expression] = STATE(126),
    [sym_subscript_expression] = STATE(126),
    [sym_composite_value_decomposition_expression] = STATE(126),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__expression] = STATE(129),
    [sym_const_literal] = STATE(129),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(129),
    [sym_type_constructor_or_function_call_expression] = STATE(129),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(129),
    [sym_binary_expression] = STATE(129),
    [sym_unary_expression] = STATE(129),
    [sym_subscript_expression] = STATE(129),
    [sym_composite_value_decomposition_expression] = STATE(129),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__expression] = STATE(85),
    [sym_const_literal] = STATE(85),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(85),
    [sym_type_constructor_or_function_call_expression] = STATE(85),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_unary_expression] = STATE(85),
    [sym_subscript_expression] = STATE(85),
    [sym_composite_value_decomposition_expression] = STATE(85),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__expression] = STATE(83),
    [sym_const_literal] = STATE(83),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(83),
    [sym_type_constructor_or_function_call_expression] = STATE(83),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(83),
    [sym_binary_expression] = STATE(83),
    [sym_unary_expression] = STATE(83),
    [sym_subscript_expression] = STATE(83),
    [sym_composite_value_decomposition_expression] = STATE(83),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__expression] = STATE(77),
    [sym_const_literal] = STATE(77),
    [sym_float_literal] = STATE(74),
    [sym_bool_literal] = STATE(74),
    [sym_parenthesized_expression] = STATE(77),
    [sym_type_constructor_or_function_call_expression] = STATE(77),
    [sym_type_declaration] = STATE(270),
    [sym__vec_prefix] = STATE(222),
    [sym__mat_prefix] = STATE(222),
    [sym_bitcast_expression] = STATE(77),
    [sym_binary_expression] = STATE(77),
    [sym_unary_expression] = STATE(77),
    [sym_subscript_expression] = STATE(77),
    [sym_composite_value_decomposition_expression] = STATE(77),
    [sym_identifier] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_int_literal] = ACTIONS(31),
    [aux_sym_float_literal_token1] = ACTIONS(33),
    [aux_sym_float_literal_token2] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_bool] = ACTIONS(37),
    [anon_sym_u32] = ACTIONS(37),
    [anon_sym_i32] = ACTIONS(37),
    [anon_sym_f32] = ACTIONS(37),
    [anon_sym_f16] = ACTIONS(37),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_ptr] = ACTIONS(41),
    [anon_sym_sampler] = ACTIONS(37),
    [anon_sym_sampler_comparison] = ACTIONS(37),
    [anon_sym_texture_depth_2d] = ACTIONS(37),
    [anon_sym_texture_depth_2d_array] = ACTIONS(37),
    [anon_sym_texture_depth_cube] = ACTIONS(37),
    [anon_sym_texture_depth_cube_array] = ACTIONS(37),
    [anon_sym_texture_depth_multisampled_2d] = ACTIONS(37),
    [anon_sym_texture_1d] = ACTIONS(43),
    [anon_sym_texture_2d] = ACTIONS(43),
    [anon_sym_texture_2d_array] = ACTIONS(43),
    [anon_sym_texture_3d] = ACTIONS(43),
    [anon_sym_texture_cube] = ACTIONS(43),
    [anon_sym_texture_cube_array] = ACTIONS(43),
    [anon_sym_texture_multisampled_2d] = ACTIONS(43),
    [anon_sym_texture_storage_1d] = ACTIONS(45),
    [anon_sym_texture_storage_2d] = ACTIONS(45),
    [anon_sym_texture_storage_2d_array] = ACTIONS(45),
    [anon_sym_texture_storage_3d] = ACTIONS(45),
    [anon_sym_vec2] = ACTIONS(47),
    [anon_sym_vec3] = ACTIONS(47),
    [anon_sym_vec4] = ACTIONS(47),
    [anon_sym_mat2x2] = ACTIONS(47),
    [anon_sym_mat2x3] = ACTIONS(47),
    [anon_sym_mat2x4] = ACTIONS(47),
    [anon_sym_mat3x2] = ACTIONS(47),
    [anon_sym_mat3x3] = ACTIONS(47),
    [anon_sym_mat3x4] = ACTIONS(47),
    [anon_sym_mat4x2] = ACTIONS(47),
    [anon_sym_mat4x3] = ACTIONS(47),
    [anon_sym_mat4x4] = ACTIONS(47),
    [anon_sym_bitcast] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_TILDE] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(270), 1,
      sym_type_declaration,
    STATE(298), 1,
      sym_for_header,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(222), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    STATE(303), 5,
      sym_assignment_statement,
      sym_variable_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_type_constructor_or_function_call_expression,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(37), 12,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
    ACTIONS(47), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [108] = 17,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(270), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(222), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    STATE(345), 4,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_type_constructor_or_function_call_expression,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(37), 12,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
    ACTIONS(47), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [197] = 17,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_const_expresssion_repeat1,
    STATE(228), 1,
      sym_const_literal,
    STATE(285), 1,
      sym_const_expression,
    STATE(321), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [286] = 17,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(270), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(222), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    STATE(327), 4,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_type_constructor_or_function_call_expression,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(37), 12,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
    ACTIONS(47), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [375] = 17,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(270), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(222), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    STATE(356), 4,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_type_constructor_or_function_call_expression,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(37), 12,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
    ACTIONS(47), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [464] = 16,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(38), 1,
      aux_sym_const_expresssion_repeat1,
    STATE(228), 1,
      sym_const_literal,
    STATE(258), 1,
      sym_const_expression,
    STATE(321), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [550] = 16,
    ACTIONS(132), 1,
      sym_int_literal,
    ACTIONS(141), 1,
      anon_sym_array,
    ACTIONS(144), 1,
      anon_sym_ptr,
    STATE(38), 1,
      aux_sym_const_expresssion_repeat1,
    STATE(228), 1,
      sym_const_literal,
    STATE(321), 1,
      sym_type_declaration,
    STATE(337), 1,
      sym_const_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(135), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(138), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(150), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(147), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(153), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(129), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [636] = 4,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 7,
      anon_sym_LPAREN,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(156), 43,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
      anon_sym_bitcast,
      anon_sym_DASH,
  [698] = 4,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 7,
      anon_sym_LPAREN,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(156), 43,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
      anon_sym_bitcast,
      anon_sym_DASH,
  [760] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 7,
      anon_sym_LPAREN,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(156), 43,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
      anon_sym_bitcast,
      anon_sym_DASH,
  [819] = 15,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(228), 1,
      sym_const_literal,
    STATE(321), 1,
      sym_type_declaration,
    STATE(325), 1,
      sym_const_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [902] = 15,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(228), 1,
      sym_const_literal,
    STATE(316), 1,
      sym_const_expression,
    STATE(321), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [985] = 15,
    ACTIONS(31), 1,
      sym_int_literal,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(228), 1,
      sym_const_literal,
    STATE(300), 1,
      sym_const_expression,
    STATE(321), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1068] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(166), 7,
      anon_sym_LPAREN,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(164), 43,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
      anon_sym_bitcast,
      anon_sym_DASH,
  [1127] = 4,
    ACTIONS(170), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    ACTIONS(168), 41,
      anon_sym_override,
      anon_sym_fn,
      sym_identifier,
      anon_sym_var,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1182] = 4,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(173), 41,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1237] = 11,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(305), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(50), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1306] = 4,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(173), 41,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1361] = 11,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(341), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1430] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(173), 41,
      sym_identifier,
      sym_int_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1482] = 4,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 41,
      anon_sym_override,
      anon_sym_fn,
      sym_identifier,
      anon_sym_var,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1536] = 3,
    ACTIONS(189), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(187), 41,
      anon_sym_override,
      anon_sym_fn,
      sym_identifier,
      anon_sym_var,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1587] = 3,
    ACTIONS(193), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(191), 41,
      anon_sym_override,
      anon_sym_fn,
      sym_identifier,
      anon_sym_var,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1638] = 3,
    ACTIONS(197), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(195), 41,
      anon_sym_override,
      anon_sym_fn,
      sym_identifier,
      anon_sym_var,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_array,
      anon_sym_ptr,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
  [1689] = 9,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(288), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1751] = 9,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(202), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1813] = 9,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(287), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1875] = 9,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(313), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1937] = 9,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(254), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [1999] = 27,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_break,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(219), 1,
      anon_sym_continuing,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(307), 1,
      sym_continuing_statement,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(65), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2097] = 9,
    ACTIONS(39), 1,
      anon_sym_array,
    ACTIONS(41), 1,
      anon_sym_ptr,
    STATE(297), 1,
      sym_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym__vec_prefix,
      sym__mat_prefix,
    ACTIONS(45), 4,
      anon_sym_texture_storage_1d,
      anon_sym_texture_storage_2d,
      anon_sym_texture_storage_2d_array,
      anon_sym_texture_storage_3d,
    ACTIONS(43), 7,
      anon_sym_texture_1d,
      anon_sym_texture_2d,
      anon_sym_texture_2d_array,
      anon_sym_texture_3d,
      anon_sym_texture_cube,
      anon_sym_texture_cube_array,
      anon_sym_texture_multisampled_2d,
    ACTIONS(123), 12,
      anon_sym_vec2,
      anon_sym_vec3,
      anon_sym_vec4,
      anon_sym_mat2x2,
      anon_sym_mat2x3,
      anon_sym_mat2x4,
      anon_sym_mat3x2,
      anon_sym_mat3x3,
      anon_sym_mat3x4,
      anon_sym_mat4x2,
      anon_sym_mat4x3,
      anon_sym_mat4x4,
    ACTIONS(37), 13,
      sym_identifier,
      anon_sym_bool,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
      anon_sym_sampler,
      anon_sym_sampler_comparison,
      anon_sym_texture_depth_2d,
      anon_sym_texture_depth_2d_array,
      anon_sym_texture_depth_cube,
      anon_sym_texture_depth_cube_array,
      anon_sym_texture_depth_multisampled_2d,
  [2159] = 27,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_break,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      anon_sym_fallthrough,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(331), 1,
      sym_const_declaration,
    STATE(340), 1,
      sym_fallthrough_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(64), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2257] = 27,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_break,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(227), 1,
      anon_sym_fallthrough,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(331), 1,
      sym_const_declaration,
    STATE(353), 1,
      sym_fallthrough_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(66), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2355] = 27,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_break,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(219), 1,
      anon_sym_continuing,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(304), 1,
      sym_continuing_statement,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(66), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2453] = 26,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_let,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      anon_sym__,
    ACTIONS(250), 1,
      anon_sym_if,
    ACTIONS(253), 1,
      anon_sym_switch,
    ACTIONS(258), 1,
      anon_sym_loop,
    ACTIONS(261), 1,
      anon_sym_for,
    ACTIONS(264), 1,
      anon_sym_while,
    ACTIONS(267), 1,
      anon_sym_break,
    ACTIONS(270), 1,
      anon_sym_continue,
    ACTIONS(273), 1,
      anon_sym_return,
    ACTIONS(276), 1,
      anon_sym_discard,
    ACTIONS(279), 1,
      anon_sym_var,
    ACTIONS(282), 1,
      anon_sym_const,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 2,
      anon_sym_fallthrough,
      anon_sym_continuing,
    ACTIONS(285), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(66), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2549] = 26,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      anon_sym_break,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(331), 1,
      sym_const_declaration,
    STATE(344), 1,
      sym_break_if_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(66), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2644] = 26,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(290), 1,
      anon_sym_break,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(324), 1,
      sym_break_if_statement,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(67), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2739] = 25,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_break,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(70), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2831] = 25,
    ACTIONS(107), 1,
      anon_sym_let,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_var,
    ACTIONS(115), 1,
      anon_sym_const,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_if,
    ACTIONS(207), 1,
      anon_sym_switch,
    ACTIONS(209), 1,
      anon_sym_loop,
    ACTIONS(211), 1,
      anon_sym_for,
    ACTIONS(213), 1,
      anon_sym_while,
    ACTIONS(215), 1,
      anon_sym_break,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(221), 1,
      anon_sym_return,
    ACTIONS(223), 1,
      anon_sym_discard,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_lhs_expression,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(241), 1,
      sym_variable_declaration,
    STATE(331), 1,
      sym_const_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(323), 3,
      sym_assignment_statement,
      sym_return_statement,
      sym_variable_statement,
    STATE(66), 13,
      sym__statement,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_discard_statement,
      sym_increment_statement,
      sym_decrement_statement,
      aux_sym_compound_statement_repeat1,
  [2923] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(300), 21,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [2961] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(304), 21,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [2999] = 4,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(306), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3036] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(314), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(312), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3071] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(316), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3106] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(320), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3141] = 15,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [3199] = 12,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(324), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [3251] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(356), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(354), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3285] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(358), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3319] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(362), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3353] = 9,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(324), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
  [3399] = 14,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3455] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(368), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(366), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3489] = 14,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3545] = 13,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [3599] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(370), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3633] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(374), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3667] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(378), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3701] = 11,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(324), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
  [3751] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(384), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(382), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3785] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(388), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(386), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3819] = 8,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(324), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RBRACK,
  [3863] = 7,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(352), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(324), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [3905] = 5,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(352), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(324), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [3943] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(392), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SLASH,
    ACTIONS(390), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [3977] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(394), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4009] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(398), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4041] = 4,
    ACTIONS(406), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(404), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(402), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4074] = 17,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4133] = 17,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    STATE(99), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4192] = 16,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_override,
    ACTIONS(13), 1,
      anon_sym_alias,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_enable,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      sym_variable_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_enable_directive,
      aux_sym_source_file_repeat1,
    STATE(184), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    STATE(357), 3,
      sym_global_variable_declaration,
      sym_global_constant_declaration,
      sym_type_alias_declaration,
    STATE(132), 4,
      sym__declaration,
      sym_function_declaration,
      sym_struct_declaration,
      aux_sym_source_file_repeat2,
  [4249] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [4306] = 17,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4365] = 17,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    STATE(127), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4424] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(424), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(422), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4454] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4510] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4566] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(432), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(430), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4596] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(434), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4626] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(440), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(438), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4656] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4712] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4768] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(448), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(446), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4798] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(452), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(450), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4828] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4884] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(458), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(456), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4914] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(462), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(460), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4944] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(466), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(464), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [4974] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5030] = 16,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5086] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(472), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(470), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [5116] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5172] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5228] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(480), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(478), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [5258] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5314] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(486), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(484), 16,
      anon_sym_let,
      sym_identifier,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_fallthrough,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_discard,
      anon_sym_var,
      anon_sym_const,
  [5344] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5400] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5456] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5512] = 16,
    ACTIONS(328), 1,
      anon_sym_AMP_AMP,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_CARET,
    ACTIONS(334), 1,
      anon_sym_AMP,
    ACTIONS(346), 1,
      anon_sym_SLASH,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(338), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(342), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5568] = 14,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_override,
    ACTIONS(13), 1,
      anon_sym_alias,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      sym_variable_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    STATE(357), 3,
      sym_global_variable_declaration,
      sym_global_constant_declaration,
      sym_type_alias_declaration,
    STATE(133), 4,
      sym__declaration,
      sym_function_declaration,
      sym_struct_declaration,
      aux_sym_source_file_repeat2,
  [5618] = 14,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    ACTIONS(505), 1,
      anon_sym_let,
    ACTIONS(508), 1,
      anon_sym_override,
    ACTIONS(511), 1,
      anon_sym_alias,
    ACTIONS(514), 1,
      anon_sym_fn,
    ACTIONS(517), 1,
      anon_sym_struct,
    ACTIONS(520), 1,
      anon_sym_AT,
    ACTIONS(523), 1,
      anon_sym_var,
    STATE(246), 1,
      sym_variable_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    STATE(357), 3,
      sym_global_variable_declaration,
      sym_global_constant_declaration,
      sym_type_alias_declaration,
    STATE(133), 4,
      sym__declaration,
      sym_function_declaration,
      sym_struct_declaration,
      aux_sym_source_file_repeat2,
  [5668] = 14,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_override,
    ACTIONS(13), 1,
      anon_sym_alias,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      sym_variable_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(184), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
    STATE(357), 3,
      sym_global_variable_declaration,
      sym_global_constant_declaration,
      sym_type_alias_declaration,
    STATE(133), 4,
      sym__declaration,
      sym_function_declaration,
      sym_struct_declaration,
      aux_sym_source_file_repeat2,
  [5718] = 3,
    STATE(293), 1,
      sym_texel_format,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(526), 16,
      anon_sym_rgba8unorm,
      anon_sym_rgba8snorm,
      anon_sym_rgba8uint,
      anon_sym_rgba8sint,
      anon_sym_rgba16uint,
      anon_sym_rgba16sint,
      anon_sym_rgba16float,
      anon_sym_r32uint,
      anon_sym_r32sint,
      anon_sym_r32float,
      anon_sym_rg32uint,
      anon_sym_rg32sint,
      anon_sym_rg32float,
      anon_sym_rgba32uint,
      anon_sym_rgba32sint,
      anon_sym_rgba32float,
  [5744] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(528), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [5772] = 3,
    STATE(149), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [5796] = 3,
    STATE(150), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [5820] = 3,
    STATE(137), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [5844] = 5,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_DOT,
    STATE(148), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [5872] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(153), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(544), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [5900] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(154), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(546), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [5928] = 6,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(528), 11,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [5958] = 3,
    STATE(138), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [5982] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(155), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(548), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6010] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(149), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6038] = 5,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_DOT,
    STATE(146), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6066] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(150), 1,
      sym_postfix_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(536), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6094] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(550), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6115] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(534), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [6136] = 6,
    ACTIONS(552), 1,
      anon_sym_EQ,
    ACTIONS(556), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(558), 1,
      anon_sym_DASH_DASH,
    STATE(20), 1,
      sym_compound_assignment_operator,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(554), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
  [6163] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(544), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6182] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(546), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6201] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(548), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6220] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(560), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [6239] = 4,
    ACTIONS(564), 1,
      anon_sym_enable,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(156), 2,
      sym_enable_directive,
      aux_sym_source_file_repeat1,
    ACTIONS(562), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6262] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(567), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_enable,
      anon_sym_AT,
      anon_sym_var,
  [6279] = 7,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(236), 1,
      sym_const_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(569), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
    ACTIONS(571), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
  [6306] = 7,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(236), 1,
      sym_const_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(571), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(573), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
  [6333] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(575), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6349] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(577), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6365] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(579), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6381] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(581), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6397] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(583), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6413] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(585), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6429] = 9,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_parameter_list_repeat1,
    STATE(271), 1,
      sym_parameter,
    STATE(274), 1,
      sym_variable_identifier_declaration,
    STATE(295), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(196), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6459] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6475] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6491] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(595), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6507] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(597), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6523] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(599), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6539] = 9,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_parameter_list_repeat1,
    STATE(271), 1,
      sym_parameter,
    STATE(274), 1,
      sym_variable_identifier_declaration,
    STATE(311), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(196), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6569] = 7,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(205), 1,
      sym_const_literal,
    STATE(224), 1,
      sym_case_selectors,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(571), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
  [6595] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(603), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_override,
      anon_sym_alias,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_AT,
      anon_sym_var,
  [6611] = 6,
    ACTIONS(31), 1,
      sym_int_literal,
    STATE(236), 1,
      sym_const_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    ACTIONS(571), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(74), 2,
      sym_float_literal,
      sym_bool_literal,
  [6634] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(605), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_GT,
  [6649] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_GT,
  [6664] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(607), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_GT,
  [6679] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(609), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_GT,
  [6694] = 7,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(275), 1,
      sym_struct_member,
    STATE(277), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(200), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6718] = 7,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_parameter_list_repeat1,
    STATE(274), 1,
      sym_variable_identifier_declaration,
    STATE(282), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(196), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6742] = 6,
    ACTIONS(611), 1,
      sym_identifier,
    ACTIONS(613), 1,
      sym_int_literal,
    STATE(185), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    STATE(278), 2,
      sym__literal_or_identifier,
      sym_float_literal,
  [6764] = 7,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(187), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(277), 1,
      sym_variable_identifier_declaration,
    STATE(284), 1,
      sym_struct_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(200), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6788] = 7,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(615), 1,
      anon_sym_override,
    ACTIONS(617), 1,
      anon_sym_fn,
    STATE(242), 1,
      sym_variable_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6812] = 6,
    ACTIONS(619), 1,
      sym_identifier,
    ACTIONS(621), 1,
      sym_int_literal,
    STATE(188), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(33), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    STATE(261), 2,
      sym__literal_or_identifier,
      sym_float_literal,
  [6834] = 7,
    ACTIONS(623), 1,
      sym_identifier,
    ACTIONS(626), 1,
      anon_sym_AT,
    STATE(186), 1,
      aux_sym_parameter_list_repeat1,
    STATE(274), 1,
      sym_variable_identifier_declaration,
    STATE(332), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(196), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6858] = 7,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_AT,
    STATE(187), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(277), 1,
      sym_variable_identifier_declaration,
    STATE(333), 1,
      sym_struct_member,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(200), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [6882] = 6,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(638), 1,
      sym_int_literal,
    STATE(188), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(641), 2,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
    STATE(334), 2,
      sym__literal_or_identifier,
      sym_float_literal,
  [6904] = 3,
    STATE(289), 1,
      sym_address_space,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(644), 5,
      anon_sym_function,
      anon_sym_private,
      anon_sym_workgroup,
      anon_sym_uniform,
      anon_sym_storage,
  [6919] = 3,
    STATE(264), 1,
      sym_address_space,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(644), 5,
      anon_sym_function,
      anon_sym_private,
      anon_sym_workgroup,
      anon_sym_uniform,
      anon_sym_storage,
  [6934] = 6,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(294), 1,
      sym_lhs_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [6955] = 6,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(352), 1,
      sym_lhs_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [6976] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_if,
    STATE(111), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(125), 2,
      sym_compound_statement,
      sym_if_statement,
  [6994] = 5,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_case,
    ACTIONS(655), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(194), 2,
      sym_switch_body,
      aux_sym_switch_statement_repeat1,
  [7012] = 5,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_case,
    ACTIONS(662), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(194), 2,
      sym_switch_body,
      aux_sym_switch_statement_repeat1,
  [7030] = 5,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(280), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [7048] = 4,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(668), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      sym_identifier,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
  [7064] = 4,
    ACTIONS(668), 1,
      sym_int_literal,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      sym_identifier,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
  [7080] = 5,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      aux_sym_lhs_expression_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [7098] = 5,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(283), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_attribute,
      aux_sym_global_variable_declaration_repeat1,
  [7116] = 4,
    STATE(201), 1,
      aux_sym_lhs_expression_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(678), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(680), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [7132] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(683), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7144] = 4,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_case_selectors_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(688), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [7159] = 4,
    ACTIONS(690), 1,
      anon_sym_read,
    STATE(338), 1,
      sym_access_mode,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(692), 2,
      anon_sym_write,
      anon_sym_read_write,
  [7174] = 4,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_case_selectors_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(696), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [7189] = 4,
    ACTIONS(660), 1,
      anon_sym_case,
    ACTIONS(662), 1,
      anon_sym_default,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(195), 2,
      sym_switch_body,
      aux_sym_switch_statement_repeat1,
  [7204] = 4,
    ACTIONS(690), 1,
      anon_sym_read,
    STATE(310), 1,
      sym_access_mode,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(692), 2,
      anon_sym_write,
      anon_sym_read_write,
  [7219] = 5,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_LT,
    STATE(252), 1,
      sym_variable_qualifier,
    STATE(253), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7236] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_DASH_GT,
    STATE(171), 1,
      sym_compound_statement,
    STATE(279), 1,
      sym_function_return_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7253] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_DASH_GT,
    STATE(163), 1,
      sym_compound_statement,
    STATE(259), 1,
      sym_function_return_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7270] = 3,
    ACTIONS(668), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      sym_identifier,
      aux_sym_float_literal_token1,
      aux_sym_float_literal_token2,
  [7283] = 5,
    ACTIONS(700), 1,
      anon_sym_LT,
    ACTIONS(704), 1,
      sym_identifier,
    STATE(244), 1,
      sym_variable_qualifier,
    STATE(366), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7300] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_DASH_GT,
    STATE(169), 1,
      sym_compound_statement,
    STATE(265), 1,
      sym_function_return_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7317] = 4,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_case_selectors_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(569), 2,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [7332] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(708), 4,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_f16,
  [7343] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      anon_sym_DASH_GT,
    STATE(170), 1,
      sym_compound_statement,
    STATE(256), 1,
      sym_function_return_type_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7360] = 4,
    ACTIONS(690), 1,
      anon_sym_read,
    STATE(291), 1,
      sym_access_mode,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(692), 2,
      anon_sym_write,
      anon_sym_read_write,
  [7375] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(710), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7385] = 3,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(712), 2,
      anon_sym_AT,
      sym_identifier,
  [7397] = 4,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym_case_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7411] = 3,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(720), 2,
      anon_sym_AT,
      sym_identifier,
  [7423] = 4,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      anon_sym_LT,
    STATE(91), 1,
      sym_argument_list_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7437] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(728), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [7447] = 4,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COLON,
    STATE(231), 1,
      sym_case_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7461] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(732), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7471] = 4,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      anon_sym_EQ,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7485] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(740), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [7495] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(742), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7505] = 3,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(712), 2,
      anon_sym_AT,
      sym_identifier,
  [7517] = 3,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(746), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7529] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(748), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [7539] = 3,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(720), 2,
      anon_sym_AT,
      sym_identifier,
  [7551] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(752), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [7561] = 3,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(754), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7573] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(756), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [7583] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(688), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [7593] = 4,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7607] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(762), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7617] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(764), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [7627] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(766), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7637] = 3,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(770), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7648] = 3,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    ACTIONS(774), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7659] = 3,
    ACTIONS(776), 1,
      sym_identifier,
    STATE(249), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7670] = 3,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(296), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7681] = 3,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7692] = 3,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    ACTIONS(784), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7703] = 3,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(786), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7714] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(720), 2,
      anon_sym_AT,
      sym_identifier,
  [7723] = 3,
    ACTIONS(758), 1,
      anon_sym_SEMI,
    ACTIONS(760), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7734] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(712), 2,
      anon_sym_AT,
      sym_identifier,
  [7743] = 3,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(788), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7754] = 3,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(266), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7765] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(754), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7774] = 3,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7785] = 3,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_parenthesized_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7796] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7807] = 3,
    ACTIONS(796), 1,
      sym_identifier,
    STATE(268), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7818] = 3,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7829] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7840] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(800), 2,
      sym_identifier,
      sym_int_literal,
  [7849] = 3,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7860] = 3,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym_case_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7871] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(804), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [7880] = 3,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7891] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(746), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7911] = 3,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(812), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7922] = 3,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7933] = 3,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_case_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7944] = 3,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_argument_list_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7955] = 3,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7966] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7977] = 3,
    ACTIONS(818), 1,
      anon_sym_LBRACE,
    STATE(302), 1,
      sym_continuing_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7988] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(820), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7997] = 3,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8008] = 3,
    ACTIONS(826), 1,
      sym_identifier,
    STATE(349), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8019] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(828), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8028] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8039] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_compound_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8050] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(834), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8059] = 3,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8070] = 3,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8081] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(840), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8090] = 3,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8101] = 3,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8112] = 3,
    ACTIONS(848), 1,
      sym_identifier,
    STATE(350), 1,
      sym_variable_identifier_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8123] = 3,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8134] = 2,
    ACTIONS(852), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8142] = 2,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8150] = 2,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8158] = 2,
    ACTIONS(858), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8166] = 2,
    ACTIONS(860), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8174] = 2,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8182] = 2,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8190] = 2,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8198] = 2,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8206] = 2,
    ACTIONS(868), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8214] = 2,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8222] = 2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8230] = 2,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8238] = 2,
    ACTIONS(876), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8246] = 2,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8254] = 2,
    ACTIONS(880), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8262] = 2,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8270] = 2,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8278] = 2,
    ACTIONS(552), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8286] = 2,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8294] = 2,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8302] = 2,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8310] = 2,
    ACTIONS(890), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8318] = 2,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8326] = 2,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8334] = 2,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8342] = 2,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8350] = 2,
    ACTIONS(896), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8358] = 2,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8366] = 2,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8374] = 2,
    ACTIONS(900), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8382] = 2,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8390] = 2,
    ACTIONS(726), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8398] = 2,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8406] = 2,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8414] = 2,
    ACTIONS(908), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8422] = 2,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8430] = 2,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8438] = 2,
    ACTIONS(912), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8446] = 2,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8454] = 2,
    ACTIONS(914), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8462] = 2,
    ACTIONS(916), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8470] = 2,
    ACTIONS(918), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8478] = 2,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8486] = 2,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8494] = 2,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8502] = 2,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8510] = 2,
    ACTIONS(926), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8518] = 2,
    ACTIONS(928), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8526] = 2,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8534] = 2,
    ACTIONS(794), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8542] = 2,
    ACTIONS(932), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8550] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8558] = 2,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8566] = 2,
    ACTIONS(936), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8574] = 2,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8582] = 2,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8590] = 2,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8598] = 2,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8606] = 2,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8614] = 2,
    ACTIONS(946), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8622] = 2,
    ACTIONS(788), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8630] = 2,
    ACTIONS(786), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8638] = 2,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8646] = 2,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8654] = 2,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8662] = 2,
    ACTIONS(954), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8670] = 2,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8678] = 2,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8686] = 2,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8694] = 2,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8702] = 2,
    ACTIONS(964), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8710] = 2,
    ACTIONS(966), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8718] = 2,
    ACTIONS(968), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8726] = 2,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8734] = 2,
    ACTIONS(972), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8742] = 2,
    ACTIONS(974), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8750] = 2,
    ACTIONS(976), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8758] = 2,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 108,
  [SMALL_STATE(34)] = 197,
  [SMALL_STATE(35)] = 286,
  [SMALL_STATE(36)] = 375,
  [SMALL_STATE(37)] = 464,
  [SMALL_STATE(38)] = 550,
  [SMALL_STATE(39)] = 636,
  [SMALL_STATE(40)] = 698,
  [SMALL_STATE(41)] = 760,
  [SMALL_STATE(42)] = 819,
  [SMALL_STATE(43)] = 902,
  [SMALL_STATE(44)] = 985,
  [SMALL_STATE(45)] = 1068,
  [SMALL_STATE(46)] = 1127,
  [SMALL_STATE(47)] = 1182,
  [SMALL_STATE(48)] = 1237,
  [SMALL_STATE(49)] = 1306,
  [SMALL_STATE(50)] = 1361,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1482,
  [SMALL_STATE(53)] = 1536,
  [SMALL_STATE(54)] = 1587,
  [SMALL_STATE(55)] = 1638,
  [SMALL_STATE(56)] = 1689,
  [SMALL_STATE(57)] = 1751,
  [SMALL_STATE(58)] = 1813,
  [SMALL_STATE(59)] = 1875,
  [SMALL_STATE(60)] = 1937,
  [SMALL_STATE(61)] = 1999,
  [SMALL_STATE(62)] = 2097,
  [SMALL_STATE(63)] = 2159,
  [SMALL_STATE(64)] = 2257,
  [SMALL_STATE(65)] = 2355,
  [SMALL_STATE(66)] = 2453,
  [SMALL_STATE(67)] = 2549,
  [SMALL_STATE(68)] = 2644,
  [SMALL_STATE(69)] = 2739,
  [SMALL_STATE(70)] = 2831,
  [SMALL_STATE(71)] = 2923,
  [SMALL_STATE(72)] = 2961,
  [SMALL_STATE(73)] = 2999,
  [SMALL_STATE(74)] = 3036,
  [SMALL_STATE(75)] = 3071,
  [SMALL_STATE(76)] = 3106,
  [SMALL_STATE(77)] = 3141,
  [SMALL_STATE(78)] = 3199,
  [SMALL_STATE(79)] = 3251,
  [SMALL_STATE(80)] = 3285,
  [SMALL_STATE(81)] = 3319,
  [SMALL_STATE(82)] = 3353,
  [SMALL_STATE(83)] = 3399,
  [SMALL_STATE(84)] = 3455,
  [SMALL_STATE(85)] = 3489,
  [SMALL_STATE(86)] = 3545,
  [SMALL_STATE(87)] = 3599,
  [SMALL_STATE(88)] = 3633,
  [SMALL_STATE(89)] = 3667,
  [SMALL_STATE(90)] = 3701,
  [SMALL_STATE(91)] = 3751,
  [SMALL_STATE(92)] = 3785,
  [SMALL_STATE(93)] = 3819,
  [SMALL_STATE(94)] = 3863,
  [SMALL_STATE(95)] = 3905,
  [SMALL_STATE(96)] = 3943,
  [SMALL_STATE(97)] = 3977,
  [SMALL_STATE(98)] = 4009,
  [SMALL_STATE(99)] = 4041,
  [SMALL_STATE(100)] = 4074,
  [SMALL_STATE(101)] = 4133,
  [SMALL_STATE(102)] = 4192,
  [SMALL_STATE(103)] = 4249,
  [SMALL_STATE(104)] = 4306,
  [SMALL_STATE(105)] = 4365,
  [SMALL_STATE(106)] = 4424,
  [SMALL_STATE(107)] = 4454,
  [SMALL_STATE(108)] = 4510,
  [SMALL_STATE(109)] = 4566,
  [SMALL_STATE(110)] = 4596,
  [SMALL_STATE(111)] = 4626,
  [SMALL_STATE(112)] = 4656,
  [SMALL_STATE(113)] = 4712,
  [SMALL_STATE(114)] = 4768,
  [SMALL_STATE(115)] = 4798,
  [SMALL_STATE(116)] = 4828,
  [SMALL_STATE(117)] = 4884,
  [SMALL_STATE(118)] = 4914,
  [SMALL_STATE(119)] = 4944,
  [SMALL_STATE(120)] = 4974,
  [SMALL_STATE(121)] = 5030,
  [SMALL_STATE(122)] = 5086,
  [SMALL_STATE(123)] = 5116,
  [SMALL_STATE(124)] = 5172,
  [SMALL_STATE(125)] = 5228,
  [SMALL_STATE(126)] = 5258,
  [SMALL_STATE(127)] = 5314,
  [SMALL_STATE(128)] = 5344,
  [SMALL_STATE(129)] = 5400,
  [SMALL_STATE(130)] = 5456,
  [SMALL_STATE(131)] = 5512,
  [SMALL_STATE(132)] = 5568,
  [SMALL_STATE(133)] = 5618,
  [SMALL_STATE(134)] = 5668,
  [SMALL_STATE(135)] = 5718,
  [SMALL_STATE(136)] = 5744,
  [SMALL_STATE(137)] = 5772,
  [SMALL_STATE(138)] = 5796,
  [SMALL_STATE(139)] = 5820,
  [SMALL_STATE(140)] = 5844,
  [SMALL_STATE(141)] = 5872,
  [SMALL_STATE(142)] = 5900,
  [SMALL_STATE(143)] = 5928,
  [SMALL_STATE(144)] = 5958,
  [SMALL_STATE(145)] = 5982,
  [SMALL_STATE(146)] = 6010,
  [SMALL_STATE(147)] = 6038,
  [SMALL_STATE(148)] = 6066,
  [SMALL_STATE(149)] = 6094,
  [SMALL_STATE(150)] = 6115,
  [SMALL_STATE(151)] = 6136,
  [SMALL_STATE(152)] = 6163,
  [SMALL_STATE(153)] = 6182,
  [SMALL_STATE(154)] = 6201,
  [SMALL_STATE(155)] = 6220,
  [SMALL_STATE(156)] = 6239,
  [SMALL_STATE(157)] = 6262,
  [SMALL_STATE(158)] = 6279,
  [SMALL_STATE(159)] = 6306,
  [SMALL_STATE(160)] = 6333,
  [SMALL_STATE(161)] = 6349,
  [SMALL_STATE(162)] = 6365,
  [SMALL_STATE(163)] = 6381,
  [SMALL_STATE(164)] = 6397,
  [SMALL_STATE(165)] = 6413,
  [SMALL_STATE(166)] = 6429,
  [SMALL_STATE(167)] = 6459,
  [SMALL_STATE(168)] = 6475,
  [SMALL_STATE(169)] = 6491,
  [SMALL_STATE(170)] = 6507,
  [SMALL_STATE(171)] = 6523,
  [SMALL_STATE(172)] = 6539,
  [SMALL_STATE(173)] = 6569,
  [SMALL_STATE(174)] = 6595,
  [SMALL_STATE(175)] = 6611,
  [SMALL_STATE(176)] = 6634,
  [SMALL_STATE(177)] = 6649,
  [SMALL_STATE(178)] = 6664,
  [SMALL_STATE(179)] = 6679,
  [SMALL_STATE(180)] = 6694,
  [SMALL_STATE(181)] = 6718,
  [SMALL_STATE(182)] = 6742,
  [SMALL_STATE(183)] = 6764,
  [SMALL_STATE(184)] = 6788,
  [SMALL_STATE(185)] = 6812,
  [SMALL_STATE(186)] = 6834,
  [SMALL_STATE(187)] = 6858,
  [SMALL_STATE(188)] = 6882,
  [SMALL_STATE(189)] = 6904,
  [SMALL_STATE(190)] = 6919,
  [SMALL_STATE(191)] = 6934,
  [SMALL_STATE(192)] = 6955,
  [SMALL_STATE(193)] = 6976,
  [SMALL_STATE(194)] = 6994,
  [SMALL_STATE(195)] = 7012,
  [SMALL_STATE(196)] = 7030,
  [SMALL_STATE(197)] = 7048,
  [SMALL_STATE(198)] = 7064,
  [SMALL_STATE(199)] = 7080,
  [SMALL_STATE(200)] = 7098,
  [SMALL_STATE(201)] = 7116,
  [SMALL_STATE(202)] = 7132,
  [SMALL_STATE(203)] = 7144,
  [SMALL_STATE(204)] = 7159,
  [SMALL_STATE(205)] = 7174,
  [SMALL_STATE(206)] = 7189,
  [SMALL_STATE(207)] = 7204,
  [SMALL_STATE(208)] = 7219,
  [SMALL_STATE(209)] = 7236,
  [SMALL_STATE(210)] = 7253,
  [SMALL_STATE(211)] = 7270,
  [SMALL_STATE(212)] = 7283,
  [SMALL_STATE(213)] = 7300,
  [SMALL_STATE(214)] = 7317,
  [SMALL_STATE(215)] = 7332,
  [SMALL_STATE(216)] = 7343,
  [SMALL_STATE(217)] = 7360,
  [SMALL_STATE(218)] = 7375,
  [SMALL_STATE(219)] = 7385,
  [SMALL_STATE(220)] = 7397,
  [SMALL_STATE(221)] = 7411,
  [SMALL_STATE(222)] = 7423,
  [SMALL_STATE(223)] = 7437,
  [SMALL_STATE(224)] = 7447,
  [SMALL_STATE(225)] = 7461,
  [SMALL_STATE(226)] = 7471,
  [SMALL_STATE(227)] = 7485,
  [SMALL_STATE(228)] = 7495,
  [SMALL_STATE(229)] = 7505,
  [SMALL_STATE(230)] = 7517,
  [SMALL_STATE(231)] = 7529,
  [SMALL_STATE(232)] = 7539,
  [SMALL_STATE(233)] = 7551,
  [SMALL_STATE(234)] = 7561,
  [SMALL_STATE(235)] = 7573,
  [SMALL_STATE(236)] = 7583,
  [SMALL_STATE(237)] = 7593,
  [SMALL_STATE(238)] = 7607,
  [SMALL_STATE(239)] = 7617,
  [SMALL_STATE(240)] = 7627,
  [SMALL_STATE(241)] = 7637,
  [SMALL_STATE(242)] = 7648,
  [SMALL_STATE(243)] = 7659,
  [SMALL_STATE(244)] = 7670,
  [SMALL_STATE(245)] = 7681,
  [SMALL_STATE(246)] = 7692,
  [SMALL_STATE(247)] = 7703,
  [SMALL_STATE(248)] = 7714,
  [SMALL_STATE(249)] = 7723,
  [SMALL_STATE(250)] = 7734,
  [SMALL_STATE(251)] = 7743,
  [SMALL_STATE(252)] = 7754,
  [SMALL_STATE(253)] = 7765,
  [SMALL_STATE(254)] = 7774,
  [SMALL_STATE(255)] = 7785,
  [SMALL_STATE(256)] = 7796,
  [SMALL_STATE(257)] = 7807,
  [SMALL_STATE(258)] = 7818,
  [SMALL_STATE(259)] = 7829,
  [SMALL_STATE(260)] = 7840,
  [SMALL_STATE(261)] = 7849,
  [SMALL_STATE(262)] = 7860,
  [SMALL_STATE(263)] = 7871,
  [SMALL_STATE(264)] = 7880,
  [SMALL_STATE(265)] = 7891,
  [SMALL_STATE(266)] = 7902,
  [SMALL_STATE(267)] = 7911,
  [SMALL_STATE(268)] = 7922,
  [SMALL_STATE(269)] = 7933,
  [SMALL_STATE(270)] = 7944,
  [SMALL_STATE(271)] = 7955,
  [SMALL_STATE(272)] = 7966,
  [SMALL_STATE(273)] = 7977,
  [SMALL_STATE(274)] = 7988,
  [SMALL_STATE(275)] = 7997,
  [SMALL_STATE(276)] = 8008,
  [SMALL_STATE(277)] = 8019,
  [SMALL_STATE(278)] = 8028,
  [SMALL_STATE(279)] = 8039,
  [SMALL_STATE(280)] = 8050,
  [SMALL_STATE(281)] = 8059,
  [SMALL_STATE(282)] = 8070,
  [SMALL_STATE(283)] = 8081,
  [SMALL_STATE(284)] = 8090,
  [SMALL_STATE(285)] = 8101,
  [SMALL_STATE(286)] = 8112,
  [SMALL_STATE(287)] = 8123,
  [SMALL_STATE(288)] = 8134,
  [SMALL_STATE(289)] = 8142,
  [SMALL_STATE(290)] = 8150,
  [SMALL_STATE(291)] = 8158,
  [SMALL_STATE(292)] = 8166,
  [SMALL_STATE(293)] = 8174,
  [SMALL_STATE(294)] = 8182,
  [SMALL_STATE(295)] = 8190,
  [SMALL_STATE(296)] = 8198,
  [SMALL_STATE(297)] = 8206,
  [SMALL_STATE(298)] = 8214,
  [SMALL_STATE(299)] = 8222,
  [SMALL_STATE(300)] = 8230,
  [SMALL_STATE(301)] = 8238,
  [SMALL_STATE(302)] = 8246,
  [SMALL_STATE(303)] = 8254,
  [SMALL_STATE(304)] = 8262,
  [SMALL_STATE(305)] = 8270,
  [SMALL_STATE(306)] = 8278,
  [SMALL_STATE(307)] = 8286,
  [SMALL_STATE(308)] = 8294,
  [SMALL_STATE(309)] = 8302,
  [SMALL_STATE(310)] = 8310,
  [SMALL_STATE(311)] = 8318,
  [SMALL_STATE(312)] = 8326,
  [SMALL_STATE(313)] = 8334,
  [SMALL_STATE(314)] = 8342,
  [SMALL_STATE(315)] = 8350,
  [SMALL_STATE(316)] = 8358,
  [SMALL_STATE(317)] = 8366,
  [SMALL_STATE(318)] = 8374,
  [SMALL_STATE(319)] = 8382,
  [SMALL_STATE(320)] = 8390,
  [SMALL_STATE(321)] = 8398,
  [SMALL_STATE(322)] = 8406,
  [SMALL_STATE(323)] = 8414,
  [SMALL_STATE(324)] = 8422,
  [SMALL_STATE(325)] = 8430,
  [SMALL_STATE(326)] = 8438,
  [SMALL_STATE(327)] = 8446,
  [SMALL_STATE(328)] = 8454,
  [SMALL_STATE(329)] = 8462,
  [SMALL_STATE(330)] = 8470,
  [SMALL_STATE(331)] = 8478,
  [SMALL_STATE(332)] = 8486,
  [SMALL_STATE(333)] = 8494,
  [SMALL_STATE(334)] = 8502,
  [SMALL_STATE(335)] = 8510,
  [SMALL_STATE(336)] = 8518,
  [SMALL_STATE(337)] = 8526,
  [SMALL_STATE(338)] = 8534,
  [SMALL_STATE(339)] = 8542,
  [SMALL_STATE(340)] = 8550,
  [SMALL_STATE(341)] = 8558,
  [SMALL_STATE(342)] = 8566,
  [SMALL_STATE(343)] = 8574,
  [SMALL_STATE(344)] = 8582,
  [SMALL_STATE(345)] = 8590,
  [SMALL_STATE(346)] = 8598,
  [SMALL_STATE(347)] = 8606,
  [SMALL_STATE(348)] = 8614,
  [SMALL_STATE(349)] = 8622,
  [SMALL_STATE(350)] = 8630,
  [SMALL_STATE(351)] = 8638,
  [SMALL_STATE(352)] = 8646,
  [SMALL_STATE(353)] = 8654,
  [SMALL_STATE(354)] = 8662,
  [SMALL_STATE(355)] = 8670,
  [SMALL_STATE(356)] = 8678,
  [SMALL_STATE(357)] = 8686,
  [SMALL_STATE(358)] = 8694,
  [SMALL_STATE(359)] = 8702,
  [SMALL_STATE(360)] = 8710,
  [SMALL_STATE(361)] = 8718,
  [SMALL_STATE(362)] = 8726,
  [SMALL_STATE(363)] = 8734,
  [SMALL_STATE(364)] = 8742,
  [SMALL_STATE(365)] = 8750,
  [SMALL_STATE(366)] = 8758,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(73),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(74),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(76),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(75),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(177),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(330),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(329),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(328),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(326),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(222),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(315),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(10),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2), SHIFT_REPEAT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 4),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(177),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(74),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(76),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(75),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(330),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(329),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(328),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(326),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2), SHIFT_REPEAT(320),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_expression_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_assignment_operator, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_assignment_operator, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_variable_declaration_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_variable_declaration_repeat1, 2), SHIFT_REPEAT(360),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_const_expresssion_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_expresssion_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 7),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(136),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(276),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(192),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(69),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(306),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(17),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(16),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(308),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(309),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(15),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(314),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(318),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(7),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(319),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(208),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(212),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(199),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_literal, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_literal, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitcast_expression, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitcast_expression, 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list_expression, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list_expression, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list_expression, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list_expression, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 10),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, .production_id = 10),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_value_decomposition_expression, 3, .production_id = 6),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_composite_value_decomposition_expression, 3, .production_id = 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_or_function_call_expression, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_constructor_or_function_call_expression, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list_expression, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list_expression, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list_expression, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list_expression, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 14),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 14),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard_statement, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard_statement, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_declaration, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 15),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 15),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_declaration, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(133),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(286),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(243),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(365),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(363),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(362),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(360),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(208),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(361),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_directive, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 7),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 12),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 13),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, .production_id = 16),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, .production_id = 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 6, .production_id = 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 11),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 8),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 9),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 7, .production_id = 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(312),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(360),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(312),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2), SHIFT_REPEAT(360),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(334),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(334),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(76),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(173),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(220),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 2),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 2), SHIFT_REPEAT(201),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_identifier_declaration, 3, .production_id = 1),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_selectors_repeat1, 2), SHIFT_REPEAT(175),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_selectors_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_compound_statement, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 5),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_declaration, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_compound_statement, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_declaration, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 6),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_compound_statement, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_declaration, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_declaration, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_space, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 3),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_texel_format, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_mode, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_declaration, 4),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_qualifier, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_statement, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type_declaration, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_declaration, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_qualifier, 5),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type_declaration, 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallthrough_statement, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 4),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [962] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_if_statement, 4),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_wgsl_external_scanner_create(void);
void tree_sitter_wgsl_external_scanner_destroy(void *);
bool tree_sitter_wgsl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_wgsl_external_scanner_serialize(void *, char *);
void tree_sitter_wgsl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wgsl(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_wgsl_external_scanner_create,
      tree_sitter_wgsl_external_scanner_destroy,
      tree_sitter_wgsl_external_scanner_scan,
      tree_sitter_wgsl_external_scanner_serialize,
      tree_sitter_wgsl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
