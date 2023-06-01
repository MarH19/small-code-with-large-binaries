 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
                                                                             
        int8_t safe_unary_minus_func_int8_t_s_si;

        int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;

        int16_t safe_sub_func_int16_t_s_s_si1;
int16_t safe_sub_func_int16_t_s_s_si2;

        int16_t safe_mul_func_int16_t_s_s_si1;
int16_t safe_mul_func_int16_t_s_s_si2;

              int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;

                 int64_t safe_add_func_int64_t_s_s_si1;
int64_t safe_add_func_int64_t_s_s_si2;

        int64_t safe_sub_func_int64_t_s_s_si1;
int64_t safe_sub_func_int64_t_s_s_si2;

                uint8_t safe_add_func_uint8_t_u_u_ui1;
uint8_t safe_add_func_uint8_t_u_u_ui2;

              uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;

        uint8_t safe_rshift_func_uint8_t_u_u_left;
unsigned int safe_rshift_func_uint8_t_u_u_right;

           uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;

          uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;

         uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;

        uint32_t safe_sub_func_uint32_t_u_u_ui1;
uint32_t safe_sub_func_uint32_t_u_u_ui2;

               uint64_t safe_unary_minus_func_uint64_t_u_ui;

        uint64_t safe_add_func_uint64_t_u_u_ui1;
uint64_t safe_add_func_uint64_t_u_u_ui2;

                 static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        uint8_t crc32_byte_b;

        uint64_t crc32_8bytes_val;

        uint64_t transparent_crc_val;
char  transparent_crc_vname;
int transparent_crc_flag;

        static int64_t g_2 = (-1L);
        static int32_t g_4 = 0x897A4A12L;
        static int32_t g_7 = (-1L);
        static uint16_t g_21 = 65535UL;
        static int64_t g_130 = 0xB426AB799115BA09LL;
        static uint32_t g_132 = 2UL;
        static uint64_t g_141 = 7UL;
        static uint16_t g_147 = 0xF6E0L;
        static int32_t g_161 = 0x897A4A12L;
        static int32_t g_160 = 0x897A4A12L;
        static int8_t g_193 = (-1L);
        static uint64_t g_264 = 1UL;
        static uint32_t g_304 = 18446744073709551614UL;
        static uint64_t *g_319 = (void*)0;
        static uint64_t *g_318 = (void*)0;
        static uint32_t g_337 = 0x9F0F0CF3L;
        static uint8_t g_427 = 255UL;
        
        uint16_t  func_22_p_23;
uint16_t  func_22_p_24;
uint64_t func_22_p_25;
void  func_22(  void) {
           uint16_t __trans_tmp_4;
           int32_t __trans_tmp_3;
           uint8_t __trans_tmp_2;
           int64_t __trans_tmp_1;
           int32_t l_287 = 0L;
           int32_t l_288 = (-6L);
           int32_t l_290 = l_288;
           int32_t l_293 = l_288;
           int32_t l_298 = (-1L);
           int32_t l_300 = 0L;
           int32_t l_302 = l_298;
           int32_t l_334 = (-9L);
           if (func_22_p_25)     {
              int32_t l_311 = 0xC2C0AFCBL;
              uint64_t l_313 = 1UL;
              uint64_t l_312 = 1UL;
              uint64_t l_314 = 1UL;
              int8_t l_320 = g_193;
              int32_t l_325 = 0x06CC3F75L;
              {
                       __trans_tmp_1 =      (((safe_add_func_int64_t_s_s_si1>0) && (safe_add_func_int64_t_s_s_si2>0) && (safe_add_func_int64_t_s_s_si1 > ((9223372036854775807L)-safe_add_func_int64_t_s_s_si2))) || ((safe_add_func_int64_t_s_s_si1<0) && (safe_add_func_int64_t_s_s_si2<0) && (safe_add_func_int64_t_s_s_si1 < ((-9223372036854775807L -1)-safe_add_func_int64_t_s_s_si2)))) ?     ((safe_add_func_int64_t_s_s_si1)) :     (safe_add_func_int64_t_s_s_si1 + safe_add_func_int64_t_s_s_si2);
                     }
              
              (l_290) = (((__trans_tmp_1) | 0xB426AB799115BA09LL) == g_7);
              int16_t l_326 = 0xB259L;
              uint32_t l_335 = 2UL;
              uint32_t l_336 = 0x9F0F0CF3L;
              int32_t l_338 = 0xA6BA308FL;
              uint64_t l_351 = 1UL;
              {
                       __trans_tmp_2 =  safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
                     }
              
              l_338 = ((0xB259L <= 0L) || ((((g_2 &= (((l_336) = ((l_335) = (__trans_tmp_2))) <= 18446744073709551614UL)) >= 0x6D6EEA9B94AA32D8LL) >= (l_298)) , 0x63E07D31L));
              {
                       __trans_tmp_3 =      (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
                     }
              
              l_334 = (-13);
              
              l_334 = __trans_tmp_3;
              
              for (__trans_tmp_3;
      (__trans_tmp_3 == 12);
      __trans_tmp_3)         {
                 int64_t l_349 = 0xB426AB799115BA09LL;
                 int32_t l_350 = 6L;
                 {
                          __trans_tmp_4 =  ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
                          __trans_tmp_4 =      (safe_mul_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mul_func_uint16_t_u_u_ui1)) :     (safe_mul_func_uint16_t_u_u_ui1 % safe_mul_func_uint16_t_u_u_ui2);
                        }
                 
                 (l_302) |= (0x93L | (func_22_p_25 ^ (0xFC80131CL >= (__trans_tmp_4))));
             }
          }
            (&g_160);
       }
        uint16_t  func_26_p_27;
int32_t func_26_p_28;
uint16_t  func_26_p_29;
int8_t func_26_p_30;
void  func_26(   void) {
            &g_147;
       }
        uint16_t  func_32_p_33;
void  func_32(void) {
           uint16_t l_34 = 0x632CL;
            0x632CL;
       }
        int16_t func_37_p_38;
void  func_37(void) {
            (&g_160);
       }
        uint64_t  func_39_p_40;
uint64_t  func_39_p_41;
uint16_t  func_39_p_42;
uint16_t  func_39_p_43;
uint64_t  func_39_p_44;

        uint16_t  func_45_p_46;
uint16_t  func_45_p_47;
uint8_t func_45_p_48;
void  func_45(  void) {
            &g_141;
       }
        uint32_t func_49_p_50;
int32_t func_49_p_51;
void  func_49( void) {
            &g_21;
       }
        int8_t func_76_p_77;
int16_t func_76_p_78;
int16_t  func_76_p_79;
void  func_76(  void) {
            0xF6E0L;
       }
        int main (void) {
           int print_hash_value = 0;
           {
                   {
                           {
                                   crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                  }
                           
                           ;
                          }
                   
                   ;
                  }
           
           ;
       }
