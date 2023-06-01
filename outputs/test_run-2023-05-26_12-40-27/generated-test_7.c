typedef signed long int __int64_t;
typedef int int32_t;
struct __mbstate_t;
static unsigned int platform_main_end_crc;
static int platform_main_end_flag;
static signed char safe_unary_minus_func_int8_t_s_si;
static signed char safe_add_func_int8_t_s_s_si1;
static signed char safe_add_func_int8_t_s_s_si2;
static signed char safe_mul_func_int8_t_s_s_si1;
static signed char safe_mul_func_int8_t_s_s_si2;
static signed char safe_lshift_func_int8_t_s_s_left;
static int safe_lshift_func_int8_t_s_s_right;
static short safe_unary_minus_func_int16_t_s_si;
static short safe_add_func_int16_t_s_s_si1;
static short safe_add_func_int16_t_s_s_si2;
static short safe_rshift_func_int16_t_s_u_left;
static unsigned int safe_rshift_func_int16_t_s_u_right;
static int32_t safe_add_func_int32_t_s_s_si1;
static int32_t safe_add_func_int32_t_s_s_si2;
static __int64_t safe_sub_func_int64_t_s_s_si1;
static __int64_t safe_sub_func_int64_t_s_s_si2;
static __int64_t safe_mod_func_int64_t_s_s_si1;
static __int64_t safe_mod_func_int64_t_s_s_si2;
static unsigned char safe_add_func_uint8_t_u_u_ui1;
static unsigned char safe_add_func_uint8_t_u_u_ui2;
static unsigned char safe_lshift_func_uint8_t_u_s_left;
static int safe_lshift_func_uint8_t_u_s_right;
static unsigned char safe_rshift_func_uint8_t_u_s_left;
static int safe_rshift_func_uint8_t_u_s_right;
static unsigned short safe_add_func_uint16_t_u_u_ui1;
static unsigned short safe_add_func_uint16_t_u_u_ui2;
static unsigned short safe_lshift_func_uint16_t_u_u_left;
static unsigned int safe_lshift_func_uint16_t_u_u_right;
static unsigned int crc32_context = 4294967295UL;
static const unsigned int crc32_gentab_poly = 3988292384UL;
static int crc32_gentab_i;
static int crc32_gentab_j;
struct S0 {
  signed a;
  signed b;
};
static int32_t g_2 = 0L;
static int32_t g_7 = 1159069128L;
static int32_t g_100 = 1159069128L;
static int32_t g_99 = 1159069128L;
static __int64_t g_126 = 4609435386903234052LL;
static short g_130 = 0;
static int32_t g_133 = 1159069128L;
static unsigned long g_142 = 7UL;
static short g_152 = 63573L;
static unsigned char g_317 = 5UL;
static signed char g_585 = 0x1BL;
static unsigned long *g_675 = &g_142;
static unsigned long **g_674 = &g_675;
static unsigned g_719 = 0x5253L;
static unsigned int g_746 = 2198125214L;
static short g_937 = 0xA768L;
static const unsigned int g_988 = 3011058596L;
static const unsigned g_987 = 3011058596L;
static signed char g_997 = 00;
static signed char *g_996 = 0;
static signed char g_995 = 0;
static unsigned long *g_1007 = 0;
static signed char g_1151 = 0x78L;
static signed char *g_1155 = &g_585;
static __int64_t func_1___trans_tmp_1;
static int32_t func_1_l_8 = 1159069128L;
static int32_t func_1_l_35 = 1955934004L;
static struct S0 func_1_l_1131;
static signed char **func_1_l_1136 = &g_996;
static int32_t func_1_l_1166 = 1L;
static signed char func_1_l_1152 = 0x78L;
static signed char func_1_l_1153 = 0;
static signed char *func_1_l_1154 = &func_1_l_1152;
static int32_t func_1_l_1162 = 1159069128L;
static __int64_t func_1_l_1165 = 4609435386903234052LL;
static unsigned char func_1___trans_tmp_2;
static void(safe_add_func_int16_t_s_s)(void) {
  ((safe_add_func_int16_t_s_s_si2 == 0) ||
   ((safe_add_func_int16_t_s_s_si1 == 0) &&
    (safe_add_func_int16_t_s_s_si2 == 0)))
      ?: (safe_add_func_int16_t_s_s_si1 / safe_add_func_int16_t_s_s_si2);
}
static void(safe_lshift_func_uint16_t_u_u)(void) {
  (((safe_lshift_func_uint16_t_u_u_right) >= 32) ||
   (safe_lshift_func_uint16_t_u_u_left >
    (0 >> (safe_lshift_func_uint16_t_u_u_right))))
      ?: (safe_lshift_func_uint16_t_u_u_left
          << (safe_lshift_func_uint16_t_u_u_right));
  (((safe_lshift_func_uint16_t_u_u_right) = 32))
      ?: (safe_lshift_func_uint16_t_u_u_left >>
          (safe_lshift_func_uint16_t_u_u_right));
}
static void crc32_gentab() {
  for (; 0 < 256; crc32_gentab_i++) {
    crc32_gentab_j = 8;
  }
}
static void func_1(void) {
  unsigned long **l_1149 = g_674;
  unsigned long ***l_1148 = &l_1149;
  struct S0 l_1157 = func_1_l_1131;
  struct S0 *const l_1156 = &l_1157;
lbl_1167:
  for (24;; g_2) {
    {
      {
        func_1___trans_tmp_1 =
            ((safe_mod_func_int64_t_s_s_si2 == 0) ||
             ((safe_mod_func_int64_t_s_s_si1 == (-9223372036854775807L - 1)) &&
              (safe_mod_func_int64_t_s_s_si2 == 0)))
                ? ((safe_mod_func_int64_t_s_s_si1))
                : (safe_mod_func_int64_t_s_s_si1 /
                   safe_mod_func_int64_t_s_s_si2);
      }
      ((func_1___trans_tmp_1) >= 4609435386903234052LL);
      ((0 != (l_1148)));
      {
        (func_1_l_35) =
            (0UL ==
             (120L ^ ((((*func_1_l_1136) = ((void *)0)) !=
                       (g_1155 = ((func_1_l_1154) = &func_1_l_1152))) >=
                      (func_1_l_1166 =
                           ((func_1_l_1165) = ((4294967293UL) || 63573L))))));
      }
    }
  }
  {}
}
int main(void) {
  { printf("checksum = %X\n", platform_main_end_crc); }
}
