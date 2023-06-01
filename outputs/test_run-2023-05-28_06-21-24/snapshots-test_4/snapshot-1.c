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
  static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
     static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 + si2);
 }
  static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 - si2);
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
   static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
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
       static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
     static uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
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
    const int32_t f0;
    int16_t f1;
    int32_t f2;
    unsigned f3 : 19;
    const int8_t f4;
    int32_t f5;
    int8_t f6;
    unsigned f7 : 24;
    int8_t f8;
 };
  struct S1 {
    int8_t f0;
    uint32_t f1;
 };
  struct S2 {
    signed f0 : 11;
    signed f1 : 20;
    unsigned f2 : 19;
    signed f3 : 18;
 };
  static int32_t g_8 = 0x31EB2391L;
  static int32_t *g_7 = &g_8;
  static struct S0 g_42 = {
0x5C1F4ACAL,1L,-1L,404,0L,1L,0L,663,0xEFL};
  static int32_t g_53[3] = {
0xE0AD50A0L,0xE0AD50A0L,0xE0AD50A0L};
  static uint8_t g_83[5] = {
0x9FL,0x9FL,0x9FL,0x9FL,0x9FL};
  static int32_t g_93 = 0L;
  static uint32_t g_110 = 2UL;
  static uint16_t g_112[7][2][8] = {
{{0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L},{0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL}}
,{{0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL},{0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L}}
,{{0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0x6991L,0x6991L},{65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L}}
,{{0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL},{0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L}}
,{{65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L},{0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL}}
,{{0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L},{65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L}}
,{{0x6991L,65533UL,65533UL,0x6991L,65533UL,65533UL,0x6991L,65533UL},{0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L}}
};
  static int32_t **g_117 = &g_7;
  static int32_t ***g_116 = &g_117;
  static int16_t *g_136 = &g_42.f1;
  static int16_t **g_135 = &g_136;
  static struct S2 g_144 = {
37,263,432,-229};
  static struct S1 g_147 = {
0x33L,0UL};
  static int32_t *g_151 = &g_93;
  static int8_t g_169 = 2L;
  static uint16_t *g_270[7] = {
&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4]};
  static int32_t **g_287 = (void*)0;
  static struct S1 *g_299 = &g_147;
  static struct S1 **g_298 = &g_299;
  static struct S1 g_303 = {
0x03L,4294967289UL};
  static struct S0 *g_318 = &g_42;
  static const int32_t *g_390[3][3] = {
{&g_8,&g_8,&g_8}
,{&g_8,&g_8,&g_8}
,{&g_8,&g_8,&g_8}
};
  static const int32_t **g_389 = &g_390[0][0];
  static struct S2 g_452 = {
38,949,229,504};
  static int32_t g_459 = 0xB1D9F15AL;
  static uint16_t **g_509 = &g_270[0];
  static struct S2 *g_516 = &g_144;
  static struct S2 **g_515 = &g_516;
  static struct S2 ***g_514 = &g_515;
  static struct S0 *g_730 = (void*)0;
  static int16_t g_758 = 0xD6DFL;
  static uint16_t g_774 = 0xE359L;
  static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12);
  static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21);
  static int32_t * func_24(uint16_t p_25);
  static struct S0 * func_31(uint8_t p_32, int8_t p_33);
  static uint32_t func_1(void) {
     int32_t *l_16[4] = {&g_8,&g_8,&g_8,&g_8};
     int32_t **l_15 = &l_16[1];
     int32_t **l_23 = (void*)0;
     int32_t ***l_22 = &l_23;
     int32_t **l_26 = (void*)0;
     int32_t *l_27 = (void*)0;
     int32_t *l_772 = &g_42.f5;
     int32_t l_773 = 0xE1704A87L;
     int i;
     (*g_389) = (((*g_7) = (~(safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((void*)0 != g_7), (g_8 , func_9(((safe_add_func_int8_t_s_s((4UL != (((*l_15) = &g_8) != ((*g_389) = func_17(((*l_22) = (void*)0), func_24(((l_27 = &g_8) != &g_8)), g_8, g_8)))), 0xEEL)) | 0xC097L), l_772, (*g_117))))), g_452.f1)))) , (void*)0);
     ((void) sizeof ((l_27 == &g_8) ? 1 : 0), __extension__ ({ if (l_27 == &g_8) ; else __assert_fail ("l_27 == &g_8", "/tmp/tmpyf59mxed.c", 110, __extension__ __PRETTY_FUNCTION__); }
));
     ((void) sizeof ((g_151 == 0) ? 1 : 0), __extension__ ({ if (g_151 == 0) ; else __assert_fail ("g_151 == 0", "/tmp/tmpyf59mxed.c", 111, __extension__ __PRETTY_FUNCTION__); }
));
     ((void) sizeof ((g_318 == 0) ? 1 : 0), __extension__ ({ if (g_318 == 0) ; else __assert_fail ("g_318 == 0", "/tmp/tmpyf59mxed.c", 112, __extension__ __PRETTY_FUNCTION__); }
));
     ++g_774;
     return (*l_27);
 }
  static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12) {
     (**g_298) = (**g_298);
     return g_42.f5;
 }
  static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21) {
     int32_t *l_30[5];
     int32_t **l_29 = &l_30[0];
     struct S0 **l_731 = &g_318;
     struct S0 l_732 = {1L,0xE2C8L,0xC1782CCBL,337,-4L,0x8438359BL,0xA2L,4010,-8L};
     int32_t *l_734[9][8][3] = {{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],&g_53[1]},{&g_53[0],(void*)0,&g_53[2]},{&g_53[0],&g_53[0],&g_53[1]},{&g_53[0],&g_53[1],&g_53[0]}},{{&g_53[0],&g_53[2],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[1],&g_53[0],&g_53[0]},{&g_53[0],(void*)0,&g_53[0]},{&g_53[1],&g_53[2],(void*)0},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[1],&g_53[1],(void*)0},{&g_53[2],&g_53[0],&g_53[0]}},{{&g_53[1],&g_53[2],&g_53[2]},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[2],&g_53[0],&g_53[0]},{&g_53[0],&g_53[2],(void*)0},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[1],&g_53[1],(void*)0},{&g_53[2],&g_53[0],&g_53[0]}},{{&g_53[1],&g_53[2],&g_53[2]},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[0],&g_53[1],&g_53[2]},{&g_53[2],&g_53[0],&g_53[0]},{&g_53[0],&g_53[2],(void*)0},{&g_53[0],&g_53[0],&g_53[0]},{&g_53[1],&g_53[1],(void*)0},{&g_53[2],&g_53[0],&g_53[0]}}};
     int32_t **l_733 = &l_734[4][2][2];
     struct S2 l_737 = {29,-693,486,220};
     int16_t ** const l_743[1] = {&g_136};
     (*l_29) = (void*)0;
     (*l_731) = func_31(p_20, p_21);
     ((void) sizeof ((g_151 == 0) ? 1 : 0), __extension__ ({ if (g_151 == 0) ; else __assert_fail ("g_151 == 0", "/tmp/tmpyf59mxed.c", 154, __extension__ __PRETTY_FUNCTION__); }
));
     ((void) sizeof ((g_318 == 0) ? 1 : 0), __extension__ ({ if (g_318 == 0) ; else __assert_fail ("g_318 == 0", "/tmp/tmpyf59mxed.c", 155, __extension__ __PRETTY_FUNCTION__); }
));
     if (((l_732 , l_733) == &l_734[4][2][2]))     {         struct S2 ****l_736 = (void*)0;         struct S2 *****l_735 = &l_736;         int32_t l_738 = 0x517AA5F7L;         int16_t **l_741 = &g_136;         int16_t ***l_742 = &l_741;         uint8_t l_757 = 0x71L;         (*l_735) = &g_514;         ((void) sizeof ((l_736 == &g_514) ? 1 : 0), __extension__ ({ if (l_736 == &g_514) ; else __assert_fail ("l_736 == &g_514", "/tmp/tmpyf59mxed.c", 166, __extension__ __PRETTY_FUNCTION__); }));         if (((((l_737 , ((*g_136) = (l_738 <= ((safe_mul_func_uint16_t_u_u((((****l_736) , ((*l_742) = l_741)) == l_743[0]), (+(safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((g_758 ^= (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((p_20 <= 0x1799L) & ((safe_add_func_int16_t_s_s((*g_136), (**g_135))) == l_757)), l_757)) >= 0x05D60694L), 7L)), g_303.f1))), (**g_509))) & l_757), p_20))))) < p_21)))) >= 0x74BFL) != 1UL) || 0x5D469E68L))         {             struct S2 l_766 = {-34,844,422,-406};             (***g_116) &= (-10L);             l_738 |= ((p_20 == (safe_div_func_uint8_t_u_u((0x89FB88CFL & 0L), (((**g_135) , ((**g_117) == 1L)) | (~g_83[1]))))) == (safe_sub_func_int16_t_s_s((((p_21 < (l_766 , p_21)) , (***g_116)) && (**g_117)), p_21)));         }         else         {             (***g_116) ^= (l_757 < ((void*)0 == g_287));         }         for (g_42.f2 = 18; (g_42.f2 > (-30)); g_42.f2--)         {             if ((**g_389))                 break;         }     }
     else     {         uint8_t l_769 = 0UL;         l_769++;     }
     return (*g_117);
 }
  static int32_t * func_24(uint16_t p_25) {
     int32_t *l_28 = (void*)0;
     return l_28;
 }
  static struct S0 * func_31(uint8_t p_32, int8_t p_33) {
     uint8_t l_36[10][8][3] = {{{0x23L,0x7DL,0UL},{247UL,246UL,0x9BL},{255UL,9UL,0xD8L},{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{1UL,0x7DL,0x7DL},{250UL,0UL,255UL},{0xC8L,0UL,255UL}},{{255UL,255UL,0x7DL},{247UL,255UL,0x82L},{0x23L,255UL,255UL},{0x42L,0UL,0xD8L},{0x42L,0UL,0x9BL},{0x23L,0x7DL,0UL},{247UL,246UL,0x9BL},{255UL,9UL,0xD8L}},{{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{1UL,0x7DL,0x7DL},{250UL,0UL,255UL},{0xC8L,0UL,255UL},{255UL,255UL,0x7DL},{247UL,255UL,0x82L},{0x23L,255UL,255UL}},{{0x42L,0UL,0xD8L},{0x42L,0UL,0x9BL},{0x23L,0x7DL,0UL},{247UL,246UL,0x9BL},{255UL,9UL,0xD8L},{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{1UL,0x7DL,0x7DL}},{{250UL,0UL,255UL},{0xC8L,0UL,255UL},{255UL,255UL,0x7DL},{247UL,255UL,0x82L},{0x23L,255UL,255UL},{0x42L,0UL,0xD8L},{0x42L,0UL,0x9BL},{0x23L,0x7DL,0UL}},{{247UL,246UL,0x9BL},{255UL,9UL,0xD8L},{0xC8L,9UL,255UL},{250UL,246UL,0x82L},{255UL,9UL,9UL},{0x35L,0xDBL,250UL},{0x9BL,0x63L,250UL},{9UL,250UL,9UL}},{{0UL,1UL,0x9CL},{255UL,250UL,1UL},{255UL,0x63L,0xD6L},{255UL,0xDBL,0xB9L},{255UL,9UL,0x63L},{0UL,0x32L,0xB9L},{9UL,0x7EL,0xD6L},{0x9BL,0x7EL,1UL}},{{0x35L,0x32L,0x9CL},{255UL,9UL,9UL},{0x35L,0xDBL,250UL},{0x9BL,0x63L,250UL},{9UL,250UL,9UL},{0UL,1UL,0x9CL},{255UL,250UL,1UL},{255UL,0x63L,0xD6L}},{{255UL,0xDBL,0xB9L},{255UL,9UL,0x63L},{0UL,0x32L,0xB9L},{9UL,0x7EL,0xD6L},{0x9BL,0x7EL,1UL},{0x35L,0x32L,0x9CL},{255UL,9UL,9UL},{0x35L,0xDBL,250UL}},{{0x9BL,0x63L,250UL},{9UL,250UL,9UL},{0UL,1UL,0x9CL},{255UL,250UL,1UL},{255UL,0x63L,0xD6L},{255UL,0xDBL,0xB9L},{255UL,9UL,0x63L},{0UL,0x32L,0xB9L}}};
     struct S0 *l_41 = &g_42;
     int32_t l_478 = 0x28B4CB26L;
     struct S0 l_479 = {0xB72D0E55L,0x4AF8L,0L,324,0x5CL,-4L,2L,1762,0xEFL};
     struct S2 *l_486 = &g_452;
     int16_t ***l_498 = &g_135;
     uint8_t *l_723 = (void*)0;
     uint8_t *l_724 = (void*)0;
     uint8_t *l_725 = &l_36[3][3][0];
     int8_t l_726[1][10][8] = {{{0x54L,(-1L),(-1L),0x54L,0xF8L,(-1L),0xF8L,0x54L},{(-1L),0xF8L,(-1L),0x34L,2L,2L,0x34L,(-1L)},{0xF8L,0xF8L,2L,(-1L),(-3L),(-1L),2L,0xF8L},{0xF8L,(-1L),0x34L,2L,2L,0x34L,(-1L),0xF8L},{(-1L),0x54L,0xF8L,(-1L),0xF8L,0x54L,(-1L),(-1L)},{0x54L,(-1L),0x34L,0x34L,(-1L),0x54L,2L,0x54L},{(-1L),0x54L,2L,0x54L,(-1L),0x34L,0x34L,(-1L)},{0x54L,(-1L),(-1L),0x54L,0xF8L,(-1L),0xF8L,0x54L},{(-1L),0xF8L,(-1L),0x34L,2L,2L,0x34L,(-1L)},{0xF8L,0xF8L,2L,(-1L),(-3L),(-1L),2L,0xF8L}}};
     int32_t *l_727 = &l_479.f5;
     int32_t **l_728 = &g_151;
     int32_t *l_729 = &l_479.f2;
     (*l_727) &= ((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, p_32)), (safe_rshift_func_int16_t_s_s((((*l_41) , ((*l_41) , (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(8UL, (((((safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(g_42.f2, (((***g_116) != (***g_116)) | (safe_rshift_func_uint8_t_u_s(((*l_725) = (+0UL)), 0))))) & l_726[0][3][3]), p_33)) > (*g_151)) & g_42.f2) ^ p_32) , p_32))) || (***g_116)), l_479.f8)) ^ p_32), p_33)), l_479.f4)))) & 0x9474L), l_726[0][3][3])))) || g_8);
     l_729 = (l_727 = ((*l_728) = func_24(((**g_509) = (*l_727)))));
     ((void) sizeof ((g_151 == 0) ? 1 : 0), __extension__ ({ if (g_151 == 0) ; else __assert_fail ("g_151 == 0", "/tmp/tmpyf59mxed.c", 250, __extension__ __PRETTY_FUNCTION__); }
));
     return g_730;
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     func_1();
     transparent_crc(g_774, "g_774", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
