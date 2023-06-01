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
        extern void __assert_fail (         void)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
        uint32_t platform_main_end_crc;
int platform_main_end_flag;
static void platform_main_end( void) {
        printf ("checksum = %X\n", platform_main_end_crc);
       }
         int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;
void  (safe_add_func_int8_t_s_s)( void ) {
              (safe_add_func_int8_t_s_s_si1 + safe_add_func_int8_t_s_s_si2);
       }
        int8_t safe_sub_func_int8_t_s_s_si1;
int8_t safe_sub_func_int8_t_s_s_si2;
static int8_t (safe_sub_func_int8_t_s_s)( void ) {
         return     (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);
       }
        int8_t safe_lshift_func_int8_t_s_s_left;
int safe_lshift_func_int8_t_s_s_right;
void  (safe_lshift_func_int8_t_s_s)( void ) {
              ((safe_lshift_func_int8_t_s_s_left < 0) || (((int)safe_lshift_func_int8_t_s_s_right) < 0) || (((int)safe_lshift_func_int8_t_s_s_right) >= 32) || (safe_lshift_func_int8_t_s_s_left > (0 >> ((int)safe_lshift_func_int8_t_s_s_right)))) ?     ((safe_lshift_func_int8_t_s_s_left)) :     (safe_lshift_func_int8_t_s_s_left << ((int)safe_lshift_func_int8_t_s_s_right));
       }
         int16_t safe_add_func_int16_t_s_s_si1;
int16_t safe_add_func_int16_t_s_s_si2;
void  (safe_add_func_int16_t_s_s)( void ) {
              (safe_add_func_int16_t_s_s_si1 + safe_add_func_int16_t_s_s_si2);
       }
        int16_t safe_sub_func_int16_t_s_s_si1;
int16_t safe_sub_func_int16_t_s_s_si2;
static int16_t (safe_sub_func_int16_t_s_s)( void ) {
         return     (safe_sub_func_int16_t_s_s_si1 - safe_sub_func_int16_t_s_s_si2);
       }
        int16_t safe_mul_func_int16_t_s_s_si1;
int16_t safe_mul_func_int16_t_s_s_si2;
void  (safe_mul_func_int16_t_s_s)( void ) {
              safe_mul_func_int16_t_s_s_si1 * safe_mul_func_int16_t_s_s_si2;
       }
        int16_t safe_lshift_func_int16_t_s_s_left;
int safe_lshift_func_int16_t_s_s_right;
static int16_t (safe_lshift_func_int16_t_s_s)( void ) {
         return     ((safe_lshift_func_int16_t_s_s_left < 0) || (((int)safe_lshift_func_int16_t_s_s_right) < 0) || (((int)safe_lshift_func_int16_t_s_s_right) >= 32) || (safe_lshift_func_int16_t_s_s_left > ((32767) >> ((int)safe_lshift_func_int16_t_s_s_right)))) ?     ((safe_lshift_func_int16_t_s_s_left)) :     (safe_lshift_func_int16_t_s_s_left << ((int)safe_lshift_func_int16_t_s_s_right));
       }
        int16_t safe_lshift_func_int16_t_s_u_left;
