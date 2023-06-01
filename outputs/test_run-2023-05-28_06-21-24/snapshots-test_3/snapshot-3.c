 typedef signed char __int8_t;
       typedef unsigned char __uint8_t;
       typedef signed short int __int16_t;
       typedef unsigned short int __uint16_t;
       typedef signed int __int32_t;
       typedef unsigned int __uint32_t;
       typedef unsigned long int __uint64_t;
       typedef long int __off_t;
       typedef long int __off64_t;
       typedef __int8_t int8_t;
       typedef __int16_t int16_t;
       typedef __int32_t int32_t;
       typedef __uint8_t uint8_t;
       typedef __uint16_t uint16_t;
       typedef __uint32_t uint32_t;
       typedef struct {
      }
       __mbstate_t;
       typedef struct _G_fpos_t {
        __off_t __pos;
        __mbstate_t __state;
      }
       __fpos_t;
        static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
        return     (si1 + si2);
      }
       static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
        return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
        return     (si1 + si2);
      }
       static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
        return     (si1 - si2);
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
        static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
        return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
      }
       static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
        return ((unsigned int)ui1) * ((unsigned int)ui2);
      }
       static uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
        return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
        return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
      }
       static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
        return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
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
            static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
        return ui1 + ui2;
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
      i++) {
       for (j = 8;
     j > 0;
     j--) {
       if (crc & 1) {
       crc = (crc >> 1) ^ poly;
      }
    else {
       crc >>= 1;
      }
      }
       crc32_tab[i] = crc;
      }
      }
       static void crc32_byte (uint8_t b) {
       crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
      }
       struct S0 {
         const int32_t f0;
         int16_t f1;
         int32_t f2;
         unsigned f3 : 19;
         const int8_t f4;
         int32_t f5;
         int8_t f6;
         unsigned f7 : 24;
         int8_t f8;
      };
       struct S1 {
         int8_t f0;
         uint32_t f1;
      };
       struct S2 {
         signed f0 : 11;
         signed f1 : 20;
         unsigned f2 : 19;
         signed f3 : 18;
      };
       static int32_t g_8 = 0x31EB2391L;
       static int32_t *g_7 = &g_8;
       static struct S0 g_42 = {
     0x5C1F4ACAL,1L,-1L,404,0L,1L,0L,663,0xEFL};
       static int32_t g_93 = 0L;
       static uint32_t g_110 = 2UL;
       static uint16_t g_112[7][2][8] = {
     {
    {
   0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L}
    ,{
   0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL}
    }
     };
       static int32_t **g_117 = &g_7;
       static int32_t ***g_116 = &g_117;
       static int16_t *g_136 = &g_42.f1;
       static int16_t **g_135 = &g_136;
       static struct S2 g_144 = {
     37,263,432,-229};
       static struct S1 g_147 = {
     0x33L,0UL};
       static int32_t *g_151 = &g_93;
       static int8_t g_169 = 2L;
       static uint16_t *g_270[7] = {
     &g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4],&g_112[1][1][4]};
       static int32_t **g_287 = (void*)0;
       static struct S1 *g_299 = &g_147;
       static struct S1 **g_298 = &g_299;
       static struct S0 *g_318 = &g_42;
       static const int32_t *g_390[3][3] = {
     {
    &g_8,&g_8,&g_8}
     ,{
    &g_8,&g_8,&g_8}
     ,{
    &g_8,&g_8,&g_8}
     };
       static const int32_t **g_389 = &g_390[0][0];
       static struct S2 g_452 = {
     38,949,229,504};
       static int32_t g_459 = 0xB1D9F15AL;
       static uint16_t **g_509 = &g_270[0];
       static struct S2 *g_516 = &g_144;
       static struct S0 *g_730 = (void*)0;
       static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12);
       static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21);
       static int32_t * func_24(uint16_t p_25);
       static struct S0 * func_31(uint8_t p_32, int8_t p_33);
       static uint32_t func_1(void) {
          int32_t *l_16[4] = {
    &g_8,&g_8,&g_8,&g_8};
          int32_t **l_15 = &l_16[1];
          int32_t **l_23 = (void*)0;
          int32_t ***l_22 = &l_23;
          int32_t *l_27 = (void*)0;
          int32_t *l_772 = &g_42.f5;
          (*g_389) = (((*g_7) = (~(safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((void*)0 != g_7), (g_8 , func_9(((safe_add_func_int8_t_s_s((4UL != (((*l_15) = &g_8) != ((*g_389) = func_17(((*l_22) = (void*)0), func_24(((l_27 = &g_8) != &g_8)), g_8, g_8)))), 0xEEL)) | 0xC097L), l_772, (*g_117))))), g_452.f1)))) , (void*)0);
          return (*l_27);
      }
       static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12) {
          return g_42.f5;
      }
       static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21) {
          return (*g_117);
      }
       static int32_t * func_24(uint16_t p_25) {
          int32_t *l_28 = (void*)0;
          return l_28;
      }
       static struct S0 * func_31(uint8_t p_32, int8_t p_33) {
          uint8_t l_36[10][8][3] = {
    {
   {
  0x23L,0x7DL,0UL}
   ,{
  247UL,246UL,0x9BL}
   ,{
  255UL,9UL,0xD8L}
   ,{
  0xC8L,9UL,255UL}
   ,{
  250UL,246UL,0x82L}
   ,{
  255UL,255UL,0x7DL}
   ,{
  247UL,255UL,0x82L}
   ,{
  0x42L,0UL,0x9BL}
   ,{
  0x23L,0x7DL,0UL}
   ,{
  247UL,246UL,0x9BL}
   ,{
  255UL,9UL,0xD8L}
   }
    ,{
   {
  0xC8L,9UL,255UL}
   ,{
  250UL,246UL,0x82L}
   ,{
  1UL,0x7DL,0x7DL}
   ,{
  250UL,0UL,255UL}
   ,{
  0xC8L,0UL,255UL}
   ,{
  255UL,255UL,0x7DL}
   ,{
  247UL,255UL,0x82L}
   ,{
  255UL,9UL,9UL}
   ,{
  0x35L,0xDBL,250UL}
   ,{
  0x9BL,0x63L,250UL}
   ,{
  9UL,250UL,9UL}
   }
    ,{
   {
  0UL,1UL,0x9CL}
   ,{
  255UL,250UL,1UL}
   ,{
  255UL,0x63L,0xD6L}
   ,{
  0UL,0x32L,0xB9L}
   }
    };
          return g_730;
      }
       int main (void) {
          func_1();
      }
