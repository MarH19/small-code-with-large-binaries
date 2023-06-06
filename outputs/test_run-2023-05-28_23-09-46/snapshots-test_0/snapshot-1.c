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
 }
  __mbstate_t;
  typedef struct _G_fpos_t {
   __mbstate_t __state;
 }
  __fpos64_t;
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
 }
   static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 + si2);
 }
  static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 - si2);
 }
   static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
  static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
   static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
 }
  static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 + si2);
 }
  static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 - si2);
 }
   static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int16_t (safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
  static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static int16_t (safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
 }
    static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
  static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
   static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
       static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 + ui2;
 }
  static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 - ui2;
 }
   static uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
   static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
    static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 + ui2;
 }
  static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 - ui2;
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
  static int16_t g_34[8] = {
0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C};
  static uint8_t g_36[5][7] = {
};
  static uint8_t g_52 = 1U;
  static uint16_t g_66 = 0U;
  static uint8_t g_67 = 0U;
  static int32_t g_69 = 0x40913DB3;
  static int16_t g_83 = 0x0487;
  static int32_t g_95 = 0x54E6A768;
  static uint32_t g_96 = 0x6F2FD6C9;
  static int16_t **g_98 = (void*)0;
  static int8_t g_137[5] = {
1,1,1,1,1};
  static uint8_t g_141[6][2][10] = {
};
  static struct S0 g_213 = {
0xC9C70339};
  static int32_t * const *g_222[4] = {
&g_23,&g_23,&g_23,&g_23};
  static int32_t * const **g_221 = &g_222[3];
  static int16_t ** const *g_275 = &g_98;
  static int16_t *g_357 = (void*)0;
  static int16_t **g_356[2][3][5] = {
};
  static uint8_t *g_364[3][7] = {
};
  static uint8_t **g_363 = &g_364[1][2];
  static int16_t g_376 = 0xAB47;
  static int8_t g_390[3][3] = {
};
  static const int8_t *g_394 = &g_137[2];
  static const int8_t **g_393 = &g_394;
  static struct S0 g_411 = {
-6};
  static int8_t g_470 = 0x45;
  static uint16_t *g_476 = (void*)0;
  static int8_t **g_510 = (void*)0;
  static int8_t ***g_509 = &g_510;
  static int8_t ****g_508 = &g_509;
  static struct S0 *g_521 = &g_411;
  static const int32_t * const **g_676 = (void*)0;
  static uint16_t g_720 = 0xD661;
  static uint16_t **g_802 = &g_476;
  static const uint16_t *g_808 = &g_720;
  static const uint16_t **g_807 = &g_808;
  static const uint16_t ***g_806 = &g_807;
  static uint16_t ** const *g_939 = &g_802;
  static uint16_t ** const **g_938 = &g_939;
  static int32_t * func_12(int16_t p_13, const int8_t p_14, const int32_t * p_15, int16_t p_16);
  static int32_t * func_20(int32_t * const p_21);
  static uint8_t func_1(void) {
     int32_t **l_927 = &g_23;
     uint16_t **l_933 = &g_476;
     uint16_t *l_934 = &g_720;
     if ((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((**l_927), (1U ^ (249U || ((~((**l_927) | (0x9B46EB46 ^ (((*g_806) != l_933) == (((*l_934) = (**l_927)) > (**l_927)))))) == (**l_927)))))) == g_470), (**g_393))))     {         uint16_t ***l_937 = &g_802;         uint16_t ****l_936 = &l_937;         uint16_t *****l_935[8][7][2] = {{{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936}},{{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936}},{{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0}},{{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0}},{{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936}},{{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936}},{{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936}},{{(void*)0,&l_936},{(void*)0,(void*)0},{&l_936,&l_936},{&l_936,(void*)0},{(void*)0,&l_936},{(void*)0,&l_936},{(void*)0,(void*)0}}};         int i, j, k;         g_938 = (void*)0;     }
     else     {         for (g_52 = 22; (g_52 != 9); --g_52)         {             const int32_t *l_942[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};             int i;             g_26 = (l_942[1] = &g_27);             return (**g_363);         }     }
 }
  static int32_t * func_2(uint32_t p_3, int32_t * p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7) {
     for (g_19 = 0;
 (g_19 > 15);
 ++g_19)     {         int16_t l_890 = (-1);         const int32_t l_918[6][5][6] = {{{0x58BA64A3,0x9620694B,0x1B73B495,1,0xCB24DFAB,(-1)},{0xDDC61FB8,0xE87DFC7D,0xD304CF94,1,0x00C34CBE,1},{0xA4A39A87,(-1),1,0xFBAD997F,0x8C8214FF,0x0F57F269},{0x8C21E846,0xCB24DFAB,0x27F77073,0x3FBEE1CF,0x964DD32E,0x31C39EEC},{0x8307D135,4,0xAB454AA2,0x970CFC89,(-1),(-1)}},{{0xE20C4A90,0x00C34CBE,0x00C34CBE,0xE20C4A90,1,5},{(-1),0xB2EAAC24,(-2),0x9620694B,0xB3F061AA,1},{0xE3623D4A,0x8307D135,0xFD66DF76,1,0xB3F061AA,(-1)},{0x1B73B495,0xB2EAAC24,0xB5A2F216,0x136818FE,1,1},{0x0F57F269,0x00C34CBE,0x3FBEE1CF,0xEAA3FEA2,(-1),0x8370821D}},{{(-1),4,0xD1940A47,1,0x964DD32E,8},{8,0xE3623D4A,1,0x58BA64A3,0x9727AB4A,0x8DE389E2},{(-1),0x970CFC89,(-2),(-1),0xD304CF94,4},{(-1),0x8370821D,0xE3E59298,(-1),0xE3623D4A,0xC06A23EF},{0xD1940A47,0xE20C4A90,(-4),(-1),0x00C34CBE,0x8C21E846}},{{0xE1DEA056,0x9805DE2D,0x58BA64A3,8,0xBFCA3219,0x9038211E},{0xFBAD997F,0x478DBB22,0xB5A2F216,0x9727AB4A,0x9805DE2D,0xFBAD997F},{0x00C34CBE,0,0xC06A23EF,0xCB24DFAB,(-2),1},{0x9727AB4A,0x8370821D,0x964DD32E,0x340D4AD3,0xE0FCD5A5,0xDDC61FB8},{0x1B73B495,5,0x340D4AD3,5,0x1B73B495,1}},{{0x27F77073,(-2),0xD304CF94,0xB5A2F216,0xA4A39A87,0x136818FE},{0xFBAD997F,0x8307D135,0x3FBEE1CF,(-2),0x88B0ECD9,0x136818FE},{0x31C39EEC,0xFD66DF76,0xD304CF94,(-7),(-5),1},{0x88B0ECD9,(-1),0x340D4AD3,(-1),0x0F57F269,0xDDC61FB8},{0x9620694B,1,0x964DD32E,1,0x970CFC89,1}},{{0x8DE389E2,(-1),0xC06A23EF,8,0x12F21C99,0xFBAD997F},{8,0xE0FCD5A5,0xB5A2F216,0xDDC61FB8,0x88B0ECD9,0x9038211E},{0,1,0x58BA64A3,0x49A1DC99,0xDDC61FB8,0x8C21E846},{(-2),0xE3623D4A,(-4),9,1,0xC06A23EF},{(-1),5,0xE3E59298,1,0xFD66DF76,4}}};         const int8_t ***l_921 = &g_393;         const int8_t ****l_920 = &l_921;         const int8_t *****l_919 = &l_920;         int i, j, k;         (*p_5) = (safe_add_func_int32_t_s_s((*p_5), l_890));     }
     return p_5;
 }
  static uint16_t func_10(int32_t * p_11) {
     int32_t *l_48 = (void*)0;
     uint16_t l_599 = 0x3F55;
     int32_t l_608 = 0xD444DE94;
     const int32_t *l_636 = &g_27;
     int8_t *** const *l_655 = (void*)0;
     int8_t ** const *l_662[5];
     struct S0 **l_682[6];
     const int8_t l_686[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
     int32_t ****l_703 = (void*)0;
     int8_t *l_767 = &g_470;
     int32_t l_778 = 0x77C20780;
     int32_t l_792 = 0xCB60EA42;
     int32_t l_830 = 0x1B9E81CF;
     int i;
     for (i = 0;
 i < 5;
 i++)         l_662[i] = &g_510;
     for (i = 0;
 i < 6;
 i++)         l_682[i] = &g_521;
     for (g_19 = 7;
 (g_19 >= 2);
 g_19 -= 1)     {         uint8_t *l_35[8][10][3] = {{{&g_36[3][3],&g_36[4][2],(void*)0},{&g_36[1][4],&g_36[0][2],&g_36[3][4]},{(void*)0,&g_36[3][3],&g_36[4][3]},{(void*)0,&g_36[4][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[3][1],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[3][4]},{&g_36[4][3],&g_36[3][1],(void*)0},{&g_36[4][2],&g_36[4][3],(void*)0},{&g_36[4][3],&g_36[3][3],&g_36[4][5]}},{{&g_36[4][3],&g_36[4][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[4][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],(void*)0,(void*)0},{(void*)0,&g_36[3][1],&g_36[3][4]},{&g_36[3][1],&g_36[0][2],(void*)0},{&g_36[4][3],&g_36[0][2],&g_36[3][0]},{(void*)0,&g_36[3][1],&g_36[4][3]},{(void*)0,(void*)0,&g_36[4][3]},{&g_36[1][4],&g_36[4][3],&g_36[4][5]}},{{&g_36[3][3],&g_36[4][3],(void*)0},{(void*)0,&g_36[4][2],&g_36[4][3]},{&g_36[4][2],&g_36[3][3],&g_36[4][3]},{&g_36[4][3],&g_36[3][2],&g_36[4][3]},{&g_36[1][2],&g_36[3][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[2][4],&g_36[0][2],&g_36[4][0]},{&g_36[3][2],&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[0][2],(void*)0},{&g_36[2][4],&g_36[4][3],&g_36[4][3]}},{{&g_36[4][3],(void*)0,&g_36[4][3]},{&g_36[1][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[0][2],&g_36[1][0],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[1][5]},{&g_36[2][4],(void*)0,&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[1][0],&g_36[0][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]}},{{&g_36[3][3],&g_36[0][2],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[3][3],&g_36[1][5]},{&g_36[0][2],&g_36[3][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[0][2],(void*)0,&g_36[4][3]},{&g_36[3][2],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[3][3],(void*)0}},{{&g_36[3][3],(void*)0,&g_36[4][3]},{&g_36[4][3],(void*)0,&g_36[4][0]},{&g_36[1][0],&g_36[3][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[2][4],(void*)0,&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[1][3]},{&g_36[0][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[3][2],&g_36[4][3]},{&g_36[1][2],&g_36[3][3],&g_36[4][3]}},{{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[2][4],&g_36[0][2],&g_36[4][0]},{&g_36[3][2],&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[0][2],(void*)0},{&g_36[2][4],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],(void*)0,&g_36[4][3]},{&g_36[1][2],&g_36[4][3],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[0][2],&g_36[1][0],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]}},{{&g_36[4][3],&g_36[4][3],&g_36[1][5]},{&g_36[2][4],(void*)0,&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[1][0],&g_36[0][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]},{&g_36[3][3],&g_36[0][2],&g_36[4][3]},{(void*)0,&g_36[4][3],&g_36[4][3]},{&g_36[3][2],&g_36[3][3],&g_36[1][5]},{&g_36[0][2],&g_36[3][2],&g_36[4][3]},{&g_36[4][3],&g_36[4][3],&g_36[4][3]}}};         uint16_t *l_63 = (void*)0;         uint16_t *l_64 = (void*)0;         uint16_t *l_65[5];         struct S0 *l_518 = (void*)0;         int16_t **l_522 = &g_357;         int32_t l_524 = 7;         int8_t ** const l_559 = (void*)0;         int8_t ** const *l_558[1][8][1];         int8_t ** const **l_557[4];         int8_t ** const ***l_556 = &l_557[2];         uint32_t **l_561 = (void*)0;         int32_t l_609 = 0x1A15CCAE;         int32_t **l_644 = &g_23;         int i, j, k;         for (i = 0; i < 5; i++)             l_65[i] = &g_66;         for (i = 0; i < 1; i++)         {             for (j = 0; j < 8; j++)             {                 for (k = 0; k < 1; k++)                     l_558[i][j][k] = &l_559;             }         }         for (i = 0; i < 4; i++)             l_557[i] = &l_558[0][7][0];     }
     if (((*l_636) && (**g_363)))     {         for (l_608 = 0; (l_608 != 0); l_608 = safe_add_func_int32_t_s_s(l_608, 7))         {             int32_t **l_647[1][1][2];             int i, j, k;             for (i = 0; i < 1; i++)             {                 for (j = 0; j < 1; j++)                 {                     for (k = 0; k < 2; k++)                         l_647[i][j][k] = &l_48;                 }             }             g_26 = p_11;         }     }
     else     {         int8_t ****l_654[6][9][4] = {{{&g_509,&g_509,(void*)0,&g_509},{&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,&g_509,&g_509},{&g_509,&g_509,(void*)0,&g_509},{&g_509,&g_509,&g_509,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0}},{{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,(void*)0,&g_509},{(void*)0,&g_509,(void*)0,(void*)0},{&g_509,&g_509,&g_509,&g_509},{&g_509,(void*)0,&g_509,(void*)0},{&g_509,(void*)0,&g_509,&g_509}}};         int32_t l_656 = 0xAE2442DF;         int32_t l_663 = (-1);         int32_t *l_669 = &l_608;         const int32_t * const *l_674 = &g_26;         const int32_t * const **l_673 = &l_674;         uint8_t l_698[5] = {9U,9U,9U,9U,9U};         int8_t *l_717 = &g_19;         int8_t **l_716 = &l_717;         struct S0 l_743 = {0};         struct S0 l_744[4][3] = {{{0xE7BCC59F},{0x282494DB},{0x8ACD1B99}},{{0xE7BCC59F},{0xE7BCC59F},{0x282494DB}},{{1},{0x282494DB},{0x282494DB}},{{0x282494DB},{-1},{0x8ACD1B99}}};         uint16_t l_771 = 0x7BC0;         int32_t l_772 = (-1);         uint8_t l_773[6][6][4] = {{{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U},{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U}},{{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U},{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U}},{{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U},{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U},{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0}},{{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U},{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U},{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U}},{{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U},{0x1B,0xA4,249U,0x6C},{0x1B,2U,9U,2U}},{{0xEC,0x6C,249U,0xA4},{0xEC,1U,9U,0U},{0x1B,0U,249U,0x47},{0x1B,0xF0,9U,0xF0},{0xEC,0x47,249U,0U},{0xEC,0U,9U,1U}}};         uint32_t l_822 = 2U;         struct S0 **l_838 = &g_521;         int32_t **l_855 = &g_23;         int i, j, k;         (*l_669) = ((***g_221) = (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((l_654[5][3][0] == l_655), (l_656 >= (safe_div_func_uint16_t_u_u((*l_636), (~(safe_sub_func_uint8_t_u_u(((l_663 = (((*g_508) = (*g_508)) != l_662[4])) < (!g_36[4][3])), ((0 <= (((g_19 = ((((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_656 | (*l_636)) || 0x7973), g_411.f0)), 7U)) | l_656) > g_34[0]) < g_19)) ^ l_656) > (*l_636))) == l_656))))))))), (**g_393))), 4)));         if (((void*)0 != &g_521))         {             int8_t l_679 = 7;             const int32_t *l_725[10][6][2] = {{{(void*)0,(void*)0},{&l_608,&l_663},{&l_663,&l_663},{&l_608,(void*)0},{(void*)0,&g_24[0]},{&l_663,&l_608}},{{&l_608,&l_663},{&g_69,&l_663},{&g_69,&l_663},{&l_608,&l_608},{&l_663,&g_24[0]},{(void*)0,&l_608}},{{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663}},{{(void*)0,&g_24[7]},{(void*)0,&l_663},{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608}},{{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]}},{{(void*)0,&l_663},{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608}},{{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]},{(void*)0,&l_663}},{{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608}},{{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]},{(void*)0,&l_663},{(void*)0,&l_663}},{{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608}}};             int16_t l_736 = 0xB3E5;             int32_t l_737 = 0x0481B764;             int i, j, k;             for (g_66 = 27; (g_66 < 23); --g_66)             {                 g_23 = (**g_221);             }             if (((*p_11) = 0x07AB5164))             {                 int32_t **l_672 = &l_48;                 const int32_t * const ***l_675[7][10] = {{&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,(void*)0,&l_673},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,(void*)0},{&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,(void*)0,&l_673,(void*)0},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673},{(void*)0,&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673},{(void*)0,&l_673,(void*)0,(void*)0,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673}};                 int i, j;                 (*l_672) = &l_663;                 g_676 = l_673;             }             else             {                 int32_t **l_683[8] = {&l_669,&l_669,&l_48,&l_669,&l_669,&l_48,&l_669,&l_669};                 int32_t *** const l_705 = &l_683[5];                 int32_t *** const *l_704[5][2] = {{&l_705,(void*)0},{&l_705,&l_705},{(void*)0,(void*)0},{(void*)0,&l_705},{&l_705,(void*)0}};                 int i, j;                 if ((safe_add_func_int16_t_s_s((((l_669 = func_12(l_679, ((((safe_add_func_uint16_t_u_u(0x79FB, (*l_636))) >= 1U) != 6U) || (l_682[5] == &g_521)), func_20((p_11 = p_11)), (***l_673))) == (*l_674)) != (*l_636)), 0x8639)))                 {                     int8_t *l_685 = (void*)0;                     int8_t **l_684 = &l_685;                     int32_t l_689 = (-7);                     int32_t l_696[3];                     int32_t l_697 = (-1);                     int16_t *l_718 = &g_34[6];                     uint16_t l_719 = 65535U;                     int32_t *l_721 = (void*)0;                     int i;                     for (i = 0; i < 3; i++)                         l_696[i] = 1;                     g_26 = func_12((((**g_508) = l_684) != &l_685), l_686[6], func_20((**g_221)), l_679);                     (*g_521) = (*g_521);                     for (l_663 = 0; (l_663 < 3); l_663 = safe_add_func_int32_t_s_s(l_663, 4))                     {                         uint16_t **l_691 = (void*)0;                         uint16_t ***l_690 = &l_691;                         if (l_689)                             break;                         (*l_690) = (void*)0;                         (*l_669) = (((safe_mod_func_int8_t_s_s((((*g_393) != &l_679) < ((0x41AF >= ((l_689 = (&g_96 == (void*)0)) & l_679)) ^ ((((safe_div_func_int8_t_s_s((l_696[1] = 0), 0x94)) <= (*p_11)) > 0xAD) < 1U))), 0x27)) >= l_697) && (***l_673));                         if ((***g_221))                             continue;                     }                     l_721 = func_12(l_698[1], ((((safe_mod_func_int32_t_s_s((l_679 <= ((safe_mod_func_uint32_t_u_u(g_27, (*g_26))) && ((l_703 == l_704[3][1]) ^ (safe_mod_func_int16_t_s_s((65535U | ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0, (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((*l_718) = ((**g_508) != l_716)) <= (***l_673)) < l_696[2]), 0xAD9D272E)), (*p_11))))), 0x381DCDA5)) == (*p_11))), l_696[1]))))), 4294967291U)) | (**l_674)) | l_719) == g_720), &l_696[1], l_679);                 }                 else                 {                     int16_t ****l_722 = (void*)0;                     int32_t **l_723 = (void*)0;                     int32_t **l_724 = &l_669;                     g_275 = &g_356[0][0][0];                     (*l_724) = (**g_221);                 }             }             l_725[9][5][1] = (**l_673);             for (g_376 = 0; (g_376 >= (-18)); g_376--)             {                 uint32_t l_728 = 0x03766958;                 int32_t l_729 = 0x035BBBF3;                 int32_t l_732 = (-1);                 int16_t *l_733 = &g_83;                 l_737 = ((*p_11) = (((l_729 = (g_96 = l_728)) & ((safe_rshift_func_int8_t_s_u((l_732 = (&l_599 == (void*)0)), ((**g_363) = (**l_674)))) & ((((*l_717) = 0xF5) <= (((g_470 <= l_728) < ((*l_733) = (*l_636))) < (safe_rshift_func_uint8_t_u_u(((void*)0 != (*g_275)), l_736)))) < (**g_393)))) > 3U));                 return (**l_674);             }         }         else         {             struct S0 l_738 = {0xDA672279};             (*g_521) = l_738;         }         for (g_96 = 0; (g_96 < 55); g_96++)         {             int8_t *****l_745 = &l_654[1][5][1];             int32_t l_762 = 0xDC4DBBE6;             int32_t *l_770[6][10] = {{&l_663,&g_95,(void*)0,(void*)0,&g_95,&l_663,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]},{&l_762,&g_24[1],&g_95,&g_95,&g_24[1],&l_762,&g_24[1],&g_95,&g_95,&g_24[1]}};             uint16_t *l_774 = &l_599;             uint8_t *l_775 = &g_67;             uint8_t l_776 = 255U;             int16_t *l_777 = &g_34[0];             uint32_t l_786[1][6][2] = {{{0x50F6A5B7,0x50F6A5B7},{0U,0x50F6A5B7},{0x50F6A5B7,0U},{0x50F6A5B7,0x50F6A5B7},{0U,0x50F6A5B7},{0x50F6A5B7,0U}}};             struct S0 **l_787 = &g_521;             int i, j, k;             for (g_213.f0 = 29; (g_213.f0 == (-14)); g_213.f0--)             {                 l_744[0][0] = ((*g_521) = l_743);                 (*g_521) = (*g_521);                 l_745 = &g_508;             }             if ((safe_mod_func_int16_t_s_s(((*l_777) = (safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s((((*l_775) = ((**l_674) == (0x9F <= (((*l_774) = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((**g_363) = ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_762, (safe_div_func_int16_t_s_s(3, ((**l_674) | (safe_sub_func_uint32_t_u_u(((-1) | (l_767 != (void*)0)), (safe_mod_func_uint8_t_u_u(((l_608 = (l_663 = (***l_673))) != g_66), l_771))))))))), (**l_674))) && (*l_636))) < (-7)), l_772)), g_19)) < l_773[4][5][1])) | (***l_673))))) || (**g_363)), (***g_221))) ^ (**l_674)) & (*l_636)), 0x8A1C)) & g_27), l_776))), l_778)))             {                 int8_t l_779 = 0;                 int8_t ***l_805 = &l_716;                 int16_t *l_817 = &g_83;                 (*l_669) = (l_779 < ((*l_636) || ((safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((*p_11) || l_786[0][4][1]), ((l_787 != (void*)0) == (safe_mod_func_int16_t_s_s(((**l_674) < ((*l_777) = ((l_792 = (0U >= (safe_add_func_int32_t_s_s(((0xF5 && (**g_393)) == 0xE651), (*g_23))))) || 0xA6557FA8))), l_779))))) != (**l_674)), 4294967292U)) != 0x0C2D)));                 for (l_762 = 0; (l_762 <= (-17)); l_762 = safe_sub_func_uint32_t_u_u(l_762, 4))                 {                     const int8_t l_809[7] = {0xE2,0xE2,1,0xE2,0xE2,1,0xE2};                     int i;                     (*g_23) = (safe_sub_func_int32_t_s_s((*p_11), ((((safe_add_func_int32_t_s_s(((l_779 < (l_772 = (!((safe_lshift_func_int8_t_s_s(0, 6)) ^ ((*l_777) = ((g_802 = &g_476) == (void*)0)))))) != (safe_div_func_int16_t_s_s((((*g_508) = l_805) != (void*)0), l_779))), (((g_806 != (void*)0) || (**g_363)) != (*l_669)))) != 1) ^ l_809[4]) & 255U)));                     return (**g_807);                 }                 for (g_376 = (-5); (g_376 <= (-29)); g_376 = safe_sub_func_int32_t_s_s(g_376, 3))                 {                     int16_t ***l_812 = &g_356[1][0][2];                     for (g_720 = 0; (g_720 <= 2); g_720 += 1)                     {                         int i, j, k;                         if (l_773[(g_720 + 2)][(g_720 + 1)][(g_720 + 1)])                             break;                         if (l_773[(g_720 + 3)][g_720][g_720])                             continue;                     }                     if ((**l_674))                         continue;                     g_26 = (**l_673);                     (*l_812) = (*g_275);                 }                 for (l_743.f0 = 0; (l_743.f0 < (-3)); --l_743.f0)                 {                     uint32_t l_818 = 0xC58DE708;                     int32_t l_819 = 0xA188CD0D;                     (*g_23) = (((safe_sub_func_uint16_t_u_u(((*l_774) = ((((void*)0 == l_817) && (((void*)0 != &l_698[0]) == (*g_26))) || ((((g_52 && (**l_674)) <= ((l_818 = ((void*)0 != &g_509)) >= 0x50FAAB23)) != 0x6E509290) != l_779))), 65534U)) >= (***l_673)) >= l_819);                 }             }             else             {                 return (*g_808);             }             if ((*p_11))                 continue;         }         if ((safe_mod_func_int16_t_s_s(l_822, 0xD60C)))         {             uint32_t l_825 = 0xE0C40F3A;             struct S0 ***l_839[10][3][8] = {{{&l_682[5],&l_682[5],&l_838,&l_838,(void*)0,&l_682[5],&l_838,&l_682[5]},{&l_682[5],&l_682[2],&l_682[5],&l_682[5],&l_682[5],(void*)0,(void*)0,(void*)0},{&l_682[3],&l_682[4],&l_682[1],&l_838,(void*)0,&l_682[5],(void*)0,&l_682[5]}},{{&l_838,(void*)0,&l_682[5],&l_838,(void*)0,&l_838,&l_682[5],&l_838},{(void*)0,&l_682[5],&l_682[5],&l_682[5],&l_838,&l_682[5],&l_682[3],&l_682[0]},{(void*)0,&l_838,&l_682[5],&l_838,&l_682[5],&l_838,&l_682[4],(void*)0}},{{&l_838,(void*)0,&l_682[5],&l_682[5],&l_838,&l_682[5],(void*)0,&l_682[5]},{&l_682[5],&l_682[2],&l_682[5],(void*)0,&l_682[5],(void*)0,&l_682[5],&l_838},{&l_838,(void*)0,&l_682[5],(void*)0,&l_838,&l_682[5],&l_838,&l_682[5]}},{{(void*)0,&l_682[5],(void*)0,&l_682[5],(void*)0,(void*)0,&l_682[5],(void*)0},{&l_682[5],&l_682[5],&l_682[0],(void*)0,&l_682[5],&l_838,&l_838,&l_682[5]},{&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_838,(void*)0,&l_682[5],&l_682[5]}},{{&l_682[5],&l_682[5],&l_838,(void*)0,&l_682[4],(void*)0,&l_838,(void*)0},{&l_838,&l_838,&l_682[2],&l_682[5],(void*)0,&l_682[5],&l_682[0],&l_682[5]},{(void*)0,&l_682[0],&l_838,(void*)0,&l_838,&l_682[4],&l_838,&l_682[5]}},{{(void*)0,&l_682[5],&l_682[5],&l_682[0],&l_682[5],&l_682[5],&l_682[5],&l_682[5]},{(void*)0,(void*)0,&l_682[5],(void*)0,(void*)0,&l_682[3],&l_682[5],&l_682[5]},{&l_838,&l_682[4],&l_682[5],&l_838,&l_682[1],&l_682[5],&l_682[4],&l_682[2]}},{{(void*)0,&l_838,&l_838,&l_838,&l_838,&l_682[5],&l_682[1],&l_682[3]},{&l_838,&l_682[5],&l_682[5],&l_838,&l_682[5],&l_838,&l_682[2],&l_682[5]},{(void*)0,&l_682[5],&l_838,&l_838,&l_682[5],&l_682[5],(void*)0,&l_682[5]}},{{(void*)0,&l_682[5],&l_682[5],&l_838,&l_682[5],&l_838,&l_682[5],&l_682[5]},{&l_682[5],&l_682[5],(void*)0,&l_682[5],&l_838,&l_682[5],&l_838,&l_838},{&l_838,&l_682[5],(void*)0,&l_838,&l_682[5],(void*)0,&l_838,(void*)0}},{{&l_682[0],&l_838,(void*)0,&l_682[5],&l_682[2],&l_682[5],&l_682[5],&l_682[5]},{&l_682[2],&l_682[5],&l_682[5],&l_682[5],(void*)0,(void*)0,(void*)0,&l_682[5]},{&l_838,&l_682[5],&l_838,&l_838,&l_838,&l_682[5],&l_682[2],&l_838}},{{&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_838,&l_838,&l_682[1],(void*)0},{(void*)0,&l_682[5],&l_838,(void*)0,&l_682[5],&l_682[5],&l_682[4],&l_838},{&l_682[3],&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_682[5],&l_682[5]}}};             uint32_t l_840 = 4294967295U;             int32_t *l_841 = &g_69;             int32_t *l_842 = (void*)0;             int32_t *l_843[6][3] = {{&l_792,&l_792,&l_792},{(void*)0,&l_830,(void*)0},{&l_792,&l_792,&l_792},{(void*)0,&l_830,(void*)0},{&l_792,&l_792,&l_792},{(void*)0,&l_830,(void*)0}};             int i, j, k;             l_772 = ((*l_841) = (safe_sub_func_uint16_t_u_u(l_825, (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_830 ^ (0x9AA1D503 || (safe_lshift_func_int16_t_s_u(((*l_636) <= ((*p_11) = ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((&l_825 == &l_825) >= (*l_636)), (safe_unary_minus_func_uint32_t_u((((l_682[5] = l_838) == (void*)0) <= l_825))))), (-8))) | l_825))), l_825)))), l_840)), 13)))));         }         else         {             int32_t l_852 = 0xB1964CA4;             int32_t l_853[3][4][2] = {{{0x47F83D1B,0x3094A6A2},{0,0},{0,0x3094A6A2},{0x47F83D1B,0x24B7BBD2}},{{0x3094A6A2,0x24B7BBD2},{0x47F83D1B,0x3094A6A2},{0,0},{0,0x3094A6A2}},{{0x47F83D1B,0x24B7BBD2},{0x3094A6A2,0x24B7BBD2},{0x47F83D1B,0x3094A6A2},{0,0}}};             int32_t **l_854[10][5] = {{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_48,&l_48,&l_48,&l_48,&l_48}};             int16_t l_872 = 0x83C7;             struct S0 l_880 = {0x431A4752};             int i, j, k;             if ((((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0x822B, ((l_852 || (((l_853[1][2][0] = 0U) == (((p_11 = &g_95) == &l_830) >= (((0xA32BBDF2 & ((void*)0 != l_854[0][3])) != (l_855 == l_854[9][4])) & (**g_393)))) & (**g_363))) | 1U))), (*l_636))), (*l_669))), (***g_221))) > (*l_636)) ^ (*g_394)))             {                 int32_t * const l_859 = (void*)0;                 int8_t *l_869 = (void*)0;                 int8_t ** const l_868 = &l_869;                 int8_t ** const *l_867 = &l_868;                 int32_t l_876 = 1;                 for (g_19 = 11; (g_19 > (-6)); g_19--)                 {                     int8_t ** const **l_866[8][8] = {{&l_662[4],&l_662[1],&l_662[4],(void*)0,&l_662[2],&l_662[4],&l_662[4],(void*)0},{&l_662[4],&l_662[2],&l_662[0],&l_662[4],&l_662[4],&l_662[4],&l_662[0],&l_662[2]},{&l_662[4],(void*)0,&l_662[4],(void*)0,&l_662[4],&l_662[0],(void*)0,&l_662[1]},{(void*)0,&l_662[4],&l_662[3],&l_662[4],&l_662[4],&l_662[4],(void*)0,&l_662[1]},{&l_662[1],&l_662[4],&l_662[4],&l_662[0],&l_662[4],&l_662[0],&l_662[0],&l_662[4]},{&l_662[4],&l_662[0],&l_662[0],&l_662[4],&l_662[0],&l_662[4],&l_662[4],&l_662[1]},{&l_662[1],(void*)0,&l_662[4],&l_662[4],&l_662[4],&l_662[3],&l_662[4],(void*)0},{&l_662[1],(void*)0,&l_662[0],&l_662[4],(void*)0,&l_662[4],(void*)0,&l_662[4]}};                     int16_t **l_874 = &g_357;                     const int32_t l_875 = 1;                     int i, j;                     for (l_608 = 0; (l_608 <= 3); l_608 += 1)                     {                         int i, j;                         (*l_855) = p_11;                     }                     if ((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967289U, g_24[8])), ((0x21 > ((l_867 = (*g_508)) != (void*)0)) ^ ((safe_add_func_uint32_t_u_u((l_872 == (+(l_874 != (void*)0))), (((*p_11) > g_96) < l_875))) > (*l_669))))) < l_876) || 0x2AE596BC))                     {                         (*l_855) = func_20(p_11);                     }                     else                     {                         int8_t l_877 = (-1);                         return l_877;                     }                     for (l_608 = (-20); (l_608 != (-14)); l_608 = safe_add_func_int8_t_s_s(l_608, 1))                     {                         return l_875;                     }                 }             }             else             {                 struct S0 l_881 = {0x91BD7F8A};                 struct S0 l_882 = {0xE625D4F8};                 l_882 = (l_881 = ((*g_521) = l_880));                 return (**g_807);             }         }     }
 }
  static int32_t * func_12(int16_t p_13, const int8_t p_14, const int32_t * p_15, int16_t p_16) {
     return &g_24[7];
 }
  static int32_t * func_20(int32_t * const p_21) {
     return g_23;
 }
       int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     for (i = 0;
 i < 10;
 i++)     {         transparent_crc(g_24[i], "g_24[i]", print_hash_value);         if (print_hash_value) printf("index = [%d]\n", i);     }
     for (i = 0;
 i < 8;
 i++)     {         transparent_crc(g_34[i], "g_34[i]", print_hash_value);         if (print_hash_value) printf("index = [%d]\n", i);     }
     for (i = 0;
 i < 5;
 i++)     {         for (j = 0; j < 7; j++)         {             transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }     }
     for (i = 0;
 i < 5;
 i++)     {         transparent_crc(g_137[i], "g_137[i]", print_hash_value);         if (print_hash_value) printf("index = [%d]\n", i);     }
     for (i = 0;
 i < 3;
 i++)     {         for (j = 0; j < 3; j++)         {             transparent_crc(g_390[i][j], "g_390[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }     }
 }