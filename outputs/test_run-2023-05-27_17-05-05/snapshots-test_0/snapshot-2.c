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
    static void platform_main_end(uint32_t crc, int flag) {
    printf ("checksum = %X\n", crc);
   }
     static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
     return     (si1 + si2);
   }
    static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
     return     si1 * si2;
   }
    static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
   }
     static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
   }
    static int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
     return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
   }
      static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
     return     (si1 + si2);
     return     (si1 - si2);
   }
    static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
     return     si1 * si2;
   }
     static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) {
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
   }
    static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) {
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
   }
     static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
     return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
   }
         static int64_t (safe_unary_minus_func_int64_t_s)(int64_t si ) {
     return     (si==(-9223372036854775807L -1)) ?     ((si)) :     -si;
   }
    static int64_t (safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
     return     (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?     ((si1)) :     (si1 + si2);
   }
    static int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
     return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
   }
     static int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
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
     static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
     return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
   }
    static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
     return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
   }
     static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
     return ui1 + ui2;
   }
    static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
     return ((unsigned int)ui1) * ((unsigned int)ui2);
   }
    static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
     return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
   }
       static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
     return ui1 + ui2;
   }
    static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
     return ui1 - ui2;
   }
          static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
     return ui1 + ui2;
   }
    static uint64_t (safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
     return ui1 - ui2;
   }
     static uint64_t (safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
     return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
   }
    static uint32_t crc32_context = 0xFFFFFFFFUL;
    static int32_t g_5 = (-1L);
    static int32_t * const g_4 = &g_5;
    static uint64_t g_66 = 0xA772BE76DCB0C7B2LL;
    static int64_t g_100 = 0L;
    static uint16_t g_121 = 0xB92FL;
    static uint16_t g_253 = 65535UL;
    static uint16_t g_286 = 65535UL;
    static int8_t g_324 = 0xFAL;
    static int8_t g_346 = 0xD9L;
    static uint64_t *g_399 = &g_66;
    static uint32_t g_581 = 0xFB1C6D6EL;
    static uint8_t g_584 = 0x78L;
    static uint32_t *g_678 = &g_581;
    static int8_t * const g_737 = &g_346;
    static int8_t * const *g_736 = &g_737;
    static uint16_t func_1(void) {
       const int32_t l_778 = 0xC88738DCL;
       uint16_t *l_779 = &g_253;
       uint8_t *l_784 = &g_584;
       int8_t *l_785 = &g_324;
       if ((safe_add_func_int8_t_s_s(l_778, ((1UL ^ 1L) & (((void*)0 != l_779) < (safe_lshift_func_int8_t_s_s(((**g_736) = (-5L)), ((*l_785) = (safe_rshift_func_uint8_t_u_s(((*l_784) = g_100), l_778))))))))))     {
          int32_t l_794 = 0x84A6A01EL;
          if ((((*g_737) = (safe_mod_func_uint8_t_u_u(((*l_784) = 0xDEL), ((safe_add_func_uint32_t_u_u((*g_678), (0xECL > (((safe_mul_func_uint16_t_u_u(0x1CD5L, (safe_mod_func_int64_t_s_s(0L, l_794)))) ^ (safe_sub_func_uint64_t_u_u(((&g_286 != &g_121) || 0x85L), (*g_399)))) < l_794)))) && l_794)))) ^ 0UL))         {
         }
      }
       for (g_5 = 0;
   (g_5 <= (-24));
   g_5 = safe_sub_func_uint8_t_u_u(g_5, 9))     {
          return (*g_4);
      }
   }
    int main (void) {
       int print_hash_value = 0;
       platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
   }
