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
  static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
   static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
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
   static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
  static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 - ui2;
 }
   static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
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
  static uint32_t g_2 = 0xB3198A8F;
  static uint32_t g_39 = 0xF5A2F617;
  static uint32_t g_54 = 0xAC245771;
  static int16_t g_57 = 1;
  static int32_t g_60 = 0x797B69E0;
  static int16_t g_65 = 0;
  static int16_t g_67 = 0;
  static uint16_t g_68 = 1U;
  static uint32_t g_73 = 7U;
  static uint32_t g_157 = 0x60329EC2;
  static int32_t g_158 = (-7);
  static int8_t g_161 = 0x1B;
  static int16_t g_162 = 0x8E61;
  static int32_t g_164 = (-10);
  static int32_t g_166 = (-1);
  static uint8_t g_194 = 9U;
  static int32_t g_196 = (-1);
  static uint32_t g_200 = 0xF1D446CA;
  static int32_t g_225 = 0x5D562BBF;
  static uint32_t g_226 = 0x14FDFC62;
  static uint8_t g_259 = 253U;
  static uint32_t g_263 = 0xC8B09539;
  static uint8_t g_311 = 1U;
  static uint8_t g_372 = 0x5C;
  static uint32_t g_407 = 5U;
  static int8_t g_515 = (-5);
  static int8_t g_524 = 0xF8;
  static uint16_t g_525 = 0U;
  static uint16_t g_528 = 0xFE20;
  static uint32_t g_662 = 0U;
  static const int8_t g_692 = 0x73;
  static uint32_t g_712 = 0xFE3A148C;
  static uint8_t g_722 = 0x34;
  static uint32_t g_739 = 0x20CCCE2B;
  static uint8_t g_760 = 8U;
  static uint32_t g_788 = 4294967294U;
  static int16_t func_5(int32_t p_6, int8_t p_7, uint32_t p_8, const uint32_t p_9);
  static int16_t func_10(int8_t p_11, uint8_t p_12, int32_t p_13);
  static int32_t func_19(uint8_t p_20, uint16_t p_21, uint32_t p_22);
  static const uint32_t func_30(int8_t p_31, const uint32_t p_32, int32_t p_33);
  static int8_t func_34(uint32_t p_35);
  inline static int32_t func_42(const int8_t p_43);
  inline static int16_t func_46(int16_t p_47, uint8_t p_48);
  static int16_t func_61(uint32_t p_62);
  static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98);
  inline static const uint32_t func_1(void) {
     uint8_t l_18 = 0xBB;
     int32_t l_23 = 0x4456E348;
     uint32_t l_287 = 0x71E7E6F1;
     const int8_t l_307 = 0x5D;
     int32_t l_799 = 1;
     g_2--;
     if ((func_5(g_2, (((func_10(((safe_mod_func_int32_t_s_s((l_18 ^= (safe_rshift_func_int8_t_s_u((-6), 1))), func_19(l_23, g_2, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_2 != l_23) == (((func_30(func_34(g_2), g_2, g_2) < l_23) && 0xAE) > g_2)), g_2)), 0x77)), l_23))))) ^ 0xB2), l_287, l_23) && g_166) <= (-1)) == l_287), g_2, l_307) >= g_515))     {         uint32_t l_644 = 1U;         uint16_t l_660 = 65532U;         int32_t l_661 = (-1);         g_662 |= (l_661 &= (l_660 ^= ((l_644 ^ (!(safe_rshift_func_uint8_t_u_s((g_225 >= ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_525, g_226)), (((safe_mod_func_int16_t_s_s((-1), (safe_sub_func_int16_t_s_s(0x8BF2, l_644)))) | 8U) | (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_23 = l_644), g_158)), 5))))) < g_372)), 1)))) ^ l_287)));     }
     else     {         uint8_t l_663 = 0xC1;         ++l_663;     }
     for (g_73 = (-30);
 (g_73 > 22);
 g_73++)     {         uint8_t l_668 = 249U;         uint8_t l_693 = 255U;         int16_t l_705 = (-10);         int32_t l_759 = 0xAFC11715;         const int32_t l_789 = 1;         int8_t l_794 = 1;         ++l_668;         if (((g_73 >= (((g_39 >= (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_668, 3)), 1)) == ((254U == (g_515 == (((safe_lshift_func_int16_t_s_u((g_200 > (safe_lshift_func_uint16_t_u_s(((l_23 = (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_23 < ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((l_287 && ((+(safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_2, 1)), g_67))) > l_18)), g_692)) | l_668), g_311)) | l_693)), g_662)), 1))) < g_372), 5))), 2)) == 2U) || g_259))) & g_2)) | g_60)) | g_372) && g_226)) > l_18))         {             int16_t l_702 = 0;             int32_t l_713 = 2;             int32_t l_737 = 1;             int32_t l_738 = 0xFCC5BC92;             g_225 = 0x83F3FB56;             if ((g_158 & (safe_add_func_uint8_t_u_u((((-8) ^ (safe_rshift_func_int16_t_s_u((-6), (l_693 <= ((safe_mul_func_int16_t_s_s((-8), (safe_rshift_func_uint8_t_u_u((++g_372), l_705)))) != (g_65 |= g_162)))))) ^ (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0, 4)), (l_713 &= (((g_67 & g_712) > 0xD225) <= g_161)))) ^ 0x63), g_194))), 248U))))             {                 uint8_t l_714 = 253U;                 uint8_t l_721 = 255U;                 l_713 ^= g_525;                 g_722 = ((((l_714 >= ((((((g_372 = (safe_add_func_int32_t_s_s((0xC2A938EA && (g_225 = 0x7C3AB263)), ((safe_add_func_uint8_t_u_u(247U, (0xBC <= l_714))) != g_196)))) >= (safe_add_func_int16_t_s_s((l_287 != 6), l_287))) ^ 0xEAC0C169) & l_714) != 0x3D978722) == 0x3A)) <= l_702) <= l_721) >= l_713);                 g_225 = (((safe_sub_func_int8_t_s_s((l_705 < ((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((g_158 | (safe_mul_func_uint8_t_u_u((l_713 = ((((safe_rshift_func_uint16_t_u_u(l_23, 1)) != (l_702 <= ((g_525 = (safe_rshift_func_uint8_t_u_u(l_714, g_722))) < (safe_mul_func_uint8_t_u_u(l_737, l_738))))) <= ((g_712 || l_23) && g_166)) == g_524)), l_714))) < l_287) >= l_738) || l_668) <= g_200), 0x03)), g_65)) | g_712) & l_668) >= l_18)), 0x37)) | g_524) & 0);                 g_739++;             }             else             {                 uint16_t l_744 = 0x005B;                 int32_t l_745 = 4;                 int32_t l_758 = (-1);                 if (g_263)                     break;                 for (l_287 = 0; (l_287 < 20); ++l_287)                 {                     l_744 ^= 0xCEFEA66D;                     if (g_67)                         break;                 }                 l_745 = g_54;                 g_225 &= ((l_745 > (safe_sub_func_int32_t_s_s(l_307, l_287))) > (safe_mod_func_int8_t_s_s(l_745, (safe_sub_func_uint8_t_u_u(g_194, ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_311, (l_758 &= (safe_mul_func_int16_t_s_s((0xA7 && l_713), g_372))))), 65535U)) == g_263))))));             }             g_760--;         }         else         {             int16_t l_787 = 0x2772;             g_225 = (safe_lshift_func_uint8_t_u_s((((g_662 && g_194) == (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_759, (g_525 & 4294967290U))), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((0x8AB1 != (0x6B06272A < (((safe_lshift_func_int8_t_s_s((g_524 &= ((((((l_23 = ((safe_lshift_func_uint16_t_u_u(((((l_787 = (safe_add_func_uint32_t_u_u(((!g_226) < (!((safe_sub_func_int8_t_s_s(0x43, 0xE7)) > g_39))), 0x9CB78068))) & g_788) <= 252U) && 1), 0)) ^ l_307)) | g_788) ^ 0) != g_2) ^ l_307) > l_668)), l_668)) <= l_705) || l_23))), (-1))), 7)) != l_18) || g_162), 7)) != g_739), 2))))) <= g_65), 4));             return l_789;         }         g_225 = (l_799 &= ((((l_23 &= (safe_lshift_func_uint16_t_u_u(l_789, 9))) ^ g_164) >= (safe_mul_func_int8_t_s_s(l_287, l_794))) & (safe_lshift_func_int16_t_s_s(((g_692 & 0) ^ (l_287 != (safe_rshift_func_uint8_t_u_u((g_158 < l_794), g_528)))), 12))));         return g_739;     }
     return g_161;
 }
  static int16_t func_5(int32_t p_6, int8_t p_7, uint32_t p_8, const uint32_t p_9) {
     int32_t l_308 = 0x0E747864;
     return g_225;
 }
  static int16_t func_10(int8_t p_11, uint8_t p_12, int32_t p_13) {
     uint32_t l_296 = 0x17964D27;
     uint8_t l_301 = 255U;
     uint32_t l_302 = 0x154BAD24;
     int32_t l_306 = (-1);
     g_225 ^= ((safe_lshift_func_int8_t_s_u(p_12, 1)) | ((p_11 >= (safe_add_func_int8_t_s_s(p_13, (safe_mul_func_int8_t_s_s(p_11, l_296))))) <= ((-9) < 4294967290U)));
     for (g_161 = 0;
 (g_161 != (-14));
 g_161--)     {         int8_t l_305 = 0x03;         l_301 |= (safe_mul_func_int16_t_s_s(p_13, 0x19AF));         l_302 = 0;         for (g_259 = 23; (g_259 > 30); g_259++)         {             l_305 = p_12;         }     }
     l_306 = (-1);
     return g_166;
 }
  static int32_t func_19(uint8_t p_20, uint16_t p_21, uint32_t p_22) {
     int16_t l_275 = (-10);
     int32_t l_282 = 1;
     int32_t l_286 = (-1);
     l_286 = ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((l_275 ^= (safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s(p_22, (safe_lshift_func_int16_t_s_s(1, 12))))))), g_161)), ((safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((l_282 = (g_226 && (safe_sub_func_int16_t_s_s(l_282, (safe_unary_minus_func_int16_t_s((l_282 ^ (l_282 < (safe_mod_func_int8_t_s_s(0x0F, 255U)))))))))), 5)) != g_54) && 1U) ^ (-1)), 4)) ^ 1))) & l_286);
     return g_194;
 }
  static const uint32_t func_30(int8_t p_31, const uint32_t p_32, int32_t p_33) {
     uint32_t l_231 = 0xBB9BCF21;
     int32_t l_234 = 0x6E769FB3;
     int32_t l_235 = (-3);
     int32_t l_236 = 0x6F2BD89C;
     int32_t l_260 = 0x8005EDC9;
     l_236 = ((safe_rshift_func_uint8_t_u_u(((g_161 = (safe_sub_func_int32_t_s_s(((g_226 >= g_2) | ((((l_231 > (l_231 && (((g_225 = ((0 && g_196) < (l_235 |= (g_157 & (l_234 &= (safe_mod_func_uint16_t_u_u((l_231 == (0x21 | p_32)), l_231))))))) >= l_231) < g_65))) ^ p_32) | g_157) == g_157)), g_164))) | 0x28), 3)) || 0x8B);
     l_260 ^= (l_234 <= ((safe_mul_func_uint16_t_u_u((!(safe_mod_func_uint16_t_u_u(l_236, g_54))), (g_68 = g_225))) > ((g_259 = ((!(safe_rshift_func_int8_t_s_u((l_235 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((1 <= l_234) != p_31) > ((safe_lshift_func_int8_t_s_u((g_161 |= (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_164, (-1))), 4294967293U))), p_32)) >= g_158)), p_33)), l_234)) == l_231)), p_32))) | 0U)) == g_225)));
     for (g_225 = 0;
 (g_225 != 16);
 g_225++)     {         p_33 |= g_161;     }
     g_263--;
     return g_54;
 }
  static int8_t func_34(uint32_t p_35) {
     int32_t l_38 = 0x37BD55FD;
     --g_39;
     g_226 |= func_42((safe_mul_func_int16_t_s_s(func_46(l_38, p_35), func_61(p_35))));
     return g_60;
 }
  inline static int32_t func_42(const int8_t p_43) {
     int16_t l_221 = 0x246B;
     int32_t l_222 = 8;
     int32_t l_223 = 0x504CD9E1;
     int32_t l_224 = 1;
     l_224 = ((p_43 && ((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((g_166 | 0x2440A599) <= (0xCF || (safe_add_func_uint8_t_u_u(p_43, (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((((((g_225 = ((l_223 ^= ((0x77FD == (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_222 = (((safe_lshift_func_int16_t_s_u(0, 8)) > 0x854D) > ((safe_rshift_func_int8_t_s_s((l_221 = p_43), g_2)) != g_73))), g_161)), (-1)))) | g_158)) >= l_224)) ^ p_43) ^ p_43) && 0xFE) >= p_43) != p_43) >= l_224), p_43)), p_43)))))), l_224)), g_65)) > l_224), p_43)) > g_60)) ^ l_224);
     return p_43;
 }
  inline static int16_t func_46(int16_t p_47, uint8_t p_48) {
     uint16_t l_49 = 0U;
     int32_t l_50 = 0xC51938D1;
     uint16_t l_51 = 0xAFB1;
     int32_t l_58 = 0x18A84D23;
     int32_t l_59 = 0;
     l_50 = (l_49 ^= p_48);
     g_60 = ((((l_59 &= ((l_50 == 0x05687C41) ^ ((0x76 || (l_51 != ((g_2 <= (g_39 | (safe_add_func_uint16_t_u_u(p_47, (l_58 = ((g_54 = l_50) <= (g_57 = (safe_sub_func_uint8_t_u_u(((l_51 | p_48) == 4294967294U), p_48))))))))) && p_48))) & p_47))) | g_39) && 0xD6B8) ^ 246U);
     return p_48;
 }
  static int16_t func_61(uint32_t p_62) {
     int16_t l_63 = 0x6F86;
     int32_t l_64 = 0x0C2DF100;
     int32_t l_66 = 0x9320AF47;
     l_63 ^= p_62;
     g_200 = ((safe_mod_func_uint16_t_u_u(65535U, (~(g_65 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_66 = ((safe_sub_func_int32_t_s_s(l_66, (((((safe_add_func_uint8_t_u_u(func_95((safe_lshift_func_int8_t_s_u((g_68 != (!(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u(l_66, (safe_mod_func_int8_t_s_s(((l_64 = (((safe_mul_func_int8_t_s_s(g_2, ((0x7C <= (safe_lshift_func_uint16_t_u_u(((g_39 || (-3)) | g_73), l_66))) & p_62))) != 0U) >= 0xEF6A07EB)) > l_63), 0x4D)))))) < 0xCD62) < g_67))), l_63)), l_66, l_66), l_66)) != l_63) & l_66) < g_2) <= p_62))) & p_62)), 5)), 0x2C94BBC9)), g_73)), g_39)), l_63)), l_63)))))) & p_62);
     return p_62;
 }
  static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98) {
     uint8_t l_121 = 255U;
     const uint32_t l_155 = 4294967290U;
     int8_t l_156 = 0xBC;
     int32_t l_159 = 0xD91FBEB5;
     int32_t l_163 = 0x4DB28FCC;
     int32_t l_165 = 0x7E15CB46;
     uint8_t l_199 = 249U;
     if ((((safe_mod_func_int8_t_s_s(g_68, 1)) || g_39) || 0x65))     {         int16_t l_148 = 0x8976;         int32_t l_160 = 1;         g_166 = ((l_165 = ((g_164 = ((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(((l_163 |= (safe_sub_func_uint8_t_u_u(l_121, ((!(safe_lshift_func_int8_t_s_u(g_2, ((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_162 &= (~(g_161 = (safe_lshift_func_int8_t_s_u((l_160 = ((safe_lshift_func_int8_t_s_s((((l_159 = (g_158 ^= (safe_sub_func_int16_t_s_s((((g_157 &= (((safe_add_func_int8_t_s_s(0xA8, (((safe_lshift_func_int8_t_s_u((g_39 || g_73), (safe_rshift_func_uint16_t_u_s((g_68 = (safe_mul_func_int8_t_s_s((-3), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((l_148 || (safe_mul_func_uint8_t_u_u((((((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_155 | (((-1) <= p_96) >= (-1))) & p_98), g_2)), g_67)) <= p_97) == p_96) >= p_96) >= p_96) || 65526U) | 0x9D), l_156))), 13)), 6))))), 14)))) >= 0) != 0))) & p_98) || g_68)) > g_65) > p_97), p_97)))) & p_96) < (-3)), p_96)) >= 0x45A0)), 4))))), 0x6E83)), l_155)) && 0x1FFBB293)))) | g_65)))) == p_98), p_97)) >= 0x82) && (-1)), g_39)) > p_96)) & g_2)) && g_164);         l_160 = p_97;         for (g_166 = (-17); (g_166 != (-11)); ++g_166)         {             for (g_68 = (-11); (g_68 == 7); g_68 = safe_add_func_int16_t_s_s(g_68, 7))             {                 uint32_t l_171 = 0U;                 l_171 = p_97;                 if (p_96)                     break;             }         }     }
     else     {         uint32_t l_195 = 0x10380307;         for (g_164 = 0; (g_164 <= (-9)); g_164--)         {             g_196 = ((g_68--) ^ (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((0U | (g_157 && (safe_lshift_func_int8_t_s_u((g_161 ^= g_158), (((g_67 | p_97) || (((g_67 = (safe_add_func_int16_t_s_s((0xCF && (safe_add_func_int8_t_s_s(l_159, (p_96 | (safe_lshift_func_uint8_t_u_u(((g_194 = (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_96, 0xFB19)), p_97)) < g_157), 8))) ^ l_121), l_195)))))), 1U))) == p_97) >= g_162)) & g_157))))), l_195)), p_98)));             for (g_158 = (-8); (g_158 <= 6); ++g_158)             {                 if (l_195)                     break;             }         }         l_199 ^= g_166;     }
     return p_97;
 }
  int main (void) {
     int print_hash_value = 0;
     transparent_crc(g_760, "g_760", print_hash_value);
     return 0;
 }
