typedef signed int __int32_t;
static __int32_t safe_add_func_int32_t_s_s_si1;
static __int32_t safe_add_func_int32_t_s_s_si2;
static __int32_t safe_div_func_int32_t_s_s_si1;
static __int32_t safe_div_func_int32_t_s_s_si2;
static unsigned char safe_unary_minus_func_uint8_t_u_ui;
static unsigned char safe_add_func_uint8_t_u_u_ui1;
static unsigned char safe_add_func_uint8_t_u_u_ui2;
static unsigned char safe_lshift_func_uint8_t_u_s_left;
static int safe_lshift_func_uint8_t_u_s_right;
static unsigned short safe_unary_minus_func_uint16_t_u_ui;
static unsigned short safe_add_func_uint16_t_u_u_ui1;
static unsigned short safe_add_func_uint16_t_u_u_ui2;
static unsigned short safe_sub_func_uint16_t_u_u_ui1;
static unsigned short safe_sub_func_uint16_t_u_u_ui2;
static unsigned short safe_mod_func_uint16_t_u_u_ui1;
static unsigned short safe_mod_func_uint16_t_u_u_ui2;
static unsigned short safe_div_func_uint16_t_u_u_ui1;
static unsigned short safe_div_func_uint16_t_u_u_ui2;
static unsigned short safe_lshift_func_uint16_t_u_s_left;
static int safe_lshift_func_uint16_t_u_s_right;
static unsigned short safe_rshift_func_uint16_t_u_s_left;
static int safe_rshift_func_uint16_t_u_s_right;
static unsigned int safe_unary_minus_func_uint32_t_u_ui;
static unsigned int safe_add_func_uint32_t_u_u_ui1;
static unsigned int safe_add_func_uint32_t_u_u_ui2;
static unsigned int safe_sub_func_uint32_t_u_u_ui1;
static unsigned int safe_sub_func_uint32_t_u_u_ui2;
static unsigned int safe_mod_func_uint32_t_u_u_ui1;
static unsigned int safe_mod_func_uint32_t_u_u_ui2;
static unsigned int safe_div_func_uint32_t_u_u_ui1;
static unsigned int safe_div_func_uint32_t_u_u_ui2;
static unsigned int a;
static unsigned int crc32_tab_0;
static unsigned int crc32_context = 1048575UL;
static int crc32_gentab_i;
static unsigned char b;
static unsigned int crc32_8bytes_val;
static unsigned int transparent_crc_val;
static char transparent_crc_vname;
static int transparent_crc_flag;
static unsigned char c = 7U;
static unsigned int g_93 = 0U;
static unsigned char g_110 = 1U;
static unsigned int g_131 = 3066444866;
static unsigned short g_153 = 0x679C;
static unsigned int g_288 = 4283773028;
static unsigned char g_332 = 0U;
static unsigned short g_771 = 8U;
static unsigned short func_1___trans_tmp_1;
static unsigned int func_13_p_14;
static short func_13_p_15;
static const unsigned char func_13_p_16;
static __int32_t func_13_p_17;
static unsigned short func_13___trans_tmp_2;
static unsigned int func_13_l_734 = 4294967286U;
static short func_18_p_20;
static __int32_t func_18___trans_tmp_4;
static unsigned short func_18___trans_tmp_3;
static __int32_t func_40_p_41;
static __int32_t func_48___trans_tmp_5;
static void(safe_mod_func_uint32_t_u_u)(void) {
  (safe_mod_func_uint32_t_u_u_ui2 == 0)
      ?: (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
}
static void(safe_div_func_uint32_t_u_u)(void) {
  (safe_div_func_uint32_t_u_u_ui2 == 0)
      ?: (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
}
static void crc32_gentab() {
  crc32_gentab_i = 0;
  for (0; 0 < 256; crc32_gentab_i++) {
  }
}
static void func_1() {
  g_288 = 0;
  g_288 = func_1___trans_tmp_1;
}
static void func_13(void) {
  {
    func_13___trans_tmp_2 = (safe_mod_func_uint16_t_u_u_ui2 == 0)
                                ?: (safe_mod_func_uint16_t_u_u_ui1 %
                                    safe_mod_func_uint16_t_u_u_ui2);
  }
  (((func_13_p_14 <=
     (g_153 = (func_13_p_17 <= ((0 | func_13_p_16) > func_13_p_15)))) ||
    0x38) < func_13_p_17);
}
static void func_18(void) {
  {
    func_18___trans_tmp_3 = (safe_div_func_uint16_t_u_u_ui2 == 0)
                                ?: (safe_div_func_uint16_t_u_u_ui1 /
                                    safe_div_func_uint16_t_u_u_ui2);
    {
      func_18___trans_tmp_4 =
          ((safe_add_func_int32_t_s_s_si2 == 0) ||
           ((safe_add_func_int32_t_s_s_si1 == (21474836471)) &&
            (safe_add_func_int32_t_s_s_si2 == 0)))
              ? ((safe_add_func_int32_t_s_s_si1))
              : (safe_add_func_int32_t_s_s_si1 % safe_add_func_int32_t_s_s_si2);
    }
    func_18_p_20 = 0;
    func_18_p_20 = func_18___trans_tmp_4;
    for (func_18___trans_tmp_4; (func_18___trans_tmp_4 == 5);
         func_18___trans_tmp_4) {
    }
  }
}
static void func_40(void) {
  for (func_40_p_41; (func_40_p_41 >= 0); func_40_p_41)
    3024921553;
}
static void func_48(void) {
  for (27; (27); 27) {
    {
      func_48___trans_tmp_5 =
          ((safe_div_func_int32_t_s_s_si2 == 0) ||
           ((safe_div_func_int32_t_s_s_si1 == (21474836471)) &&
            (safe_div_func_int32_t_s_s_si2 == (1))))
              ? ((safe_div_func_int32_t_s_s_si1))
              : (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
    }
  }
}
int main(void) {
  {
    {
      { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
    }
  }
}
