                                   typedef signed short int __int16_t;
                                         typedef signed int __int32_t;
                                                                                               signed char safe_add_func_int8_t_s_s_si2;
                         signed char safe_sub_func_int8_t_s_s_si1;
                signed char safe_sub_func_int8_t_s_s_si2;
                         signed char safe_mul_func_int8_t_s_s_si1;
                signed char safe_mul_func_int8_t_s_s_si2;
                         signed char safe_mod_func_int8_t_s_s_si1;
                signed safe_rshift_func_int8_t_s_s_left;
                int safe_rshift_func_int8_t_s_s_right;
                         __int16_t safe_add_func_int16_t_s_s_si1;
                __int16_t safe_add_func_int16_t_s_s_si2;
                         __int16_t safe_mul_func_int16_t_s_s_si1;
                __int16_t safe_mul_func_int16_t_s_s_si2;
                          __int16_t safe_lshift_func_int16_t_s_s_left;
                int safe_lshift_func_int16_t_s_s_right;
                         __int16_t safe_lshift_func_int16_t_s_u_left;
                unsigned int safe_lshift_func_int16_t_s_u_right;
                         __int16_t safe_rshift_func_int16_t_s_s_left;
                int safe_rshift_func_int16_t_s_s_right;
                         __int16_t safe_rshift_func_int16_t_s_u_left;
                unsigned int safe_rshift_func_int16_t_s_u_right;
                          __int32_t safe_add_func_int32_t_s_s_si1;
                __int32_t safe_add_func_int32_t_s_s_si2;
                         __int32_t safe_sub_func_int32_t_s_s_si1;
                __int32_t safe_sub_func_int32_t_s_s_si2;
                         unsigned char safe_add_func_uint8_t_u_u_ui1;
                unsigned char safe_add_func_uint8_t_u_u_ui2;
                         unsigned char safe_sub_func_uint8_t_u_u_ui1;
                unsigned char safe_sub_func_uint8_t_u_u_ui2;
                         unsigned char safe_mul_func_uint8_t_u_u_ui1;
                unsigned char safe_mul_func_uint8_t_u_u_ui2;
                          unsigned char safe_lshift_func_uint8_t_u_s_left;
                int safe_lshift_func_uint8_t_u_s_right;
                         unsigned char safe_lshift_func_uint8_t_u_u_left;
                unsigned int safe_lshift_func_uint8_t_u_u_right;
                void  (safe_lshift_func_uint8_t_u_u)( void ) {
                            (((safe_lshift_func_uint8_t_u_u_right) >= 2) || (safe_lshift_func_uint8_t_u_u_left > (0 >> (safe_lshift_func_uint8_t_u_u_right)))) ?     ((safe_lshift_func_uint8_t_u_u_left)) :     (safe_lshift_func_uint8_t_u_u_left << (safe_lshift_func_uint8_t_u_u_right));
                     }
                        unsigned char safe_rshift_func_uint8_t_u_u_left;
                unsigned int safe_rshift_func_uint8_t_u_u_right;
                         unsigned short safe_mul_func_uint16_t_u_u_ui1;
                unsigned short safe_mul_func_uint16_t_u_u_ui2;
                void  (safe_mul_func_uint16_t_u_u)( void ) {
                        (safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
                     }
                         unsigned short safe_lshift_func_uint16_t_u_s_left;
                int safe_lshift_func_uint16_t_u_s_right;
                void  (safe_lshift_func_uint16_t_u_s)( void ) {
                            ((((int)safe_lshift_func_uint16_t_u_s_right) < 0) || (((int)safe_lshift_func_uint16_t_u_s_right) >= 2) || (safe_lshift_func_uint16_t_u_s_left > (0 >> ((int)safe_lshift_func_uint16_t_u_s_right)))) ?     ((safe_lshift_func_uint16_t_u_s_left)) :     (safe_lshift_func_uint16_t_u_s_left << ((int)safe_lshift_func_uint16_t_u_s_right));
                     }
                        unsigned short safe_lshift_func_uint16_t_u_u_left;
                unsigned int safe_lshift_func_uint16_t_u_u_right;
                void  (safe_lshift_func_uint16_t_u_u)( void ) {
                            ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 2) || (safe_lshift_func_uint16_t_u_u_left > (0 >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
                     }
                        unsigned short safe_rshift_func_uint16_t_u_s_left;
                int safe_rshift_func_uint16_t_u_s_right;
                void  (safe_rshift_func_uint16_t_u_s)( void ) {
                            ((((int)safe_rshift_func_uint16_t_u_s_right) < 0) || (((int)safe_rshift_func_uint16_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((int)safe_rshift_func_uint16_t_u_s_right));
                            (((unsigned int)safe_rshift_func_uint16_t_u_s_right) >= 32) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((unsigned int)safe_rshift_func_uint16_t_u_s_right));
                     }
                         unsigned int safe_add_func_uint32_t_u_u_ui1;
                unsigned int safe_add_func_uint32_t_u_u_ui2;
                void  (safe_add_func_uint32_t_u_u)( void ) {
                        safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
                     }
                                 static unsigned int crc32_tab;
                static unsigned int crc32_tab_0;
                        static unsigned int crc32_context = 4294967295UL;
                                 unsigned char crc32_byte_b;
                         unsigned int crc32_8bytes_val;
                         unsigned int transparent_crc_val;
                         static unsigned int g_2 = 3004795535;
                        static unsigned int g_39 = 4121097751;
                        static unsigned int g_54 = 2888062833;
                        static __int32_t g_60 = 2038131168;
                        static __int16_t g_65 = 0;
                        static __int16_t g_67 = 0;
                        static unsigned int g_73 = 7U;
                        static unsigned char g_194 = 9U;
                        static signed char g_515 = (5);
                        __int16_t func_1___trans_tmp_2;
        signed char func_1___trans_tmp_1;
        void  func_1(void) {
                                                                                              for (g_73;
                     (g_73 > 22);
                     g_73++)     {
                                               {
                                 func_1___trans_tmp_1 =      ((safe_rshift_func_int8_t_s_s_left < 0) || (((int)safe_rshift_func_int8_t_s_s_right) < 0) || (((int)safe_rshift_func_int8_t_s_s_right) >= 32))?     ((safe_rshift_func_int8_t_s_s_left)) :     (safe_rshift_func_int8_t_s_s_left >> ((int)safe_rshift_func_int8_t_s_s_right));
                                 func_1___trans_tmp_2 =      ((safe_lshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) || (safe_lshift_func_int16_t_s_u_left > ((32767) >> ((unsigned int)safe_lshift_func_int16_t_s_u_right)))) ?     ((safe_lshift_func_int16_t_s_u_left)) :     (safe_lshift_func_int16_t_s_u_left << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
                               }
                                         ((g_73 >= (((4121097751 >= (((func_1___trans_tmp_1) == ((254U == (g_515 == (((func_1___trans_tmp_2) == 2U) || 253U))) & 3004795535)) | 2038131168)) | 0x5C) && 0x14FDFC62)) > 0xBB)                                     ;
                                    }
                     }
                        int main (void) {
                         {
                               {
                                     {
                                          }
                                    }
                              }
                     }
