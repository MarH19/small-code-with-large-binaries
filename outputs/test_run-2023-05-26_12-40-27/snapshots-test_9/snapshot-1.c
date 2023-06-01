 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef signed long int __int64_t;
  typedef unsigned long int __uint64_t;
  typedef long int __off_t;
  typedef long int __off64_t;
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __int64_t int64_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
  typedef __uint64_t uint64_t;
  typedef struct {
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
   static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     si1 * si2;
 }
  static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
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
         static int64_t (safe_unary_minus_func_int64_t_s)(int64_t si ) {
   return     (si==(-9223372036854775807L -1)) ?     ((si)) :     -si;
 }
  static int64_t (safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?     ((si1)) :     (si1 + si2);
 }
  static int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
 }
   static int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int64_t (safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
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
  static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ui1 - ui2;
 }
  static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
 }
   static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
 }
  static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 - ui2;
 }
  static uint32_t (safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
  static uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
 }
       static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return ui1 + ui2;
 }
  static uint64_t (safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return ui1 - ui2;
 }
   static uint64_t (safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
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
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>0) & 0xff);
  crc32_byte ((val>>8) & 0xff);
  crc32_byte ((val>>16) & 0xff);
  crc32_byte ((val>>24) & 0xff);
  crc32_byte ((val>>32) & 0xff);
  crc32_byte ((val>>40) & 0xff);
  crc32_byte ((val>>48) & 0xff);
  crc32_byte ((val>>56) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  struct S0 {
    unsigned f0 : 7;
    unsigned f1 : 2;
    signed f2 : 29;
    signed f3 : 20;
    unsigned f4 : 21;
    const signed f5 : 26;
    uint64_t f6;
    signed f7 : 16;
 };
  static int32_t g_2 = 0L;
  static int32_t g_7 = 0x4515FDC8L;
  static int64_t g_40 = 6L;
  static uint8_t g_46 = 0x66L;
  static int32_t *g_100 = &g_7;
  static int32_t **g_99 = &g_100;
  static int8_t g_106 = 0x81L;
  static int64_t g_126 = 0x3FF80110037B8604LL;
  static int16_t g_128 = 0xB3BAL;
  static int16_t g_130 = (-1L);
  static int32_t g_132 = 0L;
  static int32_t **g_133 = &g_100;
  static uint64_t g_140 = 1UL;
  static uint64_t g_142 = 7UL;
  static uint16_t g_152 = 0xF855L;
  static uint16_t g_205 = 0xDBD7L;
  static struct S0 g_271 = {
2,1,-11116,827,1412,-5598,18446744073709551615UL,177};
  static uint8_t g_310 = 255UL;
  static uint8_t g_317 = 5UL;
  static uint16_t g_383 = 65527UL;
  static int32_t g_454 = 0L;
  static int64_t g_562 = 1L;
  static int8_t g_585 = 0x1BL;
  static int64_t g_589 = 1L;
  static uint32_t g_643 = 4294967295UL;
  static int32_t g_663 = (-1L);
  static uint64_t *g_675 = &g_142;
  static uint64_t **g_674 = &g_675;
  static uint16_t g_719 = 0x5253L;
  static uint32_t g_746 = 0x8304BA9EL;
  static uint16_t **g_781 = (void*)0;
  static uint16_t ***g_780 = &g_781;
  static int16_t g_937 = 0xA768L;
  static uint16_t g_946 = 65530UL;
  static uint32_t g_971 = 1UL;
  static const uint32_t g_988 = 0xB3791BA4L;
  static const uint32_t *g_987 = &g_988;
  static int8_t *g_997 = (void*)0;
  static int8_t **g_996 = &g_997;
  static int8_t ***g_995 = &g_996;
  static uint64_t ****g_1007 = (void*)0;
  static uint32_t g_1009 = 0UL;
  static const uint64_t g_1093 = 18446744073709551615UL;
  static int8_t g_1151 = 0x78L;
  static int8_t *g_1155 = &g_585;
  static uint32_t g_1201 = 0xD9C6C5E1L;
  static int64_t g_1293 = 0xE97C3A803B7F3F86LL;
  static uint16_t g_1295 = 65534UL;
  static int32_t func_53(uint64_t p_54, int32_t p_55);
  static int32_t * func_56(int32_t * p_57, int32_t * p_58, struct S0 p_59);
  static int32_t * func_60(int32_t * p_61);
  static int32_t * func_62(int32_t p_63);
  static int8_t func_69(struct S0 p_70, uint64_t p_71, int32_t * p_72);
  static struct S0 func_73(int32_t p_74, int16_t p_75, uint16_t p_76);
  static uint8_t func_79(int32_t ** p_80, int32_t ** p_81, int32_t ** p_82, int16_t p_83, int32_t * p_84);
  static int32_t ** func_85(uint64_t p_86, int32_t * p_87);
  static const int64_t func_90(struct S0 p_91, uint8_t p_92);
  static struct S0 func_1(void) {
     int32_t *l_8 = &g_7;
     int32_t l_9 = 0x74952F34L;
     int32_t *l_10 = &g_2;
     int32_t *l_11 = &g_2;
     int32_t *l_12 = (void*)0;
     int32_t *l_13 = &g_7;
     int32_t *l_14 = &l_9;
     int32_t *l_15 = &g_7;
     int32_t *l_16 = (void*)0;
     int32_t l_17 = (-10L);
     int32_t l_18 = 0x9105FA2EL;
     int32_t *l_19 = &g_2;
     int32_t *l_20 = (void*)0;
     int32_t *l_24 = &l_9;
     int32_t *l_25 = &g_2;
     int32_t *l_26 = &l_9;
     int32_t *l_30 = &g_7;
     int32_t l_31 = 1L;
     int32_t *l_32 = &l_31;
     int32_t *l_33 = &l_17;
     int32_t *l_34 = &l_18;
     int32_t *l_35 = &l_9;
     int32_t *l_36 = &l_9;
     int32_t l_37 = 0x883E731EL;
     int32_t *l_38 = (void*)0;
     int32_t *l_39 = (void*)0;
     int32_t l_41 = 1L;
     int32_t *l_42 = (void*)0;
     int32_t l_43 = 0L;
     int32_t *l_44 = &l_41;
     int32_t *l_45 = &l_31;
     uint8_t *l_1124 = &g_310;
     struct S0 l_1131 = {7,0,14275,80,1002,7194,7UL,-138};
     int8_t ***l_1136 = &g_996;
     int16_t *l_1144 = &g_937;
     uint64_t ***l_1149 = &g_674;
     uint64_t ****l_1148 = &l_1149;
     struct S0 *l_1157 = &l_1131;
     struct S0 ** const l_1156 = &l_1157;
     uint8_t l_1163 = 0xFAL;
     uint16_t *l_1186 = &g_383;
     uint16_t **l_1185 = &l_1186;
 lbl_1167:     for (g_2 = 24;
 (g_2 != 7);
 --g_2)     {         uint16_t l_5 = 0xA028L;         int32_t *l_6 = &g_7;         (*l_6) = l_5;     }
     ++g_46;
     for (g_40 = 0;
 (g_40 != (-20));
 --g_40)     {         uint8_t l_1120 = 255UL;         int32_t l_1121 = 0x79D072FBL;         int8_t ****l_1137 = &g_995;         uint64_t ***l_1139 = &g_674;         uint64_t ****l_1138 = &l_1139;         int32_t l_1275 = 1L;         const uint16_t *l_1306 = (void*)0;         for (l_37 = 12; (l_37 >= 5); l_37--)         {             int64_t l_1119 = 0L;             uint8_t *l_1123 = &l_1120;             uint8_t **l_1122 = &l_1123;             uint64_t *l_1134 = &g_142;             (*l_33) = func_53(g_7, g_46);             (*l_32) |= (safe_mul_func_uint8_t_u_u((g_271 , (0x88A323A0AE2A2E5CLL != (((*l_1122) = ((safe_mul_func_uint16_t_u_u((!((**g_99) <= ((safe_add_func_uint8_t_u_u((9L & ((*l_34) &= ((*l_44) , l_1119))), l_1120)) || (((l_1121 = (*l_14)) ^ ((*g_675) != g_663)) == 1UL)))), 0x009BL)) , (void*)0)) != l_1124))), l_1120));             for (g_126 = 25; (g_126 != (-23)); g_126 = safe_sub_func_int8_t_s_s(g_126, 6))             {                 uint16_t *l_1129 = (void*)0;                 uint16_t *l_1130 = &g_205;                 uint16_t **l_1132 = (void*)0;                 (*l_35) |= ((safe_sub_func_int8_t_s_s((((*l_1130) = l_1121) == (g_271.f3 | g_988)), (g_946 || 0x81L))) , (((l_1131 , (&l_1130 != l_1132)) < 0xCD2C7F218BE1B822LL) <= (*l_34)));             }             (*l_11) &= ((*l_36) = ((safe_unary_minus_func_int8_t_s((((*g_674) = (*g_674)) != l_1134))) & 0x71L));         }         if ((+(((g_317 , ((*l_1137) = l_1136)) == l_1136) ^ (((*l_1138) = &g_674) == &g_674))))         {             int16_t l_1147 = 0x43D9L;             int32_t l_1166 = 1L;             if (((*g_987) , ((g_1007 = g_1007) != (((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((g_271.f1 , 0UL) != (**g_133)) <= (*l_8)), (l_1144 == &g_130))), (safe_add_func_int8_t_s_s(l_1147, l_1147)))) >= g_126) , l_1148))))             {                 return g_271;             }             else             {                 uint8_t l_1150 = 0UL;                 int8_t *l_1152 = &g_1151;                 int8_t **l_1153 = (void*)0;                 int8_t **l_1154 = &l_1152;                 int32_t ****l_1160 = (void*)0;                 int32_t ***l_1162 = &g_99;                 int32_t ****l_1161 = &l_1162;                 struct S0 * const * const l_1164 = &l_1157;                 int64_t *l_1165 = &g_126;                 (*l_35) = (l_1150 == (g_1151 ^ ((((**l_1136) = (*g_996)) != (g_1155 = ((*l_1154) = l_1152))) >= (l_1166 = ((*l_1165) = (((l_1156 == ((safe_add_func_int16_t_s_s((func_73(g_746, ((-7L) > (((255UL || ((((*l_1161) = &g_133) != &g_99) > (*l_26))) & (**g_99)) , (**g_674))), l_1147) , 1L), l_1163)) , l_1164)) , 4294967293UL) || g_152))))));                 (*l_44) = 2L;             }         }         else         {             int16_t l_1170 = 0xC8B1L;             int32_t l_1237 = (-1L);             int32_t l_1282 = 0x78CB20F4L;             int32_t l_1284 = 0x797A8614L;             const int8_t l_1311 = 0xAFL;             if (g_663)                 goto lbl_1167;             for (l_31 = 0; (l_31 == (-13)); --l_31)             {                 uint64_t l_1187 = 18446744073709551613UL;                 int32_t l_1250 = 0xB15AD788L;                 if (l_1170)                     break;             }             if ((**g_99))                 break;             if (l_1311)                 continue;         }     }
     return g_271;
 }
  static int32_t func_53(uint64_t p_54, int32_t p_55) {
     int32_t *l_662 = &g_663;
     (*g_99) = func_56(func_60(func_62(((void*)0 != &p_55))), l_662, g_271);
     return p_54;
 }
  static int32_t * func_56(int32_t * p_57, int32_t * p_58, struct S0 p_59) {
     int64_t *l_671 = &g_562;
     int32_t l_687 = 1L;
     int32_t l_715 = 0L;
     int32_t l_736 = 0x4C0A7CF9L;
     uint16_t *l_757 = &g_719;
     uint16_t **l_756 = &l_757;
     int32_t *l_764 = &g_132;
     uint64_t ***l_766 = &g_674;
     uint64_t ****l_765 = &l_766;
     uint64_t *****l_767 = &l_765;
     uint32_t l_779 = 5UL;
     uint64_t *l_794 = &g_271.f6;
     if ((**g_133))     {         int64_t *l_667 = &g_589;         uint32_t l_668 = 1UL;         uint64_t **l_672 = (void*)0;         uint64_t ***l_673 = &l_672;         (**g_99) = (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s((((*l_667) &= p_59.f3) || l_668))) > ((((18446744073709551612UL != (safe_lshift_func_uint8_t_u_u(((l_671 == l_671) , g_383), 7))) , ((*l_673) = l_672)) == g_674) && ((safe_lshift_func_uint16_t_u_u(65529UL, p_59.f4)) <= 65534UL))), l_668));     }
     else     {         int8_t l_705 = 0xB3L;         int32_t l_713 = 0xEC9FA329L;         uint16_t ***l_758 = (void*)0;         uint16_t ***l_759 = &l_756;         for (g_128 = 4; (g_128 >= 17); g_128 = safe_add_func_uint16_t_u_u(g_128, 2))         {             return (*g_133);         }         for (g_132 = 14; (g_132 > 29); g_132 = safe_add_func_int8_t_s_s(g_132, 1))         {             int32_t *l_682 = &g_2;             int32_t *l_683 = &g_7;             int32_t *l_684 = &g_7;             int32_t *l_685 = &g_2;             int32_t *l_686 = &g_663;             int32_t *l_688 = &g_454;             int32_t *l_689 = (void*)0;             int32_t *l_690 = &g_454;             int32_t *l_691 = (void*)0;             int32_t *l_692 = &l_687;             int32_t *l_693 = &g_663;             int32_t *l_694 = &g_7;             int32_t *l_695 = &l_687;             int32_t *l_696 = &g_454;             int32_t *l_697 = &g_7;             int32_t *l_698 = (void*)0;             int32_t *l_699 = &g_2;             int32_t *l_700 = &g_454;             int32_t *l_701 = &g_2;             int32_t *l_702 = &l_687;             int32_t *l_703 = &g_7;             int32_t *l_704 = &g_454;             int32_t *l_706 = &l_687;             int32_t *l_707 = (void*)0;             int32_t *l_708 = &l_687;             int32_t *l_709 = &g_454;             int32_t *l_710 = &g_663;             int32_t *l_711 = &g_7;             int32_t *l_712 = &g_454;             int32_t *l_714 = &g_2;             int32_t *l_716 = (void*)0;             int32_t *l_717 = &l_687;             int32_t *l_718 = &l_715;             int8_t l_724 = 0x2CL;             int8_t *l_737 = &g_106;             int16_t *l_738 = &g_130;             g_719--;             if ((((((0L <= p_59.f4) == l_724) != (!(safe_mul_func_int16_t_s_s(((*l_738) = (g_128 = (safe_mul_func_int16_t_s_s((safe_mul_func_uint32_t_u_u(g_142, ((p_58 == ((0x25L ^ ((g_46 & ((safe_add_func_int64_t_s_s(l_687, ((*l_671) = ((((*l_737) &= ((((*l_690) = (((**g_99) = ((safe_mul_func_int8_t_s_s(((l_705 >= g_142) , 1L), p_59.f5)) || (*l_699))) ^ l_705)) >= l_736) >= g_140)) & p_59.f1) && 1UL)))) ^ (-6L))) || p_59.f5)) , &l_687)) < l_705))), 0x2AD8L)))), g_271.f3)))) != 0x13929D06C8AA62C5LL) > p_59.f5))             {                 (**g_133) ^= (*l_682);                 if ((g_106 < 0x087847914ABDAED0LL))                 {                     return (*g_133);                 }                 else                 {                     (*l_717) |= (safe_mul_func_uint8_t_u_u(1UL, 255UL));                 }             }             else             {                 uint32_t *l_745 = &g_746;                 (*l_688) = (safe_rshift_func_int8_t_s_u((((0xA7L || (safe_sub_func_int32_t_s_s(0L, (((*l_745) = l_715) , (p_59.f1 | (safe_mul_func_uint16_t_u_u(((0x918EL | ((safe_lshift_func_uint8_t_u_s((l_705 && p_59.f6), (((safe_mul_func_uint8_t_u_u(p_59.f1, ((*l_737) = (safe_add_func_int32_t_s_s((+(((g_585 & 0x41F77C40B2AE9A6ALL) , g_310) & 0L)), p_59.f5))))) ^ g_271.f7) , p_59.f6))) > p_59.f3)) , p_59.f4), g_271.f6))))))) && g_719) == (**g_133)), 7));             }         }         (*l_759) = l_756;         (*g_100) |= (safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(p_59.f5, 1UL)) >= 1L) < (((*l_759) == &l_757) != (g_106 == ((void*)0 != l_764)))), p_59.f0));     }
     (*l_767) = l_765;
     for (g_719 = (-13);
 (g_719 == 6);
 g_719 = safe_add_func_uint8_t_u_u(g_719, 5))     {         uint64_t *l_770 = &g_271.f6;         int32_t l_795 = (-1L);         int32_t ***l_825 = &g_133;         int32_t l_883 = 6L;         int32_t l_949 = 6L;         const int32_t *l_981 = &l_687;         int8_t ***l_1008 = (void*)0;         uint64_t * const *l_1046 = (void*)0;         uint64_t * const **l_1045 = &l_1046;         uint64_t * const ***l_1044 = &l_1045;         uint64_t * const ****l_1043 = &l_1044;         uint8_t l_1048 = 0xC0L;         uint16_t ***l_1049 = &l_756;         uint8_t *l_1054 = &g_317;         uint8_t **l_1053 = &l_1054;         struct S0 l_1056 = {1,1,-4143,-880,1031,-2553,0x22F0553E51C5A2FELL,-122};         uint8_t *l_1059 = &g_46;         uint16_t ****l_1082 = (void*)0;         uint16_t ****l_1083 = &l_1049;         int32_t l_1090 = 1L;         uint8_t *l_1091 = &l_1048;         int8_t *l_1092 = &g_106;         int64_t l_1097 = 0xCB15341CC79CB8E3LL;         int8_t l_1106 = (-1L);     }
     return p_58;
 }
  static int32_t * func_60(int32_t * p_61) {
     int32_t *l_661 = &g_7;
     (*g_99) = (*g_133);
     return l_661;
 }
  static int32_t * func_62(int32_t p_63) {
     int64_t l_68 = 0xC91930E88FEFD6E5LL;
     struct S0 l_93 = {2,1,14778,149,699,-4807,0x82EDDAAD19DDA5C1LL,146};
     int32_t *l_424 = &g_7;
     uint8_t *l_480 = &g_310;
     uint32_t l_618 = 0x7176CBD4L;
 lbl_459:     for (g_7 = (-14);
 (g_7 == (-28));
 --g_7)     {         const int32_t *l_67 = &g_7;         const int32_t **l_66 = &l_67;         int32_t *l_102 = &g_7;         int32_t *l_452 = (void*)0;         int32_t *l_453 = &g_454;         (*l_66) = (void*)0;         (*l_453) ^= (l_68 , (func_69(func_73(((safe_mul_func_uint8_t_u_u(func_79(func_85(p_63, ((*g_99) = ((safe_div_func_int64_t_s_s(func_90(((l_93 , (((safe_mul_func_uint16_t_u_u(((0x8012CFB7L >= l_93.f6) == ((18446744073709551615UL != (!(safe_mod_func_uint16_t_u_u(2UL, (((p_63 , g_99) == &g_100) , 0xE769L))))) <= p_63)), l_93.f1)) == 4294967295UL) & g_46)) , l_93), g_40), g_2)) , l_102))), &l_102, &l_102, g_40, l_102), g_40)) & p_63), p_63, l_93.f2), l_93.f0, l_424) == p_63));         return l_424;     }
     for (g_46 = 24;
 (g_46 == 29);
 g_46++)     {         uint32_t l_461 = 0x67D64048L;         if ((safe_add_func_int16_t_s_s(g_317, 0x81AAL)))         {             int32_t *l_460 = &g_454;             if (l_93.f5)                 goto lbl_459;             return l_460;         }         else         {             --l_461;         }     }
     return l_424;
 }
  static int8_t func_69(struct S0 p_70, uint64_t p_71, int32_t * p_72) {
     return p_70.f5;
 }
  static struct S0 func_73(int32_t p_74, int16_t p_75, uint16_t p_76) {
     int32_t **l_219 = (void*)0;
     int32_t l_241 = 2L;
     uint8_t *l_316 = &g_317;
     struct S0 l_423 = {6,0,3544,332,354,-5917,18446744073709551615UL,-207};
     for (g_205 = 0;
 (g_205 == 31);
 g_205++)     {         int32_t *l_249 = &g_132;         struct S0 l_250 = {0,0,-19585,-908,1255,991,0x9304CBFAB05A5867LL,-198};         (*l_249) = 7L;         if ((l_250 , (*g_100)))         {             uint16_t l_251 = 0UL;             int8_t l_284 = (-8L);             int64_t *l_314 = &g_40;             uint32_t l_319 = 4294967288UL;             int32_t l_335 = 0L;             if (l_251)             {                 uint8_t *l_315 = (void*)0;                 (*l_249) ^= p_76;                 (*l_249) = (**g_99);                 for (g_132 = (-4); (g_132 > 19); g_132++)                 {                     int32_t l_282 = (-9L);                     if ((((p_75 > 0x39L) & g_140) && (*l_249)))                     {                         uint8_t *l_258 = &g_46;                         int32_t l_283 = 0xE19E864CL;                         int32_t *l_285 = (void*)0;                         int32_t *l_286 = (void*)0;                         int32_t *l_287 = &g_2;                         (*l_287) = ((((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((*l_258)--), (safe_rshift_func_int8_t_s_u((((((((safe_mod_func_uint32_t_u_u((((((((((((safe_mul_func_uint16_t_u_u(l_251, p_75)) & (safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((g_271 , (p_76 , ((-1L) ^ ((safe_rshift_func_uint8_t_u_s(9UL, 4)) ^ (0xDBL < (!((**g_99) <= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((((~(safe_mul_func_int16_t_s_s(((((g_128 != l_282) != p_75) >= g_128) == p_76), 0x6762L))) , (*g_100)) == g_130), g_140)), 0))))))))), p_74)), l_283))) && g_2) || g_106) >= 0x9BL) || 0x0158743BL) | 6UL) & (-1L)) && g_130) , 9UL) == p_75), l_284)) >= p_75) != (**g_133)) & p_74) < g_271.f7) == (**g_133)) != p_75), 0)))) , 1UL), g_271.f3)) <= p_75) ^ g_132) == g_140);                     }                     else                     {                         uint16_t *l_301 = &l_251;                         uint16_t **l_300 = &l_301;                         uint8_t *l_306 = &g_46;                         uint8_t *l_309 = &g_310;                         uint32_t *l_311 = (void*)0;                         int32_t *l_318 = &g_2;                         int32_t *l_320 = &l_241;                         (*l_320) &= (((safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((*l_318) = (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((((((g_271.f0 <= (((*l_300) = &p_76) != (void*)0)) && (((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_271.f4, g_271.f3)), ((*l_309) |= (--(*l_306))))) && ((((l_282 = p_76) <= (**g_99)) , ((*l_249) ^ (safe_div_func_uint32_t_u_u(((l_314 != (void*)0) >= (**g_99)), 0xC1F5A472L)))) == p_76)) && g_271.f2)) , l_315) == l_316) , l_284), 0xE45251D0803106ADLL)) >= 0x84B668E6L), g_271.f5)) ^ 253UL), 0x20DD73F1L)) ^ 0L), g_128))), l_319)) > l_284), g_132)) , g_132) || (*l_318));                     }                 }                 (*l_249) = (!p_74);             }             else             {                 if (p_76)                 {                     int32_t ***l_322 = &l_219;                     int8_t l_325 = 0xA2L;                     (*l_322) = &g_100;                     for (g_317 = (-30); (g_317 > 1); g_317 = safe_add_func_uint64_t_u_u(g_317, 1))                     {                         int32_t *l_326 = &g_132;                         int32_t *l_327 = &g_132;                         int32_t *l_328 = &g_2;                         int32_t *l_329 = &l_241;                         int32_t *l_330 = &l_241;                         int32_t *l_331 = &g_132;                         int32_t *l_332 = &g_132;                         int32_t *l_333 = &g_132;                         int32_t *l_334 = &g_2;                         int32_t *l_336 = &g_132;                         int32_t *l_337 = &l_335;                         int32_t *l_338 = &g_132;                         int32_t *l_339 = &l_335;                         int32_t *l_340 = &g_2;                         int32_t *l_341 = &g_132;                         int32_t *l_342 = &l_335;                         int32_t *l_343 = &l_241;                         int32_t *l_344 = &g_2;                         int32_t *l_345 = &l_241;                         int32_t *l_346 = &l_241;                         int32_t *l_347 = &l_241;                         int32_t *l_348 = &g_132;                         int32_t *l_349 = (void*)0;                         int32_t *l_350 = &g_132;                         int32_t *l_351 = &l_335;                         int32_t *l_352 = (void*)0;                         int32_t *l_353 = &g_132;                         int32_t *l_354 = &g_2;                         int32_t *l_355 = &g_2;                         int32_t *l_356 = &l_335;                         int32_t *l_357 = &l_335;                         int32_t *l_358 = &l_335;                         int32_t *l_359 = &g_2;                         int32_t *l_360 = (void*)0;                         int32_t *l_361 = &l_241;                         int32_t *l_362 = &g_132;                         int32_t *l_363 = (void*)0;                         int32_t *l_364 = &l_241;                         int32_t *l_365 = &l_241;                         int32_t *l_366 = &g_132;                         int32_t *l_367 = &l_241;                         int32_t *l_368 = &g_132;                         int32_t *l_369 = &g_2;                         int32_t *l_370 = &g_2;                         int32_t *l_371 = &g_2;                         int32_t *l_372 = &g_132;                         int32_t *l_373 = (void*)0;                         int32_t *l_374 = &g_132;                         int32_t *l_375 = &l_241;                         int32_t *l_376 = &l_335;                         int32_t *l_377 = &g_132;                         int32_t *l_378 = &l_241;                         int32_t *l_379 = (void*)0;                         int32_t *l_380 = &l_241;                         int32_t *l_381 = &l_335;                         int32_t *l_382 = &l_335;                         const int8_t l_402 = 0x05L;                         (*l_219) = (*g_99);                         --g_383;                         (*l_329) = (safe_sub_func_int8_t_s_s(((((***l_322) , (g_271 , (*l_351))) & (p_76 >= g_271.f0)) ^ ((&g_205 == &g_383) , (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(l_251, ((safe_add_func_uint16_t_u_u(((((***l_322) != (*g_100)) , p_76) >= g_271.f0), p_76)) < 0xEB31C7011D924249LL))) , (*g_100)) <= 0xB204D8F1L), 0x84L)) == g_271.f6) , l_402) , (**l_219)) || 0UL), 6)), p_76)), (*l_249))), (**l_219))))), g_130));                     }                     (*l_249) |= (**g_99);                 }                 else                 {                     return g_271;                 }             }         }         else         {             uint64_t *l_418 = &g_140;             uint64_t **l_417 = &l_418;             int64_t *l_419 = &g_126;             int32_t l_420 = (-7L);             int32_t l_421 = (-10L);             int32_t *l_422 = &l_241;             (*l_422) ^= ((*l_249) = (safe_sub_func_uint64_t_u_u((l_420 = (safe_add_func_int16_t_s_s(((g_271.f2 , (safe_mul_func_int8_t_s_s(p_75, (((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((*l_419) = ((safe_sub_func_int32_t_s_s(((*g_100) | (safe_mul_func_uint16_t_u_u(1UL, p_76))), ((g_106 , (&g_142 != ((*l_417) = &g_140))) && (*l_249)))) >= 5UL)) , 0UL), g_128)), g_205)) && (-10L)) != 1L) < g_132) , 0xBBL)))) >= 0x1BF02F135AB7BA45LL), p_74))), l_421)));             (*g_99) = (*g_133);             return g_271;         }     }
     return l_423;
 }
  static uint8_t func_79(int32_t ** p_80, int32_t ** p_81, int32_t ** p_82, int16_t p_83, int32_t * p_84) {
     uint32_t l_138 = 5UL;
     uint64_t *l_139 = &g_140;
     return g_132;
 }
  static int32_t ** func_85(uint64_t p_86, int32_t * p_87) {
     return g_133;
 }
  static const int64_t func_90(struct S0 p_91, uint8_t p_92) {
     const int32_t l_101 = 0xCFDD8C90L;
     return l_101;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     func_1();
     transparent_crc(g_2, "g_2", print_hash_value);
     transparent_crc(g_7, "g_7", print_hash_value);
     transparent_crc(g_40, "g_40", print_hash_value);
     transparent_crc(g_46, "g_46", print_hash_value);
     transparent_crc(g_106, "g_106", print_hash_value);
     transparent_crc(g_126, "g_126", print_hash_value);
     transparent_crc(g_130, "g_130", print_hash_value);
     transparent_crc(g_132, "g_132", print_hash_value);
 }
