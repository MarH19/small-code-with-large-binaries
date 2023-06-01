typedef signed int __int32_t;
typedef unsigned long int __uint64_t;
typedef short int16_t;
static unsigned int platform_main_end_crc;
static int platform_main_end_flag;
static unsigned char safe_add_func_uint8_t_u_u_ui1;
static unsigned char safe_add_func_uint8_t_u_u_ui2;
static unsigned char safe_sub_func_uint8_t_u_u_ui1;
static unsigned char safe_sub_func_uint8_t_u_u_ui2;
static unsigned char safe_rshift_func_uint8_t_u_s_left;
static int safe_rshift_func_uint8_t_u_s_right;
static unsigned short safe_rshift_func_uint16_t_u_s_left;
static int safe_rshift_func_uint16_t_u_s_right;
static unsigned int a;
static unsigned int crc32_tab_0;
static unsigned int crc32_context = 4294967295UL;
static unsigned int crc32_gentab_crc;
static const unsigned int crc32_gentab_poly = 3988292384UL;
static unsigned char crc32_byte_b;
static __uint64_t crc32_8bytes_val;
static __uint64_t transparent_crc_val;
static char transparent_crc_vname;
static int transparent_crc_flag;
static __int32_t b = 0x272A7275L;
static __int32_t g_20 = 0x0CBEB969L;
static const __int32_t g_19;
static const __int32_t g_19_0 = 0x0CBEB969L;
static __int32_t *g_74 = 00;
static __int32_t **g_73 = &g_74;
static unsigned int g_77 = 1UL;
static __int32_t g_85 = 0;
static __int32_t g_87 = 1L;
static char g_90 = 0xA2L;
static unsigned short g_100 = 0UL;
static unsigned char g_104 = 3UL;
static int16_t g_106 = 0;
static signed char g_115[] = {0L, 0L, 0L};
static unsigned int g_121 = 1241629470L;
static __int32_t g_128 = 0L;
static unsigned g_172 = 9UL;
static unsigned char g_206 = 0xA2L;
static unsigned char g_269 = 0xA2L;
static signed char g_292 = 9L;
static int16_t g_364 = 0xF1D1L;
static __int32_t ***g_366 = &g_73;
static unsigned int g_411[1][1];
static char g_482 = 0xA4L;
static __int32_t ****g_552 = &g_366;
static unsigned int g_772[1];
static unsigned int g_858 = 3027230518L;
static int16_t g_945 = 0xC844L;
static unsigned g_980 = 3UL;
static __int32_t g_984 = 0L;
static __int32_t g_1066 = 6L;
static unsigned char g_1067[1] = {
    0x08L, 0xE4L, 8UL,   0xE9L, 0x40L, 253UL, 0x40L, 0x08L, 0xE4L, 8UL,  0xE9L,
    0x40L, 253UL, 0x40L, 0x08L, 0xE4L, 8UL,   0xE9L, 0x40L, 253UL, 0x40L};
static signed char g_1068 = 0x25L;
static unsigned int g_1075 = 1UL;
static unsigned char g_1100 = 9UL;
static const unsigned short g_1175 = 0xB3E2L;
static __int32_t func_2;
static __int32_t func_1___trans_tmp_1;
static __int32_t func_1_l_921[112] = {
    0,           0x0CBEB969L, 0001L,       0x0CBEB969L, 0,
    0x0CBEB969L, 0001L,       0x0CBEB969L, 0,           0x0CBEB969L,
    0001L,       0x0CBEB969L, 0,           0x0CBEB969L, 0001L,
    0x0CBEB969L, 0,           0x0CBEB969L, 00,          0,
    1L,          0x0CBEB969L, 0,           0x0CBEB969L, 0,
    0,           0,           1L,          0x0CBEB969L, 0,
    0x0CBEB969L, 0,           0,           0,           1L,
    0x0CBEB969L, 0,           0x0CBEB969L, 0,           0,
    0,           1L,          0x0CBEB969L, 0,           0x0CBEB969L,
    0,           0,           0,           1L,          0x0CBEB969L,
    0,           0x0CBEB969L, 0,           0,           0,
    1L,          0x0CBEB969L, 0,           0x0CBEB969L, 0,
    0,           0,           1L,          0x0CBEB969L, 0,
    0x0CBEB969L, 0,           0,           0,           1L,
    0x0CBEB969L, 0,           0x0CBEB969L, 0,           0,
    0,           1L,          0x0CBEB969L, 0,           0x0CBEB969L,
    0,           0,           0,           1L,          0x0CBEB969L,
    0,           0x0CBEB969L, 0,           0,           0,
    1L,          0x0CBEB969L, 0,           0x0CBEB969L, 0,
    0,           0,           1L,          0x0CBEB969L};
static void platform_main_begin(void) {}
static void platform_main_end(void) {}
static void(safe_add_func_uint8_t_u_u)(void) {
  safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
}
static void(safe_sub_func_uint8_t_u_u)(void) {
  safe_sub_func_uint8_t_u_u_ui1 - safe_sub_func_uint8_t_u_u_ui2;
}
static void(safe_rshift_func_uint8_t_u_s)(void) {
  (((safe_rshift_func_uint8_t_u_s_right) = 32))
      ?: (safe_rshift_func_uint8_t_u_s_left >>
          (safe_rshift_func_uint8_t_u_s_right));
}
static void(safe_rshift_func_uint16_t_u_s)(void) {
  (((safe_rshift_func_uint16_t_u_s_right) = 32))
      ?: (safe_rshift_func_uint16_t_u_s_left >>
          (safe_rshift_func_uint16_t_u_s_right));
}
static void crc32_gentab() {}
static void crc32_8bytes() {
  { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
  { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
  { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
  { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
  {
    crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0;
    crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0;
  }
}
static void func_1(void) {
  __int32_t l_942[1] = {****g_552, 0, ****g_552, 0, ****g_552, 0, ****g_552, 0};
  { func_1___trans_tmp_1 = *(*g_73); }
  g_90 = 0;
  for (0; (0 >= 57); g_90++) {
    __int32_t l_976 = **g_73;
  }
}
int main(void) {
  {
    {
      printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname,
             crc32_context ^ 4294967295UL);
    }
  }
}
