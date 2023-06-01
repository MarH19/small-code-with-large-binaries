 typedef signed char __int8_t;
      typedef unsigned char __uint8_t;
      typedef signed short int __int16_t;
      typedef unsigned short int __uint16_t;
      typedef signed int __int32_t;
      typedef unsigned int __uint32_t;
      typedef __int8_t int8_t;
      typedef __int16_t int16_t;
      typedef __int32_t int32_t;
      typedef __uint8_t uint8_t;
      typedef __uint16_t uint16_t;
      typedef __uint32_t uint32_t;
      static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
       return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
     }
      static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
       return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
     }
       static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
       return     (si1 + si2);
     }
        static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
       return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
     }
               static uint32_t crc32_tab[256];
      static uint32_t crc32_context = 0xFFFFFFFFUL;
      static void crc32_gentab (void) {
      int i, j;
      for (i = 0;
     i < 256;
     i++) {
      for (j = 8;
    j > 0;
    j--) {
     }
     }
     }
      static void crc32_byte (uint8_t b) {
     }
      static void crc32_8bytes (uint32_t val) {
      crc32_byte ((val>>0) & 0xff);
     }
      static void transparent_crc (uint32_t val, char* vname, int flag) {
      crc32_8bytes(val);
     }
      struct S0 {
        int32_t f0;
     };
      static int8_t g_19 = 0xF1;
      static int32_t g_24[10] = {
    4,4,4,4,4,4,4,4,4,4};
      static int32_t *g_23 = &g_24[8];
      static const int32_t g_27 = (-2);
      static const int32_t *g_26 = &g_27;
      static uint8_t g_36[5][7] = {
    };
      static uint8_t g_52 = 1U;
      static uint16_t g_66 = 0U;
      static int8_t g_137[5] = {
    0xC9C70339};
      static uint8_t *g_364[3][7] = {
    };
      static uint8_t **g_363 = &g_364[1][2];
      static int16_t g_376 = 0xAB47;
      static const int8_t *g_394 = &g_137[2];
      static const int8_t **g_393 = &g_394;
      static struct S0 g_411 = {
    -6};
      static int8_t g_470 = 0x45;
      static uint16_t *g_476 = (void*)0;
      static struct S0 *g_521 = &g_411;
      static uint16_t g_720 = 0xD661;
      static const uint16_t *g_808 = &g_720;
      static const uint16_t **g_807 = &g_808;
      static const uint16_t ***g_806 = &g_807;
      static uint8_t func_1(void) {
         int32_t **l_927 = &g_23;
         uint16_t **l_933 = &g_476;
         uint16_t *l_934 = &g_720;
         if ((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((**l_927), (1U ^ (249U || ((~((**l_927) | (0x9B46EB46 ^ (((*g_806) != l_933) == (((*l_934) = (**l_927)) > (**l_927)))))) == (**l_927)))))) == g_470), (**g_393))))     {
            for (g_52 = 22;
    (g_52 != 9);
    --g_52)         {
               return (**g_363);
           }
        }
     }
      static int32_t * func_2(uint32_t p_3, int32_t * p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7) {
         return p_5;
     }
      static uint16_t func_10(int32_t * p_11) {
         int i;
         for (i = 0;
     i < 5;
     g_19 -= 1)     {
            const int32_t * const *l_674 = &g_26;
            if (((void*)0 != &g_521))         {
               for (g_66 = 27;
   (g_376 >= (-18));
   g_376--)             {
                  return (**l_674);
              }
           }
        }
     }
           int main (void) {
         int i, j, k;
         int print_hash_value = 0;
         for (i = 0;
     i < 5;
     i++)     {
            for (j = 0;
    j < 7;
    j++)         {
               transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);
           }
        }
         for (i = 0;
     i < 3;
     i++)     {
            for (j = 0;
    j < 3;
    j++)         {
           }
        }
     }
