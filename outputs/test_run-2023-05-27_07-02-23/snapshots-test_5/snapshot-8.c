 typedef signed char __int8_t;
                typedef unsigned char __uint8_t;
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef unsigned long int __uint64_t;
                typedef __int8_t int8_t;
                typedef __int16_t int16_t;
                                                    typedef __uint64_t uint64_t;
                                                                                              __uint32_t platform_main_end_crc;
        int platform_main_end_flag;
        static void platform_main_end( void) {
              }
                __uint8_t safe_add_func_uint8_t_u_u_ui1;
        __uint8_t safe_add_func_uint8_t_u_u_ui2;
        void  (safe_add_func_uint8_t_u_u)( void ) {
                 safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
              }
                __uint8_t safe_sub_func_uint8_t_u_u_ui1;
        __uint8_t safe_sub_func_uint8_t_u_u_ui2;
        void  (safe_sub_func_uint8_t_u_u)( void ) {
                 safe_sub_func_uint8_t_u_u_ui1 - safe_sub_func_uint8_t_u_u_ui2;
              }
                     __uint8_t safe_rshift_func_uint8_t_u_s_left;
        int safe_rshift_func_uint8_t_u_s_right;
        void  (safe_rshift_func_uint8_t_u_s)( void ) {
                     ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
              }
                 __uint16_t safe_rshift_func_uint16_t_u_s_left;
        int safe_rshift_func_uint16_t_u_s_right;
        void  (safe_rshift_func_uint16_t_u_s)( void ) {
                     ((((int)safe_rshift_func_uint16_t_u_s_right) < 0) || (((int)safe_rshift_func_uint16_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((int)safe_rshift_func_uint16_t_u_s_right));
              }
                                               static __uint32_t crc32_tab;
        static __uint32_t crc32_tab_0;
                static __uint32_t crc32_context = 0xFFFFFFFFUL;
                __uint8_t crc32_byte_b;
                 uint64_t crc32_8bytes_val;
        static void crc32_8bytes (void) {
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        ;
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        ;
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        ;
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        ;
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        ;
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        ;
              }
                uint64_t transparent_crc_val;
        char  transparent_crc_vname;
        int transparent_crc_flag;
                 static __int32_t g_11 = 0x272A7275L;
                static __int32_t g_20 = 0x0CBEB969L;
                static const __int32_t g_19[] = {
      0x0CBEB969L};
        static const __int32_t g_19_0 = 0x0CBEB969L;
                static __int32_t *g_74 = 00;
                static __int32_t **g_73 = &g_74;
                static __uint32_t g_77 = 1UL;
                static __int32_t g_85 = 0;
                static __int32_t g_87 = 1L;
                static __uint8_t g_90 = 0xA2L;
                static __uint32_t g_93 = 1UL;
                static __uint32_t g_95 = 0UL;
                static __uint16_t g_100 = 0UL;
                static __uint8_t g_104 = 3UL;
                static int16_t g_106 = 0;
                static int8_t g_115[] = {
                        0L      ,              };
                static __uint32_t g_121 = 0x4A01C31EL;
                static __int32_t g_128 = 0L;
                static __uint16_t g_172 = 9UL;
                static __uint8_t g_206 = 0xA2L;
                static __uint8_t g_269 = 0xA2L;
                static int8_t g_292 = 9L;
                static int16_t g_364 = 0xF1D1L;
                static __int32_t ***g_366 = &g_73;
                static __uint32_t g_412[1] = {
      0x4A01C31EL};
                static __int32_t ****g_552 = &g_366;
        static __uint32_t *g_772_0 = (void*)0;
                static __uint32_t *g_771[1] = {
      (void*)0,(void*)0};
                static int16_t g_792 = (-4L);
                static __uint32_t g_858 = 0xB46FDF36L;
                static int16_t g_945 = 0xC844L;
                static __uint8_t g_980 = 3UL;
                static __int32_t g_984 = 0L;
                static __int32_t g_1066 = 6L;
                static __uint8_t g_1067[21] = {
                   0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L       ,       0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L       ,       0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L       };
                static int8_t g_1068 = 0x25L;
                static __uint32_t g_1075 = 1UL;
                static __uint8_t g_1100 = 9UL;
                static const __uint16_t g_1175 = 0xB3E2L;
                static __int32_t * func_2( void);
                void  func_1(void) {
                  __int32_t __trans_tmp_1;
                  int8_t l_16 = 1L;
                  __int32_t l_921[112] = {
     g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L,g_85,0x0CBEB969L,g_85,0,g_85,1L,0x0CBEB969L};
                  __int32_t *l_921_1_1_6 = &g_20;
                  __int32_t l_942[1] = {
     ****g_552,0,****g_552,0,****g_552,0,****g_552,0};
                  {
                            __int32_t l_922 = 4L;
                            __int32_t l_923 = 0x0CBEB969L;
                            __trans_tmp_1 =  *(*g_73);
                        }
                              (***g_552) = &__trans_tmp_1;
                  (***g_552) = (l_921_1_1_6 = l_921_1_1_6);
                  g_90 = 0;
                              for (0;
              (0 >= 57);
              g_90++)     {
                    __int32_t l_937 = (-7L);
                    __int32_t l_938 = 0x8C267EBAL;
                    __uint32_t l_956 = 0;
                    __int32_t l_976 = **g_73;
                    const int8_t l_977 = 1L;
                    __uint32_t *l_1142[1][1] = {
         {
       &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}
         };
                    int i, j;
                }
              }
                 int main (void) {
                  int print_hash_value = 0;
                  {
                         transparent_crc_flag;
                                              {
                          printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                       }
                        }
              }
