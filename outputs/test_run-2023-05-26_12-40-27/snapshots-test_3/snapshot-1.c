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
   int __count;
   union   {     unsigned int __wch;     char __wchb[4];   }
 __value;
 }
  __mbstate_t;
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
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
 }
  static int16_t (safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
 }
     static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
   return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
 }
   static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
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
  static uint16_t (safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
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
   return ((unsigned int)ui1) * ((unsigned int)ui2);
 }
  static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
   return ui1 + ui2;
 }
  static uint64_t (safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
  static uint64_t (safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
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
     int32_t *l_26 = &l_9;
     int32_t *l_27 = &g_2;
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
 (l_68 == (-18));
 --l_68)     {         int8_t **l_468 = (void*)0;         int8_t **l_469 = (void*)0;         int8_t **l_470 = (void*)0;         int8_t *l_472 = (void*)0;         int8_t **l_471 = &l_472;         uint8_t *l_479 = &g_46;         int32_t l_486 = (-4L);         int32_t l_488 = 0x12C045A6L;         int32_t l_496 = (-1L);         int8_t l_508 = 0xAFL;         int32_t l_516 = 0xC4A2D653L;         int32_t l_521 = 0xE9C1D866L;         int32_t l_524 = 0x05741900L;         int32_t l_542 = 0L;         int32_t l_547 = 1L;         int32_t l_554 = 0L;         int32_t l_566 = 0x735C65E0L;         int32_t l_572 = 5L;         int32_t l_608 = 0xAC8CFE95L;         int32_t l_609 = 0x5A08B872L;         if (((*l_424) = (g_271.f3 <= ((safe_mul_func_uint16_t_u_u(0UL, ((l_93 , &g_106) == ((*l_471) = &g_106)))) == (safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((p_63 = (safe_div_func_uint16_t_u_u(p_63, (*l_424)))) , l_479) == l_480), (*l_424))) < 0xB0E1L), 1L))))))         {             int32_t *l_481 = &g_2;             int32_t *l_482 = &g_454;             int32_t *l_483 = &g_7;             int32_t *l_484 = &g_2;             int32_t *l_485 = (void*)0;             int32_t *l_487 = (void*)0;             int32_t *l_489 = &g_132;             int32_t *l_490 = &l_488;             int32_t *l_491 = &l_486;             int32_t *l_492 = (void*)0;             int32_t *l_493 = &l_488;             int32_t *l_494 = &g_2;             int32_t *l_495 = &l_486;             int32_t *l_497 = (void*)0;             int32_t *l_498 = &g_454;             int32_t *l_499 = &g_454;             int32_t *l_500 = &g_132;             int32_t *l_501 = &g_454;             int32_t *l_502 = (void*)0;             int32_t *l_503 = (void*)0;             int32_t *l_504 = (void*)0;             int32_t *l_505 = &g_2;             int32_t *l_506 = &g_132;             int32_t *l_507 = (void*)0;             int32_t *l_509 = &g_132;             int32_t *l_510 = &l_488;             int32_t *l_511 = &l_496;             int32_t *l_512 = &l_486;             int32_t *l_513 = &l_496;             int32_t *l_514 = &g_2;             int32_t *l_515 = &g_132;             int32_t *l_517 = &l_486;             int32_t *l_518 = &g_454;             int32_t *l_519 = &l_488;             int32_t *l_520 = (void*)0;             int32_t *l_522 = &l_516;             int32_t *l_523 = &l_496;             int32_t *l_525 = &l_486;             int32_t *l_526 = &l_488;             int32_t *l_527 = &l_524;             int32_t *l_528 = &l_496;             int32_t *l_529 = &l_496;             int32_t *l_530 = &g_2;             int32_t *l_531 = &l_496;             int32_t *l_532 = &l_524;             int32_t *l_533 = (void*)0;             int32_t *l_534 = (void*)0;             int32_t *l_535 = &l_521;             int32_t *l_536 = &g_7;             int32_t *l_537 = (void*)0;             int32_t *l_538 = (void*)0;             int32_t *l_539 = &l_516;             int32_t *l_540 = &l_496;             int32_t *l_541 = (void*)0;             int32_t *l_543 = (void*)0;             int32_t *l_544 = (void*)0;             int32_t *l_545 = &l_488;             int32_t *l_546 = &g_454;             int32_t *l_548 = &g_454;             int32_t *l_549 = &g_7;             int32_t l_550 = 1L;             int32_t l_551 = 1L;             int32_t *l_552 = &l_542;             int32_t *l_553 = &l_521;             int32_t *l_555 = &l_550;             int32_t *l_556 = (void*)0;             int32_t *l_557 = &l_488;             int32_t *l_558 = (void*)0;             int32_t *l_559 = &l_486;             int32_t *l_560 = &g_454;             int32_t *l_561 = (void*)0;             int32_t *l_563 = &l_542;             int32_t l_564 = 0L;             int32_t *l_565 = &l_521;             int32_t *l_567 = &l_554;             int32_t *l_568 = (void*)0;             int32_t *l_569 = &l_486;             int32_t *l_570 = &l_486;             int32_t *l_571 = &g_2;             int32_t l_573 = 3L;             int32_t *l_574 = &l_542;             int32_t *l_575 = (void*)0;             int32_t l_576 = (-1L);             int32_t *l_577 = &l_551;             int32_t *l_578 = &l_554;             int32_t *l_579 = &g_454;             int32_t *l_580 = &l_550;             int32_t *l_581 = &l_542;             int32_t *l_582 = &l_564;             int32_t *l_583 = (void*)0;             int32_t *l_584 = &g_132;             int32_t *l_586 = &l_566;             int32_t *l_587 = &l_551;             int32_t *l_588 = &g_132;             int32_t *l_590 = &l_524;             int32_t *l_591 = &l_576;             int32_t l_592 = 0xF216B6F3L;             int32_t *l_593 = &g_454;             int32_t *l_594 = (void*)0;             int32_t *l_595 = &g_132;             int32_t *l_596 = &l_496;             int32_t *l_597 = &l_564;             int32_t *l_598 = (void*)0;             int32_t *l_599 = (void*)0;             int32_t *l_600 = &l_554;             int32_t *l_601 = &l_486;             int32_t *l_602 = &l_572;             int32_t *l_603 = &g_2;             int32_t *l_604 = &l_524;             int32_t *l_605 = &l_551;             int32_t *l_606 = (void*)0;             int32_t *l_607 = &l_566;             int32_t *l_610 = &g_454;             int32_t *l_611 = &l_521;             int32_t *l_612 = &g_454;             int32_t *l_613 = &l_573;             int32_t *l_614 = (void*)0;             int32_t *l_615 = &l_488;             int32_t *l_616 = &g_7;             int32_t *l_617 = &g_454;             uint64_t *l_629 = &g_140;             l_618--;             (*l_491) |= (safe_add_func_uint32_t_u_u(((*l_424) == p_63), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((g_271.f0 & (safe_div_func_int16_t_s_s(((((*l_629) |= g_589) <= (safe_add_func_int16_t_s_s((((((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(0UL, (g_562 != ((((safe_sub_func_uint8_t_u_u((*l_536), (safe_sub_func_uint32_t_u_u(0xD234F3DEL, p_63)))) > (-1L)) , 1L) | 0x15D4CA13E250AC84LL)))) != 0xAA1F7A9BL), p_63)) , p_63) <= (-1L)) > p_63) < p_63), p_63))) || 0UL), g_271.f1))), p_63)) > 0xEBE7L), p_63))));         }         else         {             int32_t l_640 = 0x78F15A80L;             int32_t l_641 = (-1L);             uint32_t *l_642 = &g_643;             int32_t l_658 = 0xDC8556ABL;             int32_t *l_659 = (void*)0;             int32_t *l_660 = &l_609;             l_641 = l_640;             (*g_100) ^= (l_642 != (void*)0);             (*l_660) &= (((((((*l_424) & (l_658 |= (safe_sub_func_uint64_t_u_u((((++(*l_480)) == (safe_rshift_func_int16_t_s_u(p_63, 10))) != (l_93 , ((l_524 || ((safe_rshift_func_uint16_t_u_u((p_63 <= (safe_div_func_uint64_t_u_u((p_63 , ((safe_rshift_func_int16_t_s_u(((-7L) ^ (safe_mod_func_int8_t_s_s((l_641 = p_63), (((*l_424) && p_63) | 1UL)))), (*l_424))) & 4L)), p_63))), 3)) & p_63)) > l_640))), 2L)))) & (*l_424)) >= 0x5ACCE002FB37CFECLL) , p_63) == 65535UL) , l_566);         }         if ((*l_424))             break;     }
     return l_424;
 }
  static int8_t func_69(struct S0 p_70, uint64_t p_71, int32_t * p_72) {
     uint64_t *l_428 = &g_140;
     uint64_t **l_427 = &l_428;
     const uint16_t *l_440 = &g_383;
     const uint16_t **l_439 = &l_440;
     const uint16_t ***l_441 = &l_439;
     int32_t l_446 = 0L;
     uint8_t *l_447 = &g_46;
     uint8_t *l_448 = (void*)0;
     uint8_t *l_449 = &g_317;
     uint8_t *l_450 = &g_310;
     int16_t l_451 = 0xEFE3L;
     l_451 = ((((g_140 ^ ((*l_450) ^= ((*l_449) = ((*l_447) ^= (safe_mod_func_int16_t_s_s(0xD777L, ((((*l_427) = &g_140) == &p_71) && (safe_add_func_int32_t_s_s((p_71 && (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_70.f2, (((((*l_441) = l_439) == &l_440) | (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((5L > 0L) < l_446), l_446)) && 0L), 2))) > 247UL))) , 0x43L), l_446)), g_132)), l_446))), 0UL))))))))) ^ 2UL) , g_271) , (*p_72));
     return p_70.f5;
 }
  static struct S0 func_73(int32_t p_74, int16_t p_75, uint16_t p_76) {
     int32_t l_241 = 2L;
     uint8_t *l_316 = &g_317;
     struct S0 l_423 = {6,0,3544,332,354,-5917,18446744073709551615UL,-207};
     return l_423;
 }
  static uint8_t func_79(int32_t ** p_80, int32_t ** p_81, int32_t ** p_82, int16_t p_83, int32_t * p_84) {
     uint32_t l_138 = 5UL;
     uint64_t *l_139 = &g_140;
     uint64_t *l_141 = &g_142;
     uint32_t l_143 = 9UL;
     uint16_t *l_151 = &g_152;
     uint32_t l_153 = 1UL;
     int64_t *l_154 = &g_126;
     int32_t l_157 = (-1L);
     int32_t l_170 = 0x1EAE6C69L;
     int32_t l_188 = 0x4EEBD0F6L;
     int32_t l_192 = (-10L);
     int32_t l_198 = (-1L);
     if ((0x34L <= ((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_138, l_138)) || 0x713F97C6L), (((*l_154) &= ((((((((*l_141) = ((*l_139) = l_138)) && ((((l_138 , (l_143 | (~(safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((*l_151) = (l_139 == (void*)0)), 14)) == 1L) ^ l_138), 2)), p_83))))) == (**p_80)) || 0L) , g_2)) != g_132) < (**g_99)) > 0xB6L) > l_153) , l_143)) | g_106))) || 0x3720D768DB521C19LL) >= 0xD067C9850C21D362LL) ^ l_138)))     {         int32_t *l_155 = &g_7;         int32_t *l_156 = &g_132;         int32_t *l_158 = &g_132;         int32_t *l_159 = (void*)0;         int32_t *l_160 = &l_157;         int32_t *l_161 = &g_2;         int32_t *l_162 = &g_132;         int32_t *l_163 = &l_157;         int32_t *l_164 = &l_157;         int32_t *l_165 = &g_2;         int32_t *l_166 = &g_2;         int32_t *l_167 = &g_132;         int32_t *l_168 = &g_132;         int32_t *l_169 = &g_132;         int32_t *l_171 = &l_157;         int32_t *l_172 = &l_157;         int32_t *l_173 = &g_2;         int32_t *l_174 = &g_2;         int32_t *l_175 = &g_132;         int32_t *l_176 = &l_157;         int32_t *l_177 = &g_132;         int32_t l_178 = 0xCCC173D2L;         int32_t *l_179 = &l_170;         int32_t *l_180 = &g_2;         int32_t *l_181 = &l_170;         int32_t *l_182 = &l_178;         int32_t *l_183 = &l_178;         int32_t *l_184 = &l_170;         int32_t *l_185 = &l_178;         int32_t *l_186 = &g_132;         int32_t *l_187 = &l_170;         int32_t *l_189 = &g_132;         int32_t *l_190 = &l_170;         int32_t *l_191 = &l_157;         int32_t *l_193 = (void*)0;         int32_t *l_194 = &l_170;         int32_t *l_195 = &l_192;         int32_t *l_196 = (void*)0;         int32_t *l_197 = (void*)0;         int32_t *l_199 = (void*)0;         int32_t *l_200 = &l_157;         int32_t *l_201 = &l_192;         int32_t *l_202 = &g_2;         int32_t *l_203 = &l_198;         int32_t *l_204 = (void*)0;         l_156 = l_155;         ++g_205;     }
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
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
 }
