 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef long int __off_t;
  typedef long int __off64_t;
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
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
   return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
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
    volatile uint32_t csmith_sink_ = 0;
  static int32_t g_16 = 1;
  static int32_t g_34 = 0xA7609FA8;
  static uint32_t g_38 = 0x7B88CDF8;
  static int16_t g_51 = 0xDE5A;
  static int32_t *g_66 = &g_16;
  static int32_t **g_65[2][8][9] = {
{{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66},{&g_66,&g_66,&g_66,(void*)0,&g_66,&g_66,(void*)0,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66,&g_66},{(void*)0,&g_66,&g_66,(void*)0,&g_66,&g_66,&g_66,&g_66,&g_66}}
,{{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,(void*)0,&g_66,&g_66,(void*)0},{&g_66,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66},{(void*)0,(void*)0,&g_66,&g_66,(void*)0,(void*)0,&g_66,&g_66,&g_66},{(void*)0,&g_66,&g_66,(void*)0,&g_66,&g_66,&g_66,&g_66,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66,&g_66}}
};
  static int8_t g_81 = 9;
  static int16_t g_133 = 0x46DC;
  static int16_t *g_132[8][5][6] = {
{{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,(void*)0,&g_133,&g_133,&g_133,&g_133}}
,{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,(void*)0},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133}}
};
  static int16_t **g_131[3] = {
&g_132[1][0][3],&g_132[1][0][3],&g_132[1][0][3]};
  static uint32_t *g_141 = &g_38;
  static int32_t g_157[2][6] = {
{0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0}
,{0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0,0x685E78B0}
};
  static uint32_t g_176 = 9U;
  static uint32_t **g_183 = &g_141;
  static uint32_t ***g_182[9] = {
(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
  static int32_t *g_245 = &g_34;
  static uint32_t *g_276 = &g_38;
  static int16_t g_303 = (-1);
  static int8_t g_305 = (-1);
  static uint32_t ****g_320 = &g_182[3];
  static uint16_t g_329 = 0x3FAA;
  static uint16_t *g_328[6][9][4] = {
{{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0}}
,{{&g_329,&g_329,(void*)0,&g_329},{(void*)0,&g_329,(void*)0,&g_329},{(void*)0,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,(void*)0,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{(void*)0,(void*)0,(void*)0,&g_329},{&g_329,(void*)0,&g_329,&g_329}}
,{{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,(void*)0,(void*)0,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329}}
};
  static uint16_t **g_327 = &g_328[3][0][0];
  static uint32_t g_351[6] = {
0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946};
  static uint32_t g_399 = 0xD37FD78E;
  static int16_t ***g_591 = &g_131[0];
  static uint8_t g_636 = 255U;
  static uint8_t *g_635 = &g_636;
  static uint16_t g_855[5][9] = {
{1U,0x401F,0xB8F0,0xB8F0,0x401F,1U,0x401F,0xB8F0,0xB8F0}
,{0x82C7,0x82C7,1U,0xB8F0,1U,0x82C7,0x82C7,1U,0xB8F0}
};
  static int32_t * func_2(uint32_t p_3, uint32_t p_4, int32_t p_5);
  static uint32_t func_6(int8_t p_7);
  static uint8_t func_8(int16_t p_9, uint32_t p_10, uint32_t p_11, int32_t p_12);
  static uint16_t func_14(uint16_t p_15);
  static int32_t func_21(int32_t * p_22, uint32_t p_23, int32_t * p_24, uint32_t p_25, uint32_t p_26);
  static int32_t * func_27(int32_t * p_28, int8_t p_29);
  static int32_t * func_30(int32_t * p_31);
  static int32_t func_39(int32_t ** p_40, uint32_t p_41, uint32_t p_42, int32_t * p_43);
  static int32_t ** func_44(uint32_t p_45, int32_t * p_46);
  static int8_t func_1(void) {
     uint32_t l_13 = 0U;
     int16_t ***l_134 = &g_131[0];
     int32_t *l_135 = &g_16;
     int32_t **l_961 = &g_66;
     (*l_961) = func_2(((*g_276) = func_6((func_8(l_13, (func_14((g_16 != ((safe_lshift_func_int16_t_s_u(g_16, (safe_sub_func_uint32_t_u_u((func_21(func_27(&g_16, l_13), (~(safe_add_func_int8_t_s_s(0x86, (((safe_lshift_func_int16_t_s_u((g_131[0] == (void*)0), 3)) , &g_131[0]) == l_134)))), l_135, g_133, g_16) == (*l_135)), g_16)))) ^ g_133))) != l_13), g_636, g_157[1][5]) , (*l_135)))), l_13, l_13);
     return (*l_135);
 }
  static int32_t * func_2(uint32_t p_3, uint32_t p_4, int32_t p_5) {
     int32_t *l_960 = &g_34;
     return l_960;
 }
  static uint32_t func_6(int8_t p_7) {
     int32_t *l_957[3];
     int32_t **l_958 = (void*)0;
     int32_t **l_959 = &l_957[2];
     int i;
     (*l_959) = l_957[2];
     return p_7;
 }
  static uint8_t func_8(int16_t p_9, uint32_t p_10, uint32_t p_11, int32_t p_12) {
     uint32_t l_669 = 0x2E5A9F17;
     return (*g_635);
 }
  static uint16_t func_14(uint16_t p_15) {
     int16_t *l_172 = &g_51;
     int16_t *l_173 = &g_51;
     uint32_t l_175[1][6] = {{0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE,0xAE77BACE}};
     int16_t l_177 = (-1);
     uint8_t *l_178[1];
     int32_t l_179 = 0xFA26938D;
     uint32_t ***l_185 = &g_183;
     int16_t **l_188 = (void*)0;
     uint32_t ****l_193 = &g_182[3];
     uint8_t l_198[5];
     int32_t l_238 = 0x8E098A7A;
     int32_t *l_243 = &l_179;
     uint32_t *****l_403 = &g_320;
     if ((((g_38 >= (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_157[1][5] == (safe_div_func_int32_t_s_s((g_16 || ((safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(p_15, ((safe_lshift_func_uint8_t_u_u((l_179 = (p_15 >= (((((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_172 == (l_173 = l_172)), (g_176 = ((p_15 , (+p_15)) , l_175[0][0])))), g_34)), 0xC3CA42F7)) && 0x16DB) == l_175[0][5]) || p_15) <= l_177))), p_15)) , p_15))) ^ p_15) , p_15), p_15)) || 0xA2B03852)), g_16))), 2)), l_177))) || l_179) & g_38))     {         uint32_t l_181 = 0x1807826B;         int16_t **l_187 = &g_132[6][3][5];         int16_t ***l_190 = &l_188;         uint32_t ****l_191[9] = {(void*)0,&l_185,&l_185,(void*)0,&l_185,&l_185,(void*)0,&l_185,&l_185};         uint8_t *l_202 = &l_198[2];         int32_t *l_242 = &l_179;         uint16_t l_401 = 0xEF64;         uint32_t *l_426[7][1];         uint16_t *l_515 = &g_329;         int32_t l_583 = (-10);         int16_t l_584 = 1;         uint16_t ***l_600 = &g_327;         int16_t l_659 = 1;         int i, j;         for (i = 0; i < 7; i++)         {             for (j = 0; j < 1; j++)                 l_426[i][j] = &g_399;         }         if (((*g_66) = ((!l_181) & (*g_66))))         {             return g_157[1][5];         }         else         {             uint32_t ****l_184 = (void*)0;             uint32_t ****l_186 = &g_182[4];             int16_t ***l_189 = &g_131[0];             (*l_186) = (l_185 = g_182[3]);             (*l_189) = (l_188 = l_187);         }         (*l_190) = (void*)0;         for (g_176 = 0; (g_176 <= 4); g_176 += 1)         {             uint32_t *****l_192[8][1] = {{&l_191[5]},{(void*)0},{&l_191[5]},{&l_191[5]},{(void*)0},{&l_191[5]},{&l_191[5]},{(void*)0}};             uint8_t *l_201[5] = {&l_198[2],&l_198[2],&l_198[2],&l_198[2],&l_198[2]};             uint16_t l_237[10] = {65535U,0xAB87,65535U,65535U,0xAB87,65535U,65535U,0xAB87,65535U,65535U};             int32_t **l_248 = &l_243;             int16_t l_278 = 0xCF4F;             int32_t l_382 = (-5);             int32_t l_383 = (-6);             int16_t ***l_385 = &l_188;             uint32_t *l_422 = &g_38;             uint16_t *l_516 = (void*)0;             uint16_t ***l_560 = &g_327;             int i, j;         }         if ((((void*)0 == (**l_600)) ^ ((8 ^ ((*g_276) = 3U)) & ((((**l_403) != ((safe_lshift_func_uint16_t_u_s(p_15, 1)) , (*g_320))) || ((((p_15 | (+(safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((p_15 , p_15), p_15)) , (*l_242)), l_659)))) != (*g_245)) && p_15) > 65535U)) , (*l_242)))))         {             int32_t *l_660 = &l_238;             int32_t **l_661 = &l_660;             (*l_661) = l_660;             for (g_81 = 0; (g_81 <= 8); g_81 += 1)             {                 int8_t l_662 = 0;                 return l_662;             }             return p_15;         }         else         {             int32_t **l_663 = &l_242;             (*l_663) = (void*)0;         }     }
 }
  static int32_t func_21(int32_t * p_22, uint32_t p_23, int32_t * p_24, uint32_t p_25, uint32_t p_26) {
     int16_t l_136 = (-1);
     int16_t ***l_137 = &g_131[0];
     uint32_t *l_139 = &g_38;
     uint32_t **l_138 = &l_139;
     int32_t *l_140 = &g_16;
     uint32_t *l_143[2];
     uint32_t **l_142 = &l_143[0];
     int16_t l_144 = 0x8226;
     int32_t l_149[5];
 lbl_152:     l_144 = (l_136 < (((((p_24 == p_22) , ((((p_26 , &g_131[0]) == l_137) >= (((*l_138) = &g_38) == ((*l_142) = (g_141 = &p_23)))) > (*l_140))) | (-8)) > (*l_140)) <= p_25));
     for (p_23 = 0;
 (p_23 == 36);
 p_23 = safe_add_func_int32_t_s_s(p_23, 1))     {         int32_t **l_150 = (void*)0;         int32_t **l_151 = &g_66;         l_149[2] = ((safe_mod_func_uint32_t_u_u(0x482E1C06, (*l_140))) || (*p_22));         (*l_151) = p_22;         if (p_23)             goto lbl_152;     }
     return (*l_140);
 }
  static int32_t * func_27(int32_t * p_28, int8_t p_29) {
     int32_t *l_33 = &g_16;
     for (p_29 = 0;
 p_29 < 2;
 p_29 += 1)     {         for (g_34 = 0; g_34 < 8; g_34 += 1)         {             for (g_38 = 0; g_38 < 9; g_38 += 1)             {                 g_65[p_29][g_34][g_38] = &l_33;             }         }     }
     return p_28;
 }
  static int32_t * func_30(int32_t * p_31) {
     return p_31;
 }
  static int32_t func_39(int32_t ** p_40, uint32_t p_41, uint32_t p_42, int32_t * p_43) {
     uint32_t *l_72[10];
     int i, j, k;
     for (i = 0;
 i < 10;
 i++)         l_72[i] = &g_38;
     return (*p_43);
 }
  static int32_t ** func_44(uint32_t p_45, int32_t * p_46) {
     return g_65[1][4][8];
 }
  int main (void) {
     platform_main_end(0,0);
 }
