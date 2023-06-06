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
   typedef struct {
  }
   __fpos64_t;
                                                                        static void platform_main_begin(void) {
  }
   static void platform_main_end(uint32_t crc, int flag) {
  }
   static int8_t (safe_unary_minus_func_int8_t_s)(int8_t si ) {
    return     -si;
  }
   static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 + si2);
  }
   static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 - si2);
  }
   static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
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
  }
   static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
  }
   static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
    return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
  }
   static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) {
    return     -si;
  }
   static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     (si1 + si2);
  }
    static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
      static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
    return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
  }
    static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
  }
   static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?     ((si1)) :     (si1 + si2);
  }
   static int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
    return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
  }
    static int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
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
     static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
  }
   static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
  }
   static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
  }
    static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return ui1 - ui2;
  }
   static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
  }
    static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
  }
   static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
  }
    static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return ((unsigned int)ui1) * ((unsigned int)ui2);
  }
   static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
   static uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
  }
        static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
    return ui1 + ui2;
  }
   static uint64_t (safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
    return ui1 - ui2;
  }
    static uint64_t (safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
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
   crc32_tab[i] = crc;
  }
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
  }
   static void transparent_crc (uint64_t val, char* vname, int flag) {
   crc32_8bytes(val);
  }
   struct S0 {
     unsigned f0 : 7;
     unsigned f1 : 2;
     signed f2 : 29;
     signed f3 : 20;
     unsigned f4 : 21;
     const signed f5 : 26;
     uint64_t f6;
     signed f7 : 16;
  };
   static int32_t g_2 = 0L;
   static int32_t g_7 = 0x4515FDC8L;
   static int64_t g_40 = 6L;
   static uint8_t g_46 = 0x66L;
   static int32_t *g_100 = &g_7;
   static int32_t **g_99 = &g_100;
   static int8_t g_106 = 0x81L;
   static int64_t g_126 = 0x3FF80110037B8604LL;
   static int16_t g_128 = 0xB3BAL;
   static int16_t g_130 = (-1L);
   static int32_t g_132 = 0L;
   static int32_t **g_133 = &g_100;
   static uint64_t g_140 = 1UL;
   static uint64_t g_142 = 7UL;
   static uint16_t g_152 = 0xF855L;
   static uint16_t g_205 = 0xDBD7L;
   static struct S0 g_271 = {
 2,1,-11116,827,1412,-5598,18446744073709551615UL,177};
   static uint8_t g_310 = 255UL;
   static uint8_t g_317 = 5UL;
   static uint16_t g_383 = 65527UL;
   static int32_t g_454 = 0L;
   static int64_t g_562 = 1L;
   static int8_t g_585 = 0x1BL;
   static int64_t g_589 = 1L;
   static int32_t g_663 = (-1L);
   static uint64_t *g_675 = &g_142;
   static uint64_t **g_674 = &g_675;
   static uint16_t g_719 = 0x5253L;
   static uint32_t g_746 = 0x8304BA9EL;
   static int16_t g_937 = 0xA768L;
   static uint16_t g_946 = 65530UL;
   static const uint32_t g_988 = 0xB3791BA4L;
   static const uint32_t *g_987 = &g_988;
   static int8_t *g_997 = (void*)0;
   static int8_t **g_996 = &g_997;
   static int8_t ***g_995 = &g_996;
   static uint64_t ****g_1007 = (void*)0;
   static int8_t g_1151 = 0x78L;
   static int8_t *g_1155 = &g_585;
   static int8_t func_69(struct S0 p_70, uint64_t p_71, int32_t * p_72);
   static struct S0 func_73(int32_t p_74, int16_t p_75, uint16_t p_76);
   static uint8_t func_79(int32_t ** p_80, int32_t ** p_81, int32_t ** p_82, int16_t p_83, int32_t * p_84);
   static int32_t ** func_85(uint64_t p_86, int32_t * p_87);
   static const int64_t func_90(struct S0 p_91, uint8_t p_92);
   static struct S0 func_1(void) {
      int32_t *l_8 = &g_7;
      int32_t l_9 = 0x74952F34L;
      int32_t *l_11 = &g_2;
      int32_t *l_14 = &l_9;
      int32_t *l_26 = &l_9;
      int32_t *l_35 = &l_9;
      int32_t l_41 = 1L;
      int32_t *l_44 = &l_41;
      struct S0 l_1131 = {
7,0,14275,80,1002,7194,7UL,-138};
      int8_t ***l_1136 = &g_996;
      int16_t *l_1144 = &g_937;
      uint64_t ***l_1149 = &g_674;
      uint64_t ****l_1148 = &l_1149;
      struct S0 *l_1157 = &l_1131;
      struct S0 ** const l_1156 = &l_1157;
      uint8_t l_1163 = 0xFAL;
  lbl_1167:     for (g_2 = 24;
  (g_2 != 7);
  --g_2)     {
     }
      for (g_40 = 0;
  (g_40 != (-20));
  --g_40)     {
         int8_t ****l_1137 = &g_995;
         uint64_t ***l_1139 = &g_674;
         uint64_t ****l_1138 = &l_1139;
         if ((+(((g_317 , ((*l_1137) = l_1136)) == l_1136) ^ (((*l_1138) = &g_674) == &g_674))))         {             int16_t l_1147 = 0x43D9L;             int32_t l_1166 = 1L;             if (((*g_987) , ((g_1007 = g_1007) != (((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((g_271.f1 , 0UL) != (**g_133)) <= (*l_8)), (l_1144 == &g_130))), (safe_add_func_int8_t_s_s(l_1147, l_1147)))) >= g_126) , l_1148))))             {                 return g_271;             }             else             {                 uint8_t l_1150 = 0UL;                 int8_t *l_1152 = &g_1151;                 int8_t **l_1153 = (void*)0;                 int8_t **l_1154 = &l_1152;                 int32_t ****l_1160 = (void*)0;                 int32_t ***l_1162 = &g_99;                 int32_t ****l_1161 = &l_1162;                 struct S0 * const * const l_1164 = &l_1157;                 int64_t *l_1165 = &g_126;                 (*l_35) = (l_1150 == (g_1151 ^ ((((**l_1136) = (*g_996)) != (g_1155 = ((*l_1154) = l_1152))) >= (l_1166 = ((*l_1165) = (((l_1156 == ((safe_add_func_int16_t_s_s((func_73(g_746, ((-7L) > (((255UL || ((((*l_1161) = &g_133) != &g_99) > (*l_26))) & (**g_99)) , (**g_674))), l_1147) , 1L), l_1163)) , l_1164)) , 4294967293UL) || g_152))))));                 (*l_44) = 2L;             }         }
     }
  }
   static int32_t * func_56(int32_t * p_57, int32_t * p_58, struct S0 p_59) {
      if ((**g_133))     {
         for (g_128 = 4;
 (g_128 >= 17);
 g_128 = safe_add_func_uint16_t_u_u(g_128, 2))         {             return (*g_133);         }
     }
  }
   static int32_t * func_60(int32_t * p_61) {
      int32_t *l_661 = &g_7;
      return l_661;
  }
   static int32_t * func_62(int32_t p_63) {
      struct S0 l_93 = {
2,1,14778,149,699,-4807,0x82EDDAAD19DDA5C1LL,146};
      int32_t *l_424 = &g_7;
  lbl_459:     for (g_7 = (-14);
  (g_7 == (-28));
  --g_7)     {
         return l_424;
     }
      for (g_46 = 24;
  (g_46 == 29);
  g_46++)     {
     }
  }
   static struct S0 func_73(int32_t p_74, int16_t p_75, uint16_t p_76) {
      int32_t **l_219 = (void*)0;
      int32_t l_241 = 2L;
      uint8_t *l_316 = &g_317;
      for (g_205 = 0;
  (g_205 == 31);
  g_205++)     {
         int32_t *l_249 = &g_132;
         struct S0 l_250 = {0,0,-19585,-908,1255,991,0x9304CBFAB05A5867LL,-198};
         if ((l_250 , (*g_100)))         {             uint16_t l_251 = 0UL;             int8_t l_284 = (-8L);             int64_t *l_314 = &g_40;             uint32_t l_319 = 4294967288UL;             int32_t l_335 = 0L;             if (l_251)             {                 uint8_t *l_315 = (void*)0;                 (*l_249) ^= p_76;                 (*l_249) = (**g_99);                 for (g_132 = (-4); (g_132 > 19); g_132++)                 {                     int32_t l_282 = (-9L);                     if ((((p_75 > 0x39L) & g_140) && (*l_249)))                     {                         uint8_t *l_258 = &g_46;                         int32_t l_283 = 0xE19E864CL;                         int32_t *l_285 = (void*)0;                         int32_t *l_286 = (void*)0;                         int32_t *l_287 = &g_2;                         (*l_287) = ((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((*l_258)--), (safe_rshift_func_int8_t_s_u((((((((safe_mod_func_uint32_t_u_u((((((((((((safe_mul_func_uint16_t_u_u(l_251, p_75)) & (safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((g_271 , (p_76 , ((-1L) ^ ((safe_rshift_func_uint8_t_u_s(9UL, 4)) ^ (0xDBL < (!((**g_99) <= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((((~(safe_mul_func_int16_t_s_s(((((g_128 != l_282) != p_75) >= g_128) == p_76), 0x6762L))) , (*g_100)) == g_130), g_140)), 0))))))))), p_74)), l_283))) && g_2) || g_106) >= 0x9BL) || 0x0158743BL) | 6UL) & (-1L)) && g_130) , 9UL) == p_75), l_284)) >= p_75) != (**g_133)) & p_74) < g_271.f7) == (**g_133)) != p_75), 0)))) , 1UL), g_271.f3)) <= p_75) ^ g_132) == g_140);                     }                     else                     {                         uint16_t *l_301 = &l_251;                         uint16_t **l_300 = &l_301;                         uint8_t *l_306 = &g_46;                         uint8_t *l_309 = &g_310;                         uint32_t *l_311 = (void*)0;                         int32_t *l_318 = &g_2;                         int32_t *l_320 = &l_241;                         (*l_320) &= (((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((*l_318) = (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((((((g_271.f0 <= (((*l_300) = &p_76) != (void*)0)) && (((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_271.f4, g_271.f3)), ((*l_309) |= (--(*l_306))))) && ((((l_282 = p_76) <= (**g_99)) , ((*l_249) ^ (safe_div_func_uint32_t_u_u(((l_314 != (void*)0) >= (**g_99)), 0xC1F5A472L)))) == p_76)) && g_271.f2)) , l_315) == l_316) , l_284), 0xE45251D0803106ADLL)) >= 0x84B668E6L), g_271.f5)) ^ 253UL), 0x20DD73F1L)) ^ 0L), g_128))), l_319)) > l_284), g_132)) , g_132) || (*l_318));                     }                 }                 (*l_249) = (!p_74);             }             else             {                 if (p_76)                 {                     int32_t ***l_322 = &l_219;                     int8_t l_325 = 0xA2L;                     (*l_322) = &g_100;                     for (g_317 = (-30); (g_317 > 1); g_317 = safe_add_func_uint64_t_u_u(g_317, 1))                     {                         int32_t *l_326 = &g_132;                         int32_t *l_327 = &g_132;                         int32_t *l_328 = &g_2;                         int32_t *l_329 = &l_241;                         int32_t *l_330 = &l_241;                         int32_t *l_331 = &g_132;                         int32_t *l_332 = &g_132;                         int32_t *l_333 = &g_132;                         int32_t *l_334 = &g_2;                         int32_t *l_336 = &g_132;                         int32_t *l_337 = &l_335;                         int32_t *l_338 = &g_132;                         int32_t *l_339 = &l_335;                         int32_t *l_340 = &g_2;                         int32_t *l_341 = &g_132;                         int32_t *l_342 = &l_335;                         int32_t *l_343 = &l_241;                         int32_t *l_344 = &g_2;                         int32_t *l_345 = &l_241;                         int32_t *l_346 = &l_241;                         int32_t *l_347 = &l_241;                         int32_t *l_348 = &g_132;                         int32_t *l_349 = (void*)0;                         int32_t *l_350 = &g_132;                         int32_t *l_351 = &l_335;                         int32_t *l_352 = (void*)0;                         int32_t *l_353 = &g_132;                         int32_t *l_354 = &g_2;                         int32_t *l_355 = &g_2;                         int32_t *l_356 = &l_335;                         int32_t *l_357 = &l_335;                         int32_t *l_358 = &l_335;                         int32_t *l_359 = &g_2;                         int32_t *l_360 = (void*)0;                         int32_t *l_361 = &l_241;                         int32_t *l_362 = &g_132;                         int32_t *l_363 = (void*)0;                         int32_t *l_364 = &l_241;                         int32_t *l_365 = &l_241;                         int32_t *l_366 = &g_132;                         int32_t *l_367 = &l_241;                         int32_t *l_368 = &g_132;                         int32_t *l_369 = &g_2;                         int32_t *l_370 = &g_2;                         int32_t *l_371 = &g_2;                         int32_t *l_372 = &g_132;                         int32_t *l_373 = (void*)0;                         int32_t *l_374 = &g_132;                         int32_t *l_375 = &l_241;                         int32_t *l_376 = &l_335;                         int32_t *l_377 = &g_132;                         int32_t *l_378 = &l_241;                         int32_t *l_379 = (void*)0;                         int32_t *l_380 = &l_241;                         int32_t *l_381 = &l_335;                         int32_t *l_382 = &l_335;                         const int8_t l_402 = 0x05L;                         (*l_219) = (*g_99);                         --g_383;                         (*l_329) = (safe_sub_func_int8_t_s_s(((((***l_322) , (g_271 , (*l_351))) & (p_76 >= g_271.f0)) ^ ((&g_205 == &g_383) , (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(l_251, ((safe_add_func_uint16_t_u_u(((((***l_322) != (*g_100)) , p_76) >= g_271.f0), p_76)) < 0xEB31C7011D924249LL))) , (*g_100)) <= 0xB204D8F1L), 0x84L)) == g_271.f6) , l_402) , (**l_219)) || 0UL), 6)), p_76)), (*l_249))), (**l_219))))), g_130));                     }                     (*l_249) |= (**g_99);                 }                 else                 {                     return g_271;                 }             }         }
     }
  }
   static const int64_t func_90(struct S0 p_91, uint8_t p_92) {
      const int32_t l_101 = 0xCFDD8C90L;
      return l_101;
  }
   int main (void) {
      int print_hash_value = 0;
      crc32_gentab();
      transparent_crc(g_128, "g_128", print_hash_value);
  }