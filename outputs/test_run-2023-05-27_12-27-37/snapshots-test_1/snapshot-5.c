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
     static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
      return     (si1 - si2);
    }
      static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
      return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
    }
     static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
      return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
    }
      static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
      return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
    }
      static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
      return     (si1 + si2);
    }
      static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
      return     si1 * si2;
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
     static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
      return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
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
      return     (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?     ((si1)) :     (si1 + si2);
    }
         static uint8_t (safe_unary_minus_func_uint8_t_u)(uint8_t ui ) {
      return -ui;
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
     static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
      return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
    }
       static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
      return ui1 + ui2;
    }
      static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
      return ((unsigned int)ui1) * ((unsigned int)ui2);
    }
     static uint16_t (safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
      return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
    }
     static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
      return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
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
      return ui1 - ui2;
    }
       volatile uint64_t csmith_sink_ = 0;
     static int32_t g_12 = 0x53E58BFCL;
     static uint32_t g_48 = 0x440E708BL;
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
     static const uint32_t **g_192 = &g_193;
     static int8_t g_251 = (-1L);
     static uint32_t g_252 = 18446744073709551607UL;
     static int32_t g_292[3] = {
   0xA347EEFFL,0xA347EEFFL,0xA347EEFFL};
     static int64_t *g_319 = &g_183;
     static int64_t **g_318[8] = {
   &g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319};
     static int64_t ***g_317 = &g_318[1];
     static int32_t g_480 = (-4L);
     static int8_t g_494[2] = {
   (-1L),(-1L)};
     static uint16_t *g_520 = (void*)0;
     static uint8_t g_580[1][2] = {
   0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L};
     static uint64_t func_1(void) {
        int32_t * const **l_811[3];
        int i, j, k;
        for (i = 0;
    i < 3;
    i++)         l_811[i] = (void*)0;
        ((void) sizeof ((g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])) ? 1 : 0), __extension__ ({
   if (g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])) ;
   else __assert_fail ("g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])", "/tmp/tmpusnnar3w.c", 122, __extension__ __PRETTY_FUNCTION__);
   }
   ));
    }
     static int64_t func_4(int64_t p_5, uint32_t p_6) {
        return p_6;
        for (g_480 = 0;
    (g_480 < 25);
    g_480 = safe_add_func_uint64_t_u_u(g_480, 9))     {
       }
        for (g_183 = 0;
    (g_12 >= 0);
    g_12 -= 1)     {
       }
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
    i++)         l_293[i] = (-2L);
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
           uint16_t *l_274[3];
           int32_t l_277 = 0x97967E35L;
           int32_t l_298 = 0xC7C4E01AL;
           int32_t l_299[2][8][2] = {
 };
           uint32_t l_300 = 18446744073709551615UL;
           uint16_t l_334 = 0x2114L;
           int64_t ***l_365[2];
           const int16_t l_371 = 9L;
           for (i = 0;
   i < 3;
   i++)             l_274[i] = &g_110[1];
           for (i = 0;
   i < 2;
   i++)             l_365[i] = &g_318[7];
           for (g_91 = 0;
   g_91 < 3;
   g_91 += 1)         {
              int32_t *l_285 = &l_282;
              int32_t *l_287 = &g_83;
              int32_t l_288 = (-1L);
              int32_t *l_289 = &l_288;
              int32_t *l_291[1];
              uint32_t *l_341 = &g_91;
              uint32_t **l_340 = &l_341;
              for (i = 0;
  i < 1;
  i++)                 l_291[i] = &l_277;
              if (((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(0xF2L, 3)), 0x02L)) , (safe_mod_func_int16_t_s_s(((((*l_287) != 0x24L) , (safe_rshift_func_int16_t_s_s((*l_287), (safe_add_func_int16_t_s_s(((((void*)0 != g_317) , ((safe_div_func_uint8_t_u_u(p_20, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((p_20 || l_300) || 1L) < l_298), p_20)), 0x14L)))) , p_20)) || g_183), p_20))))) & p_20), g_251))) && l_299[0][1][1]), l_273)), l_282)) , 0x04123013L))             {
                 if (l_326)                     break;
                 int16_t l_327 = 0xC2F6L;
                 int32_t l_329 = 0L;
                 int32_t l_330 = 1L;
                 int32_t l_331 = 0x13205A4EL;
                 (*l_289) = (l_330 ^= (g_292[0] , (((((l_343 = l_340) == &l_344) < (-4L)) & ((((((!(safe_lshift_func_int16_t_s_s((g_132 = ((((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(252UL, (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(1L, (safe_div_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_int8_t_s_s(((-8L) != ((0x1716L <= 0x7324L) < l_333[3])), 0)) , l_365[1]) == l_365[1]))), g_132)) , (void*)0) == (void*)0), (-1L))) || 65535UL), l_300)))), l_366)))) || (-5L)), l_367)) , (void*)0) == (*g_192)) , (*l_287))), g_147))) && (*l_285)) , 0x80L) , l_334) , l_371) , 0x33AF7378L)) , (-1L))));
                 ((void) sizeof ((l_343 == &l_341) ? 1 : 0), __extension__ ({ if (l_343 == &l_341) ; else __assert_fail ("l_343 == &l_341", "/tmp/tmpusnnar3w.c", 338, __extension__ __PRETTY_FUNCTION__); }
));
             }
          }
       }
        ((void) sizeof (((l_375 >= &l_293[0] && l_375 <= &l_293[2]) || (l_375 >= &g_292[0] && l_375 <= &g_292[2])) ? 1 : 0), __extension__ ({
   }
   ));
    }
     static int32_t func_30(int32_t p_31, int64_t p_32) {
        int32_t l_51[9];
        int i, j;
        for (i = 0;
    i < 9;
    i++)         l_51[i] = 0L;
        return p_32;
    }
     static uint32_t func_35(int8_t p_36) {
        return p_36;
    }
     inline static int8_t func_37(int32_t p_38, uint32_t p_39) {
        uint64_t l_177[7][4][8] = {
  };
        int32_t *l_212 = &g_83;
        int i, j, k;
        for (i = 0;
    i < 3;
    g_71 += 1)     {
           uint32_t *l_195[2];
           uint32_t **l_194 = &l_195[0];
           for (i = 0;
   i < 2;
   i++)             l_195[i] = &g_74;
           for (g_74 = 0;
   (g_74 <= 3);
   g_74 += 1)         {
              uint64_t *l_191 = (void*)0;
              uint64_t **l_190 = &l_191;
              int32_t l_210 = 0x3B609C62L;
              for (g_91 = 0;
  (g_91 <= 3);
  g_91 += 1)             {
                 if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])                 {                     uint32_t *l_189[1][1];                     int32_t *l_211 = &l_210;                     int i, j;                     for (i = 0; i < 1; i++)                     {                         for (j = 0; j < 1; j++)                             l_189[i][j] = &g_48;                     }                     for (g_147 = 1; (g_147 <= 8); g_147 += 1)                     {                         int32_t *l_179[4] = {&g_83,&g_83,&g_83,&g_83};                         int32_t **l_178 = &l_179[2];                         int64_t *l_182 = &g_183;                         uint32_t **l_186 = (void*)0;                         uint32_t *l_188 = &g_48;                         uint32_t **l_187[9] = {&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188};                         int i;                         (*l_178) = &g_83;                         if (g_63[(g_74 + 2)])                             continue;                         (**l_178) = (g_146[g_71] || ((safe_rshift_func_int8_t_s_u(l_177[(g_71 + 2)][g_91][(g_71 + 3)], (p_39 , ((((*l_182) = 0x54C0D22BE5E263D6LL) < l_177[(g_71 + 2)][g_91][(g_71 + 3)]) , (safe_rshift_func_uint8_t_u_s(((l_189[0][0] = l_179[1]) != ((((void*)0 != l_190) & g_91) , &g_91)), 0)))))) , 0x6DL));                         (**l_178) &= ((((g_146[3] > p_38) , g_192) == l_194) == (~((((safe_lshift_func_int16_t_s_s((+(safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_38, (l_189[0][0] != (*g_192)))), (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((p_38 | ((g_183 , p_39) > 0L)), 4)) , g_63[8]), l_210)), g_132))))), p_38)) || p_38) , (void*)0) != l_211)));                     }                     (*l_211) = 0x740FBDBEL;                     if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])                         continue;                     if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])                     {                         int32_t **l_213 = &l_211;                         (*l_213) = l_212;                         ((void) sizeof ((l_211 == &g_83) ? 1 : 0), __extension__ ({ if (l_211 == &g_83) ; else __assert_fail ("l_211 == &g_83", "/tmp/tmpusnnar3w.c", 519, __extension__ __PRETTY_FUNCTION__); }));                     }                     else                     {                         (*l_211) ^= g_146[2];                     }                     ((void) sizeof ((l_211 == &l_210 || l_211 == &g_83) ? 1 : 0), __extension__ ({ if (l_211 == &l_210 || l_211 == &g_83) ; else __assert_fail ("l_211 == &l_210 || l_211 == &g_83", "/tmp/tmpusnnar3w.c", 526, __extension__ __PRETTY_FUNCTION__); }));                 }
             }
          }
       }
    }
     int main (void) {
        int i, j;
        for (i = 0;
    i < 9;
    i++)     {
       }
        for (i = 0;
    i < 3;
    i++)     {
       }
        for (i = 0;
    i < 2;
    i++)     {
       }
        for (i = 0;
    i < 1;
    i++)     {
           for (j = 0;
   j < 2;
   j++)         {
              csmith_sink_ = g_580[i][j];
          }
       }
    }