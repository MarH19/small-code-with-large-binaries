                                                     typedef signed int __int32_t;
                                                                                                                                                                                                                                                                                        __int32_t safe_add_func_int32_t_s_s_si1;
                __int32_t safe_add_func_int32_t_s_s_si2;
                         __int32_t safe_div_func_int32_t_s_s_si1;
                __int32_t safe_div_func_int32_t_s_s_si2;
                             unsigned char safe_unary_minus_func_uint8_t_u_ui;
                         unsigned char safe_add_func_uint8_t_u_u_ui1;
                unsigned char safe_add_func_uint8_t_u_u_ui2;
                         unsigned char safe_lshift_func_uint8_t_u_s_left;
                int safe_lshift_func_uint8_t_u_s_right;
                         unsigned short safe_unary_minus_func_uint16_t_u_ui;
                         unsigned short safe_add_func_uint16_t_u_u_ui1;
                unsigned short safe_add_func_uint16_t_u_u_ui2;
                         unsigned short safe_sub_func_uint16_t_u_u_ui1;
                unsigned short safe_sub_func_uint16_t_u_u_ui2;
                         unsigned short safe_mod_func_uint16_t_u_u_ui1;
                unsigned short safe_mod_func_uint16_t_u_u_ui2;
                         unsigned short safe_div_func_uint16_t_u_u_ui1;
                unsigned short safe_div_func_uint16_t_u_u_ui2;
                         unsigned short safe_lshift_func_uint16_t_u_s_left;
                int safe_lshift_func_uint16_t_u_s_right;
                         unsigned short safe_rshift_func_uint16_t_u_s_left;
                int safe_rshift_func_uint16_t_u_s_right;
                void  (safe_rshift_func_uint16_t_u_s)( void ) {
                            (((safe_rshift_func_uint16_t_u_s_right) = 32)) ?      :     (safe_rshift_func_uint16_t_u_s_left >> (safe_rshift_func_uint16_t_u_s_right));
                     }
                        unsigned int safe_unary_minus_func_uint32_t_u_ui;
                         unsigned int safe_add_func_uint32_t_u_u_ui1;
                unsigned int safe_add_func_uint32_t_u_u_ui2;
                         unsigned int safe_sub_func_uint32_t_u_u_ui1;
                unsigned int safe_sub_func_uint32_t_u_u_ui2;
                void  (safe_sub_func_uint32_t_u_u)( void ) {
                        safe_sub_func_uint32_t_u_u_ui1 - safe_sub_func_uint32_t_u_u_ui2;
                     }
                         unsigned int safe_mod_func_uint32_t_u_u_ui1;
                unsigned int safe_mod_func_uint32_t_u_u_ui2;
                void  (safe_mod_func_uint32_t_u_u)( void ) {
                            (safe_mod_func_uint32_t_u_u_ui2 == 0) ?      :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
                     }
                        unsigned int safe_div_func_uint32_t_u_u_ui1;
                unsigned int safe_div_func_uint32_t_u_u_ui2;
                void  (safe_div_func_uint32_t_u_u)( void ) {
                            (safe_div_func_uint32_t_u_u_ui2 == 0) ?      :     (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
                     }
                                 static unsigned int crc32_tab;
                static unsigned int crc32_tab_0;
                        static unsigned int crc32_context = 4294967295UL;
                        int crc32_gentab_i;
        static void crc32_gentab (void) {
                                      crc32_gentab_i = 0;
                     }
                        unsigned char crc32_byte_b;
                        static unsigned int g_131 = 3066444866;
                        static unsigned  g_153 = 0x679C;
                        static __int32_t g_197 = 1;
                        static unsigned char g_281 = 1U;
                        static unsigned int g_288 = 4283773028;
                        unsigned short func_1___trans_tmp_1;
        void  func_1(void) {
                                            {
                                func_1___trans_tmp_1 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
                              }
                                     g_288 = 0;
                                     g_288 = func_1___trans_tmp_1;
                                     for (func_1___trans_tmp_1;
                     ;
                     func_1___trans_tmp_1)     {
                      }
                     }
                        unsigned int func_13_p_14;
                short func_13_p_15;
                const unsigned char func_13_p_16;
                __int32_t func_13_p_17;
                unsigned short func_13___trans_tmp_2;
        void  func_13(   void) {
                                                                                  {
                                func_13___trans_tmp_2 =      (safe_mod_func_uint16_t_u_u_ui2 == 0) ?      :     (safe_mod_func_uint16_t_u_u_ui1 % safe_mod_func_uint16_t_u_u_ui2);
                              }
                                     (((func_13_p_14 <= (g_153 = (func_13_p_17 <= ((((func_13___trans_tmp_2) == 1) | func_13_p_16) > func_13_p_15)))) || 0x38) < func_13_p_17);
                                                     }
                __int32_t func_18___trans_tmp_4;
        unsigned short func_18___trans_tmp_3;
        void  func_18(   void) {
                                                                                                     {
                                func_18___trans_tmp_3 =      (safe_div_func_uint16_t_u_u_ui2 == 0) ?     ((safe_div_func_uint16_t_u_u_ui1)) :     (safe_div_func_uint16_t_u_u_ui1 / safe_div_func_uint16_t_u_u_ui2);
                              }
                              {
                          {
                                 func_18___trans_tmp_4 =      ((safe_add_func_int32_t_s_s_si2 == 0) || ((safe_add_func_int32_t_s_s_si1 == 0) && (safe_add_func_int32_t_s_s_si2 == 0))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 % safe_add_func_int32_t_s_s_si2);
                               }
                                         for (func_18___trans_tmp_4;
                  (func_18___trans_tmp_4 == 5);
                  func_18___trans_tmp_4)         {
                       }
                      }
                                     for (g_131;
                     (g_131 < 52);
                     g_131++)                  g_153;
                     }
                        __int32_t func_40_p_41;
                void  func_40(void) {
                                     func_40_p_41 = ((unsigned int)(func_40_p_41) - (unsigned int)(9));
                                     for (func_40_p_41;
                     (func_40_p_41 >= (27));
                     func_40_p_41)                  3024921553;
                     }
                        unsigned int func_48_p_49;
                __int32_t func_48___trans_tmp_5;
        void  func_48(    void) {
                                                        for (func_48_p_49;
                     (func_48_p_49 != 27);
                     ++func_48_p_49)     {
                          {
                                 func_48___trans_tmp_5 =      ((safe_div_func_int32_t_s_s_si2 == 0) || ((safe_div_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_div_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int32_t_s_s_si1)) :     (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
                               }
                                         (((3U != (func_48___trans_tmp_5)) != 0xB0) <= 0x65);
                      }
                     }
                        int main (void) {
                         {
                               {
                                     {
                                           crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                          }
                                    }
                              }
                     }
