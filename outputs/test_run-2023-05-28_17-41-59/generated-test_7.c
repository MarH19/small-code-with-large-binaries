typedef short __int16_t;
typedef int __int32_t;
static signed safe_add_func_int8_t_s_s_si2;
static signed char safe_sub_func_int8_t_s_s_si1;
static signed char safe_sub_func_int8_t_s_s_si2;
static signed char safe_mul_func_int8_t_s_s_si1;
static signed char safe_mul_func_int8_t_s_s_si2;
static signed char safe_mod_func_int8_t_s_s_si1;
static signed char safe_mod_func_int8_t_s_s_si2;
static signed char safe_lshift_func_int8_t_s_s_left;
static int safe_lshift_func_int8_t_s_s_right;
static signed char safe_rshift_func_int8_t_s_s_left;
static int safe_rshift_func_int8_t_s_s_right;
static __int16_t safe_add_func_int16_t_s_s_si1;
static __int16_t safe_add_func_int16_t_s_s_si2;
static __int16_t safe_mul_func_int16_t_s_s_si1;
static __int16_t safe_mul_func_int16_t_s_s_si2;
static __int16_t safe_lshift_func_int16_t_s_s_left;
static int safe_lshift_func_int16_t_s_s_right;
static __int16_t safe_lshift_func_int16_t_s_u_left;
static unsigned int safe_lshift_func_int16_t_s_u_right;
static __int16_t safe_rshift_func_int16_t_s_s_left;
static int safe_rshift_func_int16_t_s_s_right;
static __int16_t safe_rshift_func_int16_t_s_u_left;
static unsigned int safe_rshift_func_int16_t_s_u_right;
static __int32_t safe_add_func_int32_t_s_s_si1;
static __int32_t safe_add_func_int32_t_s_s_si2;
static __int32_t safe_sub_func_int32_t_s_s_si1;
static __int32_t safe_sub_func_int32_t_s_s_si2;
static unsigned char safe_add_func_uint8_t_u_u_ui1;
static unsigned char safe_add_func_uint8_t_u_u_ui2;
static unsigned char safe_sub_func_uint8_t_u_u_ui1;
static unsigned char safe_sub_func_uint8_t_u_u_ui2;
static unsigned char safe_mul_func_uint8_t_u_u_ui1;
static unsigned char safe_mul_func_uint8_t_u_u_ui2;
static unsigned char safe_lshift_func_uint8_t_u_s_left;
static int safe_lshift_func_uint8_t_u_s_right;
static unsigned char safe_lshift_func_uint8_t_u_u_left;
static unsigned int safe_lshift_func_uint8_t_u_u_right;
static unsigned char safe_rshift_func_uint8_t_u_u_left;
static unsigned int safe_rshift_func_uint8_t_u_u_right;
static unsigned short safe_mul_func_uint16_t_u_u_ui1;
static unsigned short safe_mul_func_uint16_t_u_u_ui2;
static unsigned short safe_lshift_func_uint16_t_u_s_left;
static int safe_lshift_func_uint16_t_u_s_right;
static unsigned short safe_lshift_func_uint16_t_u_u_left;
static unsigned int safe_lshift_func_uint16_t_u_u_right;
static unsigned short safe_rshift_func_uint16_t_u_s_left;
static int safe_rshift_func_uint16_t_u_s_right;
static unsigned int safe_add_func_uint32_t_u_u_ui1;
static unsigned int safe_add_func_uint32_t_u_u_ui2;
static unsigned int a;
static unsigned int crc32_tab_0;
static unsigned int crc32_context = 4294967295UL;
static unsigned char b;
static unsigned int crc32_8bytes_val;
static unsigned int transparent_crc_val;
static char transparent_crc_vname;
static int transparent_crc_flag;
static unsigned int c = 3004795535;
static unsigned int g_39 = 4121097751;
static unsigned int g_54 = 2888062833;
static unsigned int g_73 = 7U;
static unsigned char g_194 = 9U;
static unsigned int g_200 = 4057220810;
static unsigned char g_259 = 253U;
static signed char g_515 = 0;
static __int16_t func_1___trans_tmp_2;
static signed char func_1___trans_tmp_1;
static void(safe_lshift_func_uint16_t_u_s)(void) {
  (((safe_lshift_func_uint16_t_u_s_right) = 2) ||
   (safe_lshift_func_uint16_t_u_s_left >
    (0 >> (safe_lshift_func_uint16_t_u_s_right))))
      ?: (safe_lshift_func_uint16_t_u_s_left
          << (safe_lshift_func_uint16_t_u_s_right));
}
static void(safe_lshift_func_uint16_t_u_u)(void) {
  (((safe_lshift_func_uint16_t_u_u_right) >= 2) ||
   (safe_lshift_func_uint16_t_u_u_left >
    (0 >> (safe_lshift_func_uint16_t_u_u_right))))
      ? ((safe_lshift_func_uint16_t_u_u_left))
      : (safe_lshift_func_uint16_t_u_u_left
         << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
}
static void(safe_rshift_func_uint16_t_u_s)(void) {
  (((safe_rshift_func_uint16_t_u_s_right) < 0) ||
   (((int)safe_rshift_func_uint16_t_u_s_right) >= 2))
      ? ((safe_rshift_func_uint16_t_u_s_left))
      : (safe_rshift_func_uint16_t_u_s_left >>
         ((int)safe_rshift_func_uint16_t_u_s_right));
  (((unsigned int)safe_rshift_func_uint16_t_u_s_right) >= 32)
      ? ((safe_rshift_func_uint16_t_u_s_left))
      : (safe_rshift_func_uint16_t_u_s_left >>
         ((unsigned int)safe_rshift_func_uint16_t_u_s_right));
}
static void crc32_gentab(void);
static void func_1() {
  for (;; g_73) {
    {
      func_1___trans_tmp_1 = ((safe_rshift_func_int8_t_s_s_left < 0) ||
                              (((int)safe_rshift_func_int8_t_s_s_right) < 0) ||
                              (((int)safe_rshift_func_int8_t_s_s_right) >= 32))
                                 ? ((safe_rshift_func_int8_t_s_s_left))
                                 : (safe_rshift_func_int8_t_s_s_left >>
                                    ((int)safe_rshift_func_int8_t_s_s_right));
    }
    {
      func_1___trans_tmp_2 =
          ((safe_lshift_func_int16_t_s_u_left < 0) ||
           (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) ||
           (safe_lshift_func_int16_t_s_u_left >
            (0 >> ((unsigned int)safe_lshift_func_int16_t_s_u_right))))
              ? ((safe_lshift_func_int16_t_s_u_left))
              : (safe_lshift_func_int16_t_s_u_left
                 << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
    }
    ((g_73 >=
      (((4121097751 >=
         (((func_1___trans_tmp_1) ==
           ((254U == (g_515 == (((func_1___trans_tmp_2) == 2U) || 253U))) &
            3004795535)) |
          2038131168)) |
        0x5C) &&
       0x14FDFC62)) > 0xBB);
  }
}
int main(void) {
  {
    {
      { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
    }
  }
}
