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
   typedef struct {
    union   {
     unsigned int __wch;
     char __wchb[4];
   }
  __value;
  }
   __mbstate_t;
                                                                        static void platform_main_begin(void) {
  }
   static void platform_main_end(uint32_t crc, int flag) {
   printf ("checksum = %X\n", crc);
  }
    static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 + si2);
  }
    static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
  }
   static int16_t (safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
    return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
  }
     static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
  }
   static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
  }
   static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
     static uint8_t (safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
  }
   static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
  }
   static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
  }
        static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
   static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
  }
   static uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
  }
     static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return ui1 - ui2;
  }
    static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
   static int32_t g_16 = 1;
   static int32_t g_34 = 0xA7609FA8;
   static uint32_t g_38 = 0x7B88CDF8;
   static int16_t g_51 = 0xDE5A;
   static int32_t *g_66 = &g_16;
   static int32_t **g_65[2][8][9] = {
 };
   static int8_t g_81 = 9;
   static int16_t *g_132[8][5][6] = {
 };
   static int16_t **g_131[3] = {
 &g_132[1][0][3],&g_132[1][0][3],&g_132[1][0][3]};
   static uint32_t *g_141 = &g_38;
   static int32_t g_157[2][6] = {
 };
   static uint32_t g_176 = 9U;
   static uint32_t **g_183 = &g_141;
   static uint32_t ***g_182[9] = {
 (void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
   static int32_t *g_245 = &g_34;
   static uint32_t *g_276 = &g_38;
   static uint32_t ****g_320 = &g_182[3];
   static uint16_t g_329 = 0x3FAA;
   static uint16_t *g_328[6][9][4] = {
 };
   static uint16_t **g_327 = &g_328[3][0][0];
   static uint32_t g_351[6] = {
 0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946};
   static int32_t * func_2(uint32_t p_3, uint32_t p_4, int32_t p_5) {
      int32_t *l_960 = &g_34;
      return l_960;
  }
   static uint16_t func_14(uint16_t p_15) {
      int16_t *l_172 = &g_51;
      int16_t *l_173 = &g_51;
      uint32_t l_175[1][6] = {
{0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE}
};
      int16_t l_177 = (-1);
      int32_t l_179 = 0xFA26938D;
      int32_t l_238 = 0x8E098A7A;
      int32_t *l_243 = &l_179;
      uint32_t *****l_403 = &g_320;
      if ((((g_38 >= (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_157[1][5] == (safe_div_func_int32_t_s_s((g_16 || ((safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(p_15, ((safe_lshift_func_uint8_t_u_u((l_179 = (p_15 >= (((((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_172 == (l_173 = l_172)), (g_176 = ((p_15 , (+p_15)) , l_175[0][0])))), g_34)), 0xC3CA42F7)) && 0x16DB) == l_175[0][5]) || p_15) <= l_177))), p_15)) , p_15))) ^ p_15) , p_15), p_15)) || 0xA2B03852)), g_16))), 2)), l_177))) || l_179) & g_38))     {
         uint32_t l_181 = 0x1807826B;
         int16_t **l_187 = &g_132[6][3][5];
         int32_t *l_242 = &l_179;
         uint16_t l_401 = 0xEF64;
         uint32_t *l_426[7][1];
         uint16_t ***l_600 = &g_327;
         int16_t l_659 = 1;
         int i, j;
         if ((((void*)0 == (**l_600)) ^ ((8 ^ ((*g_276) = 3U)) & ((((**l_403) != ((safe_lshift_func_uint16_t_u_s(p_15, 1)) , (*g_320))) || ((((p_15 | (+(safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((p_15 , p_15), p_15)) , (*l_242)), l_659)))) != (*g_245)) && p_15) > 65535U)) , (*l_242)))))         {             int32_t *l_660 = &l_238;             int32_t **l_661 = &l_660;             (*l_661) = l_660;             for (g_81 = 0; (g_81 <= 8); g_81 += 1)             {                 int8_t l_662 = 0;                 return l_662;             }             return p_15;         }
         else         {             int32_t **l_663 = &l_242;             (*l_663) = (void*)0;         }
     }
  }
   static int32_t func_21(int32_t * p_22, uint32_t p_23, int32_t * p_24, uint32_t p_25, uint32_t p_26) {
      int16_t ***l_137 = &g_131[0];
      uint32_t *l_139 = &g_38;
      uint32_t **l_138 = &l_139;
      int32_t *l_140 = &g_16;
      uint32_t *l_143[2];
      uint32_t **l_142 = &l_143[0];
      for (p_23 = 0;
  (p_23 == 36);
  p_23 = safe_add_func_int32_t_s_s(p_23, 1))     {
     }
      return (*l_140);
  }
   static int32_t * func_27(int32_t * p_28, int8_t p_29) {
      int32_t *l_33 = &g_16;
      for (p_29 = 0;
  p_29 < 2;
  p_29 += 1)     {
         for (g_34 = 0;
 g_34 < 8;
 g_34 += 1)         {             for (g_38 = 0; g_38 < 9; g_38 += 1)             {                 g_65[p_29][g_34][g_38] = &l_33;             }         }
     }
      return p_28;
  }
   static int32_t func_39(int32_t ** p_40, uint32_t p_41, uint32_t p_42, int32_t * p_43) {
      uint32_t *l_72[10];
      int i, j, k;
      for (i = 0;
  i < 10;
  i++)         l_72[i] = &g_38;
      return (*p_43);
  }
   int main (void) {
      platform_main_end(0,0);
  }
