          typedef unsigned char __uint8_t;
                         typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                         typedef short int16_t;
                                                                                                                                                                                                                                     __int32_t safe_add_func_int32_t_s_s_si1;
        __int32_t safe_add_func_int32_t_s_s_si2;
                 __int32_t safe_div_func_int32_t_s_s_si1;
        __int32_t safe_div_func_int32_t_s_s_si2;
                     __uint8_t safe_unary_minus_func_uint8_t_u_ui;
                 __uint8_t safe_add_func_uint8_t_u_u_ui1;
        __uint8_t safe_add_func_uint8_t_u_u_ui2;
                 __uint8_t safe_lshift_func_uint8_t_u_s_left;
        int safe_lshift_func_uint8_t_u_s_right;
                 __uint16_t safe_unary_minus_func_uint16_t_u_ui;
                 __uint16_t safe_add_func_uint16_t_u_u_ui1;
        __uint16_t safe_add_func_uint16_t_u_u_ui2;
                 __uint16_t safe_sub_func_uint16_t_u_u_ui1;
        __uint16_t safe_sub_func_uint16_t_u_u_ui2;
                 __uint16_t safe_mod_func_uint16_t_u_u_ui1;
        __uint16_t safe_mod_func_uint16_t_u_u_ui2;
                 __uint16_t safe_div_func_uint16_t_u_u_ui1;
        __uint16_t safe_div_func_uint16_t_u_u_ui2;
                 __uint16_t safe_lshift_func_uint16_t_u_s_left;
        int safe_lshift_func_uint16_t_u_s_right;
                 __uint16_t safe_rshift_func_uint16_t_u_s_left;
        int safe_rshift_func_uint16_t_u_s_right;
        void  (safe_rshift_func_uint16_t_u_s)( void ) {
                     (((safe_rshift_func_uint16_t_u_s_right) = 32)) ?      :     (safe_rshift_func_uint16_t_u_s_left >> (safe_rshift_func_uint16_t_u_s_right));
              }
                __uint32_t safe_unary_minus_func_uint32_t_u_ui;
                 __uint32_t safe_add_func_uint32_t_u_u_ui1;
        __uint32_t safe_add_func_uint32_t_u_u_ui2;
                 __uint32_t safe_sub_func_uint32_t_u_u_ui1;
        __uint32_t safe_sub_func_uint32_t_u_u_ui2;
        void  (safe_sub_func_uint32_t_u_u)( void ) {
                 safe_sub_func_uint32_t_u_u_ui1 - safe_sub_func_uint32_t_u_u_ui2;
              }
                 __uint32_t safe_mod_func_uint32_t_u_u_ui1;
        __uint32_t safe_mod_func_uint32_t_u_u_ui2;
        void  (safe_mod_func_uint32_t_u_u)( void ) {
                     (safe_mod_func_uint32_t_u_u_ui2 == 0) ?      :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
              }
                __uint32_t safe_div_func_uint32_t_u_u_ui1;
        __uint32_t safe_div_func_uint32_t_u_u_ui2;
        void  (safe_div_func_uint32_t_u_u)( void ) {
                     (safe_div_func_uint32_t_u_u_ui2 == 0) ?      :     (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
              }
                         static __uint32_t crc32_tab;
        static __uint32_t crc32_tab_0;
                static __uint32_t crc32_context = 4294967295UL;
                int crc32_gentab_i;
int crc32_gentab_j;
static void crc32_gentab (void) {
               
               crc32_gentab_i = 0;
                        for (0;
              0 < 256;
              crc32_gentab_i++) {
              crc32_gentab_j = 8;
                       for (8;
            8 > 0;
            crc32_gentab_j--) ;
             }
              }
                __uint8_t crc32_byte_b;
                 __uint32_t crc32_8bytes_val;
                 __uint32_t transparent_crc_val;
        char  transparent_crc_vname;
                static __uint32_t g_131 = 3066444866;
                static __uint16_t g_153 = 0x679C;
                static __int32_t g_197 = 1;
                static __uint8_t g_281 = 1U;
                static __uint32_t g_288 = 0xFF553064;
                static __uint8_t g_332 = 0U;
                static __uint16_t g_771 = 8U;
                __uint16_t func_1___trans_tmp_1;
void  func_1(void) {
                  
                  {
                          func_1___trans_tmp_1 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
                        }
                              g_288 = 0;
                              g_288 = func_1___trans_tmp_1;
                              for (func_1___trans_tmp_1;
              ;
              func_1___trans_tmp_1)     {
                     1;
                }
              }
                __uint32_t func_13_p_14;
        int16_t func_13_p_15;
        const __uint8_t func_13_p_16;
        __int32_t func_13_p_17;
        __uint16_t func_13___trans_tmp_2;
__uint32_t func_13_l_734 = 4294967286U;
__int32_t func_13_l_735 = 0x4084D062;
void  func_13(   void) {
                  
                  
                  
                  {
                          func_13___trans_tmp_2 =      (safe_mod_func_uint16_t_u_u_ui2 == 0) ?      :     (safe_mod_func_uint16_t_u_u_ui1 % safe_mod_func_uint16_t_u_u_ui2);
                        }
                              (((func_13_p_14 <= (g_153 = (func_13_p_17 <= ((((func_13___trans_tmp_2) == 1) | func_13_p_16) > func_13_p_15)))) || 0x38) < func_13_p_17);
                               
              }
                __uint32_t func_18_p_19;
        int16_t func_18_p_20;
        __int32_t func_18___trans_tmp_4;
__uint16_t func_18___trans_tmp_3;
__uint32_t func_18_l_338 = 0x90B11C7D;
__int32_t func_18_l_352 = 0x5F1AE000;
void  func_18(   void) {
                  
                  
                  
                  
                  {
                          func_18___trans_tmp_3 =      (safe_div_func_uint16_t_u_u_ui2 == 0) ?     ((safe_div_func_uint16_t_u_u_ui1)) :     (safe_div_func_uint16_t_u_u_ui1 / safe_div_func_uint16_t_u_u_ui2);
                        }
                              (func_18___trans_tmp_3);
                       {
                    {
                            func_18___trans_tmp_4 =      ((safe_add_func_int32_t_s_s_si2 == 0) || ((safe_add_func_int32_t_s_s_si1 == (21474836471)) && (safe_add_func_int32_t_s_s_si2 == 0))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 % safe_add_func_int32_t_s_s_si2);
                          }
                                   for (func_18___trans_tmp_4;
            (func_18___trans_tmp_4 == 5);
            func_18___trans_tmp_4)         {
                  }
                }
                  g_131 = (11);
                              for (g_131;
              (g_131 < 52);
              g_131++)                  g_153;
              }
                __int32_t func_40_p_41;
        void  func_40(void) {
                              func_40_p_41 = ((__uint32_t)(func_40_p_41) - (__uint32_t)(9));
                              for (func_40_p_41;
              (func_40_p_41 >= (27));
              func_40_p_41)                  0xB44CA3D1;
              }
                __uint32_t func_48_p_49;
        __int32_t func_48_p_51;
        __int32_t func_48___trans_tmp_5;
void  func_48(    void) {
                  
                              for (func_48_p_49;
              (func_48_p_49 != 27);
              ++func_48_p_49)     {
                    {
                            func_48___trans_tmp_5 =      ((safe_div_func_int32_t_s_s_si2 == 0) || ((safe_div_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_div_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int32_t_s_s_si1)) :     (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
                          }
                                   (((3U != (func_48___trans_tmp_5)) != 176) <= 0x65);
                }
              }
                int main (void) {
                  {
                         {
                                {
                                       crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                      }
                                                            ;
                               }
                        }
              }
