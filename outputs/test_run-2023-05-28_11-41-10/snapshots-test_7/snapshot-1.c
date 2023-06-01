 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef long int __off_t;
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
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
   static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 + si2);
 }
  static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 - si2);
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
  static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
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
  static uint8_t (safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
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
  crc32_byte ((val>>8) & 0xff);
  crc32_byte ((val>>16) & 0xff);
  crc32_byte ((val>>24) & 0xff);
 }
  static void transparent_crc (uint32_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);  }
 }
  static uint32_t g_22 = 0x67457993;
  static int32_t g_71 = 0x0E5C5CC9;
  static int32_t *g_129 = &g_71;
  static int32_t **g_128 = &g_129;
  static uint32_t g_174[4][8] = {
{0xEA3A65F8,4294967290U,4294967290U,0xEA3A65F8,1U,9U,1U,0xEA3A65F8}
,{4294967290U,1U,4294967290U,9U,4294967295U,4294967295U,9U,4294967290U}
,{1U,1U,4294967295U,9U,0x0D40F6A6,9U,4294967295U,1U}
,{1U,4294967290U,9U,4294967295U,4294967295U,9U,4294967290U,1U}
};
  static int32_t g_213 = 0xE5D540DA;
  static uint16_t g_214[6] = {
65527U,0x2E21,0x2E21,65527U,0x2E21,0x2E21};
  static uint16_t g_265[1] = {
0xD5EF};
  static uint16_t g_288 = 0x11CA;
  static uint32_t g_312 = 0x6D2BC901;
  static uint16_t g_328 = 65534U;
  static uint32_t g_331[8][10][3] = {
{{4294967295U,0xFD3BF148,0xFA5FF65F},{4294967289U,4294967295U,4294967295U},{4294967295U,0x2C104672,0U},{0xCFCF3885,4294967295U,0U},{0x92DC4278,4294967295U,0x5D0FB07C},{4294967295U,0xF7C64EC2,0U},{0U,4294967295U,0x8F18FD03},{8U,4294967295U,0x921B171C},{0x2D4D6344,0x2C104672,0xC3DCDBF5},{0U,4294967289U,0x1111568D}}
,{{4294967295U,4294967290U,4294967286U},{0U,0xFF1E0223,4294967294U},{5U,1U,1U},{0xE1FE8385,9U,0x494CCD08},{4294967295U,4294967289U,0x5D0FB07C},{1U,4294967293U,4294967295U},{0xCFCF3885,0x1CDC0773,4294967295U},{0xBE30F185,0xB32E1C42,0x5D0FB07C},{0xC3DCDBF5,0xFD3BF148,0x494CCD08},{0U,4294967295U,1U}}
,{{4294967290U,4294967295U,4294967294U},{0x2D4D6344,0x18D7C328,4294967286U},{4294967295U,0x113F0E6E,0x1111568D},{0xC3DCDBF5,9U,0xC3DCDBF5},{0x92DC4278,0xFF1E0223,0x921B171C},{0U,4294967295U,0x8F18FD03},{0xE1FE8385,8U,0U},{0x58814E8A,0x113F0E6E,0x5D0FB07C},{0xE1FE8385,0x2C104672,0U},{0U,0x1CDC0773,0U}}
,{{0x92DC4278,0U,4294967289U},{0xC3DCDBF5,0x8F18FD03,0U},{4294967295U,0xB32E1C42,1U},{0x2D4D6344,4294967295U,0xB27480D8},{4294967290U,0x18D7C328,0x48461366},{0U,1U,0x1CDC0773},{0xC3DCDBF5,8U,4294967286U},{0xBE30F185,1U,0x921B171C},{0xCFCF3885,1U,9U},{1U,8U,0x80B6D513}}
,{{4294967295U,1U,4294967289U},{0xE1FE8385,0x18D7C328,4294967295U},{5U,4294967295U,0U},{0U,0xB32E1C42,0xE1FE8385},{4294967295U,0x8F18FD03,0x80B6D513},{0U,0U,0x8F18FD03},{0x2D4D6344,0x1CDC0773,4294967294U},{8U,0x2C104672,0x48461366},{0U,0x113F0E6E,4294967295U},{4294967295U,8U,0x48461366}}
,{{0x92DC4278,4294967295U,4294967294U},{0xCFCF3885,0xFF1E0223,0x8F18FD03},{4294967289U,9U,0x80B6D513},{4294967295U,0x113F0E6E,0xE1FE8385},{1U,0x18D7C328,0U},{0U,4294967295U,4294967295U},{0U,4294967295U,4294967289U},{4294967286U,0xFD3BF148,0x80B6D513},{0U,0xB32E1C42,9U},{4294967290U,0x1CDC0773,0x921B171C}}
,{{4294967290U,4294967293U,4294967286U},{0U,4294967289U,0x1CDC0773},{4294967286U,9U,0x48461366},{0U,1U,0xB27480D8},{0U,0xFF1E0223,1U},{1U,4294967290U,0U},{0U,4294967295U,4294967295U},{4294967295U,0xFA5FF65F,0xFD3BF148},{0x48461366,1U,1U},{0xFF1E0223,9U,0xC9D16F30}}
,{{0x1CDC0773,8U,0xCFCF3885},{1U,9U,0x2D4D6344},{0U,1U,0x1CE63495},{0x61E61F33,0xFA5FF65F,0x1111568D},{0x8F18FD03,4294967295U,0x113F0E6E},{0x1CDC0773,0xBE30F185,4294967295U},{0x19938994,1U,0x494CCD08},{0xC3DCDBF5,4294967293U,9U},{0x7342C774,0x92DC4278,0U},{4294967295U,4294967295U,0xC9D16F30}}
};
  static int32_t ***g_335 = &g_128;
  static int32_t ****g_334 = &g_335;
  static uint32_t g_401 = 0xECD72320;
  static const int8_t g_436 = 0x99;
  static int32_t g_501[5] = {
(-5),(-5),(-5),(-5),(-5)};
  static int8_t g_502 = 0xB3;
  static int16_t g_503 = 0;
  static uint16_t g_504 = 1U;
  static uint32_t g_525 = 4294967295U;
  static int32_t g_557 = 0x8BE1264C;
  static int16_t g_582 = 0xF1BB;
  static uint16_t g_654 = 3U;
  static int32_t g_663 = 4;
  static int8_t g_664 = 9;
  static uint8_t g_665[8] = {
1U,0xEB,0xEB,1U,0xEB,0xEB,1U,0xEB};
  static int32_t g_741 = 0xDEF18002;
  static int32_t g_761 = (-1);
  static uint8_t g_779[7] = {
0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C};
  static int32_t g_808 = 0xC81FD44C;
  static int32_t g_943 = (-1);
  static int8_t g_978[2] = {
0,0};
  static int32_t func_8(uint16_t p_9, int8_t p_10);
  static int16_t func_12(int16_t p_13, uint32_t p_14);
  static int16_t func_15(uint8_t p_16);
  static uint8_t func_17(int16_t p_18, int16_t p_19, uint8_t p_20);
  static uint8_t func_23(int8_t p_24, uint32_t p_25);
  static const int32_t func_26(uint32_t p_27, int8_t p_28, uint16_t p_29, uint32_t p_30);
  static int32_t * func_51(int32_t * p_52);
  static uint8_t func_1(void) {
     uint32_t l_11 = 0x281D21F1;
     uint32_t l_21[10][5] = {{0U,0U,0x145714FF,0U,0U},{0xE76373A4,0U,0xE76373A4,0xE76373A4,0U},{0U,0xE76373A4,0xE76373A4,0U,0xE76373A4},{0U,0U,0x145714FF,0U,0U},{0xE76373A4,0U,0xE76373A4,0xE76373A4,0U},{0U,0xE76373A4,0xE76373A4,0U,0xE76373A4},{0U,0U,0x145714FF,0U,0U},{0xE76373A4,0U,0xE76373A4,0xE76373A4,0U},{0U,0xE76373A4,0xE76373A4,0U,0xE76373A4},{0U,0U,0x145714FF,0U,0U}};
     uint32_t l_767 = 0x07C83BC1;
     const int8_t l_778 = 0xB6;
     int32_t l_807 = 0x24D77F87;
     int32_t *l_827 = &l_807;
     uint8_t l_931 = 0xB0;
     return g_265[0];
 }
  static uint8_t func_23(int8_t p_24, uint32_t p_25) {
     uint16_t l_549 = 1U;
     int32_t *l_554 = &g_71;
     int32_t *l_555 = (void*)0;
     int32_t *l_556 = &g_557;
     (**g_128) |= 1;
     (*l_556) &= ((safe_sub_func_uint32_t_u_u(l_549, (safe_mod_func_uint8_t_u_u((((p_24 , (g_214[4] , (safe_sub_func_uint32_t_u_u(((((l_554 != l_554) , p_25) || ((-1) < (-1))) , ((****g_334) || (***g_335))), g_331[0][9][1])))) && p_24) , g_501[1]), g_71)))) > (*l_554));
     return g_331[0][9][1];
 }
  static const int32_t func_26(uint32_t p_27, int8_t p_28, uint16_t p_29, uint32_t p_30) {
     int32_t l_99[7][9][4] = {{{(-1),2,(-1),1},{1,0xA8E8ED7A,0x3A7432CF,0x09B68504},{(-1),0x34DBBD83,0x0802EBDD,1},{0xC7DF6318,(-8),0x15133AA3,1},{0xC7DF6318,0x0802EBDD,0x0802EBDD,0xC7DF6318},{(-1),2,0x3A7432CF,0x36D3DFDF},{1,(-8),(-1),0x09B68504},{(-1),1,0x0802EBDD,0x09B68504},{0xF43755EC,(-8),0xAC0CBF82,0x36D3DFDF}},{{0xC7DF6318,2,(-6),0xC7DF6318},{(-1),0x0802EBDD,0x3A7432CF,1},{0x36D3DFDF,(-8),0x3A7432CF,1},{(-1),0x34DBBD83,(-6),0x09B68504},{0xC7DF6318,0xA8E8ED7A,0xAC0CBF82,1},{0xF43755EC,2,0x0802EBDD,0xF43755EC},{(-1),2,(-1),1},{1,0xA8E8ED7A,0x3A7432CF,0x09B68504},{(-1),0x34DBBD83,0x0802EBDD,1}},{{0xC7DF6318,1,0,0xF43755EC},{1,0x15133AA3,0x15133AA3,1},{0,0xAC0CBF82,3,0x9336AE27},{0xF43755EC,1,(-8),0x66612900},{0x36D3DFDF,(-6),0x15133AA3,0x66612900},{0x232C3778,1,(-1),0x9336AE27},{1,0xAC0CBF82,0xA1ECA9F7,1},{0x36D3DFDF,0x15133AA3,3,0xF43755EC},{0x9336AE27,1,3,0x5B88FC90}},{{0x36D3DFDF,0x0802EBDD,0xA1ECA9F7,0x66612900},{1,0x371577CD,(-1),0xF43755EC},{0x232C3778,0xAC0CBF82,0x15133AA3,0x232C3778},{0x36D3DFDF,0xAC0CBF82,(-8),0xF43755EC},{0xF43755EC,0x371577CD,3,0x66612900},{0,0x0802EBDD,0x15133AA3,0x5B88FC90},{1,1,0,0xF43755EC},{1,0x15133AA3,0x15133AA3,1},{0,0xAC0CBF82,3,0x9336AE27}},{{0xF43755EC,1,(-8),0x66612900},{0x36D3DFDF,(-6),0x15133AA3,0x66612900},{0x232C3778,1,(-1),0x9336AE27},{1,0xAC0CBF82,0xA1ECA9F7,1},{0x36D3DFDF,0x15133AA3,3,0xF43755EC},{0x9336AE27,1,3,0x5B88FC90},{0x36D3DFDF,0x0802EBDD,0xA1ECA9F7,0x66612900},{1,0x371577CD,(-1),0xF43755EC},{0x232C3778,0xAC0CBF82,0x15133AA3,0x232C3778}},{{0x36D3DFDF,0xAC0CBF82,(-8),0xF43755EC},{0xF43755EC,0x371577CD,3,0x66612900},{0,0x0802EBDD,0x15133AA3,0x5B88FC90},{1,1,0,0xF43755EC},{1,0x15133AA3,0x15133AA3,1},{0,0xAC0CBF82,3,0x9336AE27},{0xF43755EC,1,(-8),0x66612900},{0x36D3DFDF,(-6),0x15133AA3,0x66612900},{0x232C3778,1,(-1),0x9336AE27}},{{1,0xAC0CBF82,0xA1ECA9F7,1},{0x36D3DFDF,0x15133AA3,3,0xF43755EC},{0x9336AE27,1,3,0x5B88FC90},{0x36D3DFDF,0x0802EBDD,0xA1ECA9F7,0x66612900},{1,0x371577CD,(-1),0xF43755EC},{0x232C3778,0xAC0CBF82,0x15133AA3,0x232C3778},{0x36D3DFDF,0xAC0CBF82,(-8),0xF43755EC},{0xF43755EC,0x371577CD,3,0x66612900},{0,0x0802EBDD,0x15133AA3,0x5B88FC90}}};
     int32_t l_102 = (-1);
     int32_t *l_109 = &l_99[2][2][1];
     int32_t **l_108 = &l_109;
     uint32_t l_188 = 4294967290U;
     uint16_t l_322 = 0xE2D6;
     int32_t *****l_433[10] = {&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334};
     int32_t l_453 = 0;
     uint32_t l_456 = 0U;
     uint16_t l_457[2][2] = {{0x866E,0x866E},{0x866E,0x866E}};
     uint32_t l_522 = 0x98D81E27;
     int i, j, k;
     return (****g_334);
 }
    static int32_t * func_51(int32_t * p_52) {
     int8_t l_82 = 0x5C;
     int16_t l_92 = 9;
     (*p_52) = ((l_82 , (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((l_82 | (((&g_71 != &g_71) , ((((safe_div_func_int16_t_s_s((((!(-9)) != (safe_rshift_func_uint16_t_u_s((((l_92 & (safe_sub_func_uint32_t_u_u(((((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int16_t_s_u((&g_71 != p_52), 4)) == (g_71 , l_82)))) || (-9)) || 0x2F938724) > 253U), (*p_52)))) != 0x07178D33) ^ 0x23), 10))) || l_82), (-1))) <= g_22) , &g_71) != &g_71)) || g_22)), g_71)) == g_71), g_71))) || l_92);
     return &g_71;
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     func_1();
     transparent_crc(g_761, "g_761", print_hash_value);
     for (i = 0;
 i < 7;
 i++)     {         transparent_crc(g_779[i], "g_779[i]", print_hash_value);         if (print_hash_value) printf("index = [%d]\n", i);     }
     transparent_crc(g_808, "g_808", print_hash_value);
     transparent_crc(g_943, "g_943", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
