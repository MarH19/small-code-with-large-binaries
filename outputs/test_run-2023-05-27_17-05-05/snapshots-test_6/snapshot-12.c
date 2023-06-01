          
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef signed long int __int64_t;
                typedef unsigned long int __uint64_t;
                                                             typedef __uint16_t uint16_t;
                         
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
                  __int64_t safe_mod_func_int64_t_s_s_si1;
        __int64_t safe_mod_func_int64_t_s_s_si2;
                       unsigned int safe_add_func_uint8_t_u_u_ui1;
        unsigned int safe_add_func_uint8_t_u_u_ui2;
                 unsigned int safe_sub_func_uint8_t_u_u_ui1;
        unsigned int safe_sub_func_uint8_t_u_u_ui2;
                 unsigned int safe_mul_func_uint8_t_u_u_ui1;
        unsigned int safe_mul_func_uint8_t_u_u_ui2;
                 unsigned int safe_mod_func_uint8_t_u_u_ui1;
        unsigned int safe_mod_func_uint8_t_u_u_ui2;
                  unsigned int safe_lshift_func_uint8_t_u_s_left;
        int safe_lshift_func_uint8_t_u_s_right;
        void  (safe_lshift_func_uint8_t_u_s)( void ) {
                     (((safe_lshift_func_uint8_t_u_s_right) = 32) || (safe_lshift_func_uint8_t_u_s_left > (0 >> (safe_lshift_func_uint8_t_u_s_right)))) ?      :     (safe_lshift_func_uint8_t_u_s_left << (safe_lshift_func_uint8_t_u_s_right));
                     (((safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > (0 >> ((unsigned int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((unsigned int)safe_lshift_func_uint8_t_u_s_right));
              }
                unsigned int safe_rshift_func_uint8_t_u_s_left;
        int safe_rshift_func_uint8_t_u_s_right;
        void  (safe_rshift_func_uint8_t_u_s)( void ) {
                     (((safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
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
                __uint32_t crc32_context = 4294967295;
                __int32_t g_5 = 0;
                __int32_t  const g_4 = 0;
                __uint64_t g_43 = 12391587259980242745LL;
                __uint64_t g_66 = 12065915769396971442LL;
                __int64_t g_100 = 0L;
                uint16_t g_121 = 47407L;
                uint16_t g_253 = 65535UL;
                __uint32_t g_280 = 2189098862L;
                uint16_t g_286 = 65535UL;
                unsigned int func_1___trans_tmp_3;
unsigned int func_1___trans_tmp_2;
int func_1___trans_tmp_1;
signed char func_1_l_785 = 250L;
signed char func_1_si2 = 0;
void  func_1() {
                  
                  
                  
                  
                  {
                          
                          func_1___trans_tmp_1 =      (safe_add_func_int8_t_s_s_si1 + 0);
                        }
                               {
                    {
                            func_1___trans_tmp_2 =      (safe_mod_func_uint8_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint8_t_u_u_ui1)) :     (safe_mod_func_uint8_t_u_u_ui1 % safe_mod_func_uint8_t_u_u_ui2);
                          }
                          func_1___trans_tmp_3 =  safe_sub_func_uint8_t_u_u_ui1 - safe_sub_func_uint8_t_u_u_ui2;
                        }
                              for (func_1___trans_tmp_3;
              (func_1___trans_tmp_3 <= 0);
              func_1___trans_tmp_3)     {
                }
              }
                int main (void) {
                              {
                         printf ("checksum = %X\n", platform_main_end_crc);
                        }
              }
