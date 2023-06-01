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
  static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 - si2);
 }
   static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
   static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
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
    static uint8_t (safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
 }
  static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
 }
  static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
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
,{{&g_133,&g_133,&g_133,&g_133,&g_133,(void*)0},{&g_133,(void*)0,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}}
,{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}}
,{{(void*)0,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,(void*)0,(void*)0,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,(void*)0}}
,{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133}}
,{{&g_133,&g_133,&g_133,(void*)0,&g_133,&g_133},{&g_133,&g_133,(void*)0,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,(void*)0},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,(void*)0,&g_133,&g_133,&g_133}}
,{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{(void*)0,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}}
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
,{{&g_329,(void*)0,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,(void*)0,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329}}
,{{&g_329,&g_329,&g_329,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,(void*)0,&g_329,&g_329},{(void*)0,&g_329,&g_329,&g_329}}
,{{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{(void*)0,&g_329,(void*)0,&g_329},{&g_329,(void*)0,&g_329,(void*)0},{(void*)0,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{(void*)0,&g_329,(void*)0,&g_329},{(void*)0,(void*)0,(void*)0,(void*)0}}
,{{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,(void*)0},{&g_329,&g_329,&g_329,&g_329},{&g_329,(void*)0,(void*)0,(void*)0},{&g_329,(void*)0,&g_329,&g_329},{&g_329,&g_329,&g_329,&g_329},{&g_329,&g_329,(void*)0,&g_329},{&g_329,&g_329,&g_329,&g_329}}
};
  static uint16_t **g_327 = &g_328[3][0][0];
  static uint32_t g_351[6] = {
0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946};
  static uint32_t g_399 = 0xD37FD78E;
  static uint16_t g_408 = 0U;
  static int8_t g_465 = (-1);
  static uint16_t g_490 = 0xD1B4;
  static int16_t ***g_591 = &g_131[0];
  static uint8_t g_636 = 255U;
  static uint8_t *g_635 = &g_636;
  static uint32_t g_742 = 2U;
  static int32_t *g_781 = &g_34;
  static uint32_t ***g_844 = (void*)0;
  static uint16_t g_855[5][9] = {
{1U,0x401F,0xB8F0,0xB8F0,0x401F,1U,0x401F,0xB8F0,0xB8F0}
,{0x82C7,0x82C7,1U,0xB8F0,1U,0x82C7,0x82C7,1U,0xB8F0}
,{5U,0x401F,5U,1U,1U,5U,0x401F,5U,1U}
,{5U,1U,1U,5U,0x401F,5U,1U,1U,5U}
,{0x82C7,1U,0xB8F0,1U,0x82C7,0x82C7,1U,0xB8F0,1U}
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
     for (i = 0;
 i < 3;
 i++)         l_957[i] = &g_34;
     (*l_959) = l_957[2];
     return p_7;
 }
  static uint8_t func_8(int16_t p_9, uint32_t p_10, uint32_t p_11, int32_t p_12) {
     uint8_t l_664 = 1U;
     uint32_t l_669 = 0x2E5A9F17;
     int32_t l_725 = 0x375EC06F;
     uint32_t ****l_812 = &g_182[3];
     uint16_t ***l_875 = (void*)0;
     uint16_t ****l_874 = &l_875;
     uint16_t *****l_873[1];
     uint32_t **l_923[4][4] = {{&g_276,&g_276,&g_276,&g_276},{&g_276,&g_276,&g_141,&g_276},{&g_276,&g_276,&g_141,&g_276},{&g_276,(void*)0,&g_276,&g_141}};
     uint8_t **l_929 = &g_635;
     int32_t l_937 = 6;
     int32_t *l_943[5][8] = {{&l_937,&g_34,&l_937,(void*)0,&g_34,&l_937,&l_725,(void*)0},{&l_725,(void*)0,(void*)0,&g_34,&g_34,&g_34,&g_34,(void*)0},{&l_725,&l_725,&l_937,&l_937,&g_34,(void*)0,&l_725,&g_34},{&l_937,&g_34,(void*)0,&l_937,&g_34,&l_937,(void*)0,&g_34},{&g_34,&l_725,(void*)0,&l_937,&l_725,(void*)0,&g_34,(void*)0}};
     uint8_t *l_945[1];
     uint32_t ****l_950 = &g_844;
     int i, j;
     for (i = 0;
 i < 1;
 i++)         l_873[i] = &l_874;
     for (i = 0;
 i < 1;
 i++)         l_945[i] = &l_664;
     if (l_664)     {         uint8_t l_675 = 0x71;         int32_t l_687[9] = {0x7B5CCDDD,0xEB188278,0x7B5CCDDD,0xEB188278,0x7B5CCDDD,0xEB188278,0x7B5CCDDD,0xEB188278,0x7B5CCDDD};         int8_t *l_702 = (void*)0;         int32_t *l_724[4][3][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_687[5],&l_687[5],(void*)0,&l_687[5]}},{{(void*)0,(void*)0,&l_687[1],(void*)0,(void*)0},{&l_687[5],(void*)0,&l_687[5],&l_687[5],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_687[5],&l_687[5],(void*)0,&l_687[5]}},{{(void*)0,(void*)0,&l_687[1],(void*)0,(void*)0},{&l_687[5],(void*)0,&l_687[5],&l_687[5],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};         int16_t l_750[10][2][1] = {{{(-5)},{(-5)}},{{0},{0x67FD}},{{0},{(-5)}},{{(-5)},{0x67FD}},{{(-5)},{0x67FD}},{{(-5)},{(-5)}},{{0x67FD},{(-5)}},{{0x67FD},{(-5)}},{{(-5)},{0x67FD}},{{(-5)},{0x67FD}}};         uint32_t l_816 = 0U;         uint16_t **l_829 = &g_328[0][2][2];         uint32_t **l_891 = &g_276;         uint8_t l_907 = 0x1C;         int32_t l_914 = 0;         int16_t *l_921[2];         int32_t **l_922 = &g_781;         uint8_t **l_928 = &g_635;         uint8_t ***l_930 = &l_928;         int i, j, k;         for (i = 0; i < 2; i++)             l_921[i] = &l_750[7][0][0];         for (g_408 = 0; (g_408 <= 10); g_408 = safe_add_func_uint8_t_u_u(g_408, 5))         {             int16_t l_674 = 0xD2AA;             int8_t *l_682 = &g_81;             uint32_t ****l_710[7] = {&g_182[3],&g_182[3],&g_182[3],&g_182[3],&g_182[3],&g_182[3],&g_182[3]};             int32_t *l_723 = &g_16;             uint16_t *l_734 = &g_329;             int i;         }         for (g_742 = 0; (g_742 > 27); g_742 = safe_add_func_int16_t_s_s(g_742, 6))         {             uint16_t l_794 = 0U;             int32_t l_830[10] = {(-9),(-9),1,1,1,(-9),(-9),1,1,1};             int16_t l_845[2][10][3] = {{{0x0289,0xB349,(-1)},{(-6),(-2),(-2)},{(-8),(-1),(-10)},{(-6),0x5BCF,0x0EE5},{0x0289,(-1),(-10)},{(-7),0xB06D,(-2)},{1,(-1),(-1)},{0xF4D2,0x5BCF,0xD92F},{1,(-1),0x8ABE},{(-7),(-2),0xD92F}},{{0x0289,0xB349,(-1)},{(-6),(-2),(-2)},{(-8),(-1),(-10)},{(-6),0x5BCF,0x0EE5},{0x0289,(-1),(-10)},{(-7),0xB06D,(-2)},{1,(-1),(-1)},{0xF4D2,0x5BCF,0xD92F},{1,(-1),0x8ABE},{(-7),(-2),0xD92F}}};             int32_t l_895 = 0x362A482E;             int32_t *l_896 = &l_687[7];             int i, j, k;             for (g_399 = 21; (g_399 <= 58); g_399++)             {                 uint16_t **l_798[3];                 int32_t l_799[2][4][6] = {{{(-1),(-2),(-2),(-1),0x68400F9B,3},{2,(-2),0x68400F9B,2,0x68400F9B,(-2)},{0xD1BF5601,(-2),3,0xD1BF5601,0x68400F9B,0x68400F9B},{(-1),(-2),(-2),(-1),0x68400F9B,3}},{{2,(-2),0x68400F9B,2,0x68400F9B,(-2)},{0xD1BF5601,(-2),3,0xD1BF5601,0x68400F9B,0x68400F9B},{(-1),(-2),(-2),(-1),0x68400F9B,3},{2,(-2),0x68400F9B,2,0x68400F9B,(-2)}}};                 uint32_t ****l_815[1];                 uint16_t ***l_872 = &l_798[2];                 uint16_t ****l_871[5];                 uint16_t *****l_870[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};                 uint8_t **l_879 = &g_635;                 uint8_t l_887 = 0xE2;                 int i, j, k;                 for (i = 0; i < 3; i++)                     l_798[i] = &g_328[2][1][0];                 for (i = 0; i < 1; i++)                     l_815[i] = &g_182[3];                 for (i = 0; i < 5; i++)                     l_871[i] = &l_872;             }         }         (*l_922) = ((((0x5832 >= (safe_div_func_uint8_t_u_u((l_664 <= ((l_669 , 0x4C) > (safe_sub_func_int16_t_s_s((l_914 & p_9), (0x58 <= ((l_725 = ((safe_lshift_func_int16_t_s_s((l_669 <= (((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s(0x9B942D73, 0xBFB7254D)), l_725)) != 4294967295U) & 8U)), 6)) && 9U)) , 0x66)))))), p_9))) == p_10) <= 255U) , (void*)0);         if (((l_937 = (l_923[1][3] == ((l_725 = (((safe_lshift_func_uint8_t_u_u(((p_12 >= (safe_lshift_func_int8_t_s_u(p_12, ((0x8681A4E2 ^ ((&g_635 != ((*l_930) = (l_929 = l_928))) && (0x62EB48C9 || ((*g_276) = ((((((0 & ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((((((&g_131[1] != (void*)0) , 3) , p_11) == 0x0129D367) || 1), (*g_635))), l_669)), 0)) > l_725)) != p_10) ^ l_669) != p_10) , p_9) == p_11))))) ^ p_12)))) != 0x7B), 0)) || 0x9B) >= p_12)) , l_891))) , l_669))         {             int16_t l_941 = (-1);             int32_t **l_942[1];             uint32_t *****l_951 = (void*)0;             uint32_t *****l_952 = &l_812;             uint32_t *****l_953 = &g_320;             int i;             for (i = 0; i < 1; i++)                 l_942[i] = &l_724[2][2][2];             l_943[4][5] = ((*l_922) = &l_725);             (*g_781) = (((1 ^ ((*g_66) || (&l_724[2][0][0] == ((!((((((p_12 <= p_9) && p_11) & (**l_922)) && (*g_635)) , (**g_591)) != (**g_591))) , l_942[0])))) && p_11) || 0xD5);             (*l_922) = (*l_922);         }         else         {             return p_12;         }     }
     else     {         return p_11;     }
     (*g_66) = p_11;
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
     int32_t l_233 = 0x0C404CD8;
     int32_t l_238 = 0x8E098A7A;
     int32_t *l_243 = &l_179;
     int32_t l_353 = (-1);
     uint16_t ***l_360 = &g_327;
     uint32_t l_362 = 0x4142C643;
     int16_t l_388 = 8;
     int32_t l_402 = 0x616EEC3F;
     uint32_t *****l_403 = &g_320;
     int32_t l_418 = 1;
     uint32_t *l_425[2][10][5] = {{{&l_175[0][0],&l_175[0][0],&g_38,&l_175[0][0],&l_175[0][0]},{&l_175[0][0],&g_399,&l_175[0][2],&g_176,&g_176},{(void*)0,&l_175[0][0],&g_38,(void*)0,&l_175[0][0]},{&g_399,(void*)0,&g_399,&g_399,&g_176},{&l_175[0][0],(void*)0,&l_175[0][1],(void*)0,&l_175[0][0]},{&g_176,&l_175[0][0],&l_175[0][0],&l_175[0][0],&g_176},{&g_399,&g_399,&l_175[0][3],&l_175[0][0],&l_175[0][0]},{&l_175[0][5],&g_176,(void*)0,&l_175[0][0],(void*)0},{&l_175[0][0],&g_176,&l_175[0][2],(void*)0,(void*)0},{&l_175[0][0],&g_399,&l_175[0][0],&l_175[0][5],(void*)0}},{{(void*)0,&l_175[0][1],&g_176,&l_175[0][1],(void*)0},{&g_399,&g_38,&g_38,&l_175[0][0],(void*)0},{(void*)0,&l_175[0][0],&l_175[0][0],&g_38,(void*)0},{&g_176,&l_175[0][5],&g_38,&g_38,(void*)0},{&l_175[0][0],&g_38,&g_176,&g_176,(void*)0},{(void*)0,&g_399,&g_176,&g_399,(void*)0},{&g_399,(void*)0,&l_175[0][0],&l_175[0][0],(void*)0},{&l_175[0][0],&l_175[0][0],&g_176,&g_399,(void*)0},{&l_175[0][0],&g_176,&l_175[0][2],(void*)0,(void*)0},{&l_175[0][0],&g_399,&l_175[0][0],&l_175[0][5],(void*)0}}};
     int32_t *l_500 = &g_16;
     uint32_t l_615 = 0xF85FED94;
     int i, j, k;
     for (i = 0;
 i < 1;
 i++)         l_178[i] = (void*)0;
     if ((((g_38 >= (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_157[1][5] == (safe_div_func_int32_t_s_s((g_16 || ((safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(p_15, ((safe_lshift_func_uint8_t_u_u((l_179 = (p_15 >= (((((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_172 == (l_173 = l_172)), (g_176 = ((p_15 , (+p_15)) , l_175[0][0])))), g_34)), 0xC3CA42F7)) && 0x16DB) == l_175[0][5]) || p_15) <= l_177))), p_15)) , p_15))) ^ p_15) , p_15), p_15)) || 0xA2B03852)), g_16))), 2)), l_177))) || l_179) & g_38))     {         uint32_t l_181 = 0x1807826B;         int16_t **l_187 = &g_132[6][3][5];         int16_t ***l_190 = &l_188;         uint32_t ****l_191[9] = {(void*)0,&l_185,&l_185,(void*)0,&l_185,&l_185,(void*)0,&l_185,&l_185};         uint8_t *l_202 = &l_198[2];         int32_t *l_242 = &l_179;         uint16_t l_401 = 0xEF64;         uint32_t *l_426[7][1];         uint16_t *l_515 = &g_329;         int32_t l_583 = (-10);         int16_t l_584 = 1;         uint16_t ***l_600 = &g_327;         int16_t l_659 = 1;         int i, j;         for (i = 0; i < 7; i++)         {             for (j = 0; j < 1; j++)                 l_426[i][j] = &g_399;         }         if (((*g_66) = ((!l_181) & (*g_66))))         {             return g_157[1][5];         }         else         {             uint32_t ****l_184 = (void*)0;             uint32_t ****l_186 = &g_182[4];             int16_t ***l_189 = &g_131[0];             (*l_186) = (l_185 = g_182[3]);             (*l_189) = (l_188 = l_187);         }         (*l_190) = (void*)0;         for (g_176 = 0; (g_176 <= 4); g_176 += 1)         {             uint32_t *****l_192[8][1] = {{&l_191[5]},{(void*)0},{&l_191[5]},{&l_191[5]},{(void*)0},{&l_191[5]},{&l_191[5]},{(void*)0}};             uint8_t *l_201[5] = {&l_198[2],&l_198[2],&l_198[2],&l_198[2],&l_198[2]};             uint16_t l_237[10] = {65535U,0xAB87,65535U,65535U,0xAB87,65535U,65535U,0xAB87,65535U,65535U};             int32_t **l_248 = &l_243;             int16_t l_278 = 0xCF4F;             int32_t l_382 = (-5);             int32_t l_383 = (-6);             int16_t ***l_385 = &l_188;             uint32_t *l_422 = &g_38;             uint16_t *l_516 = (void*)0;             uint16_t ***l_560 = &g_327;             int i, j;         }         if ((((void*)0 == (**l_600)) ^ ((8 ^ ((*g_276) = 3U)) & ((((**l_403) != ((safe_lshift_func_uint16_t_u_s(p_15, 1)) , (*g_320))) || ((((p_15 | (+(safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((p_15 , p_15), p_15)) , (*l_242)), l_659)))) != (*g_245)) && p_15) > 65535U)) , (*l_242)))))         {             int32_t *l_660 = &l_238;             int32_t **l_661 = &l_660;             (*l_661) = l_660;             for (g_81 = 0; (g_81 <= 8); g_81 += 1)             {                 int8_t l_662 = 0;                 return l_662;             }             return p_15;         }         else         {             int32_t **l_663 = &l_242;             (*l_663) = (void*)0;         }     }
     else     {         return p_15;     }
     return p_15;
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
     int i;
     for (i = 0;
 i < 2;
 i++)         l_143[i] = &g_38;
     for (i = 0;
 i < 5;
 i++)         l_149[i] = 0xBD024A6B;
 lbl_152:     l_144 = (l_136 < (((((p_24 == p_22) , ((((p_26 , &g_131[0]) == l_137) >= (((*l_138) = &g_38) == ((*l_142) = (g_141 = &p_23)))) > (*l_140))) | (-8)) > (*l_140)) <= p_25));
     for (p_23 = 0;
 (p_23 == 36);
 p_23 = safe_add_func_int32_t_s_s(p_23, 1))     {         int32_t **l_150 = (void*)0;         int32_t **l_151 = &g_66;         l_149[2] = ((safe_mod_func_uint32_t_u_u(0x482E1C06, (*l_140))) || (*p_22));         (*l_151) = p_22;         if (p_23)             goto lbl_152;     }
     return (*l_140);
 }
  static int32_t * func_27(int32_t * p_28, int8_t p_29) {
     int32_t *l_33 = &g_16;
     int32_t **l_32 = &l_33;
     uint16_t l_122 = 0U;
     int16_t *l_124 = &g_51;
     int16_t **l_123 = &l_124;
     int16_t ***l_125 = &l_123;
     (*l_32) = func_30(((*l_32) = p_28));
     for (p_29 = 0;
 p_29 < 2;
 p_29 += 1)     {         for (g_34 = 0; g_34 < 8; g_34 += 1)         {             for (g_38 = 0; g_38 < 9; g_38 += 1)             {                 g_65[p_29][g_34][g_38] = &l_33;             }         }     }
     l_122 = (safe_lshift_func_uint8_t_u_s((p_29 , 255U), 0));
     (*l_125) = l_123;
     return p_28;
 }
  static int32_t * func_30(int32_t * p_31) {
     uint32_t l_59[8] = {4294967292U,0xD69B45C7,4294967292U,0xD69B45C7,4294967292U,0xD69B45C7,4294967292U,0xD69B45C7};
     int32_t l_67 = 1;
     int32_t l_82 = 0x1C1CA363;
     int32_t *l_96 = &g_34;
     int i;
     (*l_96) = ((*l_96) >= 0U);
     return p_31;
 }
  static int32_t func_39(int32_t ** p_40, uint32_t p_41, uint32_t p_42, int32_t * p_43) {
     uint32_t *l_72[10];
     int32_t l_79[2][7][8] = {{{0x37BAD6E3,0x415DBE4B,0x49029496,0x71D1BA05,0xF1D91A4A,1,0,0x42281945},{0x2B3A3C3A,0xBFC796D6,(-1),1,1,(-10),4,0xEB022B26},{2,0x2B46DFF6,0x37BAD6E3,0x4A05A9EE,0x415DBE4B,2,1,0},{(-5),(-1),0x743585F1,0x415DBE4B,0x3E3B667D,0x4084F7CB,(-1),0},{0x8B7CB4D6,9,(-10),(-8),0,0xD830BF04,0xD830BF04,0},{0x37BAD6E3,0,0,0x37BAD6E3,(-1),0x4D3E44E8,0,0x49029496},{(-1),0x6A37A547,0x992CE4CA,1,0xFBA24273,0x4A05A9EE,4,(-1)}},{{1,0x6A37A547,7,0x42281945,(-1),0x4D3E44E8,1,7},{0x64C66072,0,8,0x2B3A3C3A,1,0xD830BF04,0x49029496,1},{1,9,0x2B3A3C3A,0x743585F1,(-10),0x4084F7CB,0x64C66072,0},{7,(-1),0x49029496,0xF37D796E,(-1),2,(-1),(-1)},{0x4A05A9EE,0x2B46DFF6,0xEB022B26,(-1),0xF1D91A4A,(-10),0xF1D91A4A,(-1)},{0xF37D796E,0xBFC796D6,0xF37D796E,0,0x42281945,1,4,2},{(-5),0x415DBE4B,8,0x4A05A9EE,0x4084F7CB,(-5),0x42281945,(-1)}}};
     int8_t *l_80 = &g_81;
     int i, j, k;
     for (i = 0;
 i < 10;
 i++)         l_72[i] = &g_38;
     p_43 = p_43;
     (*p_43) = (0x8F497C31 | ((*g_66) != ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((*l_80) = ((l_72[4] != &g_38) , (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(p_41, (g_38 || l_79[0][2][4]))) == ((void*)0 == &g_51)) , l_79[0][2][4]), 8)))), l_79[0][3][2])), p_42)) | g_38)));
     return (*p_43);
 }
  static int32_t ** func_44(uint32_t p_45, int32_t * p_46) {
     int32_t *l_63 = &g_34;
     int32_t **l_64 = &l_63;
     (*l_64) = l_63;
     return g_65[1][4][8];
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     for (i = 0;
 i < 5;
 i++)     {         for (j = 0; j < 9; j++)         {             csmith_sink_ = g_855[i][j];         }     }
     platform_main_end(0,0);
     return 0;
 }
