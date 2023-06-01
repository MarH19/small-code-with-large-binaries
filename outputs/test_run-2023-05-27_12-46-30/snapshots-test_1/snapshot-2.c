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
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
  static int8_t (safe_unary_minus_func_int8_t_s)(int8_t si ) {
   return     -si;
 }
  static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 + si2);
   return     (si1 - si2);
 }
  static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     si1 * si2;
   return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
       static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) {
   return     -si;
 }
  static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 + si2);
 }
  static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 - si2);
   return     si1 * si2;
 }
  static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
   return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
           static int64_t (safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?     ((si1)) :     (si1 + si2);
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
          static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 + ui2;
 }
        static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
 }
  static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
     static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
    static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
   static uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
  static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 - ui2;
 }
         static uint64_t (safe_unary_minus_func_uint64_t_u)(uint64_t ui ) {
   return -ui;
 }
  static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return ui1 + ui2;
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
           static uint32_t crc32_tab[256];
  static uint32_t crc32_context = 0xFFFFFFFFUL;
  static void crc32_gentab (void) {
  uint32_t crc;
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>40) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  static int64_t g_2 = (-1L);
  static int32_t g_4 = 0x897A4A12L;
  static int32_t g_7 = (-1L);
  static uint16_t g_21 = 65535UL;
  static uint64_t g_36 = 5UL;
  static int16_t g_67 = 0xD0C9L;
  static int64_t g_130 = 0xB426AB799115BA09LL;
  static uint32_t g_132 = 2UL;
  static uint64_t g_141 = 7UL;
  static uint16_t g_147 = 0xF6E0L;
  static uint8_t g_154 = 0xC7L;
  static int32_t *g_161 = &g_4;
  static int32_t **g_160 = &g_161;
  static uint16_t *g_168 = (void*)0;
  static uint32_t g_337 = 0x9F0F0CF3L;
  static uint8_t g_427 = 255UL;
  static int8_t func_76(int8_t p_77, int16_t p_78, int16_t * p_79);
  static uint32_t func_1(void) {
     int32_t l_478 = 9L;
     return l_478;
 }
  static int32_t * func_22(uint16_t * p_23, uint16_t * p_24, uint64_t p_25) {
     int32_t l_288 = (-6L);
     int32_t *l_289 = &g_7;
     int32_t *l_294 = &l_288;
     int32_t *l_295 = &l_288;
     int32_t l_298 = (-1L);
     int32_t *l_299 = &l_288;
     return (*g_160);
 }
  static uint16_t * func_26(uint16_t * p_27, int32_t p_28, uint16_t * p_29, int8_t p_30) {
     return &g_147;
 }
  static uint64_t func_32(uint16_t * p_33) {
     uint16_t l_34 = 0x632CL;
     return l_34;
 }
  static int32_t * func_37(int16_t p_38) {
     return (*g_160);
 }
  static uint8_t func_39(uint64_t * p_40, uint64_t * p_41, uint16_t * p_42, uint16_t * p_43, uint64_t * p_44) {
     int32_t *l_171 = &g_7;
     return (*l_171);
 }
  static uint64_t * func_45(uint16_t * p_46, uint16_t * p_47, uint8_t p_48) {
     return &g_141;
 }
  static uint16_t * func_49(uint32_t p_50, int32_t p_51) {
     return &g_21;
 }
  static int8_t func_76(int8_t p_77, int16_t p_78, int16_t * p_79) {
     return g_147;
 }
  int main (void) {
     int print_hash_value = 0;
     transparent_crc(g_427, "g_427", print_hash_value);
 }
