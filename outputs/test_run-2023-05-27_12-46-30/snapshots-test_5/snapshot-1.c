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
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
  static int8_t (safe_unary_minus_func_int8_t_s)(int8_t si ) {
   return     -si;
 }
  static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 + si2);
   return     (si1 - si2);
 }
  static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     si1 * si2;
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
       static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) {
   return     -si;
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
        static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
           static int64_t (safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
  static int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
          static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 + ui2;
 }
        static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
 }
  static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
     static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
    static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
   static uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
  static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 - ui2;
 }
         static uint64_t (safe_unary_minus_func_uint64_t_u)(uint64_t ui ) {
   return -ui;
 }
  static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return ui1 + ui2;
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
           static uint32_t crc32_tab[256];
  static uint32_t crc32_context = 0xFFFFFFFFUL;
  static void crc32_gentab (void) {
  uint32_t crc;
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>40) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  static int64_t g_2 = (-1L);
  static int32_t g_4 = 0x897A4A12L;
  static int32_t g_7 = (-1L);
  static uint16_t g_21 = 65535UL;
  static uint64_t g_36 = 5UL;
  static int16_t g_67 = 0xD0C9L;
  static int64_t g_130 = 0xB426AB799115BA09LL;
  static uint32_t g_132 = 2UL;
  static uint64_t g_141 = 7UL;
  static uint16_t g_147 = 0xF6E0L;
  static int8_t g_153 = 0xE6L;
  static uint8_t g_154 = 0xC7L;
  static int32_t *g_161 = &g_4;
  static int32_t **g_160 = &g_161;
  static uint16_t *g_168 = (void*)0;
  static int8_t g_193 = (-1L);
  static int32_t g_219 = 0xB18C049EL;
  static uint64_t g_264 = 1UL;
  static int16_t g_274 = 0xDC8BL;
  static uint64_t g_283 = 1UL;
  static uint32_t g_304 = 18446744073709551614UL;
  static uint64_t *g_319 = (void*)0;
  static uint64_t **g_318 = &g_319;
  static uint32_t g_337 = 0x9F0F0CF3L;
  static uint8_t g_427 = 255UL;
  static int8_t func_76(int8_t p_77, int16_t p_78, int16_t * p_79);
  static uint32_t func_1(void) {
     int32_t l_478 = 9L;
     return l_478;
 }
  static int32_t * func_22(uint16_t * p_23, uint16_t * p_24, uint64_t p_25) {
     int64_t l_286 = (-6L);
     int32_t l_287 = 0L;
     int32_t l_288 = (-6L);
     int32_t *l_289 = &g_7;
     int32_t *l_290 = &l_288;
     int32_t *l_291 = &l_288;
     int32_t *l_292 = &l_287;
     int32_t *l_293 = &l_288;
     int32_t *l_294 = &l_288;
     int32_t *l_295 = &l_288;
     int32_t l_298 = (-1L);
     int32_t *l_299 = &l_288;
     int32_t *l_300 = &l_287;
     int32_t *l_301 = &l_298;
     int32_t *l_302 = &l_298;
     int32_t *l_303 = &l_288;
     int32_t l_334 = (-9L);
     uint64_t **l_360 = (void*)0;
     if (p_25)     {         int32_t l_311 = 0xC2C0AFCBL;         uint64_t *l_313 = &g_264;         uint64_t **l_312 = &l_313;         uint64_t ***l_314 = &l_312;         int8_t *l_320 = &g_193;         int32_t l_325 = 0x06CC3F75L;         (*g_160) = (*g_160);         (*l_290) = (((safe_add_func_int64_t_s_s(((1UL <= (safe_rshift_func_uint8_t_u_s(l_311, 1))) , (((*l_314) = l_312) != ((safe_unary_minus_func_uint64_t_u((--g_141))) , g_318))), (((((l_320 != l_320) & (l_325 = ((0L > ((((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967295UL, ((void*)0 == p_23))), (*p_24))) & 18446744073709551615UL) > 1UL) , p_25) & l_311) == (-8L))) , l_311))) < 0xB1A2BFF1L) <= p_25) || (*l_293)))) | g_130) == g_7);         (*l_291) ^= l_325;     }
     else     {         int16_t l_326 = 0xB259L;         uint32_t *l_335 = &g_132;         uint32_t *l_336 = &g_337;         int32_t l_338 = 0xA6BA308FL;         uint64_t l_351 = 1UL;         int8_t *l_421 = &g_193;         uint64_t *l_435 = &g_283;         int32_t **l_444 = &l_303;         uint32_t l_464 = 1UL;         l_338 = ((l_326 <= 0L) || ((((g_2 &= (((*l_336) = ((*l_335) = (safe_add_func_uint8_t_u_u((p_25 >= ((void*)0 != &l_298)), (safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((p_25 ^ ((((((0x2F910644L || ((safe_unary_minus_func_int8_t_s((0L ^ ((p_25 && p_25) != l_334)))) ^ p_25)) && g_304) | 8L) & 9UL) != (*l_300)) > g_130)), (*l_293))), l_326)))))) <= g_304)) >= 0x6D6EEA9B94AA32D8LL) >= (*l_302)) , 0x63E07D31L));         for (l_334 = (-13); (l_334 == 12); l_334 = safe_add_func_int32_t_s_s(l_334, 1))         {             int64_t *l_349 = &g_130;             int32_t l_350 = 6L;             uint32_t **l_356 = &l_335;             uint64_t **l_361 = &g_319;             uint16_t *l_370 = &g_147;             int32_t l_398 = 0xFB264947L;             (*l_293) = p_25;             (*l_302) |= (0x93L | (p_25 ^ (0xFC80131CL >= (safe_mul_func_uint16_t_u_u(1UL, (p_25 <= ((*l_335) = (0x7AL > ((((safe_sub_func_uint32_t_u_u(((3L >= 0x9FL) >= (safe_sub_func_int64_t_s_s(((*l_349) ^= ((*l_290) <= 0UL)), l_350))), l_351)) , 4UL) ^ g_337) , 0x6EL)))))))));         }     }
     (*l_302) = (*l_294);
     return (*g_160);
 }
  static uint16_t * func_26(uint16_t * p_27, int32_t p_28, uint16_t * p_29, int8_t p_30) {
     return &g_147;
 }
  static uint64_t func_32(uint16_t * p_33) {
     uint16_t l_34 = 0x632CL;
     return l_34;
 }
  static int32_t * func_37(int16_t p_38) {
     int32_t *l_185 = &g_7;
     uint64_t *l_212 = &g_36;
     (*l_185) &= (~(-1L));
     return (*g_160);
 }
  static uint8_t func_39(uint64_t * p_40, uint64_t * p_41, uint16_t * p_42, uint16_t * p_43, uint64_t * p_44) {
     int32_t l_170 = 0x7C4FE17DL;
     int32_t *l_171 = &g_7;
     (*l_171) = l_170;
     return (*l_171);
 }
  static uint64_t * func_45(uint16_t * p_46, uint16_t * p_47, uint8_t p_48) {
     return &g_141;
 }
  static uint16_t * func_49(uint32_t p_50, int32_t p_51) {
     uint8_t l_60 = 0UL;
     return &g_21;
 }
  static int8_t func_76(int8_t p_77, int16_t p_78, int16_t * p_79) {
     return g_147;
 }
  int main (void) {
     int print_hash_value = 0;
     transparent_crc(g_427, "g_427", print_hash_value);
 }
