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
        extern void __assert_fail ( const char *__file,        const char *__function)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
         int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;
static int8_t (safe_add_func_int8_t_s_s)( void ) {
         return     (safe_add_func_int8_t_s_s_si1 + safe_add_func_int8_t_s_s_si2);
       }
         int16_t safe_add_func_int16_t_s_s_si2;
static int16_t (safe_add_func_int16_t_s_s)(int16_t si1 ) {
         return     (si1 + safe_add_func_int16_t_s_s_si2);
       }
        int16_t safe_mod_func_int16_t_s_s_si2;
static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1 ) {
         return     ((safe_mod_func_int16_t_s_s_si2 == 0) || ((si1 == (-32767-1)) && (safe_mod_func_int16_t_s_s_si2 == (-1)))) ?     ((si1)) :     (si1 % safe_mod_func_int16_t_s_s_si2);
       }
         int16_t safe_lshift_func_int16_t_s_s_left;
int safe_lshift_func_int16_t_s_s_right;
static int16_t (safe_lshift_func_int16_t_s_s)( void ) {
         return     ((safe_lshift_func_int16_t_s_s_left < 0) || (((int)safe_lshift_func_int16_t_s_s_right) < 0) || (((int)safe_lshift_func_int16_t_s_s_right) >= 32) || (safe_lshift_func_int16_t_s_s_left > ((32767) >> ((int)safe_lshift_func_int16_t_s_s_right)))) ?     ((safe_lshift_func_int16_t_s_s_left)) :     (safe_lshift_func_int16_t_s_s_left << ((int)safe_lshift_func_int16_t_s_s_right));
       }
        int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;
static int16_t (safe_rshift_func_int16_t_s_s)( void ) {
         return     ((safe_rshift_func_int16_t_s_s_left < 0) || (((int)safe_rshift_func_int16_t_s_s_right) < 0) || (((int)safe_rshift_func_int16_t_s_s_right) >= 32))?     ((safe_rshift_func_int16_t_s_s_left)) :     (safe_rshift_func_int16_t_s_s_left >> ((int)safe_rshift_func_int16_t_s_s_right));
       }
        int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
