typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
static signed char safe_add_func_int8_t_s_s_si1;
static signed char safe_add_func_int8_t_s_s_si2;
static signed char safe_mod_func_int8_t_s_s_si1;
static signed char safe_mod_func_int8_t_s_s_si2;
static signed char safe_div_func_int8_t_s_s_si1;
static signed char safe_div_func_int8_t_s_s_si2;
static signed char safe_lshift_func_int8_t_s_s_left;
static int safe_lshift_func_int8_t_s_s_right;
static signed char safe_rshift_func_int8_t_s_u_left;
static unsigned int safe_rshift_func_int8_t_s_u_right;
static __int16_t safe_add_func_int16_t_s_s_si1;
static __int16_t safe_add_func_int16_t_s_s_si2;
static __int16_t safe_mod_func_int16_t_s_s_si1;
static __int16_t safe_mod_func_int16_t_s_s_si2;
static __int16_t safe_lshift_func_int16_t_s_s_left;
static int safe_lshift_func_int16_t_s_s_right;
static __int16_t safe_rshift_func_int16_t_s_s_left;
static int safe_rshift_func_int16_t_s_s_right;
static __int32_t safe_add_func_int32_t_s_s_si1;
static __int32_t safe_add_func_int32_t_s_s_si2;
static __int32_t safe_sub_func_int32_t_s_s_si1;
static __int32_t safe_sub_func_int32_t_s_s_si2;
static __int32_t safe_div_func_int32_t_s_s_si1;
static __int32_t safe_div_func_int32_t_s_s_si2;
static unsigned char safe_rshift_func_uint8_t_u_u_left;
static unsigned int safe_rshift_func_uint8_t_u_u_right;
static __uint16_t safe_add_func_uint16_t_u_u_ui1;
static __uint16_t safe_add_func_uint16_t_u_u_ui2;
static __uint32_t safe_add_func_uint32_t_u_u_ui1;
static __uint32_t safe_add_func_uint32_t_u_u_ui2;
static __uint32_t crc32_tab;
static __uint32_t crc32_tab_0;
static __uint32_t crc32_context = 268435455UL;
static int crc32_gentab_i;
static unsigned char crc32_byte_b;
static __uint32_t crc32_8bytes_val;
static __uint32_t transparent_crc_val;
static char transparent_crc_vname;
static int transparent_crc_flag;
static signed char a = 0xF1;
static __int32_t b = 4;
static const __int32_t g_27 = 0;
static const __int32_t g_26 = 0;
static __int16_t g_34[];
static unsigned char g_36[];
static unsigned char g_36_0_0;
static unsigned g_52 = 1U;
static __uint16_t g_66 = 0U;
static __int16_t g_83 = 0x0487;
static __uint32_t g_96 = 1865406153;
static __int16_t *g_98 = 0;
static signed g_137[1];
static __int32_t const g_221 = 4;
static __int16_t g_376 = 0xAB47;
static signed char func_1___trans_tmp_1;
static __int32_t func_10_p_11;
static unsigned char func_10___trans_tmp_3;
static signed char func_10___trans_tmp_2;
static signed char func_10_l_717 = 1;
static __int32_t func_10_l_737 = 0x0481B764;
static __int32_t func_10_l_729 = 0x035BBBF3;
static __int16_t func_10_l_733 = 0x0487;
static int main_i;
static int main_j;
static void(safe_add_func_uint32_t_u_u)(void) {
  safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
  (safe_add_func_uint32_t_u_u_ui2 == 0)
      ?: (safe_add_func_uint32_t_u_u_ui1 / safe_add_func_uint32_t_u_u_ui2);
}
static void func_1() {
  {
    func_1___trans_tmp_1 =
        ((safe_div_func_int8_t_s_s_si2 == 0) ||
         ((safe_div_func_int8_t_s_s_si1 == (128)) &&
          (safe_div_func_int8_t_s_s_si2 == (1))))
            ?: (safe_div_func_int8_t_s_s_si1 / safe_div_func_int8_t_s_s_si2);
    for (22;; g_52) {
    }
  }
}
static void func_10(void) {
  for (0; 0 < 5; 1) {
    {
      g_66 = 27;
      for (27;; g_66) {
        for (0;; g_376--) {
          {
            {
              func_10___trans_tmp_2 =
                  ((safe_rshift_func_int8_t_s_u_left = 32))
                      ?: (safe_rshift_func_int8_t_s_u_left >>
                          (safe_rshift_func_int8_t_s_u_right));
              {
                func_10___trans_tmp_3 =
                    (((unsigned int)safe_rshift_func_uint8_t_u_u_right) >= 32)
                        ? ((safe_rshift_func_uint8_t_u_u_left))
                        : (safe_rshift_func_uint8_t_u_u_left >>
                           ((unsigned int)safe_rshift_func_uint8_t_u_u_right));
              }
              func_10_l_737 =
                  ((func_10_p_11) =
                       (((func_10_l_729 = (g_96 = 0x03766958)) &
                         ((func_10___trans_tmp_2) &
                          ((((func_10_l_717) = 0xF5) <=
                            (((0x45 <= 0x03766958) <
                              ((func_10_l_733) = (g_27))) <
                             (func_10___trans_tmp_3))) < (0)))) > 3U));
            }
          }
        }
      }
    }
  }
}
int main(void) {
  for (main_i; main_i < 5; main_i++) {
    for (main_j; main_j < 7; main_j++) {
      {
        {
          { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab_0; }
        }
      }
    }
  }
  for (main_i; main_i < 3; main_i++) {
    for (main_j; main_j < 3; main_j++) {
    }
  }
}
