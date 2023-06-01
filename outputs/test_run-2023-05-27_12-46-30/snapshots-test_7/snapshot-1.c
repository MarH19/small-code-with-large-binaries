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
 }
    static uint64_t (safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
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
  static int32_t g_445 = (-1L);
  static int16_t func_12(int32_t * p_13, int8_t p_14, int32_t * p_15, int32_t * p_16, uint16_t p_17);
  static int32_t * func_22(uint16_t * p_23, uint16_t * p_24, uint64_t p_25);
  static uint16_t * func_26(uint16_t * p_27, int32_t p_28, uint16_t * p_29, int8_t p_30);
  static uint64_t func_32(uint16_t * p_33);
  static int32_t * func_37(int16_t p_38);
  static uint8_t func_39(uint64_t * p_40, uint64_t * p_41, uint16_t * p_42, uint16_t * p_43, uint64_t * p_44);
  static uint64_t * func_45(uint16_t * p_46, uint16_t * p_47, uint8_t p_48);
  static uint16_t * func_49(uint32_t p_50, int32_t p_51);
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
     int32_t *l_296 = &g_7;
     int32_t *l_297 = (void*)0;
     int32_t l_298 = (-1L);
     int32_t *l_299 = &l_288;
     int32_t *l_300 = &l_287;
     int32_t *l_301 = &l_298;
     int32_t *l_302 = &l_298;
     int32_t *l_303 = &l_288;
     int32_t l_334 = (-9L);
     uint64_t **l_360 = (void*)0;
     g_304--;
     (*g_160) = (void*)0;
     if (p_25)     {         int32_t l_311 = 0xC2C0AFCBL;         uint64_t *l_313 = &g_264;         uint64_t **l_312 = &l_313;         uint64_t ***l_314 = &l_312;         int8_t *l_320 = &g_193;         int32_t l_325 = 0x06CC3F75L;         (*g_160) = (*g_160);         (*l_290) = (((safe_add_func_int64_t_s_s(((1UL <= (safe_rshift_func_uint8_t_u_s(l_311, 1))) , (((*l_314) = l_312) != ((safe_unary_minus_func_uint64_t_u((--g_141))) , g_318))), (((((l_320 != l_320) & (l_325 = ((0L > ((((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967295UL, ((void*)0 == p_23))), (*p_24))) & 18446744073709551615UL) > 1UL) , p_25) & l_311) == (-8L))) , l_311))) < 0xB1A2BFF1L) <= p_25) || (*l_293)))) | g_130) == g_7);         (*l_291) ^= l_325;     }
     else     {         int16_t l_326 = 0xB259L;         uint32_t *l_335 = &g_132;         uint32_t *l_336 = &g_337;         int32_t l_338 = 0xA6BA308FL;         uint64_t l_351 = 1UL;         int8_t *l_421 = &g_193;         uint64_t *l_435 = &g_283;         int32_t **l_444 = &l_303;         uint32_t l_464 = 1UL;         l_338 = ((l_326 <= 0L) || ((((g_2 &= (((*l_336) = ((*l_335) = (safe_add_func_uint8_t_u_u((p_25 >= ((void*)0 != &l_298)), (safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((p_25 ^ ((((((0x2F910644L || ((safe_unary_minus_func_int8_t_s((0L ^ ((p_25 && p_25) != l_334)))) ^ p_25)) && g_304) | 8L) & 9UL) != (*l_300)) > g_130)), (*l_293))), l_326)))))) <= g_304)) >= 0x6D6EEA9B94AA32D8LL) >= (*l_302)) , 0x63E07D31L));         for (l_334 = (-13); (l_334 == 12); l_334 = safe_add_func_int32_t_s_s(l_334, 1))         {             int64_t *l_349 = &g_130;             int32_t l_350 = 6L;             uint32_t **l_356 = &l_335;             uint64_t **l_361 = &g_319;             uint16_t *l_370 = &g_147;             int32_t l_398 = 0xFB264947L;             (*l_293) = p_25;             (*l_302) |= (0x93L | (p_25 ^ (0xFC80131CL >= (safe_mul_func_uint16_t_u_u(1UL, (p_25 <= ((*l_335) = (0x7AL > ((((safe_sub_func_uint32_t_u_u(((3L >= 0x9FL) >= (safe_sub_func_int64_t_s_s(((*l_349) ^= ((*l_290) <= 0UL)), l_350))), l_351)) , 4UL) ^ g_337) , 0x6EL)))))))));         }     }
     (*l_302) = (*l_294);
     return (*g_160);
 }
  static uint16_t * func_26(uint16_t * p_27, int32_t p_28, uint16_t * p_29, int8_t p_30) {
     uint32_t l_57 = 0x17C92570L;
     uint16_t *l_58 = (void*)0;
     int32_t l_59 = 0x0F4F2D89L;
     uint64_t *l_169 = &g_141;
     int32_t *l_268 = &g_7;
     int32_t *l_269 = &l_59;
     int32_t *l_270 = &l_59;
     int32_t *l_271 = &l_59;
     int32_t l_272 = 0L;
     int32_t *l_273 = &l_272;
     int32_t *l_275 = &l_59;
     int32_t *l_276 = &l_272;
     int32_t *l_277 = &l_272;
     int32_t *l_278 = &l_59;
     int32_t *l_279 = &g_7;
     int32_t *l_280 = &g_7;
     int32_t *l_281 = &l_272;
     int32_t l_282 = 3L;
     (*g_160) = func_37(((((((func_39(func_45(&g_21, func_49((1UL & (g_2 & (safe_add_func_uint8_t_u_u(g_36, g_7)))), (l_59 = ((p_28 != ((!(safe_add_func_int32_t_s_s(((l_57 & ((func_32(l_58) && l_57) == 0x6CL)) , l_57), 0x69896260L))) , g_4)) & l_57))), l_57), &g_141, l_58, g_168, l_169) , p_28) , 0x0D6E721E4501C69FLL) <= 7UL) != 0x26D5L) && g_7) , g_141));
     l_59 = 0xC6000C4DL;
     g_283--;
     return &g_147;
 }
  static uint64_t func_32(uint16_t * p_33) {
     uint16_t l_34 = 0x632CL;
     return l_34;
 }
  static int32_t * func_37(int16_t p_38) {
     int16_t *l_180 = &g_67;
     uint16_t l_183 = 0x582EL;
     int32_t *l_184 = (void*)0;
     int32_t *l_185 = &g_7;
     uint64_t *l_212 = &g_36;
     int32_t l_225 = 1L;
     int32_t l_236 = 1L;
     if ((safe_mod_func_int16_t_s_s(7L, (safe_add_func_uint64_t_u_u((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_180) |= p_38) , ((&g_153 != &g_153) < (safe_sub_func_int8_t_s_s((&g_67 == (l_183 , func_49(l_183, ((*l_185) = 0x2D400D3BL)))), p_38)))), p_38)), p_38)) && 1UL) & g_4), g_21)))))     {         uint64_t *l_209 = &g_36;         int32_t l_218 = 0x778E667AL;         int32_t l_220 = (-3L);         for (g_153 = 0; (g_153 > 18); ++g_153)         {             int8_t *l_192 = &g_193;             int32_t l_198 = 0x2B8ED343L;             int16_t l_203 = 0L;             int64_t l_204 = 0xE94EDE484D6026B9LL;             uint64_t **l_213 = &l_212;             (*l_185) = (safe_mul_func_uint16_t_u_u(p_38, ((9UL & (safe_mod_func_int8_t_s_s((((*l_192) |= 0xD9L) && (safe_add_func_uint32_t_u_u((((-8L) == (((safe_add_func_int16_t_s_s(l_198, l_198)) || (safe_rshift_func_uint8_t_u_u(p_38, 6))) & (safe_rshift_func_uint16_t_u_u(p_38, (l_203 != g_147))))) > p_38), g_130))), p_38))) , l_204)));             l_220 |= (safe_mul_func_int16_t_s_s(g_153, (safe_add_func_uint32_t_u_u((l_209 == (void*)0), (safe_add_func_int32_t_s_s((g_219 &= (((((*l_213) = l_212) != &g_36) <= (g_4 != ((*l_192) ^= 0x05L))) , (((((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((p_38 & 0x5CDDL) >= p_38) < p_38) , p_38), p_38)), 0xB1L)) & l_218) & (*l_185)) , &l_183) == &l_183))), p_38))))));             if (p_38)                 continue;             (*l_185) ^= 0x1EC4A544L;         }     }
     else     {         int32_t *l_221 = &g_7;         int32_t *l_222 = (void*)0;         int32_t *l_223 = (void*)0;         int32_t *l_224 = &g_7;         int32_t *l_226 = (void*)0;         int32_t *l_227 = &g_7;         int32_t *l_228 = &l_225;         int32_t *l_229 = &l_225;         int32_t *l_230 = &g_7;         int32_t *l_231 = &l_225;         int32_t *l_232 = &l_225;         int32_t *l_233 = &g_7;         int32_t *l_234 = &g_7;         int32_t *l_235 = &l_225;         int32_t *l_237 = &l_225;         int32_t *l_238 = (void*)0;         int32_t *l_239 = &g_7;         int32_t *l_240 = &l_225;         int32_t *l_241 = &g_7;         int32_t *l_242 = &l_225;         int32_t *l_243 = &l_225;         int32_t *l_244 = &g_7;         int32_t *l_245 = &l_236;         int32_t *l_246 = &g_7;         int32_t l_247 = 0x0F2D9616L;         int32_t *l_248 = &l_236;         int32_t *l_249 = &g_7;         int32_t *l_250 = &g_7;         int32_t *l_251 = (void*)0;         int32_t *l_252 = &l_247;         int32_t *l_253 = &l_225;         int32_t *l_254 = &l_225;         int32_t *l_255 = &g_7;         int32_t *l_256 = &g_7;         int32_t *l_257 = &l_236;         int32_t *l_258 = &l_247;         int32_t *l_259 = (void*)0;         int32_t *l_260 = &g_7;         int32_t *l_261 = &l_225;         int32_t *l_262 = &l_247;         int32_t *l_263 = &l_247;         g_264++;     }
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
     uint8_t l_164 = 255UL;
     uint64_t *l_165 = &g_36;
     int32_t *l_166 = &g_7;
     int32_t l_167 = (-2L);
     return &g_141;
 }
  static uint16_t * func_49(uint32_t p_50, int32_t p_51) {
     uint8_t l_60 = 0UL;
     uint16_t *l_65 = &g_21;
     int16_t *l_66 = &g_67;
     int8_t *l_158 = &g_153;
     int32_t *l_159 = &g_7;
     int32_t **l_162 = (void*)0;
     int32_t l_163 = 0xDEAEDAB1L;
     (*l_159) = (l_60 , (safe_unary_minus_func_uint64_t_u(((safe_unary_minus_func_int16_t_s(((*l_66) = (safe_mod_func_int8_t_s_s((-1L), func_32(l_65)))))) , ((safe_sub_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u(((l_60 < l_60) >= (safe_rshift_func_uint8_t_u_s((l_60 & (safe_sub_func_int8_t_s_s(((*l_158) |= func_76(p_51, (safe_add_func_uint64_t_u_u(l_60, l_60)), &g_67)), g_130))), g_141))), p_51)) && g_130) ^ g_67), g_2)) == g_2)))));
     l_163 |= ((*l_159) = (((l_162 = g_160) == &g_161) >= p_51));
     return &g_21;
 }
  static int8_t func_76(int8_t p_77, int16_t p_78, int16_t * p_79) {
     int32_t *l_82 = &g_7;
     int32_t *l_83 = &g_7;
     int32_t *l_84 = (void*)0;
     int32_t *l_85 = &g_7;
     int32_t l_86 = 0L;
     int32_t l_87 = (-6L);
     int32_t *l_88 = (void*)0;
     int32_t *l_89 = &l_86;
     int32_t *l_90 = (void*)0;
     int32_t *l_91 = &g_7;
     int32_t *l_92 = (void*)0;
     return g_147;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_begin();
     transparent_crc(g_427, "g_427", print_hash_value);
     transparent_crc(g_445, "g_445", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
