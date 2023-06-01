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
    union   {
   }
  __value;
  }
   __mbstate_t;
   typedef struct _G_fpos_t {
  }
   __fpos_t;
   static void platform_main_end(uint32_t crc, int flag) {
  }
     static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 - si2);
  }
            static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
    return ui1 + ui2;
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
   static int32_t g_3 = 0x01C08901L;
   static int32_t g_18 = 0xB6BC3EC3L;
   static int32_t g_26[9] = {
 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L};
   static int32_t g_30 = 0xEDFC3E8CL;
   static int16_t g_49 = 0x00C0L;
   static int32_t *g_136 = &g_26[6];
   static uint8_t g_178 = 0xE9L;
   static uint16_t g_199 = 0x70E5L;
   static uint8_t *g_245[8] = {
 (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178};
   static int8_t g_347[5] = {
 2L, 1L, 2L, 1L, 2L};
   static int32_t * const *g_546 = &g_136;
   static int32_t * const * const *g_545 = &g_546;
   static int32_t * const * const **g_544 = &g_545;
   static int32_t * const * const ***g_543 = &g_544;
   static int16_t *g_606[5][5] = {
 };
   static int32_t g_817 = (-7L);
   static const uint32_t func_1(void) {
      int32_t *l_2 = &g_3;
      uint16_t *l_768[6];
      uint8_t **l_831 = &g_245[3];
      int i, j, k;
      for (i = 0;
  i < 6;
  i++)         l_768[i] = &g_199;
      for (i = 0;
  (g_817 < 2);
  g_817 = safe_sub_func_int8_t_s_s(g_817, 1))     {
         (*****g_543) = (l_831 == &g_245[2]);
     }
      return g_18;
  }
   static uint16_t func_10(const int32_t * p_11, int64_t p_12, uint16_t p_13) {
      uint64_t l_46 = 0UL;
      int32_t l_50 = 0xF121ADF5L;
      int32_t l_417[1];
      int16_t l_767 = 0x48B7L;
      int i, j, k;
      for (i = 0;
  i < 1;
  i++)         l_417[i] = 0x27A57084L;
      for (g_18 = 0;
  (g_18 != (-9));
  g_18--)     {
         for (p_12 = 17;
 (p_12 == 18);
 p_12 = safe_add_func_uint64_t_u_u(p_12, 1))         {             uint64_t l_33[2][6][3] = {{{0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}}, {{0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}, {0UL, 0x9C5A74D4B4B26D8FLL, 3UL}}};             int i, j, k;             for (p_13 = 0; (p_13 > 44); ++p_13)             {                 int32_t *l_36 = &g_26[4];                 int32_t *l_37 = &g_30;                 int32_t *l_38 = (void*)0;                 int32_t *l_39 = &g_26[0];                 int32_t *l_40 = &g_26[4];                 int32_t *l_41 = &g_30;                 int32_t *l_42 = (void*)0;                 int32_t *l_43 = &g_26[4];                 int32_t *l_44[9][2];                 int i, j;                 for (i = 0; i < 9; i++)                 {                     for (j = 0; j < 2; j++)                         l_44[i][j] = &g_30;                 }                 for (g_26[4] = 0; (g_26[4] == 23); ++g_26[4])                 {                     int32_t *l_29 = &g_30;                     int32_t *l_31 = (void*)0;                     int32_t *l_32[8] = {&g_26[4], &g_30, &g_26[4], &g_30, &g_26[4], &g_30, &g_26[4], &g_30};                     int i;                     l_33[1][4][1]--;                 }                 l_46++;                 if (g_49)                     continue;             }         }
     }
      return l_767;
  }
   static int32_t func_14(int64_t p_15, const uint16_t p_16, const uint8_t p_17) {
      int64_t l_19 = 0x3303773672D714F9LL;
      return l_19;
  }
        static int32_t * func_86(int32_t ** p_87) {
      int32_t *l_125[2][8] = {
};
      return l_125[1][1];
  }
    int main (void) {
      func_1();
  }
