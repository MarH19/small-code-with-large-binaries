 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        
        uint32_t platform_main_end_crc;
int platform_main_end_flag;

         int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;

        int8_t safe_sub_func_int8_t_s_s_si1;
int8_t safe_sub_func_int8_t_s_s_si2;

        int8_t safe_lshift_func_int8_t_s_s_left;
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

         int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
static int32_t (safe_add_func_int32_t_s_s)( void ) {
         return     (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
       }
        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;

         uint8_t safe_lshift_func_uint8_t_u_u_left;
unsigned int safe_lshift_func_uint8_t_u_u_right;
void  (safe_lshift_func_uint8_t_u_u)( void ) {
              ((((unsigned int)safe_lshift_func_uint8_t_u_u_right) >= 32) || (safe_lshift_func_uint8_t_u_u_left > ((255) >> ((unsigned int)safe_lshift_func_uint8_t_u_u_right)))) ?     ((safe_lshift_func_uint8_t_u_u_left)) :     (safe_lshift_func_uint8_t_u_u_left << ((unsigned int)safe_lshift_func_uint8_t_u_u_right));
       }
        uint16_t safe_add_func_uint16_t_u_u_ui1;
uint16_t safe_add_func_uint16_t_u_u_ui2;

        uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;

        uint16_t safe_mod_func_uint16_t_u_u_ui1;
uint16_t safe_mod_func_uint16_t_u_u_ui2;
void  (safe_mod_func_uint16_t_u_u)( void ) {
              (safe_mod_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint16_t_u_u_ui1)) :     (safe_mod_func_uint16_t_u_u_ui1 % safe_mod_func_uint16_t_u_u_ui2);
       }
        uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
void  (safe_lshift_func_uint16_t_u_u)( void ) {
              ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
       }
        uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;

         uint32_t safe_mod_func_uint32_t_u_u_ui1;
uint32_t safe_mod_func_uint32_t_u_u_ui2;
void  (safe_mod_func_uint32_t_u_u)( void ) {
              (safe_mod_func_uint32_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint32_t_u_u_ui1)) :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
       }
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        uint32_t crc;
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        i = 0;
        
        for (0;
       0 < 256;
       i++) {
        j = 8;
        
        for (j;
      j > 0;
      j--) {
        if (crc & 1) {
        crc = (crc >> 1) ^ 0xEDB88320UL;
       }
       }
       }
       }
        struct S0 {
          unsigned f0 : 11;
          unsigned f1 : 20;
          unsigned f2 : 6;
          unsigned f3 : 26;
       };
        struct S1 {
          unsigned f0 : 27;
       };
        struct S2 {
          const uint32_t f0;
          uint32_t f1;
          uint8_t f3;
          struct S1 f6;
       };
        static int32_t g_5 = 0xB4837182L;
        static const int32_t g_74 = 0xB4837182L;
        static const int32_t g_73 = 0xB4837182L;
        static int32_t g_76 = (-8L);
        static int32_t *g_84 = (void*)0;
        static int32_t *g_83 = (void*)0;
        static int32_t g_85 = 0L;
        static int32_t g_91 = 0x98E57B79L;
        static struct S0 g_106 = {
      24,302,0,519};
        static int32_t g_190 = 1L;
        static struct S1 g_355 = {
      11118};
        static struct S2 g_509 = {
      9UL,0x03B8C538L,{
     4,316,0,4285}
      ,0xCD0642E4L};
static uint8_t g_509_2 = {
     4,316,0,4285};
        static int8_t g_621 = 0x24L;
        static int32_t g_638 = 0x8E35BE2CL;
        static uint16_t g_955 = 65527UL;
        void  func_1(void) {
           g_638 = 0;
           
           for (0;
       (0 < (-12));
       g_638--)     {
          }
            65527UL;
       }
        uint32_t func_13_p_14;
