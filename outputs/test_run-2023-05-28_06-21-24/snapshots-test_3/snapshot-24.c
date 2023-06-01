                           typedef signed short int __int16_t;
                                         typedef signed int __int32_t;
                                         typedef unsigned long int __uint64_t;
                                 typedef long int __off64_t;
                                                                              typedef struct                  __mbstate_t;
                        typedef struct _G_fpos_t                  __fpos_t;
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
                         unsigned char safe_mul_func_uint8_t_u_u_ui1;
                unsigned char safe_mul_func_uint8_t_u_u_ui2;
                         unsigned char safe_mod_func_uint8_t_u_u_ui1;
                unsigned char safe_mod_func_uint8_t_u_u_ui2;
                         unsigned char safe_lshift_func_uint8_t_u_s_left;
                int safe_lshift_func_uint8_t_u_s_right;
                void  (safe_lshift_func_uint8_t_u_s)( void ) {
                            (((safe_lshift_func_uint8_t_u_s_right) = 32) || (safe_lshift_func_uint8_t_u_s_left > (0 >> 0))) ?      :     (safe_lshift_func_uint8_t_u_s_left << 0);
                     }
                        unsigned char safe_rshift_func_uint8_t_u_s_left;
                int safe_rshift_func_uint8_t_u_s_right;
                         unsigned short safe_add_func_uint16_t_u_u_ui1;
                unsigned short safe_add_func_uint16_t_u_u_ui2;
                void  (safe_add_func_uint16_t_u_u)( void ) {
                        safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
                     }
                         unsigned short safe_mul_func_uint16_t_u_u_ui1;
                unsigned short safe_mul_func_uint16_t_u_u_ui2;
                void  (safe_mul_func_uint16_t_u_u)( void ) {
                        (safe_mul_func_uint16_t_u_u_ui1) * (safe_mul_func_uint16_t_u_u_ui2);
                     }
                             unsigned int safe_add_func_uint32_t_u_u_ui1;
                unsigned int safe_add_func_uint32_t_u_u_ui2;
                void  (safe_add_func_uint32_t_u_u)( void ) {
                        safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
                     }
                           unsigned int safe_div_func_uint32_t_u_u_ui1;
                unsigned int safe_div_func_uint32_t_u_u_ui2;
        void  (safe_div_func_uint32_t_u_u)( void ) {
                            (safe_div_func_uint32_t_u_u_ui2 == 0) ?      :     (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
                     }
                                 static unsigned int crc32_tab;
                static unsigned int crc32_tab_0;
                        static unsigned int crc32_context = 4294967295UL;
                        unsigned int crc32_gentab_crc;
        const unsigned int crc32_gentab_poly = 3988292384UL;
        int crc32_gentab_i;
        int crc32_gentab_j;
        static void crc32_gentab (void) {
                                                                      crc32_gentab_i = 0;
                               for (;
                     0 < 256;
                     crc32_gentab_i++) {
                    crc32_gentab_j = 8;
                    crc32_tab_0 = 1;
                   }
                     }
                        unsigned char crc32_byte_b;
                static void crc32_byte (void) {
                      crc32_context =   (crc32_context >> 8 & 0x00FFFFFF) ^   1;
                     }
                        struct S0 {
                        const __int32_t f0;
                        __int16_t f1;
                        __int32_t f2;
                        unsigned f3 ;
                        const signed char f4;
                        __int32_t f5;
                        signed char f6;
                        unsigned f7 ;
                        signed char f8;
                     };
                        struct S1 {
                        signed char f0;
                        unsigned int f1;
                     };
                        struct S2 {
                        signed f0 ;
                        signed f1 ;
                        unsigned f2 ;
                        signed f3 ;
                     };
                        static __int32_t g_8 = 0x31EB2391L;
                        static __int32_t g_7 = 0x31EB2391L;
                        static struct S0 g_42 = {
                    1545554634L,1L-1L,4040L,1L,0L,663,0xEFL};
                static __int32_t g_42_5 = 1L;
                static __int16_t g_42_1 = 1L;
                        static __int32_t g_93 = 0L;
                        static unsigned int g_110 = 2UL;
                        static unsigned short g_112[1] = {
                               0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L      ,     0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL             };
                static unsigned short g_112_1_1_4;
                        static __int32_t g_117 = 0x31EB2391L;
                        static __int32_t g_116 = 0x31EB2391L;
                        static __int16_t g_136 = 1L;
                        static __int32_t g_151 = 0L;
                        static signed char g_169 = 2L;
                        static unsigned short g_270[1] = {
             0000000};
                static unsigned short g_270_0 = 0;
                        static struct S0 g_318 = {
                    1545554634L,1L-1L,404,0L,1L,0L,663,0xEFL};
                        static const __int32_t g_390[1] = {
             0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L};
                static const __int32_t g_390_0_0 = 0x31EB2391L;
                        static const __int32_t g_389 = 0x31EB2391L;
                        static struct S2 g_516 = {
                    37,263,432,-229};
                        static struct S0 g_730 ;
                        void  func_9(void);
                __int32_t func_24_l_28 = 0;
                         void  func_31( void);
        void  func_31( void) {
                                        }
                unsigned char func_31_l_36[1] = {
                           0x23L,0x7DL,0UL     ,    247UL,246UL,0x9BL     ,    255UL,9UL,0xD8L     ,    0xC8L,9UL,255UL     ,    250UL,246UL,0x82L     ,    255UL,255UL,0x7DL     ,    247UL,255UL,0x82L     ,    0x23L,255UL,255UL     ,{
              0x42L,0UL,0xD8L}
                       ,         0UL,1UL,0x9CL     ,    0UL,0x32L,0xB9L           };
                         signed char func_1___trans_tmp_7;
        __int32_t func_1___trans_tmp_6;
        int func_1___trans_tmp_5;
        unsigned int func_1___trans_tmp_1;
        void  func_1(void) {
                         __int32_t __trans_tmp_1;
                                                                                                                                                                                                    {
                                                                               __trans_tmp_1 =  0;
                                      }
                                            func_1___trans_tmp_5 = 0;
                         {
                              }
                     }
                         int main (void) {
                     }
