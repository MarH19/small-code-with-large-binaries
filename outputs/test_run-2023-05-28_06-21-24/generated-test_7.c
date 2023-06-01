typedef signed short int __int16_t;
typedef signed int __int32_t;
static unsigned long int __uint64_t;
static long int __off64_t;
struct __mbstate_t;
static struct _G_fpos_t {
} __fpos_t;
static signed char safe_add_func_int8_t_s_s_si2;
static signed char safe_div_func_int8_t_s_s_si1;
static signed char safe_div_func_int8_t_s_s_si2;
static __int16_t safe_sub_func_int16_t_s_s_si1;
static __int16_t safe_sub_func_int16_t_s_s_si2;
static __int16_t safe_rshift_func_int16_t_s_s_left;
static int safe_rshift_func_int16_t_s_s_right;
static __int16_t safe_rshift_func_int16_t_s_u_left;
static unsigned int safe_rshift_func_int16_t_s_u_right;
static __int32_t safe_add_func_int32_t_s_s_si1;
static __int32_t safe_add_func_int32_t_s_s_si2;
static __int32_t safe_mod_func_int32_t_s_s_si1;
static __int32_t safe_mod_func_int32_t_s_s_si2;
static unsigned char safe_mul_func_uint8_t_u_u_ui1;
static unsigned char safe_mul_func_uint8_t_u_u_ui2;
static unsigned char safe_mod_func_uint8_t_u_u_ui1;
static unsigned char safe_mod_func_uint8_t_u_u_ui2;
static unsigned char safe_lshift_func_uint8_t_u_s_left;
static int safe_lshift_func_uint8_t_u_s_right;
static unsigned char safe_rshift_func_uint8_t_u_s_left;
static int safe_rshift_func_uint8_t_u_s_right;
static unsigned short safe_add_func_uint16_t_u_u_ui1;
static unsigned short safe_add_func_uint16_t_u_u_ui2;
static unsigned short safe_mul_func_uint16_t_u_u_ui1;
static unsigned short safe_mul_func_uint16_t_u_u_ui2;
static unsigned int safe_add_func_uint32_t_u_u_ui1;
static unsigned int safe_add_func_uint32_t_u_u_ui2;
static unsigned int safe_div_func_uint32_t_u_u_ui1;
static unsigned int safe_div_func_uint32_t_u_u_ui2;
static unsigned int crc32_tab;
static unsigned int crc32_tab_0;
static unsigned int crc32_context = 1048575UL;
static unsigned int crc32_gentab_crc;
static const unsigned int crc32_gentab_poly = 4UL;
static int crc32_gentab_i;
static int crc32_gentab_j;
static unsigned char crc32_byte_b;
struct a {
  __int16_t f1;
  __int32_t f2;
  unsigned f3;
  const signed char f4;
  __int32_t f5;
  signed char f6;
  unsigned f7;
  signed char f8;
};
struct S1 {
  signed char f0;
  unsigned int f1;
};
struct S2 {
  signed f0;
  signed f1;
};
static __int32_t g_8 = 0x1EB2391L;
static __int32_t g_7 = 0x31EB2391L;
static struct a g_42;
static unsigned int g_110 = 2UL;
static unsigned short g_112[1] = {
    0xBB5AL, 0x6991L, 0x6991L, 0xBB5AL, 0x6991L, 0x6991L, 0xBB5AL, 0x6991L,
    0xBB5AL, 0xBB5AL, 65533UL, 0xBB5AL, 0xBB5AL, 65533UL, 0xBB5AL, 0xBB5AL};
static unsigned short g_112_1_1_4;
static __int32_t g_117 = 0x31EB2391L;
static __int32_t g_116 = 0x31EB2391L;
static __int16_t g_136 = 1L;
static __int16_t g_135 = 1L;
static struct S2 g_144;
static struct S1 g_147;
static __int32_t g_151 = 0L;
static signed g_169 = 2L;
static unsigned short g_270;
static unsigned short g_270_0 = 0;
static struct a g_318 = {1L - 1L, 4040L, 1L, 0L, 663, 0xEFL};
static const __int32_t g_390[1] = {0x31EB2391L, 0x31EB2391L, 0x31EB2391L,
                                   0x31EB2391L, 0x31EB2391L, 0x31EB2391L,
                                   0x31EB2391L, 0x31EB2391L, 0x31EB2391L};
static const __int32_t *g_390_0_0 = &g_8;
static const __int32_t **g_389 = &g_390_0_0;
static struct S2 g_452;
static unsigned short g_509 = 0;
static struct S2 g_516 = {37263432229};
static __int32_t func_24_l_28;
static unsigned char func_31_l_36[] = {
    0x23L, 0x7DL, 0UL,   247UL, 246UL,
    0x9BL, 255UL, 9UL,   0xD8L, 0xC8L,
    9UL,   255UL, 250UL, 246UL, 0x82L,
    255UL, 255UL, 0x7DL, 247UL, 255UL,
    0x82L, 0x23L, 255UL, 255UL, {0x42L, 0UL, 0xD8L},
    0UL,   1UL,   0x9CL, 0UL,   0x32L,
    0xB9L};
static int func_1___trans_tmp_5;
static signed char func_1___trans_tmp_3;
static __int32_t main___trans_tmp_1;
static void(safe_div_func_uint32_t_u_u)(void) {
  0 ?: (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
}
static void crc32_gentab() {
  crc32_gentab_i = 0;
  for (; 0 < 6;) {
    crc32_gentab_j = 8;
    for (; 8 > 0; crc32_gentab_j--)
      crc32_tab_0 = 1;
  }
}
static void crc32_byte(void) {
  crc32_context = ((crc32_context >> 8) & 0xF) ^ 1;
}
void func_9(void);
int main(void) {
  {
    { main___trans_tmp_1 = func_24_l_28; }
    func_1___trans_tmp_5 = func_24_l_28;
    func_1___trans_tmp_3 = 0;
    (*g_389) = (00);
  }
}