int32_t const func_13_p_15;
void  func_13( void) {
           uint32_t __trans_tmp_1;
           int32_t l_593 = 0L;
           int32_t l_681 = 0;
           {
                    __trans_tmp_1 =  safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
                  }
           
           g_509_2 = 0;
           
           g_509_2 = __trans_tmp_1;
           
           for (__trans_tmp_1;
       (__trans_tmp_1 < 4);
       __trans_tmp_1)     {
              g_621 = 0;
              
              g_621 = 0;
              
              for (g_621;
      (g_621 < 19);
      g_621)         {
                 int32_t l_680 = 0L;
                  &l_681;
             }
          }
       }
        const uint8_t func_48_p_49;
int16_t func_48_p_50;
int32_t  func_48_p_51;
void  func_48(  void) {
           struct S0 l_383 = g_106;
            (g_106);
       }
        uint32_t func_56_p_57;
int32_t const func_56_p_58;
uint32_t func_56_p_59;
int8_t func_56_p_60;
int32_t  func_56_p_61;
void  func_56(    void) {
           uint16_t __trans_tmp_3;
           uint32_t __trans_tmp_2;
           {
                    __trans_tmp_2 =  safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
                  }
           
           func_56_p_59 = 5;
           
           func_56_p_59 = __trans_tmp_2;
           
           for (__trans_tmp_2;
       (__trans_tmp_2 < 44);
       __trans_tmp_2)     {
          }
           {
                    __trans_tmp_3 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
                  }
           
           g_76 = (-3);
           
           g_76 = __trans_tmp_3;
           
           for (__trans_tmp_3;
       (__trans_tmp_3 > 24);
       __trans_tmp_3)     {
               1L;
          }
       }
        const int32_t  func_71_p_72;
void  func_71(void) {
           int32_t __trans_tmp_8;
           uint32_t __trans_tmp_7;
           int8_t __trans_tmp_6;
           uint16_t __trans_tmp_5;
           int16_t __trans_tmp_4;
           int32_t *l_75 = &g_76;
           {
                    __trans_tmp_4 =      (safe_sub_func_int16_t_s_s_si1 - safe_sub_func_int16_t_s_s_si2);
                  }
           
           if ((__trans_tmp_4))     {
              int32_t l_105 = (-3L);
              {
                       __trans_tmp_5 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
                     }
              
              g_76 = (-3);
              
              g_76 = __trans_tmp_5;
              
              for (__trans_tmp_5;
      (__trans_tmp_5 < 8);
      __trans_tmp_5)         {
                 const int32_t l_82 = 0xB4837182L;
                 ((void) sizeof ((&g_83 == &l_75) ? 1 : 0), __extension__ ({
    if (&g_83 == &l_75) ;
    else ;
    }
    ));
                 {
                          __trans_tmp_6 =      (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);
                        }
                 
                 g_85 = 0;
                 
                 g_85 = __trans_tmp_6;
                 
                 for (__trans_tmp_6;
     (__trans_tmp_6 >= (-9));
     __trans_tmp_6)             {
                    uint16_t l_88 = 0xDF27L;
                    int32_t l_89 = 0;
                    int32_t l_90 = 0x98E57B79L;
                    (l_90) = 0xDF27L;
                    {
                             __trans_tmp_7 =  safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
                           }
                    
                    l_105 = (__trans_tmp_7);
                    g_106 = g_106;
                }
             }
              g_85 = (-14);
              
              g_85 = 0;
              
              for (g_85;
      (g_85 >= (-14));
      g_85)         {
                 const int32_t l_113 = 0xFF2B3A76L;
                 int32_t l_115 = *l_75;
                 int32_t l_116 = 0x98E57B79L;
                 {
                          __trans_tmp_8 =      (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);
                        }
                 
                 (l_116) ^= (__trans_tmp_8);
             }
          }
       }
        int main (void) {
           int print_hash_value = 0;
           {
                   0;
                  }
           
           ;
       }