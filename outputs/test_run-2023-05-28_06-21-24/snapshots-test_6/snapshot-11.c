          typedef unsigned char __uint8_t;
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                unsigned long int __uint64_t;
                         long int __off64_t;
                                                                      struct {
              }
                __mbstate_t;
                struct _G_fpos_t {
                                  }
                __fpos_t;
                 signed char safe_add_func_int8_t_s_s_si2;
                 signed char safe_div_func_int8_t_s_s_si1;
        signed char safe_div_func_int8_t_s_s_si2;
                 __int16_t safe_sub_func_int16_t_s_s_si1;
        __int16_t safe_sub_func_int16_t_s_s_si2;
                 __int16_t safe_rshift_func_int16_t_s_s_left;
        int safe_rshift_func_int16_t_s_s_right;
                 __int16_t safe_rshift_func_int16_t_s_u_left;
        unsigned int safe_rshift_func_int16_t_s_u_right;
                  __int32_t safe_add_func_int32_t_s_s_si1;
        __int32_t safe_add_func_int32_t_s_s_si2;
                  __int32_t safe_mod_func_int32_t_s_s_si1;
        __int32_t safe_mod_func_int32_t_s_s_si2;
                 __uint8_t safe_mul_func_uint8_t_u_u_ui1;
        __uint8_t safe_mul_func_uint8_t_u_u_ui2;
                 __uint8_t safe_mod_func_uint8_t_u_u_ui1;
        __uint8_t safe_mod_func_uint8_t_u_u_ui2;
                 __uint8_t safe_lshift_func_uint8_t_u_s_left;
        int safe_lshift_func_uint8_t_u_s_right;
                 __uint8_t safe_rshift_func_uint8_t_u_s_left;
        int safe_rshift_func_uint8_t_u_s_right;
                 __uint16_t safe_add_func_uint16_t_u_u_ui1;
        __uint16_t safe_add_func_uint16_t_u_u_ui2;
        void  (safe_add_func_uint16_t_u_u)( void ) {
                 safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
              }
                 __uint16_t safe_mul_func_uint16_t_u_u_ui1;
        __uint16_t safe_mul_func_uint16_t_u_u_ui2;
        void  (safe_mul_func_uint16_t_u_u)( void ) {
                 ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
              }
                     __uint32_t safe_add_func_uint32_t_u_u_ui1;
        __uint32_t safe_add_func_uint32_t_u_u_ui2;
        void  (safe_add_func_uint32_t_u_u)( void ) {
                 safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
              }
                   __uint32_t safe_div_func_uint32_t_u_u_ui1;
        __uint32_t (safe_div_func_uint32_t_u_u)( __uint32_t ui2 ) {
                return     0 ?     ((safe_div_func_uint32_t_u_u_ui1)) :     (safe_div_func_uint32_t_u_u_ui1 / ui2);
              }
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
              i) {
              j = 8;
                       for (j;
            j > 0;
            j--) {
             crc & 1;
                       {
            crc = (crc >> 1) ^ 0xEDB88320UL;
           }
            }
              crc32_tab_0 = 1;
             }
              }
                __uint8_t crc32_byte_b;
        void crc32_byte (void) {
               crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
              }
                struct S0 {
                 const __int32_t f0;
                 __int16_t f1;
                 __int32_t f2;
                 unsigned f3 : 19;
                 const signed char f4;
                 __int32_t f5;
                 signed char f6;
                 unsigned f7 : 24;
                 signed char f8;
              };
                struct S1 {
                 signed char f0;
                 __uint32_t f1;
              };
                struct S2 {
                 signed f0 : 11;
                 signed f1 : 20;
                 unsigned f2 : 19;
                 signed f3 : 18;
              };
                __int32_t g_8 = 0x31EB2391L;
                __int32_t g_7 = 0x31EB2391L;
                struct S0 g_42 = {
             0x5C1F4ACAL,1L-1L,4040L,1L,0L,663,0xEFL};
                __uint32_t g_110 = 2UL;
                __uint16_t g_112[] = {
                        0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L      ,     0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL             };
        __uint16_t g_112_1_1_4;
                __int32_t g_117 = 0x31EB2391L;
                __int32_t g_116 = 0x31EB2391L;
                __int16_t g_136 = 1L;
                __int16_t g_135 = 1L;
                struct S2 g_144 = {
             37263432229};
                struct S1 g_147 = {
             0x33L,};
                __int32_t g_151 = 0L;
                signed g_169 = 2L;
                __uint16_t g_270[] = {
      0,0,0,0,0,0,0};
        __uint16_t g_270_0 = 0;
                struct S0 g_318 = {
             0x5C1F4ACAL,1L-1L,4040L,1L,0L,663,0xEFL};
                const __int32_t g_390[] = {
      0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L};
        const __int32_t *g_390_0_0 = &g_8;
                const __int32_t **g_389 = &g_390_0_0;
                struct S2 g_452 = {
             38949229504};
        int g_452_1 = 949;
                __int32_t g_509 = 0;
                struct S2 g_516 = {
             37263432229};
                struct S0 g_730 ;
                static __uint32_t func_9(signed char p_10);
        __uint32_t func_9(signed char p_10) {
                  return 1L;
              }
                static __int32_t func_17( __int32_t * p_19);
                static __int32_t * func_24(__uint16_t p_25);
        __int32_t * func_24(__uint16_t p_25) {
                  __int32_t l_28 = 0;
                  return &l_28;
              }
                void  func_31( void);
        void  func_31( void) {
                  __uint8_t l_36[][1] = {
           {
             0x23L,0x7DL,0UL     ,    247UL,246UL,0x9BL     ,    255UL,9UL,0xD8L     ,    0xC8L,9UL,255UL     ,    250UL,246UL,0x82L     ,    255UL,255UL,0x7DL     ,    247UL,255UL,0x82L     ,    0x23L,255UL,255UL     ,{
       0x42L,0UL,0xD8L}
         ,{
       0x9BL,0x63L,250UL}
         }
           ,{
             0UL,1UL,0x9CL     ,    0UL,0x32L,0xB9L     }
           };
              }
                void  func_1(void) {
                  signed char __trans_tmp_7;
                  __int32_t __trans_tmp_6;
                  int *__trans_tmp_5;
                  int __trans_tmp_4;
                  signed char __trans_tmp_3;
                  unsigned int __trans_tmp_2;
                  unsigned int __trans_tmp_1;
                  __int32_t l_16[1] = {
     0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L};
                  __int32_t l_22 = 0;
                  __int32_t *l_27 = 00;
                  __int32_t l_772 = 1L;
                  __trans_tmp_5 = func_24(((l_27 = &g_8) != &g_8));
                  __trans_tmp_3 = 0;
                  __trans_tmp_1 = 0;
                  {
                        }
                              (*g_389) = ( (void*)0);
              }
                 int main (void) {
                  func_1();
              }
