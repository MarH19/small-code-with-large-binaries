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
   static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 + ui2;
  }
   static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 - ui2;
  }
   static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ((unsigned int)ui1) * ((unsigned int)ui2);
  }
    static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
  }
   static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
  }
   static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
  }
   static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return ((unsigned int)ui1) * ((unsigned int)ui2);
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
            static uint32_t crc32_tab[256];
   static uint32_t crc32_context = 0xFFFFFFFFUL;
   static void crc32_gentab (void) {
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
   static uint32_t g_2 = 0xB3198A8F;
   static uint32_t g_39 = 0xF5A2F617;
   static uint32_t g_54 = 0xAC245771;
   static int32_t g_60 = 0x797B69E0;
   static int16_t g_65 = 0;
   static int16_t g_67 = 0;
   static uint32_t g_73 = 7U;
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
   inline static const uint32_t func_1(void) {
      uint8_t l_18 = 0xBB;
      int32_t l_23 = 0x4456E348;
      uint32_t l_287 = 0x71E7E6F1;
      const int8_t l_307 = 0x5D;
      int32_t l_799 = 1;
      for (g_73 = (-30);
  (g_73 > 22);
  g_73++)     {
         uint8_t l_668 = 249U;
         uint8_t l_693 = 255U;
         int16_t l_705 = (-10);
         int32_t l_759 = 0xAFC11715;
         const int32_t l_789 = 1;
         int8_t l_794 = 1;
         ++l_668;
         if (((g_73 >= (((g_39 >= (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_668, 3)), 1)) == ((254U == (g_515 == (((safe_lshift_func_int16_t_s_u((g_200 > (safe_lshift_func_uint16_t_u_s(((l_23 = (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_23 < ((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((l_287 && ((+(safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_2, 1)), g_67))) > l_18)), g_692)) | l_668), g_311)) | l_693)), g_662)), 1))) < g_372), 5))), 2)) == 2U) || g_259))) & g_2)) | g_60)) | g_372) && g_226)) > l_18))         {             int16_t l_702 = 0;             int32_t l_713 = 2;             int32_t l_737 = 1;             int32_t l_738 = 0xFCC5BC92;             g_225 = 0x83F3FB56;             if ((g_158 & (safe_add_func_uint8_t_u_u((((-8) ^ (safe_rshift_func_int16_t_s_u((-6), (l_693 <= ((safe_mul_func_int16_t_s_s((-8), (safe_rshift_func_uint8_t_u_u((++g_372), l_705)))) != (g_65 |= g_162)))))) ^ (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(0, 4)), (l_713 &= (((g_67 & g_712) > 0xD225) <= g_161)))) ^ 0x63), g_194))), 248U))))             {                 uint8_t l_714 = 253U;                 uint8_t l_721 = 255U;                 l_713 ^= g_525;                 g_722 = ((((l_714 >= ((((((g_372 = (safe_add_func_int32_t_s_s((0xC2A938EA && (g_225 = 0x7C3AB263)), ((safe_add_func_uint8_t_u_u(247U, (0xBC <= l_714))) != g_196)))) >= (safe_add_func_int16_t_s_s((l_287 != 6), l_287))) ^ 0xEAC0C169) & l_714) != 0x3D978722) == 0x3A)) <= l_702) <= l_721) >= l_713);                 g_225 = (((safe_sub_func_int8_t_s_s((l_705 < ((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((g_158 | (safe_mul_func_uint8_t_u_u((l_713 = ((((safe_rshift_func_uint16_t_u_u(l_23, 1)) != (l_702 <= ((g_525 = (safe_rshift_func_uint8_t_u_u(l_714, g_722))) < (safe_mul_func_uint8_t_u_u(l_737, l_738))))) <= ((g_712 || l_23) && g_166)) == g_524)), l_714))) < l_287) >= l_738) || l_668) <= g_200), 0x03)), g_65)) | g_712) & l_668) >= l_18)), 0x37)) | g_524) & 0);                 g_739++;             }             else             {                 uint16_t l_744 = 0x005B;                 int32_t l_745 = 4;                 int32_t l_758 = (-1);                 if (g_263)                     break;                 for (l_287 = 0; (l_287 < 20); ++l_287)                 {                     l_744 ^= 0xCEFEA66D;                     if (g_67)                         break;                 }                 l_745 = g_54;                 g_225 &= ((l_745 > (safe_sub_func_int32_t_s_s(l_307, l_287))) > (safe_mod_func_int8_t_s_s(l_745, (safe_sub_func_uint8_t_u_u(g_194, ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_311, (l_758 &= (safe_mul_func_int16_t_s_s((0xA7 && l_713), g_372))))), 65535U)) == g_263))))));             }             g_760--;         }
         else         {             int16_t l_787 = 0x2772;             g_225 = (safe_lshift_func_uint8_t_u_s((((g_662 && g_194) == (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_759, (g_525 & 4294967290U))), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((0x8AB1 != (0x6B06272A < (((safe_lshift_func_int8_t_s_s((g_524 &= ((((((l_23 = ((safe_lshift_func_uint16_t_u_u(((((l_787 = (safe_add_func_uint32_t_u_u(((!g_226) < (!((safe_sub_func_int8_t_s_s(0x43, 0xE7)) > g_39))), 0x9CB78068))) & g_788) <= 252U) && 1), 0)) ^ l_307)) | g_788) ^ 0) != g_2) ^ l_307) > l_668)), l_668)) <= l_705) || l_23))), (-1))), 7)) != l_18) || g_162), 7)) != g_739), 2))))) <= g_65), 4));             return l_789;         }
         g_225 = (l_799 &= ((((l_23 &= (safe_lshift_func_uint16_t_u_u(l_789, 9))) ^ g_164) >= (safe_mul_func_int8_t_s_s(l_287, l_794))) & (safe_lshift_func_int16_t_s_s(((g_692 & 0) ^ (l_287 != (safe_rshift_func_uint8_t_u_u((g_158 < l_794), g_528)))), 12))));
         return g_739;
     }
  }
   static int16_t func_5(int32_t p_6, int8_t p_7, uint32_t p_8, const uint32_t p_9) {
      return g_194;
  }
   inline static int16_t func_46(int16_t p_47, uint8_t p_48) {
      return p_48;
  }
   static int16_t func_61(uint32_t p_62) {
      return p_62;
  }
   static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98) {
      return p_97;
  }
   int main (void) {
      int print_hash_value = 0;
  }
