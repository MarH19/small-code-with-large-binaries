 typedef signed char __int8_t;
               typedef unsigned char __uint8_t;
               typedef signed short int __int16_t;
               typedef unsigned short int __uint16_t;
               typedef signed int __int32_t;
               typedef unsigned int __uint32_t;
               typedef signed long int __int64_t;
               typedef unsigned long int __uint64_t;
               typedef long int __off_t;
               typedef __int8_t int8_t;
               typedef __int16_t int16_t;
                                                            typedef __uint64_t uint64_t;
               typedef struct {
               struct   {
               unsigned int __wch;
               char __wchb[4];
             }
             __value;
             }
               __mbstate_t;
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
       void  (safe_add_func_uint32_t_u_u)( void ) {
                safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
             }
                        uint64_t safe_add_func_uint64_t_u_u_ui1;
       uint64_t safe_add_func_uint64_t_u_u_ui2;
                                static __uint32_t crc32_tab;
       static __uint32_t crc32_tab_0;
               static __uint32_t crc32_context = 0xFFFFFFFFUL;
               static void crc32_gentab (void) {
              __uint32_t crc;
              const __uint32_t poly = 0xEDB88320UL;
              int i, j;
              i = 0;
                       for (0;
             0 < 256;
             i++) {
             j = 8;
                      for (j;
           j > 0;
           j--) {
                      {
           crc = (crc >> 1) ^ 0xEDB88320UL;
          }
           }
             crc32_tab_0 = crc;
            }
             }
               __uint8_t crc32_byte_b;
       static void crc32_byte (void) {
              crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
             }
               static __int32_t g_3 = 0x01C08901L;
               static __int32_t g_18 = 0xB6BC3EC3L;
               static __int32_t g_26[1] = {
            0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L};
       static __int32_t g_26_4 = 0x2978D8EFL;
       static __int32_t g_26_6 = 0x2978D8EFL;
       static __int32_t g_26_7 = 0x2978D8EFL;
               static __int32_t g_30 = 0xEDFC3E8CL;
               static int16_t g_49 = 0x00C0L;
               static __int32_t g_75[1] = {
     0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL};
       static __int32_t g_75_4 = 0x01C08901L;
               static __int32_t g_116 = 0x69094389L;
               static __int32_t g_136 = 0x2978D8EFL;
               static __uint32_t g_140 = 0x46C4C103L;
               static __uint8_t g_174 = 0x8EL;
               static __uint8_t g_178 = 0xE9L;
               static __uint16_t g_199 = 0x70E5L;
               static int16_t g_202 = (-3L);
               static __int64_t g_242 = (-8L);
               static __uint8_t *g_245[1] = {
            (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178};
       static __uint8_t *g_245_2 = (void*)0;
       static __uint8_t g_245_3 = 0xE9L;
               static __uint32_t g_288 = 0x937974BFL;
               static __int32_t g_292 = 0x01C08901L;
               static int8_t g_347[1] = {
            2L, 1L, 2L, 1L, 2L};
               static uint64_t g_365 = 0UL;
               static __int32_t g_498 = 6L;
               static __int32_t  const g_546 = 0x2978D8EFL;
               static __int32_t  const  const g_545 = 0x2978D8EFL;
               static __int32_t  const  const g_544 = 0x2978D8EFL;
               static __int32_t * const  const g_543 = &g_26_6;
               static int16_t *g_606[1] = {
                  (void*)0, (void*)0, (void*)0, (void*)0, (void*)0       ,       (void*)0, (void*)0, (void*)0, (void*)0, (void*)0       ,       (void*)0, (void*)0, (void*)0, (void*)0, (void*)0       };
               static __int32_t g_817 = (-7L);
               void  func_1(void) {
                 int8_t __trans_tmp_1;
                 __int32_t l_2 = 0x01C08901L;
                 __uint16_t l_768;
                 __uint16_t l_768_0;
                 __int32_t l_822[1];
                 __uint8_t *l_831 = &g_245_3;
             lbl_782:     (l_2) ^= (-3L);
                 {
                   __uint16_t l_877 = 65526UL;
                   (*g_543) = (&l_831 == &g_245_2);
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
      , {
    {
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
                       __int32_t l_44[1];
                                            for (0;
       (0x2978D8EFL == 23);
       ++g_26_4)                 {
                         __int32_t l_29 = 0xEDFC3E8CL;
                         __int32_t l_31 = 0;
                         l_33_1_4_1--;
                     }
                   }
                 }
               }
                 __int32_t l_125[4] = {
    };
             }
                int main (void) {
             }
