          typedef unsigned __uint8_t;
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef signed long int __int64_t;
                typedef unsigned long int __uint64_t;
                                                             typedef __uint16_t uint16_t;
                         typedef __uint64_t uint64_t;
                __uint32_t platform_main_end_crc;
        int platform_main_end_flag;
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
                  __int32_t safe_add_func_int32_t_s_s_si1;
        __int32_t safe_add_func_int32_t_s_s_si2;
                      __int64_t safe_unary_minus_func_int64_t_s_si;
                 __int64_t safe_add_func_int64_t_s_s_si1;
        __int64_t safe_add_func_int64_t_s_s_si2;
                 __int64_t safe_sub_func_int64_t_s_s_si1;
        __int64_t safe_sub_func_int64_t_s_s_si2;
                  __int64_t 
         safe_mod_func_int64_t_s_s_si2;
                       __uint8_t safe_add_func_uint8_t_u_u_ui1;
        __uint8_t safe_add_func_uint8_t_u_u_ui2;
                 __uint8_t safe_sub_func_uint8_t_u_u_ui1;
        __uint8_t safe_sub_func_uint8_t_u_u_ui2;
                 __uint8_t safe_mul_func_uint8_t_u_u_ui1;
        __uint8_t safe_mul_func_uint8_t_u_u_ui2;
                 __uint8_t safe_mod_func_uint8_t_u_u_ui1;
        __uint8_t safe_mod_func_uint8_t_u_u_ui2;
                  __uint8_t safe_lshift_func_uint8_t_u_s_left;
        int safe_lshift_func_uint8_t_u_s_right;
        void  (safe_lshift_func_uint8_t_u_s)( void ) {
                     ((((int)safe_lshift_func_uint8_t_u_s_right) < 0) || (((int)safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > (0 >> ((int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((int)safe_lshift_func_uint8_t_u_s_right));
                     ((((unsigned )safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > (0 >> ((unsigned int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((unsigned int)safe_lshift_func_uint8_t_u_s_right));
              }
                __uint8_t safe_rshift_func_uint8_t_u_s_left;
        int safe_rshift_func_uint8_t_u_s_right;
        void  (safe_rshift_func_uint8_t_u_s)( void ) {
                     ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
                     (((unsigned int)safe_rshift_func_uint8_t_u_s_right) >= 32) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((unsigned int)safe_rshift_func_uint8_t_u_s_right));
              }
                uint16_t safe_mul_func_uint16_t_u_u_ui1;
        uint16_t safe_mul_func_uint16_t_u_u_ui2;
        void  (safe_mul_func_uint16_t_u_u)( void ) {
                 ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
                     (safe_mul_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mul_func_uint16_t_u_u_ui1)) :     (safe_mul_func_uint16_t_u_u_ui1 % safe_mul_func_uint16_t_u_u_ui2);
              }
                uint16_t safe_lshift_func_uint16_t_u_u_left;
        unsigned int safe_lshift_func_uint16_t_u_u_right;
        void  (safe_lshift_func_uint16_t_u_u)( void ) {
                     ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > (0 >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
              }
                   __uint32_t safe_add_func_uint32_t_u_u_ui1;
        __uint32_t safe_add_func_uint32_t_u_u_ui2;
                 __uint32_t safe_sub_func_uint32_t_u_u_ui1;
        __uint32_t safe_sub_func_uint32_t_u_u_ui2;
        void  (safe_sub_func_uint32_t_u_u)( void ) {
                     (safe_sub_func_uint32_t_u_u_ui2 == 0) ?     ((safe_sub_func_uint32_t_u_u_ui1)) :     (safe_sub_func_uint32_t_u_u_ui1 % safe_sub_func_uint32_t_u_u_ui2);
              }
                      uint64_t safe_add_func_uint64_t_u_u_ui1;
        uint64_t safe_add_func_uint64_t_u_u_ui2;
        void  (safe_add_func_uint64_t_u_u)( void ) {
                 safe_add_func_uint64_t_u_u_ui1 + safe_add_func_uint64_t_u_u_ui2;
              }
                uint64_t safe_sub_func_uint64_t_u_u_ui1;
        uint64_t safe_sub_func_uint64_t_u_u_ui2;
        void  (safe_sub_func_uint64_t_u_u)( void ) {
                 safe_sub_func_uint64_t_u_u_ui1 - safe_sub_func_uint64_t_u_u_ui2;
              }
                 uint64_t safe_mod_func_uint64_t_u_u_ui1;
        uint64_t safe_mod_func_uint64_t_u_u_ui2;
        void  (safe_mod_func_uint64_t_u_u)( void ) {
                     (safe_mod_func_uint64_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint64_t_u_u_ui1)) :     (safe_mod_func_uint64_t_u_u_ui1 % safe_mod_func_uint64_t_u_u_ui2);
              }
                __uint32_t crc32_context = 0xFFFFFFFFUL;
                __int32_t g_5 = 0;
                __int32_t  const g_4 = 0;
                uint64_t g_43 = 0xABF7C2F5A260DF39LL;
                uint64_t g_66 = 0xA772BE76DCB0C7B2LL;
                __int64_t g_100 = 0L;
                uint16_t g_121 = 0xB92FL;
                uint16_t g_253 = 65535UL;
                __uint32_t g_280 = 0x827AFF6EL;
                uint16_t g_286 = 65535UL;
                void  func_1() {
                  __uint8_t __trans_tmp_3;
                  __uint8_t __trans_tmp_2;
                  signed __trans_tmp_1;
                  signed char l_785 = 0xFAL;
                  {
                          signed char si2 = 0;
                          __trans_tmp_1 =      (safe_add_func_int8_t_s_s_si1 + 0);
                        }
                               {
                    {
                            __trans_tmp_2 =      (safe_mod_func_uint8_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint8_t_u_u_ui1)) :     (safe_mod_func_uint8_t_u_u_ui1 % safe_mod_func_uint8_t_u_u_ui2);
                          }
                          __trans_tmp_3 =  safe_sub_func_uint8_t_u_u_ui1 - safe_sub_func_uint8_t_u_u_ui2;
                        }
                              for (__trans_tmp_3;
              (__trans_tmp_3 <= 0);
              __trans_tmp_3)     {
                }
              }
                int main (void) {
                              {
                         printf ("checksum = %X\n", platform_main_end_crc);
                        }
              }
