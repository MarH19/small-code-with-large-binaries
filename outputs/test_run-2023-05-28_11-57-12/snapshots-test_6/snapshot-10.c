 typedef signed char __int8_t;
                typedef unsigned char __uint8_t;
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef signed long int __int64_t;
                typedef unsigned long int __uint64_t;
                long int __off_t;
                typedef __int8_t int8_t;
                typedef __int16_t int16_t;
                                                             typedef __uint64_t uint64_t;
                struct {
                struct   {
                unsigned int __wch;
                char __wchb[];
              }
              __value;
              }
                __fpos_t;
                __uint32_t platform_main_end_crc;
        int platform_main_end_flag;
                   int8_t safe_sub_func_int8_t_s_s_si1;
        int8_t safe_sub_func_int8_t_s_s_si2;
                       int8_t safe_rshift_func_int8_t_s_u_left;
        unsigned int safe_rshift_func_int8_t_s_u_right;
                    __int32_t safe_add_func_int32_t_s_s_si1;
        __int32_t safe_add_func_int32_t_s_s_si2;
                 __int64_t safe_sub_func_int64_t_s_s_si1;
        __int64_t safe_sub_func_int64_t_s_s_si2;
                              __uint8_t safe_rshift_func_uint8_t_u_s_left;
        int safe_rshift_func_uint8_t_u_s_right;
                    __uint16_t safe_sub_func_uint16_t_u_u_ui1;
        __uint16_t safe_sub_func_uint16_t_u_u_ui2;
                         __uint32_t safe_add_func_uint32_t_u_u_ui1;
        __uint32_t safe_add_func_uint32_t_u_u_ui2;
                          uint64_t safe_add_func_uint64_t_u_u_ui1;
        uint64_t safe_add_func_uint64_t_u_u_ui2;
                                 __uint32_t crc32_tab;
        __uint32_t crc32_tab_0;
                __uint32_t crc32_context = 0xFFFFFFFFUL;
                void crc32_gentab () {
               __uint32_t crc;
               const __uint32_t poly = 0xEDB88320UL;
               int i, j;
               i = 0;
                        for (;
              0 < 256;
              i++) {
              j = 8;
                       for (j;
            j > 0;
            j--) {
                       {
            crc = 0 ^ 0xEDB88320UL;
           }
            }
              crc32_tab_0 = crc;
             }
              }
                __uint8_t crc32_byte_b;
                 __int32_t g_3 = 0x01C08901L;
                __int32_t g_18 = 0xB6BC3EC3L;
                __int32_t g_26[] = {
             0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L};
        __int32_t g_26_4 = 0x2978D8EFL;
        __int32_t g_26_6 = 0x2978D8EFL;
        __int32_t g_26_7 = 0x2978D8EFL;
                __int32_t g_30 = 0xEDFC3E8CL;
                int16_t g_49 = 0x00C0L;
                __int32_t g_75[] = {
      0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL};
        __int32_t g_75_4 = 0x01C08901L;
                __int32_t g_116 = 0x69094389L;
                __int32_t g_136 = 0x2978D8EFL;
                __uint32_t g_140 = 0x46C4C103L;
                __uint8_t g_174 = 0x8EL;
                __uint8_t g_178 = 0xE9L;
                __uint16_t g_199 = 0x70E5L;
                int16_t g_202 = (3L);
                __int64_t g_242 = (8L);
                __uint8_t *g_245[] = {
             (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178};
        __uint8_t *g_245_2 = (void*)0;
        __uint8_t g_245_3 = 0xE9L;
                __uint32_t g_288 = 0x937974BFL;
                __int32_t g_292 = 0x01C08901L;
                __int32_t  g_546 = 0x2978D8EFL;
                __int32_t  g_545 = 0x2978D8EFL;
                __int32_t  const  const g_544 = 0x2978D8EFL;
                __int32_t * const  const g_543 = &g_26_6;
                int16_t *g_606[] = {
                   (void*)0, (void*)0, (void*)0, (void*)0, (void*)0       ,       (void*)0, (void*)0, (void*)0, (void*)0, (void*)0       ,       (void*)0, (void*)0, (void*)(void*)0       };
                __int32_t g_817 = (7L);
                void  func_1(void) {
                  int8_t __trans_tmp_1;
                  __int32_t *l_2 = &g_3;
                  __uint16_t l_768[1];
                  __uint16_t l_768_0;
                  __int32_t l_822[1];
                  __uint8_t *l_831 = &g_245_3;
              lbl_782:     (*l_2) ^= (3L);
                  {
                          __trans_tmp_1 =      (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);
                        }
                              g_817 = 15;
                              for (;
              (15 < 2);
              g_817 = __trans_tmp_1)     {
                    __int32_t l_871 = 6L;
                    __int32_t l_872 = (-10L);
                    __int32_t l_873 = 0L;
                    __int32_t l_874[1] = {
                5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L    ,    5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L         };
                    __int64_t l_875 = 0x7BFF7E2D3CA482DELL;
                    __uint16_t l_877 = 65526UL;
                    (*g_543) = (l_831 == &g_245_2);
                }
                   0xB6BC3EC3L;
              }
                const __int32_t  func_10_p_11;
        __int64_t func_10_p_12;
        __uint16_t func_10_p_13;
        void  func_10(  void) {
                  uint64_t __trans_tmp_2;
                  int16_t l_767 = 0x48B7L;
                  int i, j, k;
                  i = 0;
                              for (0;
              0 < 1;
              g_18--)     {
                    __int32_t l_45 = (-3L);
                    {
                            __trans_tmp_2 =  safe_add_func_uint64_t_u_u_ui1 + safe_add_func_uint64_t_u_u_ui2;
                          }
                                   func_10_p_12 = 17;
                                   func_10_p_12 = __trans_tmp_2;
                                   for (__trans_tmp_2;
            (__trans_tmp_2 == 18);
            __trans_tmp_2)         {
                      uint64_t l_33[1][1][1] = {
       {
     {
     0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
     , {
     0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
     , {
     0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
     , {
     0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
     , {
     0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
     , {
     0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
     }
       };
                      uint64_t l_33_1_4_1 = 0x9C5A74D4B4B26D8FLL;
                      int i, j, k;
                      func_10_p_13 = 0;
                                        for (0;
          (0 > 44);
          ++func_10_p_13)             {
                        __int32_t l_36 = 0x2978D8EFL;
                        __int32_t l_37 = 0xEDFC3E8CL;
                        __int32_t l_44[18];
                        i = 0;
                                             for (0;
        (0x2978D8EFL == 23);
        ++g_26_4)                 {
                          l_33_1_4_1--;
                      }
                    }
                  }
                }
                   0x48B7L;
              }
                 int main (void) {
                  func_1();
              }
