                            typedef unsigned short int __uint16_t;
         typedef signed int __int32_t;
         typedef unsigned int __uint32_t;
                  typedef short int16_t;
                                                      __uint32_t platform_main_end_crc;
 int platform_main_end_flag;
           signed char safe_add_func_int8_t_s_s_si1;
 signed char safe_add_func_int8_t_s_s_si2;
          signed char safe_sub_func_int8_t_s_s_si1;
 signed char safe_sub_func_int8_t_s_s_si2;
          signed char safe_lshift_func_int8_t_s_s_left;
 int safe_lshift_func_int8_t_s_s_right;
           int16_t safe_add_func_int16_t_s_s_si1;
 int16_t safe_add_func_int16_t_s_s_si2;
          int16_t safe_sub_func_int16_t_s_s_si1;
 int16_t safe_sub_func_int16_t_s_s_si2;
          int16_t safe_mul_func_int16_t_s_s_si1;
 int16_t safe_mul_func_int16_t_s_s_si2;
          int16_t safe_lshift_func_int16_t_s_s_left;
 int safe_lshift_func_int16_t_s_s_right;
          int16_t safe_lshift_func_int16_t_s_u_left;
 unsigned int safe_lshift_func_int16_t_s_u_right;
           __int32_t safe_add_func_int32_t_s_s_si1;
 __int32_t safe_add_func_int32_t_s_s_si2;
          __int32_t safe_sub_func_int32_t_s_s_si1;
 __int32_t safe_sub_func_int32_t_s_s_si2;
           unsigned char safe_lshift_func_uint8_t_u_u_left;
 unsigned int safe_lshift_func_uint8_t_u_u_right;
          __uint16_t safe_add_func_uint16_t_u_u_ui1;
 __uint16_t safe_add_func_uint16_t_u_u_ui2;
          __uint16_t safe_mul_func_uint16_t_u_u_ui1;
 __uint16_t safe_mul_func_uint16_t_u_u_ui2;
          __uint16_t safe_mod_func_uint16_t_u_u_ui1;
 __uint16_t safe_mod_func_uint16_t_u_u_ui2;
          __uint16_t safe_lshift_func_uint16_t_u_u_left;
 unsigned int safe_lshift_func_uint16_t_u_u_right;
          __uint32_t safe_add_func_uint32_t_u_u_ui1;
 __uint32_t safe_add_func_uint32_t_u_u_ui2;
           __uint32_t safe_mod_func_uint32_t_u_u_ui1;
 __uint32_t safe_mod_func_uint32_t_u_u_ui2;
          static __uint32_t crc32_context = 0xFFFFFFFFUL;
         static void crc32_gentab (void) {         __uint32_t crc;         const __uint32_t poly = 0xEDB88320UL;         int i, j;         i = 0;                  for (0;        0 < 256;        i++) {         j = 8;                  for (j;       j > 0;       j--) {         crc & 1;                   {         crc = (crc >> 1) ^ 0xEDB88320UL;        }        }        }        }
         struct S0 {                                            unsigned f3 : 26;        };
         struct S1 {           unsigned f0 : 27;        };
         struct S2 {           const __uint32_t f0;           __uint32_t f1;           unsigned char f3;           struct S1 f6;        };
         static __int32_t g_5 = 0xB4837182L;
         static const __int32_t g_74 = 0xB4837182L;
         static const __int32_t g_73 = 0xB4837182L;
         static __int32_t g_76 = (-8L);
         static __int32_t *g_84 = (void*)0;
         static __int32_t *g_83 = (void*)0;
         static __int32_t g_85 = 0L;
         static __int32_t g_91 = 0x98E57B79L;
         static struct S0 g_106 = {       519};
         static __int32_t g_190 = 1L;
         static struct S1 g_355 = {       11118};
         static struct S2 g_509 = {       9UL,0x03B8C538L,{      4,316,0,4285}       ,0xCD0642E4L};
 static unsigned char g_509_2 = {      4,316,0,4285};
         static signed char g_621 = 0x24L;
         static __int32_t g_638 = 0x8E35BE2CL;
         static __uint16_t g_955 = 65527UL;
 int16_t func_48_p_50;
 __int32_t  func_48_p_51;
 void  func_48(  void) {            struct S0 l_383 = g_106;             (g_106);        }
         __uint32_t func_56_p_57;
 __int32_t const func_56_p_58;
 __uint32_t func_56_p_59;
 signed char func_56_p_60;
 __int32_t  func_56_p_61;
 void  func_56(    void) {            __uint16_t __trans_tmp_3;            __uint32_t __trans_tmp_2;            {                     __trans_tmp_2 =  safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;                   }                        func_56_p_59 = 5;                        func_56_p_59 = __trans_tmp_2;                        for (__trans_tmp_2;        (__trans_tmp_2 < 44);        __trans_tmp_2)     {           }            {                     __trans_tmp_3 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;                   }                        g_76 = (-3);                        g_76 = __trans_tmp_3;                        for (__trans_tmp_3;        (__trans_tmp_3 > 24);        __trans_tmp_3)     {                1L;           }        }
         const __int32_t  func_71_p_72;
 void  func_71(void) {            __int32_t __trans_tmp_8;            __uint32_t __trans_tmp_7;            signed char __trans_tmp_6;            __uint16_t __trans_tmp_5;            int16_t __trans_tmp_4;            __int32_t *l_75 = &g_76;            {                     __trans_tmp_4 =      (safe_sub_func_int16_t_s_s_si1 - safe_sub_func_int16_t_s_s_si2);                   }                        (__trans_tmp_4);                         {               __int32_t l_105 = (-3L);               {                        __trans_tmp_5 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;                      }                              g_76 = (-3);                              g_76 = __trans_tmp_5;                              for (__trans_tmp_5;       (__trans_tmp_5 < 8);       __trans_tmp_5)         {                  const __int32_t l_82 = 0xB4837182L;                  (void) sizeof ((&g_83 == &l_75) ? 1 : 0);                                    ( __extension__ ({     &g_83 == &l_75;           ;      ;     }     ));                  {                           __trans_tmp_6 =      (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);                         }                                    g_85 = 0;                                    g_85 = __trans_tmp_6;                                    for (__trans_tmp_6;      (__trans_tmp_6 >= (-9));      __trans_tmp_6)             {                     __uint16_t l_88 = 0xDF27L;                     __int32_t l_89 = 0;                     __int32_t l_90 = 0x98E57B79L;                     (l_90) = 0xDF27L;                     {                              __trans_tmp_7 =  safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;                            }                                          l_105 = (__trans_tmp_7);                     g_106 = g_106;                 }              }               g_85 = (-14);                              g_85 = 0;                              for (g_85;       (g_85 >= (-14));       g_85)         {                  const __int32_t l_113 = 0xFF2B3A76L;                  __int32_t l_115 = *l_75;                  __int32_t l_116 = 0x98E57B79L;                  {                           __trans_tmp_8 =      (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);                         }                                    (l_116) ^= (__trans_tmp_8);              }           }        }
         int main (void) {                        {                    0;                   }                        ;        }
