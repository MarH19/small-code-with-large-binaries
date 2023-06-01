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
 }
  static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 - si2);
 }
  static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     si1 * si2;
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
  static int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) {
   return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
 }
  static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
  static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) {
   return     -si;
 }
  static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 + si2);
 }
  static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     (si1 - si2);
 }
  static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     si1 * si2;
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
  static int32_t (safe_unary_minus_func_int32_t_s)(int32_t si ) {
   return     (si==(-2147483647-1)) ?     ((si)) :     -si;
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
      static uint8_t (safe_unary_minus_func_uint8_t_u)(uint8_t ui ) {
   return -ui;
 }
  static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 + ui2;
 }
  static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 - ui2;
 }
  static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint8_t (safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
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
  static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
  static uint16_t (safe_unary_minus_func_uint16_t_u)(uint16_t ui ) {
   return -ui;
 }
  static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 + ui2;
 }
  static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 - ui2;
 }
  static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
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
  static uint8_t g_8 = 7U;
  static uint32_t g_93 = 0U;
  static uint8_t g_110 = 1U;
  static uint32_t g_131 = 0xB6C63C42;
  static int32_t g_132 = 0;
  static int32_t g_152 = 0xF7D83A0D;
  static uint16_t g_153 = 0x679C;
  static int32_t g_188 = 0x9708B61A;
  static int32_t g_197 = 1;
  static int32_t g_224 = 0x60422813;
  static int32_t g_275 = 0;
  static uint8_t g_281 = 1U;
  static uint32_t g_288 = 0xFF553064;
  static uint8_t g_332 = 0U;
  static int8_t g_476 = 0;
  static int16_t g_569 = (-1);
  static int32_t g_583 = 0;
  static int8_t g_585 = 0x14;
  static uint16_t g_771 = 8U;
  static int32_t g_837 = 4;
  static uint16_t func_2(uint32_t p_3, uint32_t p_4, uint16_t p_5, int16_t p_6, int16_t p_7);
  static int8_t func_10(uint32_t p_11, uint32_t p_12);
  static uint16_t func_13(uint32_t p_14, int16_t p_15, const uint8_t p_16, int32_t p_17);
  static uint32_t func_18(uint32_t p_19, int16_t p_20, int32_t p_21, uint16_t p_22);
  static int32_t func_23(uint8_t p_24, uint32_t p_25, int16_t p_26, uint8_t p_27, int32_t p_28);
  static uint8_t func_31(int8_t p_32, int32_t p_33, uint16_t p_34, uint32_t p_35);
  static uint32_t func_40(int32_t p_41);
  static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53);
  static int8_t func_56(const int32_t p_57, uint8_t p_58, uint8_t p_59, uint16_t p_60);
  static uint32_t func_1(void) {
     uint8_t l_9 = 0x63;
     int8_t l_783 = 0x9B;
     int32_t l_1073 = 0x17B7D161;
     int32_t l_1110 = 1;
     uint8_t l_1111 = 248U;
     l_1073 = ((func_2(g_8, l_9, (g_771 = ((0xCD >= func_10(g_8, (func_13(func_18((g_8 >= func_23((safe_sub_func_int32_t_s_s(l_9, (func_31((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(g_8, func_40((0x9A01 < (safe_unary_minus_func_int16_t_s(l_9)))))), 6)), g_8, g_8, g_8) < 0x7A))), g_8, g_8, l_9, l_9)), g_8, l_9, l_9), l_9, l_9, l_9) , g_332))) <= g_771)), l_783, g_8) | l_783) == l_9);
     for (g_288 = (-9);
 (g_288 < 35);
 g_288 = safe_add_func_uint16_t_u_u(g_288, 4))     {         int32_t l_1076 = 2;         int32_t l_1085 = 1;         uint8_t l_1093 = 252U;         int32_t l_1112 = 0xF37F1F95;         int32_t l_1113 = 1;         l_1076 = l_9;         for (g_837 = 0; (g_837 != (-11)); g_837--)         {             int8_t l_1092 = (-1);             g_152 = (safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((((((l_1085 = l_1076) || (((safe_mod_func_int16_t_s_s(g_771, (safe_mul_func_uint8_t_u_u((+l_9), l_783)))) < g_569) , 1)) <= ((g_188 <= (!((1 <= 6) >= g_837))) | g_837)) || g_275) & 0U), l_1076)) != 0xE333), 4294967295U)) , 1), l_1092));             l_1093 = ((g_583 = 0x4630CB5D) && (l_1076 || (g_152 >= g_110)));         }         l_1113 = ((l_1112 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x84, (safe_add_func_int8_t_s_s(g_583, ((safe_mul_func_uint16_t_u_u((6 & l_1073), (g_197 >= (g_275 , ((l_1085 = g_224) , (((g_585 = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((0xE0B4BF8C < (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((l_1110 = g_188) > g_188), 0x22)), g_8))), l_1093)), (-1))) ^ 3U)) > l_1111) > g_110)))))) <= g_837))))), 4U)) != l_1093)) ^ 1);         return g_197;     }
     return l_1110;
 }
  static uint16_t func_2(uint32_t p_3, uint32_t p_4, uint16_t p_5, int16_t p_6, int16_t p_7) {
     int32_t l_800 = 0x05E0515B;
     int32_t l_815 = 0x0C21575A;
     uint16_t l_906 = 0x96AB;
     l_800 = 0;
     return l_815;
 }
  static int8_t func_10(uint32_t p_11, uint32_t p_12) {
     const uint32_t l_772 = 1U;
     uint16_t l_780 = 0xDD07;
     int32_t l_781 = 0;
     int32_t l_782 = 0x4C0A0851;
     l_782 = (((g_152 , (((g_281 || 0) != (g_771 , g_93)) & 0x1A6F)) > l_772) == (l_772 > ((+(((l_781 = (g_288 = (l_780 = ((g_275 = (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0xF7A3, 2)), g_281)) != p_11) != p_12), g_288))) == p_12)))) && 0x8E0714DF) < g_476)) <= g_583)));
     return p_12;
 }
  static uint16_t func_13(uint32_t p_14, int16_t p_15, const uint8_t p_16, int32_t p_17) {
     uint32_t l_734 = 4294967286U;
     int32_t l_735 = 0x4084D062;
     int8_t l_745 = 0x30;
     if ((((p_14 <= (g_153 = (p_17 <= ((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x90EE, (safe_add_func_uint16_t_u_u((p_15 != (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_131, (safe_div_func_uint32_t_u_u(4294967295U, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_734 = g_131), 0x0DF8CB76)), (((p_17 && 0x04) == p_14) < l_735))), l_735)))))) , 0x8D54), g_281))), p_14)))), 4294967289U)) ^ l_735), g_93)) == 1) | p_16) > p_15)))) || 0x38) < p_17))     {         const int16_t l_736 = 0xC016;         int32_t l_737 = 0xE461C942;         uint16_t l_744 = 2U;         g_583 = ((((l_737 = (p_17 == l_736)) , (l_735 = (safe_rshift_func_uint8_t_u_s((l_734 < ((((g_188 < (g_153 = 0xFFDE)) && ((((-1) != (safe_div_func_uint16_t_u_u((0U && ((((((l_744 = 0x86) , (-5)) == p_15) , g_224) , g_188) <= g_8)), 0x2697))) > p_14) > g_110)) <= l_734) || l_745)), 1)))) >= p_17) || l_734);         l_735 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((0x4189 >= (safe_mod_func_int8_t_s_s((p_15 >= ((safe_sub_func_uint8_t_u_u(0x25, (!0xD41E))) != g_8)), (p_14 && 0xA86F4DE2)))), 3)), 6)), (safe_sub_func_int32_t_s_s((g_197 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_14 ^ (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_569, 0xF2DC60A0)), g_132))), g_132)), 247U))), g_8)))), p_16)), (-1)));     }
     else     {         return g_93;     }
     return g_476;
 }
  static uint32_t func_18(uint32_t p_19, int16_t p_20, int32_t p_21, uint16_t p_22) {
     uint32_t l_338 = 0x90B11C7D;
     int32_t l_352 = 0x5F1AE000;
     uint8_t l_414 = 0xEE;
     int16_t l_427 = (-7);
     uint8_t l_472 = 0U;
     int16_t l_537 = 0xD729;
     int32_t l_538 = 0;
     int32_t l_584 = 0x5EF81E7E;
     g_152 = (l_338 = (safe_add_func_uint8_t_u_u(p_20, p_22)));
     g_152 = p_20;
     l_538 = (((3 == (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_585 & ((((safe_mod_func_uint16_t_u_u((g_288 || (l_584 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(0x81, (((g_8 , (p_21 > ((~(safe_sub_func_uint32_t_u_u(g_152, (+((l_472 == (l_352 = ((safe_mul_func_uint16_t_u_u(p_19, g_188)) & p_22))) && l_338))))) || l_427))) > l_537) >= (-2)))) ^ g_188), 10)), g_131)))), p_22)) == g_8) || 0xB1F02715) || l_414)), 4)), l_427))) , p_20) | 0xF9);
     return l_352;
 }
  static int32_t func_23(uint8_t p_24, uint32_t p_25, int16_t p_26, uint8_t p_27, int32_t p_28) {
     uint32_t l_206 = 0xC6651808;
     int32_t l_222 = (-1);
     int32_t l_226 = 0xE944683A;
     uint16_t l_238 = 0xA9F5;
     int8_t l_301 = 0x85;
     int32_t l_321 = 0x8A4C053B;
     uint32_t l_330 = 0x09D77097;
     int32_t l_331 = 0xD9F50359;
     for (g_131 = (-11);
 (g_131 < 52);
 g_131++)     {         int16_t l_223 = 0;         int32_t l_225 = 0xC862B96C;         int8_t l_249 = (-8);         g_152 = ((((safe_lshift_func_int8_t_s_s(((g_110 = g_131) == 0xEA), 7)) < (((((l_206 ^ (+((safe_mod_func_int16_t_s_s(((l_225 = (safe_lshift_func_int16_t_s_s(0x6F50, (g_224 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s((-4), (((0U >= p_26) , ((l_222 = ((((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_26, p_25)), p_27)) && 0x902E) || g_93) >= 0x1073)) , l_223)) ^ l_206))) < l_223) , l_223) <= l_206), l_206)), l_223)))))) || l_206), p_28)) >= (-1)))) & l_226) != g_93) , g_188) | 1U)) , g_153) , l_206);         l_226 = (g_131 , (safe_mul_func_uint16_t_u_u((g_110 > p_27), (+0U))));         l_222 = ((((safe_rshift_func_int16_t_s_s(((g_197 == 0x6D) || (g_110 = (((((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int32_t_s_s((((l_225 = (l_238 | (0x115A3005 ^ p_25))) ^ g_131) >= (g_93 && 251U)), ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0xCE != g_152), l_249)), (-10))) | p_24), 0x6AD88BDD)), p_28)) && p_25), g_132)) && g_188))) >= l_238) | p_28) != l_249), p_27)) , g_132) , g_153) | 0xE741E8B3), p_26)) , p_28) || 4) && l_222) | g_132))), p_25)) ^ 1U) != g_197) , p_26);         g_132 = (l_226 | ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_222 = l_249), ((g_110 = ((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(l_225)) && (safe_div_func_int16_t_s_s(((l_223 < l_226) || ((((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((p_26 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((((l_238 && ((((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s((g_275 = (l_249 < ((0xEDE11C7F || (l_226 > p_26)) | g_188))), l_223)) , p_25) != l_238), g_132)) == g_132) , p_26), 7)) && 1) , g_8) & g_152)) && l_238) != g_197), p_25)) == 9), 6))) & 0xC3E9) >= l_223), 254U)), p_28)) , p_28) | 0xF4A9C1BF) , p_24)), p_28))), g_224)) != 0), p_27)) & l_249)) < p_28))), 0xBD)) <= p_27));     }
     for (g_110 = 0;
 (g_110 != 18);
 g_110++)     {         int32_t l_278 = 0x8862E0C1;         const uint32_t l_297 = 4294967286U;         int32_t l_300 = 0x6AE97821;         l_278 = ((((((l_278 | (l_278 && ((safe_lshift_func_int16_t_s_u((g_281 | (safe_div_func_uint8_t_u_u(l_222, (-2)))), 1)) > ((((safe_rshift_func_int16_t_s_u((g_224 ^ ((safe_sub_func_int16_t_s_s(((g_288 = p_24) , (~(safe_div_func_uint16_t_u_u(l_222, (-1))))), g_8)) , 255U)), p_24)) <= 0xD1) , 0U) <= g_153)))) , l_278) && 4) ^ 0xB2E72F24) > p_27) >= 4294967288U);         l_301 = (l_226 = ((safe_sub_func_uint8_t_u_u((l_222 & ((safe_add_func_int8_t_s_s((-9), (!l_297))) != p_24)), ((0x69 || ((((safe_mul_func_uint16_t_u_u(g_197, (l_300 , p_24))) , (g_110 <= g_131)) , 0x35) , 1)) < p_24))) | g_93));     }
     return g_153;
 }
  static uint32_t func_40(int32_t p_41) {
     int32_t l_165 = 0xB44CA3D1;
     uint8_t l_166 = 1U;
     for (p_41 = 0;
 (p_41 >= (-27));
 p_41 = safe_sub_func_uint32_t_u_u(p_41, 9))     {         int32_t l_45 = 0x6C4779D4;         int32_t l_62 = 0x71B70561;         l_165 = (((p_41 , l_45) < (safe_add_func_uint16_t_u_u(g_8, func_48(p_41, g_8, g_8, (l_62 = (safe_add_func_int8_t_s_s(func_56(g_8, (((((l_45 && 255U) <= 8U) , 0xB1) == p_41) & p_41), g_8, g_8), p_41))), p_41)))) , g_8);         if (g_110)             break;         if (l_166)             continue;     }
     return l_165;
 }
  static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53) {
     int8_t l_65 = 0x65;
     int32_t l_73 = 9;
     int32_t l_76 = 0x8784865E;
     int16_t l_108 = 0xEBB7;
     int32_t l_109 = 0x08A2B653;
     uint32_t l_133 = 0xEC2988D6;
     int8_t l_134 = 0xC7;
     uint32_t l_137 = 0x8F6EEC55;
     for (p_49 = (-26);
 (p_49 != 27);
 ++p_49)     {         uint8_t l_66 = 3U;         int32_t l_94 = 0;         p_53 = 0;         l_66 = l_65;         if ((((l_66 != (safe_div_func_int32_t_s_s((1U ^ (l_76 = (((l_65 , g_8) <= ((l_66 != (+(((p_49 != ((+(safe_lshift_func_int16_t_s_u((p_52 , (((p_53 = (((l_73 = p_49) || (safe_div_func_int32_t_s_s(0x4E0C42EF, l_66))) >= l_66)) == g_8) , p_51)), 5))) , p_51)) , l_66) <= g_8))) , g_8)) , 0xC37461BC))), p_51))) != 0xB0) <= l_65))         {             return p_52;         }         else         {             uint32_t l_83 = 4294967294U;             const int32_t l_92 = 0;             g_93 = (~(((safe_lshift_func_uint8_t_u_u((0x6723 < l_66), (((p_53 = ((+(safe_sub_func_uint16_t_u_u((((((((255U > (l_66 , (p_49 , (l_83 = p_50)))) < ((safe_mul_func_uint8_t_u_u((0x8A7C || ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_8 , ((safe_mul_func_uint8_t_u_u(g_8, 1)) ^ g_8)), l_65)) >= l_66), l_66)) || l_92)), 0xB4)) || l_92)) , 0x7944D42B) , l_73) == p_49) || l_66) || p_52), p_52))) != 0)) > 0xC79E06D3) != g_8))) != 4294967295U) != p_49));             l_94 = p_53;         }         l_76 = (safe_mul_func_int8_t_s_s((((l_76 >= p_50) ^ ((safe_rshift_func_int8_t_s_u((-1), 3)) ^ ((((safe_unary_minus_func_uint8_t_u((l_94 = 0U))) , (((p_53 , ((safe_mod_func_uint16_t_u_u(((0x89 >= ((0xB5BC == p_49) && (safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((p_53 , p_51) == l_76) , l_66), 6)), l_66)) & g_93), g_93)))) | 65535U), l_76)) <= 0U)) != g_8) == l_94)) , p_49) && 0xD0F3))) < g_93), p_50));     }
     return p_49;
 }
  static int8_t func_56(const int32_t p_57, uint8_t p_58, uint8_t p_59, uint16_t p_60) {
     uint32_t l_61 = 1U;
     l_61 = 0;
     return p_60;
 }
  int main (void) {
     int print_hash_value = 0;
     transparent_crc(g_771, "g_771", print_hash_value);
     return 0;
 }