unsigned int safe_lshift_func_int16_t_s_u_right;
static int16_t (safe_lshift_func_int16_t_s_u)( void ) {
         return     ((safe_lshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) || (safe_lshift_func_int16_t_s_u_left > ((32767) >> ((unsigned int)safe_lshift_func_int16_t_s_u_right)))) ?     ((safe_lshift_func_int16_t_s_u_left)) :     (safe_lshift_func_int16_t_s_u_left << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
       }
         int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
static int32_t (safe_add_func_int32_t_s_s)( void ) {
         return     (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
       }
        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;
static int32_t (safe_sub_func_int32_t_s_s)( void ) {
         return     (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);
       }
         uint8_t safe_lshift_func_uint8_t_u_u_left;
unsigned int safe_lshift_func_uint8_t_u_u_right;
static uint8_t (safe_lshift_func_uint8_t_u_u)( void ) {
         return     ((((unsigned int)safe_lshift_func_uint8_t_u_u_right) >= 32) || (safe_lshift_func_uint8_t_u_u_left > ((255) >> ((unsigned int)safe_lshift_func_uint8_t_u_u_right)))) ?     ((safe_lshift_func_uint8_t_u_u_left)) :     (safe_lshift_func_uint8_t_u_u_left << ((unsigned int)safe_lshift_func_uint8_t_u_u_right));
       }
        uint16_t safe_add_func_uint16_t_u_u_ui1;
uint16_t safe_add_func_uint16_t_u_u_ui2;
static uint16_t (safe_add_func_uint16_t_u_u)( void ) {
         return safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
       }
        uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;
void  (safe_mul_func_uint16_t_u_u)( void ) {
          ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
       }
        uint16_t safe_mod_func_uint16_t_u_u_ui1;
uint16_t safe_mod_func_uint16_t_u_u_ui2;
static uint16_t (safe_mod_func_uint16_t_u_u)( void ) {
         return     (safe_mod_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint16_t_u_u_ui1)) :     (safe_mod_func_uint16_t_u_u_ui1 % safe_mod_func_uint16_t_u_u_ui2);
       }
        uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
static uint16_t (safe_lshift_func_uint16_t_u_u)( void ) {
         return     ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
       }
        uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
static uint32_t (safe_add_func_uint32_t_u_u)( void ) {
         return safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
       }
         uint32_t safe_mod_func_uint32_t_u_u_ui1;
uint32_t safe_mod_func_uint32_t_u_u_ui2;
static uint32_t (safe_mod_func_uint32_t_u_u)( void ) {
         return     (safe_mod_func_uint32_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint32_t_u_u_ui1)) :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
       }
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        uint32_t crc;
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        for (i = 0;
       i < 256;
       i++) {
        for (j = 8;
      j > 0;
      j--) {
        if (crc & 1) {
        crc = (crc >> 1) ^ poly;
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
        static const int32_t *g_74 = &g_5;
        static const int32_t **g_73 = &g_74;
        static int32_t g_76 = (-8L);
        static int32_t *g_84 = (void*)0;
        static int32_t **g_83 = &g_84;
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
        static int32_t func_1(void) {
           for (g_638 = 0;
       (g_638 < (-12));
       g_638--)     {
          }
           return g_955;
       }
        uint32_t func_13_p_14;
int32_t **const func_13_p_15;
static int32_t * func_13( void) {
           int32_t l_593 = 0L;
           int32_t *l_681 = (void*)0;
           for (g_509_2 = 0;
       (g_509_2 < 4);
       g_509_2 = safe_add_func_uint32_t_u_u( ))     {
              for (g_621 = 0;
      (g_621 < 19);
      g_621 = safe_add_func_int32_t_s_s( ))         {
                 int32_t *l_680 = &l_593;
                 return l_681;
             }
          }
       }
        const uint8_t func_48_p_49;
int16_t func_48_p_50;
int32_t * func_48_p_51;
static struct S0 func_48(  void) {
           struct S0 *l_383 = &g_106;
           return (*l_383);
       }
        uint32_t func_56_p_57;
int32_t *const func_56_p_58;
uint32_t func_56_p_59;
int8_t func_56_p_60;
int32_t * func_56_p_61;
static uint16_t func_56(    void) {
           for (func_56_p_59 = 5;
       (func_56_p_59 < 44);
       func_56_p_59 = safe_add_func_uint32_t_u_u( ))     {
          }
           for (g_76 = (-3);
       (g_76 > 24);
       g_76 = safe_add_func_uint16_t_u_u( ))     {
              return g_190;
          }
       }
        const int32_t ** func_71_p_72;
static const uint8_t func_71(void) {
           int32_t *l_75 = &g_76;
           if ((safe_sub_func_int16_t_s_s( )))     {
              int32_t l_105 = (-3L);
              for (g_76 = (-3);
      (g_76 < 8);
      g_76 = safe_add_func_uint16_t_u_u( ))         {
                 const int32_t ***l_82 = &g_73;
                 ((void) sizeof ((g_83 == &l_75) ? 1 : 0), __extension__ ({
    if (g_83 == &l_75) ;
    else __assert_fail (   );
    }
    ));
                 for (g_85 = 0;
     (g_85 >= (-9));
     g_85 = safe_sub_func_int8_t_s_s( ))             {
                    uint16_t l_88 = 0xDF27L;
                    int32_t *l_89 = (void*)0;
                    int32_t *l_90 = &g_91;
                    (*l_90) = l_88;
                    l_105 = (safe_add_func_uint32_t_u_u( ));
                    g_106 = g_106;
                }
             }
              for (g_85 = (-14);
      (g_85 >= (-14));
      g_85 = safe_add_func_int32_t_s_s( ))         {
                 const int32_t l_113 = 0xFF2B3A76L;
                 int32_t **l_115 = &l_75;
                 int32_t *l_116 = &g_91;
                 (*l_116) ^= (safe_sub_func_int32_t_s_s( ));
             }
          }
       }
        int main (void) {
           int print_hash_value = 0;
           platform_main_end( );
       }