static int32_t (safe_add_func_int32_t_s_s)( void ) {
         return     (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
       }
         uint8_t safe_mul_func_uint8_t_u_u_ui1;
uint8_t safe_mul_func_uint8_t_u_u_ui2;
static uint8_t (safe_mul_func_uint8_t_u_u)( void ) {
         return ((unsigned int)safe_mul_func_uint8_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint8_t_u_u_ui2);
       }
        uint8_t safe_div_func_uint8_t_u_u_ui1;
uint8_t safe_div_func_uint8_t_u_u_ui2;
static uint8_t (safe_div_func_uint8_t_u_u)( void ) {
         return     (safe_div_func_uint8_t_u_u_ui2 == 0) ?     ((safe_div_func_uint8_t_u_u_ui1)) :     (safe_div_func_uint8_t_u_u_ui1 / safe_div_func_uint8_t_u_u_ui2);
       }
         uint8_t safe_lshift_func_uint8_t_u_u_left;
unsigned int safe_lshift_func_uint8_t_u_u_right;
static uint8_t (safe_lshift_func_uint8_t_u_u)( void ) {
         return     ((((unsigned int)safe_lshift_func_uint8_t_u_u_right) >= 32) || (safe_lshift_func_uint8_t_u_u_left > ((255) >> ((unsigned int)safe_lshift_func_uint8_t_u_u_right)))) ?     ((safe_lshift_func_uint8_t_u_u_left)) :     (safe_lshift_func_uint8_t_u_u_left << ((unsigned int)safe_lshift_func_uint8_t_u_u_right));
       }
          uint16_t safe_add_func_uint16_t_u_u_ui1;
static uint16_t (safe_add_func_uint16_t_u_u)( uint16_t ui2 ) {
         return safe_add_func_uint16_t_u_u_ui1 + ui2;
       }
        static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return ui1 + ui2;
       }
        static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return ui1 - ui2;
       }
          volatile uint64_t csmith_sink_ = 0;
        static uint32_t g_48 = 0x440E708BL;
        static uint32_t g_63[] = {
      18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        static uint32_t g_71 = 4294967295UL;
        static uint32_t g_74 = 0x7FAE0CD5L;
        static int32_t g_83 = 0xCD3C6E85L;
        static uint32_t g_91 = 0x90166331L;
        static uint64_t g_97 = 18446744073709551607UL;
        static uint16_t g_110[3] = {
      0xF411L,0xF411L,0xF411L};
static uint16_t g_110_2 = 0xF411L;
static uint16_t g_110_0 = 0xF411L;
        static uint64_t g_175 = 0UL;
        static int64_t g_183 = (-9L);
        static int8_t g_251 = (-1L);
        static int32_t g_292[3] = {
      0xA347EEFFL,0xA347EEFFL,0xA347EEFFL};
        static int64_t *g_319 = &g_183;
        static int64_t **g_318[8] = {
      &g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319,&g_319};
static int64_t **g_318_1 = &g_319;
        static int64_t ***g_317 = &g_318_1;
        static int8_t g_494[2] = {
      (-1L),(-1L)};
        static uint16_t *g_520 = (void*)0;
        static uint8_t g_580[1][2] = {
      0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L,0xF93774A1L};
static uint8_t g_580_0_0 = 0xF93774A1L;
        static uint64_t func_1(void) {
           ((void) sizeof ((g_520 == 0 || (g_520 >= &g_110_0 && g_520 <= &g_110_2)) ? 1 : 0), __extension__ ({
      if (g_520 == 0 || (g_520 >= &g_110_0 && g_520 <= &g_110_2)) ;
      else __assert_fail ( "/tmp/tmpusnnar3w.c",  __extension__ __PRETTY_FUNCTION__);
      }
      ));
       }
        uint32_t func_4_p_6;
static int64_t func_4(int64_t p_5) {
           return func_4_p_6;
       }
        static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17) {
           return p_17;
       }
        inline static int16_t func_19(int8_t p_20) {
           int16_t l_273 = (-1L);
           int32_t l_282 = (-8L);
           int32_t l_293[3];
           int32_t l_293_0;
           uint32_t *l_344 = &g_71;
           uint32_t **l_343 = &l_344;
           int32_t *l_375 = &l_293_0;
           int8_t l_385[3];
           const uint64_t *l_426[1][5][1];
           int i, j, k;
           for (i = 0;
       i < 1;
       i++)     {
              for (j = 0;
      j < 5;
      j++)         {
             }
          }
           for (g_175 = 8;
       (g_175 != 42);
       g_175 = safe_add_func_uint16_t_u_u( 2))     {
              uint16_t *l_274[3];
              int32_t l_277 = 0x97967E35L;
              int32_t l_298 = 0xC7C4E01AL;
              int32_t l_299[2][8][2] ;
              uint32_t l_300 = 18446744073709551615UL;
              int64_t ***l_365[2];
              for (g_91 = 0;
      g_91 < 3;
      g_91 += 1)         {
                 int32_t *l_287 = &g_83;
                 int32_t *l_291[1];
                 uint32_t *l_341 = &g_91;
                 if (((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s( )) , (safe_mod_func_int16_t_s_s(((((*l_287) != 0x24L) , (safe_rshift_func_int16_t_s_s( ))) & p_20)))) && l_299[0][1][1]), l_273)), l_282)) , 0x04123013L))             {
                    ((void) sizeof ((l_343 == &l_341) ? 1 : 0), __extension__ ({
   if (l_343 == &l_341) ;
   else __assert_fail ( "/tmp/tmpusnnar3w.c",  __extension__ __PRETTY_FUNCTION__);
   }
   ));
                }
             }
          }
       }
        static int32_t func_30(int32_t p_31, int64_t p_32) {
           int32_t l_51[9];
           int32_t l_51_0;
           int i, j;
           for (i = 0;
       i < 9;
       i++)         l_51_0 = 0L;
           return p_32;
       }
        inline static int8_t func_37(int32_t p_38, uint32_t p_39) {
           uint64_t l_177[7][4][8] = {
     };
           int i, j, k;
           for (i = 0;
       i < 3;
       g_71 += 1)     {
              uint32_t *l_195[2];
              for (i = 0;
      (g_74 <= 3);
      g_74 += 1)         {
                 int32_t l_210 = 0x3B609C62L;
                 for (g_91 = 0;
     (g_91 <= 3);
     g_91 += 1)             {
                    if (l_177[(g_71 + 2)][g_91][(g_71 + 3)])                 {
                       uint32_t *l_189[1][1];
                       int32_t *l_211 = &l_210;
                       for (i = 0;
   i < 1;
   i++)                     {
                       }
                       ((void) sizeof ((l_211 == &l_210 || l_211 == &g_83) ? 1 : 0), __extension__ ({
   if (l_211 == &l_210 || l_211 == &g_83) ;
   else __assert_fail ( "/tmp/tmpusnnar3w.c",  __extension__ __PRETTY_FUNCTION__);
   }
  ));
                   }
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
       i < 1;
       i++)     {
              for (j = 0;
      j < 2;
      j++)         {
                 csmith_sink_ = g_580_0_0;
             }
          }
       }