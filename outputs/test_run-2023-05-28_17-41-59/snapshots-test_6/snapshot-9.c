 typedef signed char __int8_t;
                typedef unsigned char __uint8_t;
                typedef signed short __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                                                                      __int8_t safe_add_func_int8_t_s_s_si2;
                 __int8_t safe_sub_func_int8_t_s_s_si1;
        __int8_t safe_sub_func_int8_t_s_s_si2;
                 __int8_t safe_mul_func_int8_t_s_s_si1;
        __int8_t safe_mul_func_int8_t_s_s_si2;
                 __int8_t safe_mod_func_int8_t_s_s_si1;
        __int8_t safe_mod_func_int8_t_s_s_si2;
                  __int8_t safe_lshift_func_int8_t_s_s_left;
        int safe_lshift_func_int8_t_s_s_right;
                 __int8_t safe_rshift_func_int8_t_s_s_left;
        int safe_rshift_func_int8_t_s_s_right;
                 __int16_t safe_add_func_int16_t_s_s_si1;
        __int16_t safe_add_func_int16_t_s_s_si2;
                 __int16_t safe_mul_func_int16_t_s_s_si1;
        __int16_t safe_mul_func_int16_t_s_s_si2;
                  __int16_t safe_lshift_func_int16_t_s_s_left;
        int safe_lshift_func_int16_t_s_s_right;
                 __int16_t safe_lshift_func_int16_t_s_u_left;
        unsigned safe_lshift_func_int16_t_s_u_right;
                 __int16_t safe_rshift_func_int16_t_s_s_left;
        int safe_rshift_func_int16_t_s_s_right;
                 __int16_t safe_rshift_func_int16_t_s_u_left;
        unsigned int safe_rshift_func_int16_t_s_u_right;
                  __int32_t safe_add_func_int32_t_s_s_si1;
        __int32_t safe_add_func_int32_t_s_s_si2;
                 __int32_t safe_sub_func_int32_t_s_s_si1;
        __int32_t safe_sub_func_int32_t_s_s_si2;
                 __uint8_t safe_add_func_uint8_t_u_u_ui1;
        __uint8_t safe_add_func_uint8_t_u_u_ui2;
                 __uint8_t safe_sub_func_uint8_t_u_u_ui1;
        __uint8_t safe_sub_func_uint8_t_u_u_ui2;
                 __uint8_t safe_mul_func_uint8_t_u_u_ui1;
        __uint8_t safe_mul_func_uint8_t_u_u_ui2;
                  __uint8_t safe_lshift_func_uint8_t_u_s_left;
        int safe_lshift_func_uint8_t_u_s_right;
                 __uint8_t safe_lshift_func_uint8_t_u_u_left;
        unsigned int safe_lshift_func_uint8_t_u_u_right;
                 __uint8_t safe_rshift_func_uint8_t_u_u_left;
        unsigned int safe_rshift_func_uint8_t_u_u_right;
                 __uint16_t safe_mul_func_uint16_t_u_u_ui1;
        __uint16_t safe_mul_func_uint16_t_u_u_ui2;
                  __uint16_t safe_lshift_func_uint16_t_u_s_left;
        int safe_lshift_func_uint16_t_u_s_right;
        void  (safe_lshift_func_uint16_t_u_s)( void ) {
                     ((((int)safe_lshift_func_uint16_t_u_s_right) < 0) || (((int)safe_lshift_func_uint16_t_u_s_right) >= 32) || (safe_lshift_func_uint16_t_u_s_left > (0 >> ((int)safe_lshift_func_uint16_t_u_s_right)))) ?     ((safe_lshift_func_uint16_t_u_s_left)) :     (safe_lshift_func_uint16_t_u_s_left << ((int)safe_lshift_func_uint16_t_u_s_right));
              }
                __uint16_t safe_lshift_func_uint16_t_u_u_left;
        unsigned int safe_lshift_func_uint16_t_u_u_right;
        void  (safe_lshift_func_uint16_t_u_u)( void ) {
                     ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > (0 >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
              }
                __uint16_t safe_rshift_func_uint16_t_u_s_left;
        int safe_rshift_func_uint16_t_u_s_right;
        void  (safe_rshift_func_uint16_t_u_s)( void ) {
                     ((((int)safe_rshift_func_uint16_t_u_s_right) < 0) || (((int)safe_rshift_func_uint16_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((int)safe_rshift_func_uint16_t_u_s_right));
                     (((unsigned int)safe_rshift_func_uint16_t_u_s_right) >= 32) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((unsigned int)safe_rshift_func_uint16_t_u_s_right));
              }
                 __uint32_t safe_add_func_uint32_t_u_u_ui1;
        __uint32_t safe_add_func_uint32_t_u_u_ui2;
                          static __uint32_t crc32_tab;
        static __uint32_t crc32_tab_0;
                static __uint32_t crc32_context = 0xFFFFFFFFUL;
                static void crc32_gentab (void) ;
                __uint8_t crc32_byte_b;
                 __uint32_t crc32_8bytes_val;
                 __uint32_t transparent_crc_val;
        char  transparent_crc_vname;
        int transparent_crc_flag;
                 static __uint32_t g_2 = 0xB3198A8F;
                static __uint32_t g_39 = 0xF5A2F617;
                static __uint32_t g_54 = 0xAC245771;
                static __int32_t g_60 = 0x797B69E0;
                static __int16_t g_65 = 0;
                static __int16_t g_67 = 0;
                static __uint32_t g_73 = 7U;
                static __uint8_t g_194 = 9U;
                static __uint32_t g_200 = 0xF1D446CA;
                static __int32_t g_225 = 0x5D562BBF;
                static __uint32_t g_226 = 0x14FDFC62;
                static __uint8_t g_259 = 253U;
                static __uint32_t g_263 = 0xC8B09539;
                static __uint8_t g_311 = 1U;
                static __uint8_t g_372 = 0x5C;
                static __int8_t g_515 = 0;
                static __uint32_t g_662 = 0U;
                static const __int8_t g_692 = 0x73;
                static __uint32_t g_739 = 0x20CCCE2B;
                static __uint8_t g_760 = 8U;
                static __uint32_t g_788 = 4294967294U;
                void  func_1(void) {
                  __int16_t __trans_tmp_2;
                  __int8_t __trans_tmp_1;
                  __uint8_t l_18 = 0xBB;
                  __int32_t l_23 = 0x4456E348;
                  __uint32_t l_287 = 0x71E7E6F1;
                  const __int8_t l_307 = 0x5D;
                              for (g_73;
              0;
              g_73++)     {
                    const __int32_t l_789 = 1;
                    {
                            __trans_tmp_1 =      ((safe_rshift_func_int8_t_s_s_left < 0) || (((int)safe_rshift_func_int8_t_s_s_right) < 0) || (((int)safe_rshift_func_int8_t_s_s_right) >= 32))?     ((safe_rshift_func_int8_t_s_s_left)) :     (safe_rshift_func_int8_t_s_s_left >> ((int)safe_rshift_func_int8_t_s_s_right));
                          }
                                   {
                            __trans_tmp_2 =      ((safe_lshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) || (safe_lshift_func_int16_t_s_u_left > (0 >> ((unsigned int)safe_lshift_func_int16_t_s_u_right)))) ?     ((safe_lshift_func_int16_t_s_u_left)) :     (safe_lshift_func_int16_t_s_u_left << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
                          }
                                   ((g_73 >= (((0xF5A2F617 >= (((__trans_tmp_1) == ((254U == (g_515 == (((__trans_tmp_2) == 2U) || 253U))) & 0xB3198A8F)) | 0x797B69E0)) | 0x5C) && 0x14FDFC62)) > 0xBB);
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
