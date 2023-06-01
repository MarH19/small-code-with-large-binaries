 typedef signed char __int8_t;
    typedef unsigned char __uint8_t;
    typedef signed short int __int16_t;
    typedef unsigned short int __uint16_t;
    typedef signed int __int32_t;
    typedef unsigned int __uint32_t;
    typedef signed long int __int64_t;
    typedef unsigned long int __uint64_t;
    typedef struct {
   }
    __fsid_t;
    typedef __int8_t int8_t;
    typedef __int16_t int16_t;
    typedef __int32_t int32_t;
    typedef __int64_t int64_t;
    typedef __uint8_t uint8_t;
    typedef __uint16_t uint16_t;
    typedef __uint32_t uint32_t;
    typedef __uint64_t uint64_t;
    extern void __assert_fail (const char *__assertion, const char *__file,       unsigned int __line, const char *__function)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
     static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
     return     (si1 + si2);
   }
     static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
   }
    static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
   }
     static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
     return     (si1 + si2);
   }
    static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
   }
     static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) {
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
   }
    static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) {
     return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
   }
    static int32_t (safe_unary_minus_func_int32_t_s)(int32_t si ) {
     return     (si==(-2147483647-1)) ?     ((si)) :     -si;
   }
    static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
     return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
   }
      static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
   }
    static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
   }
     static int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
     return     ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
   }
    static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
     return ui1 + ui2;
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
      static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
     return ui1 + ui2;
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
     return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
   }
         static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
     return ui1 + ui2;
   }
      volatile uint64_t csmith_sink_ = 0;
    static int32_t g_12 = 0x53E58BFCL;
    static uint32_t g_63[9] = {
  18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    static uint32_t g_71 = 4294967295UL;
    static uint32_t g_74 = 0x7FAE0CD5L;
    static int32_t g_83 = 0xCD3C6E85L;
    static uint32_t g_91 = 0x90166331L;
    static uint64_t g_97 = 18446744073709551607UL;
    static uint16_t g_110[3] = {
  0xF411L,0xF411L,0xF411L};
    static int16_t g_132 = 4L;
    static int32_t g_146[4] = {
  0xDAE1B46CL,0xDAE1B46CL,0xDAE1B46CL,0xDAE1B46CL};
    static uint8_t g_147 = 9UL;
    static uint64_t g_175 = 0UL;
    static int64_t g_183 = (-9L);
    static const uint32_t *g_193 = (void*)0;
    static int32_t g_250 = 4L;
    static int8_t g_251 = (-1L);
    static int32_t g_292[3] = {
  0xA347EEFFL,0xA347EEFFL,0xA347EEFFL};
    static int64_t *g_319 = &g_183;
    static int64_t **g_318[8] = {
  &g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319};
    static int64_t ***g_317 = &g_318[1];
    static int32_t g_480 = (-4L);
    static int8_t g_494[2] = {
  1L,1L,1L,1L,1L,1L,1L,1L};
    static uint16_t *g_520 = (void*)0;
    static uint8_t g_580[1][2] = {
  };
    static uint32_t g_686 = 7UL;
    static uint32_t g_791[5] = {
  0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L};
    static int64_t func_4(int64_t p_5, uint32_t p_6);
    static uint32_t func_8(uint32_t p_9);
    static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17);
    inline static int16_t func_19(int8_t p_20);
    static uint16_t func_27(int32_t p_28, int64_t p_29);
    static int32_t func_30(int32_t p_31, int64_t p_32);
    static uint64_t func_1(void) {
       int32_t l_7[1][4][2] = {
 };
       int32_t l_18[4][1] = {
 };
       int32_t l_268 = 0xADBD7DA9L;
       int8_t *l_493 = &g_494[1];
       int32_t * const **l_811[3];
       int i, j, k;
       for (i = 0;
   i < 3;
   i++)         l_811[i] = (void*)0;
       l_18[3][0] = (safe_add_func_int8_t_s_s((func_4(l_7[0][3][0], func_8(((safe_mod_func_int32_t_s_s(0L, g_12)) | ((*l_493) |= (((l_18[3][0] = func_13(l_7[0][3][0], (l_18[3][0] = 0xD4L), (func_19(((g_12 | l_7[0][3][0]) && (safe_mod_func_uint32_t_u_u((l_268 &= (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(func_27(func_30(l_7[0][3][0], g_12), g_250), (-1L))), g_250))), 0x54E90A01L)))) & l_7[0][0][1]), g_97)) ^ l_7[0][3][0]) == l_7[0][1][0]))))) < g_251), l_7[0][1][1]));
       ((void) sizeof ((g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])) ? 1 : 0), __extension__ ({
  }
  ));
       return g_686;
   }
    static int64_t func_4(int64_t p_5, uint32_t p_6) {
       return p_6;
   }
    static uint32_t func_8(uint32_t p_9) {
       int32_t *l_528 = &g_83;
       for (g_480 = 0;
   (g_480 < 25);
   g_12 -= 1)     {
          uint8_t l_530[9] = {
0x12L,0x5EL,0x5EL,0x12L,0x5EL,0x5EL,0x12L,0x5EL,0x5EL};
          if (l_530[3])             break;
      }
       return (*l_528);
   }
    static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17) {
       return p_17;
   }
    inline static int16_t func_19(int8_t p_20) {
       int16_t l_273 = (-1L);
       int32_t l_282 = (-8L);
       int32_t l_293[3];
       int8_t l_326 = (-9L);
       int32_t l_333[9] = {
 0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L,0x8294C8D8L,0x0EBC4D43L};
       uint32_t *l_344 = &g_71;
       uint32_t **l_343 = &l_344;
       int8_t l_366 = 0L;
       const uint16_t l_367 = 8UL;
       int32_t *l_375 = &l_293[0];
       int8_t l_385[3];
       const uint64_t *l_426[1][5][1];
       int i, j, k;
       for (i = 0;
   i < 3;
   i++)         l_385[i] = 0x8CL;
       for (i = 0;
   i < 1;
   i++)     {
          for (j = 0;
  j < 5;
  j++)         {
             for (k = 0;
 k < 1;
 k++)                 l_426[i][j][k] = &g_97;
         }
      }
       for (g_175 = 8;
   (g_175 != 42);
   g_175 = safe_add_func_uint16_t_u_u(g_175, 2))     {
          int32_t l_277 = 0x97967E35L;
          int32_t l_298 = 0xC7C4E01AL;
          int32_t l_299[2][8][2] = {
{{1L,0xDAA81220L},{0x0F0B6039L,1L},{0xAFCF270AL,0xAFCF270AL},{0xAFCF270AL,1L},{0x0F0B6039L,0xDAA81220L},{0x0F0B6039L,0xAFCF270AL},{0x28ED58A8L,0x0F0B6039L},{1L,1L}}
,{{1L,0x0F0B6039L},{0x28ED58A8L,0xAFCF270AL},{0x0F0B6039L,0xAFCF270AL},{0x28ED58A8L,0x0F0B6039L},{1L,1L},{1L,0x0F0B6039L},{0x28ED58A8L,0xAFCF270AL},{0x0F0B6039L,0xAFCF270AL}}
};
          uint32_t l_300 = 18446744073709551615UL;
          uint16_t l_334 = 0x2114L;
          int64_t ***l_365[2];
          const int16_t l_371 = 9L;
          for (g_91 = 0;
  g_91 < 3;
  ++g_250)         {
             int32_t *l_285 = &l_282;
             int32_t *l_286 = &l_282;
             int32_t *l_287 = &g_83;
             int32_t l_288 = (-1L);
             int32_t *l_289 = &l_288;
             uint32_t *l_341 = &g_91;
             uint32_t **l_340 = &l_341;
             l_300--;
             if (((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(0xF2L, 3)), 0x02L)) , (safe_mod_func_int16_t_s_s(((((*l_287) != 0x24L) , (safe_rshift_func_int16_t_s_s((*l_287), (safe_add_func_int16_t_s_s(((((void*)0 != g_317) , ((safe_div_func_uint8_t_u_u(p_20, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((p_20 || l_300) || 1L) < l_298), p_20)), 0x14L)))) , p_20)) || g_183), p_20))))) & p_20), g_251))) && l_299[0][1][1]), l_273)), l_282)) , 0x04123013L))             {                 if (l_326)                     break;             }
         }
      }
       ((void) sizeof (((l_375 >= &l_293[0] && l_375 <= &l_293[2]) || (l_375 >= &g_292[0] && l_375 <= &g_292[2])) ? 1 : 0), __extension__ ({
  }
  ));
       return g_74;
   }
    static uint16_t func_27(int32_t p_28, int64_t p_29) {
       int32_t l_267 = (-1L);
       return l_267;
   }
    static int32_t func_30(int32_t p_31, int64_t p_32) {
       int i, j, k;
       for (i = 0;
   (g_71 <= 3);
   g_71 += 1)     {
      }
       return g_110[0];
   }
    int main (void) {
       int i, j;
       func_1();
       for (i = 0;
   i < 9;
   i++)     {
      }
       for (i = 0;
   i < 1;
   i++)     {
          for (j = 0;
  j < 2;
  j++)         {
         }
      }
   }
