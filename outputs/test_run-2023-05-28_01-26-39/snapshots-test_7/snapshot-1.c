 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef unsigned long int __uint64_t;
  typedef long int __off_t;
  typedef long int __off64_t;
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
  typedef __uint64_t uint64_t;
  extern void __assert_fail (const char *__assertion, const char *__file,       unsigned int __line, const char *__function)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
  typedef struct {
   int __count;
   union   {     unsigned int __wch;     char __wchb[4];   }
 __value;
 }
  __mbstate_t;
  typedef struct _G_fpos_t {
   __off_t __pos;
   __mbstate_t __state;
 }
  __fpos_t;
  typedef struct _G_fpos64_t {
   __off64_t __pos;
   __mbstate_t __state;
 }
  __fpos64_t;
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
   static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 + si2);
 }
  static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 - si2);
 }
   static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
  static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
   static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
 }
  static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 + si2);
 }
  static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 - si2);
 }
  static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     si1 * si2;
 }
  static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int16_t (safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
  static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static int16_t (safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
 }
  static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
  static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
   static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
                 static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 + ui2;
 }
  static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 - ui2;
 }
  static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
  static uint8_t (safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
 }
   static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
   static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
  static uint16_t (safe_unary_minus_func_uint16_t_u)(uint16_t ui ) {
   return -ui;
 }
  static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 + ui2;
 }
  static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 - ui2;
 }
  static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
  static uint16_t (safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
 }
  static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
 }
  static uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
  static uint32_t (safe_unary_minus_func_uint32_t_u)(uint32_t ui ) {
   return -ui;
 }
  static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
  static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 - ui2;
 }
   static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
           static uint32_t crc32_tab[256];
  static uint32_t crc32_context = 0xFFFFFFFFUL;
  static void crc32_gentab (void) {
  uint32_t crc;
  const uint32_t poly = 0xEDB88320UL;
  int i, j;
  for (i = 0;
 i < 256;
 i++) {   crc = i;   for (j = 8; j > 0; j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }   crc32_tab[i] = crc;  }
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>0) & 0xff);
  crc32_byte ((val>>8) & 0xff);
  crc32_byte ((val>>16) & 0xff);
  crc32_byte ((val>>24) & 0xff);
  crc32_byte ((val>>32) & 0xff);
  crc32_byte ((val>>40) & 0xff);
  crc32_byte ((val>>48) & 0xff);
  crc32_byte ((val>>56) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
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
    struct S0 f2;
    uint8_t f3;
    uint16_t f4;
    int32_t f5;
    struct S1 f6;
    const int32_t f7;
 };
  static int32_t g_5 = 0xB4837182L;
  static int32_t **g_30 = (void*)0;
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
  static int16_t g_264 = 0L;
  static uint16_t g_269 = 0x3EACL;
  static const uint8_t g_326 = 5UL;
  static struct S1 g_355 = {
11118};
  static struct S1 **g_398 = (void*)0;
  static struct S1 ***g_397 = &g_398;
  static struct S1 ****g_396 = &g_397;
  static int16_t g_473 = 0x3EC0L;
  static uint16_t g_474 = 0x66E2L;
  static struct S1 *g_489 = &g_355;
  static struct S2 g_509 = {
9UL,0x03B8C538L,{4,316,0,4285}
,0x04L,65530UL,0x662457B2L,{1187}
,0xCD0642E4L};
  static struct S2 *g_508 = &g_509;
  static int8_t g_621 = 0x24L;
  static int32_t g_638 = 0x8E35BE2CL;
  static uint16_t g_646 = 0x91DAL;
  static int32_t g_846 = 0L;
  static uint32_t g_857 = 0x37BF34A8L;
  static int32_t *g_870 = &g_190;
  static int32_t g_927 = 0xC10BF9DDL;
  static uint16_t g_955 = 65527UL;
  static int32_t * func_8(int32_t * p_9, int32_t ** p_10, int32_t ** p_11, int32_t ** p_12);
  static int32_t * func_13(uint32_t p_14, int32_t ** const p_15);
  static uint8_t func_18(int16_t p_19, uint32_t p_20, uint32_t p_21, int32_t * p_22, int8_t p_23);
  static uint32_t func_24(int32_t ** p_25, int16_t p_26, int32_t p_27, int32_t p_28, uint32_t p_29);
  static const uint8_t func_31(int32_t * p_32, uint32_t p_33, int32_t * p_34, int32_t * const * p_35);
  static uint32_t func_40(const struct S1 p_41, uint32_t p_42, int32_t * const * p_43, const struct S0 p_44, int32_t ** p_45);
  static struct S0 func_48(const uint8_t p_49, int16_t p_50, int32_t * p_51);
  static uint16_t func_56(uint32_t p_57, int32_t * const p_58, uint32_t p_59, int8_t p_60, int32_t * p_61);
  static const uint8_t func_71(const int32_t ** p_72);
  static int32_t func_1(void) {
     const int32_t **l_2 = (void*)0;
     int32_t *l_4 = (void*)0;
     int32_t **l_3 = &l_4;
     int16_t l_47 = (-10L);
     uint32_t l_504 = 0x69259B8EL;
     struct S1 l_694 = {2980};
     int32_t l_712 = (-8L);
     struct S1 **l_726 = &g_489;
     struct S0 *l_727 = &g_509.f2;
     int32_t l_855 = (-5L);
     int32_t l_905 = 0xF5122942L;
     int32_t l_915 = 0x5E78ADEBL;
     int32_t l_920 = 5L;
     int8_t l_966 = 0xF3L;
     (*l_3) = (void*)0;
     for (g_5 = 17;
 (g_5 <= (-11));
 g_5--)     {         const struct S1 l_46 = {8919};         int32_t **l_384 = &l_4;         uint16_t l_711 = 0x9E3BL;         struct S2 **l_713 = &g_508;         struct S0 *l_728 = &g_106;         uint32_t l_744 = 0xB111E0D6L;         int32_t l_795 = (-2L);         int32_t l_833 = 0L;         int32_t l_937 = 0x5681CDB2L;         int32_t l_938 = 0xE12D3C66L;         struct S1 *l_967 = &l_694;         (*l_3) = func_8(func_13((safe_mod_func_uint8_t_u_u(func_18(g_5, func_24(g_30, ((func_31(&g_5, ((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((func_40(l_46, l_47, g_30, func_48((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_5, func_56(g_5, (*l_3), g_5, g_5, (*l_3)))), g_264)), g_355.f0, (*l_3)), l_384) | g_473) || g_474), 0xA4L)), l_46.f0)) || g_76), &g_5, &g_84) & l_504) != 0x2121L), l_46.f0, l_47, g_326), g_473, &g_5, g_326), 0x07L)), l_3), &g_84, &g_84, &g_84);         ((void) sizeof ((l_4 == &g_85) ? 1 : 0), __extension__ ({ if (l_4 == &g_85) ; else __assert_fail ("l_4 == &g_85", "/tmp/tmpk4p4sgy_.c", 129, __extension__ __PRETTY_FUNCTION__); }));         ((void) sizeof ((g_489 == 0) ? 1 : 0), __extension__ ({ if (g_489 == 0) ; else __assert_fail ("g_489 == 0", "/tmp/tmpk4p4sgy_.c", 130, __extension__ __PRETTY_FUNCTION__); }));         for (g_509.f4 = 2; (g_509.f4 <= 15); g_509.f4 = safe_add_func_uint16_t_u_u(g_509.f4, 6))         {             return g_76;         }         for (l_47 = 0; (l_47 < 3); l_47 = safe_add_func_uint32_t_u_u(l_47, 5))         {             int32_t ***l_710 = &l_384;             int32_t l_761 = 0xCA7A246BL;             int32_t l_839 = 0x2EF022C1L;             int32_t l_862 = (-3L);             const struct S1 *l_863 = &g_509.f6;             struct S0 *l_864 = &g_509.f2;             int32_t *l_880 = &l_855;             int32_t *l_881 = &g_846;             int32_t *l_882 = &g_846;             int32_t *l_883 = (void*)0;             int32_t *l_884 = &l_761;             int32_t *l_885 = &g_638;             int32_t *l_886 = &l_833;             int32_t *l_887 = &g_85;             int32_t *l_888 = (void*)0;             int32_t *l_889 = &l_761;             int32_t *l_890 = &g_638;             int32_t *l_891 = &g_76;             int32_t *l_892 = (void*)0;             int32_t *l_893 = &l_761;             int32_t *l_894 = &l_761;             int32_t *l_895 = (void*)0;             int32_t *l_896 = (void*)0;             int32_t *l_897 = &l_795;             int32_t *l_898 = &l_862;             int32_t *l_899 = &l_795;             int32_t *l_900 = &l_833;             int32_t *l_901 = &g_846;             int32_t *l_902 = (void*)0;             int32_t *l_903 = &l_855;             int32_t *l_904 = (void*)0;             int32_t *l_906 = (void*)0;             int32_t *l_907 = &l_855;             int32_t *l_908 = &l_905;             int32_t *l_909 = &g_76;             int32_t *l_910 = (void*)0;             int32_t *l_911 = (void*)0;             int32_t *l_912 = &l_905;             int32_t *l_913 = (void*)0;             int32_t *l_914 = (void*)0;             int32_t *l_916 = (void*)0;             int32_t *l_917 = &g_190;             int32_t *l_918 = &l_915;             int32_t *l_919 = &l_839;             int32_t *l_921 = &g_846;             int32_t *l_922 = (void*)0;             int32_t *l_923 = &g_85;             int32_t *l_924 = (void*)0;             int32_t *l_925 = &g_509.f5;             int32_t *l_926 = &l_833;             int32_t *l_928 = &l_905;             int32_t *l_929 = &l_862;             int32_t *l_930 = (void*)0;             int32_t *l_931 = &l_920;             int32_t *l_932 = &g_509.f5;             int32_t *l_933 = &l_905;             int32_t *l_934 = (void*)0;             int32_t *l_935 = &g_509.f5;             int32_t *l_936 = &l_855;             int32_t *l_939 = &l_862;             int32_t *l_940 = (void*)0;             int32_t *l_941 = &l_761;             int32_t *l_942 = (void*)0;             int32_t *l_943 = &g_846;             int32_t *l_944 = &g_76;             int32_t *l_945 = &l_937;             int32_t *l_946 = &l_761;             int32_t *l_947 = &g_91;             int32_t *l_948 = (void*)0;             int32_t *l_949 = &l_795;             int32_t *l_950 = &g_509.f5;             int32_t *l_951 = &l_795;             int32_t *l_952 = &g_85;             int32_t *l_953 = &l_915;             int32_t *l_954 = &l_915;         }         (*l_967) = l_46;     }
     ((void) sizeof ((l_4 == &g_85 || l_4 == 0) ? 1 : 0), __extension__ ({ if (l_4 == &g_85 || l_4 == 0) ; else __assert_fail ("l_4 == &g_85 || l_4 == 0", "/tmp/tmpk4p4sgy_.c", 216, __extension__ __PRETTY_FUNCTION__); }
));
     ((void) sizeof ((g_489 == 0 || g_489 == &g_355) ? 1 : 0), __extension__ ({ if (g_489 == 0 || g_489 == &g_355) ; else __assert_fail ("g_489 == 0 || g_489 == &g_355", "/tmp/tmpk4p4sgy_.c", 218, __extension__ __PRETTY_FUNCTION__); }
));
     for (g_638 = 0;
 (g_638 < (-12));
 g_638--)     {         uint8_t l_970 = 1UL;         (*g_870) = l_970;         (*g_870) |= (-1L);     }
     return g_955;
 }
  static int32_t * func_8(int32_t * p_9, int32_t ** p_10, int32_t ** p_11, int32_t ** p_12) {
     int32_t *l_685 = &g_85;
     return l_685;
 }
  static int32_t * func_13(uint32_t p_14, int32_t ** const p_15) {
     struct S2 *l_522 = &g_509;
     struct S1 * const * const **l_525 = (void*)0;
     int32_t *l_526 = (void*)0;
     int32_t *l_527 = &g_509.f5;
     int32_t *l_528 = &g_76;
     int32_t *l_529 = &g_190;
     int32_t *l_530 = &g_91;
     int32_t *l_531 = &g_509.f5;
     int32_t *l_532 = (void*)0;
     int32_t *l_533 = (void*)0;
     int32_t *l_534 = &g_85;
     int32_t *l_535 = (void*)0;
     int32_t l_536 = (-9L);
     int32_t *l_537 = &g_76;
     int32_t l_538 = 0x049AD811L;
     int32_t *l_539 = (void*)0;
     int32_t *l_540 = (void*)0;
     int32_t l_541 = 5L;
     int32_t l_542 = 0x61DBAFE0L;
     int32_t *l_543 = (void*)0;
     int32_t *l_544 = (void*)0;
     int32_t l_545 = (-1L);
     int32_t *l_546 = &g_509.f5;
     int32_t *l_547 = &g_91;
     int32_t *l_548 = &l_536;
     int32_t *l_549 = (void*)0;
     int32_t *l_550 = (void*)0;
     int32_t *l_551 = (void*)0;
     int32_t *l_552 = (void*)0;
     int32_t *l_553 = &l_538;
     int32_t *l_554 = (void*)0;
     int32_t *l_555 = &g_190;
     int32_t *l_556 = &g_76;
     int32_t *l_557 = &g_190;
     int32_t *l_558 = &g_509.f5;
     int32_t *l_559 = &l_536;
     int32_t *l_560 = &l_545;
     int32_t *l_561 = &l_545;
     int32_t l_562 = 6L;
     int32_t *l_563 = &g_190;
     int32_t *l_564 = &l_542;
     int32_t *l_565 = &l_542;
     int32_t *l_566 = (void*)0;
     int32_t *l_567 = &g_76;
     int32_t *l_568 = (void*)0;
     int32_t *l_569 = &l_541;
     int32_t *l_570 = &g_91;
     int32_t *l_571 = (void*)0;
     int32_t *l_572 = &g_509.f5;
     int32_t *l_573 = &g_85;
     int32_t *l_574 = &l_545;
     int32_t *l_575 = &g_85;
     int32_t *l_576 = (void*)0;
     int32_t *l_577 = (void*)0;
     int32_t l_578 = (-1L);
     int32_t *l_579 = &l_538;
     int32_t *l_580 = &l_562;
     int32_t l_581 = 1L;
     int32_t l_582 = 0x9036414AL;
     int32_t *l_583 = &g_85;
     int32_t *l_584 = &l_542;
     int32_t *l_585 = &g_85;
     int32_t l_586 = 0L;
     int32_t *l_587 = (void*)0;
     int32_t *l_588 = &g_76;
     int32_t *l_589 = &l_542;
     int32_t *l_590 = &g_91;
     int32_t l_591 = 1L;
     int32_t *l_592 = &l_581;
     int32_t l_593 = 0L;
     int32_t *l_594 = (void*)0;
     int32_t *l_595 = &l_591;
     int32_t l_596 = 0x3A0CFA0CL;
     int32_t l_597 = 0x80D7D409L;
     int32_t *l_598 = &l_586;
     int32_t *l_599 = &l_538;
     int32_t l_600 = 0x9A014F11L;
     int32_t *l_601 = &l_600;
     int32_t *l_602 = &l_562;
     int32_t *l_603 = &l_562;
     int32_t *l_604 = &l_597;
     int32_t *l_605 = (void*)0;
     int32_t *l_606 = &l_597;
     int32_t *l_607 = (void*)0;
     int32_t *l_608 = (void*)0;
     int32_t *l_609 = &g_85;
     int32_t *l_610 = &g_190;
     int32_t *l_611 = &l_581;
     int32_t *l_612 = &l_600;
     int32_t *l_613 = &g_509.f5;
     int32_t *l_614 = &l_562;
     int32_t *l_615 = &l_593;
     int32_t *l_616 = &l_581;
     int32_t *l_617 = (void*)0;
     int32_t *l_618 = &l_538;
     int32_t *l_619 = &l_542;
     int32_t *l_620 = &g_91;
     int32_t *l_622 = &g_509.f5;
     int32_t *l_623 = &l_593;
     int32_t *l_624 = &l_600;
     int32_t *l_625 = &l_586;
     int32_t l_626 = 0x0D92E2E4L;
     int32_t *l_627 = &l_586;
     int32_t *l_628 = &l_626;
     int32_t *l_629 = &l_538;
     int32_t *l_630 = &l_597;
     int32_t l_631 = 0xBC4FCC52L;
     int32_t *l_632 = &l_591;
     int32_t *l_633 = &l_542;
     int32_t *l_634 = &l_582;
     int32_t *l_635 = &l_538;
     int32_t *l_636 = &g_85;
     int32_t *l_637 = &g_76;
     int32_t *l_639 = &g_85;
     int32_t *l_640 = &l_591;
     int32_t *l_641 = &l_536;
     int32_t *l_642 = (void*)0;
     int32_t *l_643 = &g_638;
     int32_t *l_644 = (void*)0;
     int32_t l_645 = (-4L);
     uint32_t l_660 = 0xF8BFF30CL;
     int32_t *l_681 = (void*)0;
     uint32_t l_682 = 0xCD41C993L;
     (*l_527) = ((-1L) && (((**g_73) == ((-9L) || ((g_509.f1 <= ((safe_rshift_func_uint16_t_u_s((&g_509 == (void*)0), 6)) >= (((l_522 == l_522) != (safe_lshift_func_int16_t_s_u((&g_397 != l_525), g_509.f7))) <= p_14))) >= g_106.f3))) || 4294967295UL));
     ++g_646;
     for (g_509.f3 = 0;
 (g_509.f3 < 4);
 g_509.f3 = safe_add_func_uint32_t_u_u(g_509.f3, 2))     {         int32_t *l_653 = &l_591;         struct S1 *l_669 = &g_355;         int32_t * const **l_672 = (void*)0;         struct S1 l_676 = {9458};         struct S1 ***l_677 = (void*)0;         if (((safe_sub_func_int8_t_s_s((g_474 | ((l_653 != (void*)0) == 8UL)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((l_660 >= (safe_div_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((l_669 == l_669), (safe_rshift_func_int8_t_s_s((l_672 != (void*)0), 3)))) || 1L), 0x38993056L)) == 1UL), (*l_639))) < (-1L)), g_509.f1))), 6)) | g_509.f6.f0), (*l_653))), 10)))) >= 0xED059261L))         {             uint8_t l_673 = 0xEAL;             ++l_673;             (*l_669) = l_676;         }         else         {             (*l_573) &= ((p_14 > ((-1L) || ((&g_84 != &g_74) != (l_677 != l_677)))) >= ((g_474 & (&g_73 == (void*)0)) <= 4294967286UL));         }         for (g_621 = 0; (g_621 < 19); g_621 = safe_add_func_int32_t_s_s(g_621, 2))         {             int32_t *l_680 = &l_593;             return l_681;         }         return &g_638;     }
     l_682++;
     return &g_5;
 }
  static uint8_t func_18(int16_t p_19, uint32_t p_20, uint32_t p_21, int32_t * p_22, int8_t p_23) {
     uint16_t l_513 = 65526UL;
     struct S2 **l_514 = (void*)0;
     int32_t l_517 = 0L;
     int32_t *l_518 = (void*)0;
     int32_t *l_519 = &g_190;
     for (g_76 = 0;
 (g_76 <= 29);
 g_76++)     {         struct S2 **l_510 = (void*)0;         struct S2 **l_511 = &g_508;         int32_t l_512 = 7L;         (*l_511) = g_508;         l_513 = l_512;     }
     l_517 = ((l_514 != l_514) > (safe_lshift_func_uint16_t_u_s(g_76, 10)));
     (*l_519) = 1L;
     return g_264;
 }
  static uint32_t func_24(int32_t ** p_25, int16_t p_26, int32_t p_27, int32_t p_28, uint32_t p_29) {
     int32_t *l_505 = &g_190;
     (*l_505) = 0x6697B58EL;
     return g_5;
 }
  static const uint8_t func_31(int32_t * p_32, uint32_t p_33, int32_t * p_34, int32_t * const * p_35) {
     struct S1 *l_496 = &g_355;
     int32_t l_501 = 0xF62F70D8L;
     int32_t *l_502 = &g_85;
     const int8_t l_503 = 0L;
     p_34 = (*p_35);
     ((void) sizeof ((p_34 == 0) ? 1 : 0), __extension__ ({ if (p_34 == 0) ; else __assert_fail ("p_34 == 0", "/tmp/tmpk4p4sgy_.c", 462, __extension__ __PRETTY_FUNCTION__); }
));
     l_501 = (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_269 == (safe_add_func_uint8_t_u_u((g_106.f3 != 0xC1789064L), ((0x99416B48L ^ (l_496 == l_496)) && p_33)))), (safe_div_func_uint8_t_u_u((0L || (safe_lshift_func_int16_t_s_u(p_33, 3))), l_501)))), l_501));
     l_502 = (*p_35);
     ((void) sizeof ((l_502 == 0) ? 1 : 0), __extension__ ({ if (l_502 == 0) ; else __assert_fail ("l_502 == 0", "/tmp/tmpk4p4sgy_.c", 466, __extension__ __PRETTY_FUNCTION__); }
));
     return l_503;
 }
  static uint32_t func_40(const struct S1 p_41, uint32_t p_42, int32_t * const * p_43, const struct S0 p_44, int32_t ** p_45) {
     uint32_t l_395 = 0xA9EEEF5EL;
     struct S1 ****l_477 = &g_397;
     int32_t l_487 = 0x868B9053L;
     struct S1 *l_488 = (void*)0;
     if (((((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(1L, (((safe_div_func_int8_t_s_s((&p_41 == &g_355), l_395)) == (((g_269 ^ ((((void*)0 == g_396) != ((*g_73) != (*g_73))) && g_91)) == 0xCAB2A87EL) <= 4294967289UL)) < 0xDBL))) || p_42), l_395)), p_42)) != 4294967295UL) & (-3L)) < (**g_73)))     {         uint16_t l_455 = 0UL;         uint8_t l_458 = 255UL;         int32_t l_463 = 0L;         int32_t l_468 = 1L;         for (g_76 = (-3); (g_76 < (-3)); g_76 = safe_add_func_int8_t_s_s(g_76, 2))         {             int8_t l_407 = (-1L);             int32_t l_413 = 0xFC97EF01L;             int32_t *l_461 = (void*)0;             int32_t *l_462 = &g_190;             int32_t *l_464 = &l_463;             int32_t *l_465 = (void*)0;             int32_t *l_466 = &g_85;             int32_t *l_467 = &g_190;             int32_t *l_469 = &g_91;             int32_t *l_470 = &g_91;             int32_t *l_471 = &g_190;             int32_t *l_472 = &g_190;             for (l_395 = 0; (l_395 > 4); l_395 = safe_add_func_uint8_t_u_u(l_395, 4))             {                 int32_t *l_403 = &g_85;                 int32_t *l_404 = (void*)0;                 int32_t *l_405 = &g_85;                 int32_t *l_406 = (void*)0;                 int32_t *l_408 = &g_91;                 int32_t *l_409 = (void*)0;                 int32_t *l_410 = (void*)0;                 int32_t *l_411 = &g_190;                 int32_t *l_412 = &g_91;                 int32_t *l_414 = &l_413;                 int32_t *l_415 = &g_190;                 int32_t *l_416 = &l_413;                 int32_t *l_417 = (void*)0;                 int32_t *l_418 = &g_190;                 int32_t *l_419 = &l_413;                 int32_t *l_420 = &g_190;                 int32_t *l_421 = &g_91;                 int32_t *l_422 = &g_190;                 int32_t *l_423 = &g_91;                 int32_t *l_424 = &g_190;                 int32_t *l_425 = &l_413;                 int32_t *l_426 = &l_413;                 int32_t *l_427 = &g_190;                 int32_t *l_428 = &l_413;                 int32_t *l_429 = &l_413;                 int32_t *l_430 = &l_413;                 int32_t *l_431 = &g_190;                 int32_t *l_432 = &g_190;                 int32_t *l_433 = &g_91;                 int32_t *l_434 = &l_413;                 int32_t *l_435 = &l_413;                 int32_t *l_436 = (void*)0;                 int32_t *l_437 = (void*)0;                 int32_t *l_438 = &g_85;                 int32_t *l_439 = &g_91;                 int32_t *l_440 = &g_85;                 int32_t *l_441 = (void*)0;                 int32_t *l_442 = (void*)0;                 int32_t *l_443 = (void*)0;                 int32_t *l_444 = (void*)0;                 int32_t *l_445 = &g_85;                 int32_t *l_446 = (void*)0;                 int32_t *l_447 = &g_85;                 int32_t *l_448 = &g_85;                 int32_t *l_449 = &g_91;                 int32_t *l_450 = &g_190;                 int32_t *l_451 = &g_190;                 int32_t *l_452 = &g_85;                 int32_t *l_453 = &g_85;                 int32_t *l_454 = (void*)0;                 l_455--;                 l_458++;             }             g_474--;             (*l_470) ^= (&g_397 == l_477);         }     }
     else     {         const struct S1 *l_479 = &g_355;         const struct S1 **l_478 = &l_479;         const uint16_t l_484 = 1UL;         int32_t *l_485 = &g_190;         int32_t ***l_486 = (void*)0;         (*l_478) = &p_41;         ((void) sizeof ((l_479 == &p_41) ? 1 : 0), __extension__ ({ if (l_479 == &p_41) ; else __assert_fail ("l_479 == &p_41", "/tmp/tmpk4p4sgy_.c", 570, __extension__ __PRETTY_FUNCTION__); }));         (*l_485) &= (((0x7DD3L && ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((void*)0 == &p_41), l_484)), ((0UL >= ((&p_44 == &g_106) & l_484)) > p_44.f3))) < (*g_74))) < 6L) || p_44.f0);         l_487 ^= (&g_30 == l_486);     }
     g_489 = l_488;
     ((void) sizeof ((g_489 == 0) ? 1 : 0), __extension__ ({ if (g_489 == 0) ; else __assert_fail ("g_489 == 0", "/tmp/tmpk4p4sgy_.c", 576, __extension__ __PRETTY_FUNCTION__); }
));
     (*p_45) = &l_487;
     return g_106.f2;
 }
  static struct S0 func_48(const uint8_t p_49, int16_t p_50, int32_t * p_51) {
     struct S1 *l_380 = &g_355;
     struct S1 **l_379 = &l_380;
     struct S1 ** const *l_378 = &l_379;
     struct S0 l_382 = {11,115,7,2527};
     struct S0 *l_383 = &g_106;
     for (g_264 = 0;
 (g_264 != (-11));
 g_264--)     {         for (g_76 = (-18); (g_76 >= 25); g_76 = safe_add_func_int8_t_s_s(g_76, 8))         {             struct S1 ** const **l_381 = &l_378;             (*l_381) = l_378;         }     }
     (*l_383) = l_382;
     return (*l_383);
 }
  static uint16_t func_56(uint32_t p_57, int32_t * const p_58, uint32_t p_59, int8_t p_60, int32_t * p_61) {
     uint8_t l_68 = 0xFAL;
     struct S1 * const l_366 = &g_355;
     struct S1 * const *l_365 = &l_366;
     int32_t l_373 = 0x4CAD2613L;
     for (p_59 = 5;
 (p_59 < 44);
 p_59 = safe_add_func_uint32_t_u_u(p_59, 1))     {         uint8_t l_369 = 0UL;         int32_t *l_370 = &g_85;         (*l_370) = (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((l_68 <= 249UL), (safe_add_func_uint32_t_u_u(0x75F98A97L, (func_71(g_73) ^ ((((safe_unary_minus_func_uint32_t_u(((void*)0 == l_365))) ^ 0xA7F5FDC5L) > (safe_mod_func_int16_t_s_s(g_264, l_68))) != 0UL)))))) & l_369), 2));     }
     for (g_76 = (-3);
 (g_76 > 24);
 g_76 = safe_add_func_uint16_t_u_u(g_76, 4))     {         l_373 = l_68;         return g_190;     }
     return g_85;
 }
  static const uint8_t func_71(const int32_t ** p_72) {
     int32_t *l_75 = &g_76;
     int16_t l_149 = (-1L);
     int32_t l_233 = 0x8925B6B4L;
     int32_t l_260 = 0x1E56C3BAL;
     (*l_75) &= ((void*)0 != &g_74);
     if ((safe_sub_func_int16_t_s_s((*l_75), (!0x38D6L))))     {         int32_t l_105 = (-3L);         int16_t l_117 = 0x1368L;         for (g_76 = (-3); (g_76 < 8); g_76 = safe_add_func_uint16_t_u_u(g_76, 4))         {             const int32_t ***l_82 = &g_73;             (*l_82) = p_72;             if ((**p_72))                 continue;             g_83 = &l_75;             ((void) sizeof ((g_83 == &l_75) ? 1 : 0), __extension__ ({ if (g_83 == &l_75) ; else __assert_fail ("g_83 == &l_75", "/tmp/tmpk4p4sgy_.c", 661, __extension__ __PRETTY_FUNCTION__); }));             for (g_85 = 0; (g_85 >= (-9)); g_85 = safe_sub_func_int8_t_s_s(g_85, 9))             {                 uint16_t l_88 = 0xDF27L;                 int32_t *l_89 = (void*)0;                 int32_t *l_90 = &g_91;                 (*l_90) = l_88;                 l_105 = (safe_add_func_uint32_t_u_u(((!(safe_mul_func_int16_t_s_s(g_91, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_72 == p_72), 7)), (safe_mod_func_uint32_t_u_u(((*l_75) != (safe_sub_func_int32_t_s_s(((l_90 == l_89) || (***l_82)), (-1L)))), (**g_83)))))))) & (*l_75)), (**p_72)));                 g_106 = g_106;             }         }         for (g_85 = (-14); (g_85 >= (-14)); g_85 = safe_add_func_int32_t_s_s(g_85, 2))         {             const int32_t l_113 = 0xFF2B3A76L;             int32_t **l_115 = &l_75;             int32_t *l_116 = &g_91;             (*l_75) ^= 0L;             (*l_116) ^= (safe_sub_func_int32_t_s_s((*l_75), (safe_mul_func_uint16_t_u_u(l_113, (!(l_115 != (void*)0))))));         }         (*l_75) = l_117;     }
     else     {         int16_t l_134 = 0L;         int32_t l_267 = (-8L);         struct S1 *l_272 = (void*)0;         const int16_t l_276 = 0x3A1BL;         const int32_t *l_281 = (void*)0;         int8_t l_306 = 7L;         int32_t *l_307 = &g_91;         if (((*p_72) != (void*)0))         {             uint16_t l_118 = 65530UL;             uint32_t l_157 = 0x173B194EL;             int32_t *l_189 = &g_190;             int32_t l_211 = 0xD26D99E8L;             int8_t l_223 = (-1L);             int32_t l_262 = 1L;             ++l_118;             if (((safe_mod_func_int16_t_s_s((g_5 != (safe_mod_func_int16_t_s_s(g_85, (1L ^ (((0x9B86L || (-1L)) || (safe_lshift_func_uint16_t_u_s((0UL || (*l_75)), (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((!(safe_mul_func_uint8_t_u_u(0xA7L, ((**p_72) || (**p_72))))) <= l_134), 0L)), (*l_75)))))) == l_118))))), l_118)) != (*l_75)))             {                 int16_t l_144 = 0L;                 l_149 ^= (safe_mul_func_uint16_t_u_u((*l_75), ((((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0x184AL, (((safe_rshift_func_int8_t_s_u((+((((&l_75 == &l_75) || (l_144 <= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((&p_72 != &g_30), 14)), (*l_75))) & g_5))) & (*l_75)) == (*l_75))), 3)) <= 7L) == 0x4D9CL))) & l_118), (*l_75))) || g_91) | 0xCAF2BF2FL) == g_85)));                 for (g_91 = 27; (g_91 > 4); g_91--)                 {                     for (l_118 = 0; (l_118 >= 7); l_118 = safe_add_func_uint32_t_u_u(l_118, 3))                     {                         (*l_75) = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(0x1BC3L)), g_85));                     }                     if (l_157)                         continue;                 }             }             else             {                 int32_t *l_160 = &g_91;                 (*l_160) = ((safe_lshift_func_uint16_t_u_u((l_160 != (*p_72)), ((safe_rshift_func_uint8_t_u_u((((((g_106.f3 == ((safe_rshift_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((((0x104BL ^ 0x6B6AL) | ((~7L) > ((p_72 == &g_74) && (*g_74)))) >= (*l_75)) > l_157), g_106.f2)), (*l_75))) < 0x278DB3D8L) == (*l_75)) == g_76) != 0x7C33L), g_106.f1)) < g_76)) & (**p_72)) && l_134) & (*l_75)) != (*l_75)), 7)) && g_5))) ^ l_118);             }             (*l_189) ^= ((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_134 ^ ((safe_rshift_func_int8_t_s_s(7L, ((safe_lshift_func_uint16_t_u_u((*l_75), 7)) ^ (safe_lshift_func_uint16_t_u_u((0x7CL != (+(((safe_mul_func_uint8_t_u_u(l_157, (((g_85 > (*l_75)) == (((safe_add_func_int16_t_s_s((g_76 & (l_134 <= 0UL)), g_76)) > l_157) && 0L)) != 0xB27AD419L))) < l_134) | l_118))), g_91))))) || l_134)), g_106.f2)), 0xEC58L)) == (**p_72)) || l_134) ^ g_85), 5L)) >= 0xB8CCF781L), l_118)) ^ g_106.f3);             if (((*l_189) != (safe_sub_func_uint8_t_u_u(g_106.f1, ((**p_72) != l_134)))))             {                 int32_t *l_193 = &g_190;                 int32_t *l_194 = (void*)0;                 int32_t *l_195 = &g_190;                 int32_t *l_196 = &g_91;                 int32_t *l_197 = &g_85;                 int32_t *l_198 = &g_76;                 int32_t *l_199 = &g_190;                 int32_t *l_200 = (void*)0;                 int32_t *l_201 = &g_190;                 int32_t *l_202 = &g_85;                 int32_t *l_203 = &g_91;                 int32_t *l_204 = &g_85;                 int32_t *l_205 = &g_91;                 int32_t *l_206 = (void*)0;                 int32_t *l_207 = &g_190;                 int32_t *l_208 = &g_85;                 int32_t *l_209 = &g_91;                 int32_t *l_210 = &g_91;                 int32_t *l_212 = &g_190;                 int32_t *l_213 = &g_91;                 int32_t *l_214 = (void*)0;                 int32_t *l_215 = &l_211;                 int32_t *l_216 = (void*)0;                 int32_t *l_217 = &g_190;                 int32_t *l_218 = &g_190;                 int32_t *l_219 = &g_85;                 int32_t *l_220 = (void*)0;                 int32_t *l_221 = &l_211;                 int32_t *l_222 = &g_91;                 int32_t *l_224 = &g_76;                 int32_t *l_225 = &g_85;                 int32_t *l_226 = &g_91;                 int32_t *l_227 = &g_190;                 int32_t *l_228 = &g_190;                 int32_t *l_229 = &g_190;                 int32_t *l_230 = &g_85;                 int32_t *l_231 = &l_211;                 int32_t *l_232 = &g_190;                 int32_t *l_234 = &l_211;                 int32_t *l_235 = &g_85;                 int32_t *l_236 = &g_190;                 int32_t *l_237 = (void*)0;                 int32_t *l_238 = &g_190;                 int32_t *l_239 = &g_190;                 int32_t *l_240 = &g_85;                 int32_t *l_241 = &g_91;                 int32_t *l_242 = &l_233;                 int32_t *l_243 = (void*)0;                 int32_t *l_244 = &l_211;                 int32_t *l_245 = (void*)0;                 int32_t *l_246 = (void*)0;                 int32_t *l_247 = (void*)0;                 int32_t *l_248 = &g_85;                 int32_t *l_249 = &g_85;                 int32_t *l_250 = &g_91;                 int32_t *l_251 = (void*)0;                 int32_t *l_252 = &g_190;                 int32_t *l_253 = &g_91;                 int32_t *l_254 = &l_233;                 int32_t *l_255 = &g_85;                 int32_t *l_256 = &g_91;                 int32_t *l_257 = &l_233;                 int32_t *l_258 = &g_85;                 int32_t *l_259 = (void*)0;                 int32_t *l_261 = &l_260;                 int32_t *l_263 = &l_233;                 int32_t *l_265 = &l_262;                 int32_t *l_266 = &g_85;                 int32_t *l_268 = (void*)0;                 (*l_189) &= (*g_74);                 --g_269;             }             else             {                 struct S1 **l_273 = &l_272;                 (*l_273) = l_272;                 return g_5;             }         }         else         {             int32_t l_280 = 4L;             l_280 = (safe_mul_func_int16_t_s_s((((**p_72) > 1L) == (l_276 | g_269)), ((0x3BL < (*l_75)) < (((!((safe_rshift_func_int16_t_s_u(((l_280 <= (((void*)0 != &l_272) | (**p_72))) ^ g_85), 8)) & 0x9F7BL)) != 2UL) && l_267))));         }         l_281 = (*p_72);         ((void) sizeof ((l_281 == &g_5) ? 1 : 0), __extension__ ({ if (l_281 == &g_5) ; else __assert_fail ("l_281 == &g_5", "/tmp/tmpk4p4sgy_.c", 810, __extension__ __PRETTY_FUNCTION__); }));         (*l_307) |= ((((**p_72) >= (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(((void*)0 != &l_272), g_106.f2)) | (1L >= 0L)) && (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((+((*l_281) || ((safe_lshift_func_int16_t_s_s((g_5 | (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_uint16_t_u((*l_75))) ^ 0x9A02L) && (*l_75)), (*l_281))), (*l_281))) == (*l_281)), g_76)), 0x5402L)), 6))), 7)) & g_106.f0))) > (*l_75)), (*l_75))), l_306))) ^ 8UL), 3L)) <= (**g_73)), (*l_281)))) == (*l_75)) != g_85);         (*l_75) &= (*l_281);     }
     if ((250UL & (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((**p_72), 0L)), (safe_div_func_int32_t_s_s(((((&g_74 == (void*)0) <= (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((*l_75), (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((*l_75), 10)), 0x0F00L)))), g_85)) == g_264), (*l_75))), g_326))) <= (-1L)) == 0xFD32L), g_5))))))     {         int32_t *l_327 = &l_233;         l_327 = (void*)0;         ((void) sizeof ((l_327 == 0) ? 1 : 0), __extension__ ({ if (l_327 == 0) ; else __assert_fail ("l_327 == 0", "/tmp/tmpk4p4sgy_.c", 821, __extension__ __PRETTY_FUNCTION__); }));     }
     else     {         int32_t *l_328 = &g_76;         int32_t *l_329 = &g_76;         int32_t *l_330 = &l_260;         int32_t *l_331 = &g_91;         int32_t l_332 = 0x9E22B5BEL;         int32_t *l_333 = &g_76;         int32_t *l_334 = &l_233;         int32_t *l_335 = &l_233;         int32_t *l_336 = &l_233;         int32_t *l_337 = &l_260;         int32_t *l_338 = (void*)0;         int32_t *l_339 = &g_85;         int32_t *l_340 = (void*)0;         int32_t *l_341 = &g_85;         int32_t *l_342 = &g_91;         int32_t *l_343 = &g_85;         int32_t *l_344 = &l_332;         uint8_t l_345 = 0x5AL;         struct S1 *l_354 = &g_355;         struct S1 **l_353 = &l_354;         l_345++;         if ((*l_333))         {             const struct S1 **l_352 = (void*)0;             int32_t l_356 = 0x9E49857DL;             int32_t l_363 = (-7L);             l_363 ^= (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((*l_331), (l_352 == l_353))) == (((**g_73) != (((l_356 != (safe_rshift_func_int16_t_s_s(l_356, 11))) >= (safe_mod_func_int16_t_s_s(l_356, g_326))) == (safe_lshift_func_int8_t_s_s(l_356, 7)))) & (*l_75))), 0x455AL));         }         else         {             (*g_73) = (*p_72);         }         (*l_341) ^= (*l_75);     }
     return g_269;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     func_1();
     transparent_crc(g_509.f2.f3, "g_509.f2.f3", print_hash_value);
     transparent_crc(g_509.f3, "g_509.f3", print_hash_value);
     transparent_crc(g_509.f4, "g_509.f4", print_hash_value);
     transparent_crc(g_509.f5, "g_509.f5", print_hash_value);
     transparent_crc(g_509.f6.f0, "g_509.f6.f0", print_hash_value);
     transparent_crc(g_509.f7, "g_509.f7", print_hash_value);
     transparent_crc(g_621, "g_621", print_hash_value);
     transparent_crc(g_638, "g_638", print_hash_value);
     transparent_crc(g_646, "g_646", print_hash_value);
     transparent_crc(g_846, "g_846", print_hash_value);
     transparent_crc(g_857, "g_857", print_hash_value);
     transparent_crc(g_927, "g_927", print_hash_value);
     transparent_crc(g_955, "g_955", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
