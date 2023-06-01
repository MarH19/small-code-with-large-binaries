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
  i++) {
   crc = i;
   for (j = 8;
 j > 0;
 j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }
   crc32_tab[i] = crc;
  }
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
   static uint32_t func_1(void) {
      uint8_t l_9 = 0x63;
      for (g_288 = (-9);
  (g_288 < 35);
  g_288 = safe_add_func_uint16_t_u_u(g_288, 4))     {
         return g_197;
     }
  }
   static uint16_t func_2(uint32_t p_3, uint32_t p_4, uint16_t p_5, int16_t p_6, int16_t p_7) {
      int32_t l_815 = 0x0C21575A;
      return l_815;
  }
   static int8_t func_10(uint32_t p_11, uint32_t p_12) {
      return p_12;
  }
   static uint16_t func_13(uint32_t p_14, int16_t p_15, const uint8_t p_16, int32_t p_17) {
      uint32_t l_734 = 4294967286U;
      int32_t l_735 = 0x4084D062;
      int8_t l_745 = 0x30;
      if ((((p_14 <= (g_153 = (p_17 <= ((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x90EE, (safe_add_func_uint16_t_u_u((p_15 != (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_131, (safe_div_func_uint32_t_u_u(4294967295U, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_734 = g_131), 0x0DF8CB76)), (((p_17 && 0x04) == p_14) < l_735))), l_735)))))) , 0x8D54), g_281))), p_14)))), 4294967289U)) ^ l_735), g_93)) == 1) | p_16) > p_15)))) || 0x38) < p_17))     {
         return g_93;
     }
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
      if ((safe_div_func_uint16_t_u_u((((g_153 , (((g_281 = ((safe_unary_minus_func_int8_t_s(l_338)) | p_20)) && (l_338 | ((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, (((l_352 = (((p_20 = l_338) ^ ((safe_rshift_func_int16_t_s_u(l_338, g_8)) || (safe_sub_func_int16_t_s_s(((g_131 || 251U) > p_22), g_110)))) >= 0U)) > 0x73544DA8) & g_197))), p_19)) < 65530U) < p_21), l_338)) & 1U))) ^ p_22)) && g_8) ^ g_332), l_338)))     {
         uint32_t l_400 = 0x680F40A1;
         int32_t l_413 = 0x68F75EC2;
         const uint32_t l_442 = 0xB7860BB8;
         int32_t l_443 = 0;
         g_152 = ((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_352 = (p_20 , (safe_add_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((+(safe_mul_func_int8_t_s_s(0x1F, (+((p_20 , (safe_div_func_int16_t_s_s((((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_19, (safe_lshift_func_int16_t_s_s(((g_93 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((+((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(5U, 3)), (safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((g_153 = (p_22 = ((l_400 = g_281) < (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x55, (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((((1 ^ ((safe_lshift_func_uint8_t_u_s((l_413 ^ l_338), 4)) >= 0)) | l_413) | p_22), 0x31)) > 0x2A6515E3), l_338)), p_22)))), l_413))))), l_413)) & p_21), 9U)) , l_414), p_19)))), 6)) ^ p_21)) && p_20) < g_281) == l_413), g_275)), p_21)) && 0x16), 2)) & 0xBE), 0x3B))) == g_275), 12)))) || 1U), g_8)) , 0xC997) < l_413), (-6)))) && 1U))))) <= g_188) | l_413) ^ 0x029F), (-1))), l_413)), (-9))) < g_131) == (-10)) , l_352), g_281)))), l_338)), g_197)), p_19)) <= 255U);
         p_21 = (((p_22 < ((l_413 = (safe_mul_func_uint16_t_u_u(p_19, (safe_mul_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((safe_add_func_int32_t_s_s(l_427, (safe_div_func_int16_t_s_s((((l_413 | ((safe_mul_func_uint16_t_u_u(p_20, (((l_443 = (safe_div_func_uint32_t_u_u(g_8, ((((safe_rshift_func_int8_t_s_u((l_352 = ((l_400 , (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_332, (((safe_add_func_int16_t_s_s((l_442 >= p_22), p_20)) , 250U) , 2U))), l_414))) & p_21)), 5)) != g_188) , l_400) , l_413)))) || g_93) != g_275))) <= p_19)) | 0xA622) && 0x32C7), p_22)))) & g_152) == 1), p_22)) <= p_20), 0x5559)) , p_19), 0x37453B0A)) <= p_21) ^ 251U), p_21))))) != p_20)) ^ g_131) ^ 0xE836181A);
     }
      else     {
         int32_t l_473 = 0x481DE108;
         int32_t l_507 = 0xCF3E1E3C;
         for (p_20 = (-21);
 (p_20 == 5);
 p_20 = safe_add_func_int32_t_s_s(p_20, 1))         {             uint32_t l_452 = 0x6EE753C9;             int32_t l_471 = (-1);             int32_t l_474 = 0x7C1FB03A;             int32_t l_475 = 0x6BECDB6F;             int32_t l_504 = (-1);             int32_t l_505 = 0x9FC1B618;             p_21 = (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((l_452 <= p_21), p_20)) >= (safe_div_func_int32_t_s_s((g_476 = (((l_475 = (l_452 , ((l_474 = (p_19 != (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((8 == (safe_rshift_func_int8_t_s_u(g_152, ((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xA6, (safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((l_471 = (l_452 > l_338)), l_472)) != l_473), 255U)))), g_132)) | 0)))), 0xF7379A04)), l_473)), g_197)))) > 5))) && l_473) , g_152)), 4294967295U))) , g_281), l_473)), g_8)) ^ l_473) >= 0x857729BD);             for (l_471 = 0; (l_471 > 13); l_471 = safe_add_func_uint8_t_u_u(l_471, 7))             {                 uint32_t l_487 = 4294967295U;                 int32_t l_488 = 0xD98FD706;                 p_21 = (g_131 ^ p_20);                 for (p_21 = 25; (p_21 > 2); --p_21)                 {                     int32_t l_506 = (-2);                     l_507 = (safe_mul_func_uint16_t_u_u(0x0D94, (safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((((l_487 , (l_352 = (l_488 = 0x71))) || (!(safe_rshift_func_int16_t_s_s((l_505 = (l_475 = (l_352 = ((safe_add_func_uint32_t_u_u((l_473 = (l_474 = (1U < (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((((g_476 = p_19) | g_224) <= ((safe_add_func_int16_t_s_s(0xD14B, 0x6D17)) || ((((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(g_332, p_22)) & l_473), l_504)) | 0x0615C79E) ^ 0xD5) >= l_487))) & g_131) <= p_22) <= 0xB876), l_487)), l_473))))), 0xA3907394)) ^ g_153)))), 1)))) >= 0U), l_506)) == l_414), p_21))));                     l_473 = p_19;                 }                 g_152 = (safe_rshift_func_uint8_t_u_s((p_20 >= (((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((-1), 0)) | ((safe_add_func_int32_t_s_s(((1U & (((((((((((-8) || (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x02, 2)), ((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((0x6421 == (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((+(safe_add_func_int8_t_s_s((g_281 , 3), ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((0x9541 & g_197), (-9))), (-3))) != 1)))) > 0), g_131)), 0xFE74)), p_21))), p_20)) , p_22), l_473)) && p_21)))) <= l_488) | 0x71) != l_475) , 0xB857) || g_476) == l_473) < g_224) >= 0x46) <= 4294967293U)) , l_537), g_8)) , g_332)), 0)) || 0x67) , l_538)), l_352));             }             if (((safe_sub_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((g_93 = (safe_add_func_uint32_t_u_u((((((l_538 = 1) <= ((safe_mod_func_int16_t_s_s(((g_197 = (g_275 = (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u(65535U, l_505)) && (safe_add_func_uint32_t_u_u(l_537, (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((g_585 = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((l_584 = ((l_352 = ((safe_mod_func_uint16_t_u_u(((g_288 == (l_507 = (safe_sub_func_int16_t_s_s((g_569 = (safe_rshift_func_int8_t_s_s(l_338, l_504))), (safe_sub_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((((((g_153 = (((safe_lshift_func_uint8_t_u_s(((((safe_sub_func_int16_t_s_s((g_583 = (safe_sub_func_int8_t_s_s((g_476 = ((safe_lshift_func_int8_t_s_u((+(l_505 && 6U)), g_153)) != g_275)), 0x0F))), g_110)) , p_20) , p_22) > 4), l_505)) , g_332) >= g_332)) & 0) , 0x65) < p_21) == p_22), g_275)) , l_473) ^ l_507), l_474)))))) & 0), p_19)) <= 0)) ^ l_473)), 0)), g_288)) == l_473)), l_427)) , l_475), l_338)), 3U))))) , l_352) & 0x69), g_188)))) | p_19), p_19)) > 0xB223)) , l_473) | g_332) < l_474), g_132))), g_110)) <= 0xBC50) && p_20) == g_224), g_188)) <= l_414))             {                 uint8_t l_609 = 0xE5;                 p_21 = (~(g_288 = 0xB9A22583));                 if (g_281)                     break;                 for (g_583 = 0; (g_583 <= (-3)); --g_583)                 {                     uint32_t l_611 = 4294967292U;                     for (l_507 = 0; (l_507 >= 18); l_507 = safe_add_func_int16_t_s_s(l_507, 9))                     {                         l_505 = (-5);                         if (p_22)                             break;                     }                     for (g_585 = 0; (g_585 != 21); ++g_585)                     {                         int32_t l_610 = 0;                         int32_t l_637 = (-2);                         int32_t l_659 = (-6);                         g_152 = ((l_538 = (((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(1U, ((g_131 = (((p_21 = (-7)) , (safe_div_func_uint32_t_u_u((l_611 = ((9 <= (safe_unary_minus_func_uint8_t_u(((p_22 = (((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(g_188, g_583)) || (((((g_476 = ((((((p_21 , p_20) == ((l_609 = (p_20 == ((!(p_20 || l_427)) && g_281))) != l_504)) >= p_21) <= l_471) > g_332) != l_610)) == g_569) != (-1)) && 0x0406FBD9) > l_504)), g_153)), 0U)), p_20)) ^ g_197) > p_20)) >= p_20)))) ^ 0x257BD63F)), g_132))) || 2U)) , g_275))), g_569)) || 0x08D2831A) <= g_585)) && l_507);                         l_637 = (safe_mod_func_int32_t_s_s((p_21 = g_288), (safe_sub_func_int8_t_s_s(g_281, (l_474 && (p_20 != (safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((p_22 , (0x10DF && (g_153 = ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u((!(safe_sub_func_uint8_t_u_u((g_332 = (safe_rshift_func_int8_t_s_s(8, 2))), (l_610 = (safe_add_func_int16_t_s_s((p_22 == ((((safe_mod_func_int32_t_s_s(g_476, g_569)) <= (-5)) >= (-1)) != g_569)), g_131)))))), p_20)), p_19)) , g_153), 0x5227)) && 1U), l_609)) & 0x74794DED)))) < g_476), 0xFD9E)) , p_19), 1))))))));                         g_152 = (safe_div_func_int32_t_s_s((p_21 = (l_611 , ((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(p_20, (p_22 != (~(l_610 = ((safe_mod_func_uint32_t_u_u((g_583 > ((((!(safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((~(safe_add_func_int32_t_s_s(0x2B074A68, ((g_132 & (safe_lshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s((0x98 ^ (((0U < (l_505 >= p_19)) & 6U) != 254U)), l_610)) & l_427) < l_659) , 4U), 7))) & 4294967295U)))), 0)), p_19))) == 1U) || l_610) != l_611)), p_20)) > 0U)))))) , 4294967295U) , g_332), l_584)) , p_21))), 4294967295U));                         return g_188;                     }                     for (l_427 = 0; (l_427 != (-30)); l_427 = safe_sub_func_int8_t_s_s(l_427, 2))                     {                         uint32_t l_663 = 0x0DD1E963;                         g_132 = (safe_unary_minus_func_int32_t_s((l_663 != ((safe_mod_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(g_224, 7)) , (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((g_153 = (g_153 < (p_19 != (safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_uint16_t_u((safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s(g_476, ((((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(p_21, (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((g_569 = ((((((l_475 & (((safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((((~(((p_22 == p_22) | p_20) >= 0U)) != (-1)) <= (-10)), l_609)) , p_21), 1U)) < l_663) ^ l_538)) & p_22) && g_332) , l_537) || g_8) != 0x0D)), 8)), 0x28)) , p_22) , 1))) ^ l_507), 13)) , 0x55) & g_583) , p_21), 0xEDD1D08C)), 4294967291U)) , p_21) < p_20) & l_663))))))) ^ p_20)))))) | p_20), l_611)) , p_19), p_21))) < l_611), p_20)) & p_21))));                         p_21 = l_609;                     }                 }                 if (p_22)                     continue;             }             else             {                 for (g_197 = 0; (g_197 == (-24)); g_197 = safe_sub_func_int8_t_s_s(g_197, 4))                 {                     g_275 = l_352;                 }                 l_474 = l_352;             }         }
     }
  }
   static int32_t func_23(uint8_t p_24, uint32_t p_25, int16_t p_26, uint8_t p_27, int32_t p_28) {
      uint32_t l_206 = 0xC6651808;
      for (g_131 = (-11);
  (g_131 < 52);
  g_131++)     {
         int16_t l_223 = 0;
     }
      return g_153;
  }
   static uint32_t func_40(int32_t p_41) {
      int32_t l_165 = 0xB44CA3D1;
      uint8_t l_166 = 1U;
      for (p_41 = 0;
  (p_41 >= (-27));
  p_41 = safe_sub_func_uint32_t_u_u(p_41, 9))     {
         int32_t l_45 = 0x6C4779D4;
     }
      return l_165;
  }
   static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53) {
      int8_t l_65 = 0x65;
      int32_t l_73 = 9;
      int32_t l_76 = 0x8784865E;
      for (p_49 = (-26);
  (p_49 != 27);
  ++p_49)     {
         uint8_t l_66 = 3U;
         int32_t l_94 = 0;
         if ((((l_66 != (safe_div_func_int32_t_s_s((1U ^ (l_76 = (((l_65 , g_8) <= ((l_66 != (+(((p_49 != ((+(safe_lshift_func_int16_t_s_u((p_52 , (((p_53 = (((l_73 = p_49) || (safe_div_func_int32_t_s_s(0x4E0C42EF, l_66))) >= l_66)) == g_8) , p_51)), 5))) , p_51)) , l_66) <= g_8))) , g_8)) , 0xC37461BC))), p_51))) != 0xB0) <= l_65))         {             return p_52;         }
         else         {             uint32_t l_83 = 4294967294U;             const int32_t l_92 = 0;             g_93 = (~(((safe_lshift_func_uint8_t_u_u((0x6723 < l_66), (((p_53 = ((+(safe_sub_func_uint16_t_u_u((((((((255U > (l_66 , (p_49 , (l_83 = p_50)))) < ((safe_mul_func_uint8_t_u_u((0x8A7C || ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_8 , ((safe_mul_func_uint8_t_u_u(g_8, 1)) ^ g_8)), l_65)) >= l_66), l_66)) || l_92)), 0xB4)) || l_92)) , 0x7944D42B) , l_73) == p_49) || l_66) || p_52), p_52))) != 0)) > 0xC79E06D3) != g_8))) != 4294967295U) != p_49));             l_94 = p_53;         }
         l_76 = (safe_mul_func_int8_t_s_s((((l_76 >= p_50) ^ ((safe_rshift_func_int8_t_s_u((-1), 3)) ^ ((((safe_unary_minus_func_uint8_t_u((l_94 = 0U))) , (((p_53 , ((safe_mod_func_uint16_t_u_u(((0x89 >= ((0xB5BC == p_49) && (safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((p_53 , p_51) == l_76) , l_66), 6)), l_66)) & g_93), g_93)))) | 65535U), l_76)) <= 0U)) != g_8) == l_94)) , p_49) && 0xD0F3))) < g_93), p_50));
     }
  }
   static int8_t func_56(const int32_t p_57, uint8_t p_58, uint8_t p_59, uint16_t p_60) {
      return p_60;
  }
   int main (void) {
      int print_hash_value = 0;
  }
