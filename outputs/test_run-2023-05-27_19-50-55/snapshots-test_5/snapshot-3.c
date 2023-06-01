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
                                                                             static void platform_main_begin(void) {
       }
        static void platform_main_end(uint32_t crc, int flag) {
       }
          static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
         return     (si1 - si2);
       }
                                static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
         return ui1 - ui2;
       }
                                         static uint32_t crc32_tab[256];
        static void crc32_gentab (void) {
        uint32_t crc;
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        for (i = 0;
       i < 256;
       i++) {
        crc = i;
       }
       }
        static void transparent_crc (uint64_t val, char* vname, int flag) {
       }
        struct S0 {
          int32_t f0;
       };
        static int32_t g_2 = 0x90DA1152L;
        static int32_t g_5 = 0xED23B618L;
        static int32_t g_9[6][1][2] = {
      };
        static int32_t g_12 = 5L;
        static struct S0 g_15 = {
      7L};
        static uint8_t g_54 = 0x39L;
        static int16_t g_56[10] = {
      (-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
        static int16_t g_65 = 0xBD5FL;
        static int16_t *g_67 = &g_65;
        static int8_t g_102 = 0xDDL;
        static uint16_t g_104 = 65527UL;
        static struct S0 g_146[5][7][1] = {
      };
        static int32_t *g_169 = &g_146[2][2][0].f0;
        static uint32_t *g_175[1] = {
      (void*)0};
        static int16_t **g_198[1] = {
      &g_67};
        static int16_t ***g_197 = &g_198[0];
        static int32_t **g_258 = &g_169;
        static int32_t ***g_257 = &g_258;
        static int8_t *g_317 = &g_102;
        static int8_t **g_316 = &g_317;
        static int8_t ***g_372 = &g_316;
        static int16_t func_1(void) {
           int32_t l_66 = 5L;
           struct S0 *l_656[4][1] = {
     };
           int32_t l_821 = 0xEEF8580BL;
           for (g_2 = 24;
       (g_2 >= (-22));
       g_2 = safe_sub_func_int8_t_s_s(g_2, 7))     {
              uint32_t l_8[10];
              int32_t l_29[3][9] = {
    {
   0L,0x3423637BL,0x8F62C4DFL,0x8F62C4DFL,0x3423637BL,0L,0x3423637BL,0x8F62C4DFL,0x8F62C4DFL}
    ,{
   0x0477AE27L,0x0477AE27L,0x6C4779D4L,0x1FCC8AF9L,0x6C4779D4L,0x0477AE27L,0x0477AE27L,0x6C4779D4L,0x1FCC8AF9L}
    ,{
   0xF4CC511EL,0x3423637BL,0xF4CC511EL,0L,0L,0xF4CC511EL,0x3423637BL,0xF4CC511EL,0L}
    };
              int16_t * const l_68 = (void*)0;
              int8_t l_420 = (-1L);
              struct S0 *l_646[2][1];
              struct S0 **l_655[9][5][5] = {
    {
   {
  &l_646[0][0],(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  &l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[1][0]}
   ,{
  &l_646[1][0],(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0]}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[0][0],(void*)0,&l_646[0][0]}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   }
    ,{
   {}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0}
   ,{
  &l_646[0][0],&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  &l_646[0][0],&l_646[1][0],&l_646[1][0],(void*)0,&l_646[0][0]}
   }
    ,{
   {
  &l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0]}
   ,{
  (void*)0,&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0,&l_646[1][0]}
   ,{
  &l_646[0][0],&l_646[0][0],&l_646[1][0],(void*)0,(void*)0}
   ,{
  &l_646[0][0],(void*)0,&l_646[1][0],&l_646[0][0],&l_646[1][0]}
   }
    ,{
   {
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  (void*)0,(void*)0,&l_646[1][0],&l_646[1][0],&l_646[0][0]}
   ,{
  (void*)0,&l_646[0][0],(void*)0,(void*)0,&l_646[1][0]}
   ,{
  &l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  (void*)0,(void*)0,(void*)0,&l_646[1][0],&l_646[1][0]}
   }
    ,{
   {
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  &l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[1][0]}
   ,{
  &l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]}
   ,{
  (void*)0,&l_646[0][0],(void*)0,&l_646[1][0],&l_646[0][0]}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  (void*)0,&l_646[1][0],&l_646[1][0],(void*)0,(void*)0}
   ,{
  &l_646[1][0],&l_646[0][0],&l_646[1][0],(void*)0,&l_646[1][0]}
   ,{
  (void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  (void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]}
   ,{
  (void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]}
   ,{
  &l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0]}
   ,{
  &l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}
   ,{
  (void*)0,&l_646[0][0],(void*)0,&l_646[1][0],&l_646[1][0]}
   }
    };
              const int32_t *l_682 = &g_9[2][0][0];
              int8_t ****l_691[6] = {
    &g_372,&g_372,&g_372,&g_372,&g_372,&g_372};
              int16_t ****l_716[5][1];
              struct S0 * const *l_717 = &l_656[2][0];
              uint32_t **l_819 = &g_175[0];
              int i, j, k;
              for (i = 0;
      i < 10;
      i++)             l_8[i] = 4294967287UL;
              for (i = 0;
      i < 2;
      i++)         {
                 for (j = 0;
     j < 1;
     j++)                 l_646[i][j] = &g_15;
             }
              for (i = 0;
      i < 5;
      i++)         {
                 for (j = 0;
     j < 1;
     j++)                 l_716[i][j] = &g_197;
             }
              for (g_5 = (-8);
      (g_5 == (-4));
      ++g_5)         {
                 for (g_9[1][0][0] = 0;
     g_9[1][0][0] < 10;
     g_9[1][0][0] += 1)             {
                    l_8[g_9[1][0][0]] = 3UL;
                }
                 return g_9[4][0][1];
             }
              for (g_5 = 22;
      (g_5 < (-25));
      g_5 = safe_sub_func_uint8_t_u_u(g_5, 7))         {
                 uint32_t l_52 = 0x54C3DC4DL;
                 int16_t *l_64[10] = {
   &g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65};
                 int32_t *l_458 = &l_66;
                 struct S0 *l_611 = (void*)0;
                 struct S0 **l_610 = &l_611;
                 struct S0 *l_612 = &g_15;
                 struct S0 ***l_654[2];
                 for (i = 0;
     i < 2;
     i++)                 l_654[i] = &l_610;
                 if (g_2)                 break;
                 for (g_12 = 0;
     (g_12 == (-13));
     g_12 = safe_sub_func_int8_t_s_s(g_12, 1))             {
                    struct S0 *l_16[8];
                    int i;
                    for (i = 0;
    i < 8;
    i++)                     l_16[i] = (void*)0;
                }
             }
          }
           return l_821;
       }
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           func_1();
           for (i = 0;
       i < 6;
       i++)     {
              for (j = 0;
      j < 1;
      j++)         {
                 for (k = 0;
     k < 2;
     k++)             {
                    transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
       }
