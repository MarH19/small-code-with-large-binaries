                   typedef signed short int __int16_t;
                                          typedef unsigned int __uint32_t;
                        typedef signed long int __int64_t;
                        typedef unsigned long int __uint64_t;
                                          typedef int int32_t;
                                                                     __uint32_t platform_main_end_crc;
                          signed char safe_add_func_int8_t_s_s_si1;
                         signed char safe_mod_func_int8_t_s_s_si1;
                signed char safe_mod_func_int8_t_s_s_si2;
                          signed char safe_lshift_func_int8_t_s_s_left;
                int safe_lshift_func_int8_t_s_s_right;
                         signed char safe_lshift_func_int8_t_s_u_left;
                unsigned int safe_lshift_func_int8_t_s_u_right;
                           __int16_t safe_add_func_int16_t_s_s_si1;
                __int16_t safe_add_func_int16_t_s_s_si2;
                          __int16_t safe_lshift_func_int16_t_s_s_left;
                int safe_lshift_func_int16_t_s_s_right;
                         __int16_t safe_rshift_func_int16_t_s_s_left;
                int safe_rshift_func_int16_t_s_s_right;
                          int32_t safe_add_func_int32_t_s_s_si1;
                int32_t safe_add_func_int32_t_s_s_si2;
                              __int64_t safe_unary_minus_func_int64_t_s_si;
                         __int64_t safe_add_func_int64_t_s_s_si1;
                __int64_t safe_add_func_int64_t_s_s_si2;
                __int64_t safe_sub_func_int64_t_s_s_si2;
                          __int64_t safe_mod_func_int64_t_s_s_si1;
                __int64_t safe_mod_func_int64_t_s_s_si2;
                void  (safe_mod_func_int64_t_s_s)( void ) {
                            ((safe_mod_func_int64_t_s_s_si2 == 0) || ((safe_mod_func_int64_t_s_s_si1 == (23372036854775807L -1)) && (safe_mod_func_int64_t_s_s_si2 == (1)))) ?      :     (safe_mod_func_int64_t_s_s_si1 % safe_mod_func_int64_t_s_s_si2);
                     }
                              unsigned char safe_add_func_uint8_t_u_u_ui1;
                unsigned char safe_add_func_uint8_t_u_u_ui2;
                         unsigned char safe_sub_func_uint8_t_u_u_ui1;
                unsigned char safe_sub_func_uint8_t_u_u_ui2;
                         unsigned char safe_mul_func_uint8_t_u_u_ui1;
                unsigned char safe_mul_func_uint8_t_u_u_ui2;
                void  (safe_mul_func_uint8_t_u_u)( void ) {
                        (safe_mul_func_uint8_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint8_t_u_u_ui2);
                     }
                        unsigned char safe_mod_func_uint8_t_u_u_ui1;
                unsigned char safe_mod_func_uint8_t_u_u_ui2;
                          unsigned char safe_lshift_func_uint8_t_u_s_left;
                int safe_lshift_func_uint8_t_u_s_right;
                void  (safe_lshift_func_uint8_t_u_s)( void ) {
                            ((((int)safe_lshift_func_uint8_t_u_s_right) < 0) || (((int)safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > ((255) >> ((int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((int)safe_lshift_func_uint8_t_u_s_right));
                            ((((unsigned int)safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > ((255) >> ((unsigned int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((unsigned int)safe_lshift_func_uint8_t_u_s_right));
                     }
                        unsigned char safe_rshift_func_uint8_t_u_s_left;
                int safe_rshift_func_uint8_t_u_s_right;
                void  (safe_rshift_func_uint8_t_u_s)( void ) {
                            ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
                            (((unsigned int)safe_rshift_func_uint8_t_u_s_right) >= 32) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((unsigned int)safe_rshift_func_uint8_t_u_s_right));
                     }
                        unsigned short safe_mul_func_uint16_t_u_u_ui1;
                unsigned short safe_mul_func_uint16_t_u_u_ui2;
                void  (safe_mul_func_uint16_t_u_u)( void ) {
                        ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
                            (safe_mul_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mul_func_uint16_t_u_u_ui1)) :     (safe_mul_func_uint16_t_u_u_ui1 % safe_mul_func_uint16_t_u_u_ui2);
                     }
                        unsigned short safe_lshift_func_uint16_t_u_u_left;
                unsigned int safe_lshift_func_uint16_t_u_u_right;
                void  (safe_lshift_func_uint16_t_u_u)( void ) {
                            ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
                     }
                           __uint32_t safe_add_func_uint32_t_u_u_ui1;
                __uint32_t safe_add_func_uint32_t_u_u_ui2;
                void  (safe_add_func_uint32_t_u_u)( void ) {
                        safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
                     }
                        __uint32_t safe_sub_func_uint32_t_u_u_ui1;
                __uint32_t safe_sub_func_uint32_t_u_u_ui2;
                void  (safe_sub_func_uint32_t_u_u)( void ) {
                            (safe_sub_func_uint32_t_u_u_ui2 == 0) ?     ((safe_sub_func_uint32_t_u_u_ui1)) :     (safe_sub_func_uint32_t_u_u_ui1 % safe_sub_func_uint32_t_u_u_ui2);
                     }
                              __uint64_t safe_add_func_uint64_t_u_u_ui1;
                __uint64_t safe_add_func_uint64_t_u_u_ui2;
                void  (safe_add_func_uint64_t_u_u)( void ) {
                        safe_add_func_uint64_t_u_u_ui1 + safe_add_func_uint64_t_u_u_ui2;
                     }
                        __uint64_t safe_sub_func_uint64_t_u_u_ui1;
                __uint64_t safe_sub_func_uint64_t_u_u_ui2;
                void  (safe_sub_func_uint64_t_u_u)( void ) {
                        safe_sub_func_uint64_t_u_u_ui1 - safe_sub_func_uint64_t_u_u_ui2;
                     }
                         __uint64_t safe_mod_func_uint64_t_u_u_ui1;
                __uint64_t safe_mod_func_uint64_t_u_u_ui2;
                void  (safe_mod_func_uint64_t_u_u)( void ) {
                            (safe_mod_func_uint64_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint64_t_u_u_ui1)) :     (safe_mod_func_uint64_t_u_u_ui1 % safe_mod_func_uint64_t_u_u_ui2);
                     }
                        static __uint32_t crc32_context = 4294967295UL;
                        static int32_t  const g_4 = (1L);
                        static __uint64_t g_43 = 12391587259980242745LL;
                        static __uint64_t g_66 = 12065915769396971442LL;
                        static unsigned short g_121 = 47407L;
        unsigned char func_1___trans_tmp_2;
        void  func_1(void) {
                                                                                                     {
                              }
                                      {
                                         {
                                 func_1___trans_tmp_2 =      (safe_mod_func_uint8_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint8_t_u_u_ui1)) :     (safe_mod_func_uint8_t_u_u_ui1 % safe_mod_func_uint8_t_u_u_ui2);
                               }
                      }
                     }
                        int main (void) {
                     }
