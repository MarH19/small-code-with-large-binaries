 typedef signed char __int8_t;
   typedef unsigned char __uint8_t;
   typedef signed short int __int16_t;
   typedef unsigned short int __uint16_t;
   typedef signed int __int32_t;
   typedef unsigned int __uint32_t;
   typedef unsigned long int __uint64_t;
   typedef __int8_t int8_t;
   typedef __int16_t int16_t;
   typedef __int32_t int32_t;
   typedef __uint8_t uint8_t;
   typedef __uint16_t uint16_t;
   typedef __uint32_t uint32_t;
   typedef __uint64_t uint64_t;
   extern void __assert_fail (const char *__assertion, const char *__file,       unsigned int __line, const char *__function)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
   typedef struct {
  }
   __mbstate_t;
   typedef struct _G_fpos_t {
  }
   __fpos_t;
   typedef struct _G_fpos64_t {
  }
   __fpos64_t;
   static void platform_main_end(uint32_t crc, int flag) {
   printf ("checksum = %X\n", crc);
  }
    static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 + si2);
  }
   static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 - si2);
    return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
   static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
  }
    static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     (si1 + si2);
  }
   static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     (si1 - si2);
  }
   static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     si1 * si2;
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
    return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
                  static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 + ui2;
    return ui1 - ui2;
  }
   static uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
    static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
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
   static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
  }
   static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
    return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
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
  i++) {
   crc = i;
   for (j = 8;
 j > 0;
 j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }
   crc32_tab[i] = crc;
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
   static int16_t g_264 = 0L;
   static struct S1 g_355 = {
 11118};
   static uint16_t g_474 = 0x66E2L;
   static struct S2 g_509 = {
 9UL,0x03B8C538L,{
4,316,0,4285}
 ,0xCD0642E4L};
   static int8_t g_621 = 0x24L;
   static int32_t g_638 = 0x8E35BE2CL;
   static int32_t *g_870 = &g_190;
   static uint16_t g_955 = 65527UL;
   static const uint8_t func_71(const int32_t ** p_72);
   static int32_t func_1(void) {
      for (g_638 = 0;
  (g_638 < (-12));
  g_638--)     {
         uint8_t l_970 = 1UL;
     }
      return g_955;
  }
   static int32_t * func_13(uint32_t p_14, int32_t ** const p_15) {
      int32_t *l_573 = &g_85;
      int32_t l_591 = 1L;
      int32_t l_593 = 0L;
      int32_t *l_639 = &g_85;
      int32_t *l_681 = (void*)0;
      for (g_509.f3 = 0;
  (g_509.f3 < 4);
  g_509.f3 = safe_add_func_uint32_t_u_u(g_509.f3, 2))     {
         int32_t *l_653 = &l_591;
         for (g_621 = 0;
 (g_621 < 19);
 g_621 = safe_add_func_int32_t_s_s(g_621, 2))         {             int32_t *l_680 = &l_593;             return l_681;         }
         return &g_638;
     }
  }
   static uint8_t func_18(int16_t p_19, uint32_t p_20, uint32_t p_21, int32_t * p_22, int8_t p_23) {
      return g_106.f2;
  }
   static struct S0 func_48(const uint8_t p_49, int16_t p_50, int32_t * p_51) {
      struct S0 *l_383 = &g_106;
      return (*l_383);
  }
   static uint16_t func_56(uint32_t p_57, int32_t * const p_58, uint32_t p_59, int8_t p_60, int32_t * p_61) {
      for (p_59 = 5;
  (p_59 < 44);
  p_59 = safe_add_func_uint32_t_u_u(p_59, 1))     {
     }
      for (g_76 = (-3);
  (g_76 > 24);
  g_76 = safe_add_func_uint16_t_u_u(g_76, 4))     {
         return g_190;
     }
  }
   static const uint8_t func_71(const int32_t ** p_72) {
      int32_t *l_75 = &g_76;
      if ((safe_sub_func_int16_t_s_s((*l_75), (!0x38D6L))))     {
         int32_t l_105 = (-3L);
         for (g_76 = (-3);
 (g_76 < 8);
 g_76 = safe_add_func_uint16_t_u_u(g_76, 4))         {             const int32_t ***l_82 = &g_73;             (*l_82) = p_72;             if ((**p_72))                 continue;             g_83 = &l_75;             ((void) sizeof ((g_83 == &l_75) ? 1 : 0), __extension__ ({ if (g_83 == &l_75) ; else __assert_fail ("g_83 == &l_75", "/tmp/tmpk4p4sgy_.c", 661, __extension__ __PRETTY_FUNCTION__); }));             for (g_85 = 0; (g_85 >= (-9)); g_85 = safe_sub_func_int8_t_s_s(g_85, 9))             {                 uint16_t l_88 = 0xDF27L;                 int32_t *l_89 = (void*)0;                 int32_t *l_90 = &g_91;                 (*l_90) = l_88;                 l_105 = (safe_add_func_uint32_t_u_u(((!(safe_mul_func_int16_t_s_s(g_91, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_72 == p_72), 7)), (safe_mod_func_uint32_t_u_u(((*l_75) != (safe_sub_func_int32_t_s_s(((l_90 == l_89) || (***l_82)), (-1L)))), (**g_83)))))))) & (*l_75)), (**p_72)));                 g_106 = g_106;             }         }
         for (g_85 = (-14);
 (g_85 >= (-14));
 g_85 = safe_add_func_int32_t_s_s(g_85, 2))         {             const int32_t l_113 = 0xFF2B3A76L;             int32_t **l_115 = &l_75;             int32_t *l_116 = &g_91;             (*l_75) ^= 0L;             (*l_116) ^= (safe_sub_func_int32_t_s_s((*l_75), (safe_mul_func_uint16_t_u_u(l_113, (!(l_115 != (void*)0))))));         }
     }
  }
   int main (void) {
      int print_hash_value = 0;
      platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  }
