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
    static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
   return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
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
  static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
   return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
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
        static uint64_t (safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return ui1 + ui2;
 }
  static uint64_t (safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return ui1 - ui2;
 }
   static uint64_t (safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 ) {
   return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
 }
           static uint32_t crc32_tab[256];
  static uint32_t crc32_context = 0xFFFFFFFFUL;
  static void crc32_gentab (void) {
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>0) & 0xff);
  crc32_byte ((val>>56) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  static int32_t g_5 = (-1L);
  static int32_t * const g_4 = &g_5;
  static int32_t *g_29 = &g_5;
  static int32_t **g_28 = &g_29;
  static uint64_t g_43 = 0xABF7C2F5A260DF39LL;
  static uint64_t g_66 = 0xA772BE76DCB0C7B2LL;
  static int32_t g_68 = 8L;
  static int32_t g_92 = 0L;
  static int64_t g_94 = 0x66485393F1BFD6FFLL;
  static int64_t g_100 = 0L;
  static int64_t *g_99 = &g_100;
  static int32_t ***g_102 = (void*)0;
  static uint16_t g_121 = 0xB92FL;
  static uint8_t g_152 = 255UL;
  static int16_t g_212 = 0x349CL;
  static uint16_t g_253 = 65535UL;
  static int16_t g_261 = 0L;
  static uint32_t g_280 = 0x827AFF6EL;
  static uint16_t g_286 = 65535UL;
  static int8_t g_324 = 0xFAL;
  static int8_t g_346 = 0xD9L;
  static uint64_t *g_399 = &g_66;
  static uint64_t **g_398 = &g_399;
  static int16_t g_424 = 0L;
  static uint8_t *g_445 = (void*)0;
  static int16_t **g_450 = (void*)0;
  static int16_t ***g_449 = &g_450;
  static int16_t ****g_448 = &g_449;
  static int64_t **g_560 = &g_99;
  static int64_t ***g_559 = &g_560;
  static int64_t ****g_558 = &g_559;
  static uint32_t g_579 = 4294967288UL;
  static uint32_t g_581 = 0xFB1C6D6EL;
  static uint8_t g_584 = 0x78L;
  static uint64_t g_626 = 1UL;
  static uint32_t *g_678 = &g_581;
  static const int32_t g_702 = 0x663EB93BL;
  static int8_t * const g_737 = &g_346;
  static int8_t * const *g_736 = &g_737;
  static int8_t * const **g_735 = &g_736;
  static uint32_t g_859 = 0xCD804A26L;
  static uint8_t **g_865 = &g_445;
  static uint8_t ***g_864 = &g_865;
  static uint8_t ****g_863 = &g_864;
  static uint8_t *****g_862 = &g_863;
  static int32_t * const *g_977 = &g_4;
  static int32_t * const **g_976 = &g_977;
  static int16_t g_1032 = 0x4EFAL;
  static int32_t * func_2(int32_t * const p_3);
  static int32_t * func_6(int32_t * p_7);
  static int32_t * func_8(uint8_t p_9, uint64_t p_10, int32_t * p_11, int32_t * p_12, int32_t * p_13);
  static uint8_t func_18(int32_t p_19, int32_t p_20, int8_t p_21, int16_t p_22);
  static int32_t func_26(int32_t ** p_27);
  static int64_t func_32(int8_t p_33, uint32_t p_34, int32_t p_35);
  static uint64_t func_36(uint32_t p_37, uint16_t p_38, int32_t p_39, uint16_t p_40, int16_t p_41);
  static uint16_t func_50(const uint64_t p_51, uint16_t p_52, uint64_t * p_53, int32_t * p_54, int32_t * p_55);
  static int32_t * func_57(const int32_t * p_58, uint64_t p_59, int64_t p_60, uint16_t p_61, uint64_t * p_62);
  static uint16_t func_1(void) {
     int32_t *l_774 = &g_5;
     const int32_t l_778 = 0xC88738DCL;
     uint16_t *l_779 = &g_253;
     uint8_t *l_784 = &g_584;
     int8_t *l_785 = &g_324;
     int16_t ****l_825 = &g_449;
     const uint64_t l_833 = 0xDB38DEF3E67CF76BLL;
     int32_t l_894 = 0L;
     uint16_t *l_921 = &g_253;
     int8_t ***l_926 = (void*)0;
     uint32_t l_979 = 0xE87D0A12L;
     uint16_t l_1015 = 1UL;
     int8_t l_1070 = (-5L);
     int32_t l_1081 = (-5L);
     l_774 = func_2(g_4);
     if ((*g_4))     {         int32_t **l_775 = &l_774;         (*l_775) = func_6(l_774);     }
     else     {         (*l_774) = (l_774 != l_774);     }
     if ((safe_add_func_int8_t_s_s(l_778, ((1UL ^ 1L) & (((void*)0 != l_779) < (safe_lshift_func_int8_t_s_s(((**g_736) = (-5L)), ((*l_785) = (safe_rshift_func_uint8_t_u_s(((*l_784) = g_100), l_778))))))))))     {         int32_t l_794 = 0x84A6A01EL;         int64_t ****l_797 = &g_559;         int64_t *****l_798 = &g_558;         uint8_t **l_799 = (void*)0;         int32_t l_802 = 7L;         int16_t ****l_824 = &g_449;         uint16_t l_837 = 0x0661L;         int16_t ****l_840 = (void*)0;         const uint32_t l_955 = 0x49153A55L;         int32_t * const **l_975 = (void*)0;         uint16_t l_984 = 0x51A7L;         int8_t l_986 = 5L;         uint32_t l_987 = 0x98A20BF4L;         uint64_t l_1013 = 0xBED76F464622A03ELL;         int32_t *l_1016 = (void*)0;         int32_t *l_1059 = &l_894;         (*g_4) = (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_794 = (safe_add_func_uint64_t_u_u((**g_398), (*g_99)))), ((safe_sub_func_uint32_t_u_u((l_797 == ((*l_798) = &g_559)), (l_799 != l_799))) < 0UL))), 7)) == (safe_rshift_func_uint8_t_u_s(l_802, (safe_rshift_func_uint8_t_u_u(g_626, 0))))) && g_324) <= (*g_399)), l_778));         if ((((*g_737) = (safe_mod_func_uint8_t_u_u(((*l_784) = 0xDEL), ((safe_add_func_uint32_t_u_u((*g_678), (0xECL > (((safe_mul_func_uint16_t_u_u(0x1CD5L, (safe_mod_func_int64_t_s_s(0L, l_794)))) ^ (safe_sub_func_uint64_t_u_u(((&g_286 != &g_121) || 0x85L), (*g_399)))) < l_794)))) && l_794)))) ^ 0UL))         {             uint8_t l_821 = 0x0EL;             int16_t *****l_826 = &l_825;             int32_t l_834 = 0x6BCB5985L;             uint32_t l_835 = 0x03AFB107L;             int32_t l_836 = 8L;             int16_t *l_838 = (void*)0;             int16_t *l_839 = &g_212;             int32_t ***l_904 = &g_28;             int8_t **l_953 = (void*)0;             const uint16_t l_988 = 0x2E77L;             l_802 = ((l_836 = ((*g_737) = (safe_add_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((*g_4) = ((safe_mod_func_uint32_t_u_u((246UL && (l_834 = ((l_821 | g_346) != (((safe_lshift_func_uint16_t_u_u(((l_824 = &g_449) == ((*l_826) = l_825)), (safe_sub_func_uint64_t_u_u((0xFAL ^ l_778), 0x9EEA9F96FA1E393BLL)))) ^ ((*l_785) = ((safe_add_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(g_212, l_833)) < 0xEC9472EFL), (****g_558))) ^ l_794))) >= l_802)))), (*g_4))) && l_794)) | l_835), l_835)) >= l_794), l_821)))) >= 0xA5L); lbl_962:             if (((l_837 && ((*l_839) = g_253)) && (l_840 != l_824)))             {                 int64_t l_841 = 0xA67200DE4D2F85AELL;                 uint32_t *l_842 = &g_579;                 int32_t *l_861 = &l_834;                 int8_t l_866 = (-1L);                 int8_t **l_928 = (void*)0;                 int8_t ***l_927 = &l_928;                 if (l_841)                 {                     uint8_t l_845 = 0x59L;                     int32_t *l_860 = &g_5;                     uint8_t l_892 = 0UL;                     if (((l_842 != l_774) == (((*g_737) = l_845) >= (0x5121510A0183CE96LL > (safe_mod_func_uint32_t_u_u((g_859 = (safe_sub_func_int64_t_s_s((((l_845 <= (safe_mod_func_uint8_t_u_u(0x7FL, (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_784) = ((0L && (g_152 = (0xE554L <= (~((**g_398) != (*g_399)))))) ^ l_837)), 0)) >= g_702), 1UL)), g_626))))) < l_845) >= l_841), l_834))), 0xFB3C2A42L))))))                     {                         l_861 = func_6(l_860);                         (*l_860) = (*g_4);                         g_862 = (void*)0;                     }                     else                     {                         int32_t **l_867 = &l_861;                         int32_t l_893 = 0L;                         (*g_4) = l_866;                         (*l_867) = func_6(func_6(l_861));                         (*g_4) = ((safe_lshift_func_int8_t_s_s(0x4FL, 3)) | (0xED63L && g_346));                         l_894 = (+(safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((***g_735) = (g_253 && (safe_mul_func_uint16_t_u_u((l_835 | (((*g_735) != (void*)0) >= (*g_737))), (safe_unary_minus_func_int64_t_s((safe_add_func_int8_t_s_s(((*l_785) = (safe_add_func_int64_t_s_s(0x88CB7945341E6EC3LL, ((9UL < ((0x0AEEL | (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_424 = l_834), 0xD308L)), 7L))) & 0xF4L)) && l_892)))), (-9L))))))))), l_893)), g_66)), l_836)) == g_68), (*l_860))));                     }                 }                 else                 {                     int32_t **l_895 = &l_861;                     int32_t ****l_902 = (void*)0;                     int32_t ****l_903 = &g_102;                     int16_t *l_905 = &g_424;                     uint8_t l_914 = 0xEFL;                     (*l_895) = &l_836;                     (*g_4) = (safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((void*)0 == l_779) <= (safe_rshift_func_int8_t_s_s((((l_904 = ((*l_903) = &g_28)) != &g_28) & ((void*)0 == l_905)), 6))), ((*l_784) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(((0UL > (((safe_mod_func_int8_t_s_s(l_834, (l_894 && 1L))) & 1L) == l_836)) >= 1L), 3)), 14))))), (-1L)));                     (*l_861) = (safe_mul_func_int16_t_s_s((((*g_4) = ((*l_861) | g_100)) == (l_914 <= (safe_add_func_int64_t_s_s((65535UL <= g_702), ((*l_861) | 1L))))), 3UL));                     for (g_584 = (-22); (g_584 <= 8); g_584 = safe_add_func_int32_t_s_s(g_584, 7))                     {                         int8_t l_929 = 0x10L;                         int32_t *l_930 = &l_802;                         (*g_4) = (safe_mod_func_uint8_t_u_u(((void*)0 != l_921), ((safe_mod_func_int64_t_s_s(((0x8BCFL && (((*g_678) < (*l_861)) ^ (safe_mul_func_int16_t_s_s((l_926 != (l_927 = l_926)), l_929)))) | l_929), l_794)) && (****g_558))));                         (**l_895) = ((**g_736) && l_837);                         l_774 = l_930;                     }                 }             }             else             {                 int32_t l_941 = 1L;                 int16_t ****l_950 = &g_449;                 int8_t l_954 = 0x29L;                 (*g_4) = (safe_add_func_int32_t_s_s((l_837 ^ (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*l_779) = ((((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_839) = l_941), ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(g_280, (safe_rshift_func_int8_t_s_s(l_941, (&g_449 != ((*l_826) = l_950)))))), (((safe_lshift_func_int8_t_s_u(((***g_735) = ((void*)0 != l_953)), l_941)) && (*g_737)) < (****g_558)))) > l_941), g_66)) == l_954))) & l_955), 4294967295UL)) > 65532UL) != 0x763638E8E947889BLL) ^ l_941)), l_941)), 0x37L))), 0UL));             }             for (g_43 = (-22); (g_43 != 41); g_43 = safe_add_func_uint32_t_u_u(g_43, 7))             {                 int16_t l_958 = 1L;                 int32_t *l_966 = &l_802;                 if (l_958)                 {                     int64_t l_959 = 6L;                     l_802 = ((*g_4) = (((((**g_560) = (l_959 != (***g_735))) ^ 0UL) < (safe_sub_func_int64_t_s_s((0L | l_794), 0UL))) > ((l_833 | (((*g_399) = l_794) == (1L <= l_959))) & g_424)));                     if (l_821)                         goto lbl_962;                 }                 else                 {                     int32_t *l_965 = (void*)0;                     int32_t l_978 = 0x7BBFECA0L;                     for (l_958 = 0; (l_958 > 4); l_958++)                     {                         l_966 = l_965;                         l_965 = l_965;                     }                     l_979 = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_833, (*g_737))), ((-4L) <= (safe_lshift_func_uint8_t_u_s(((((((l_955 == (((g_5 >= g_94) < ((*g_865) == &l_821)) < ((((g_976 = l_975) == (void*)0) || 0x28167CB32E67DA71LL) != 1UL))) >= (***g_735)) | 0xB0A28A6732CACD3FLL) != l_978) | l_958) > 0x764BFB68L), (**g_736))))));                     if ((**g_977))                         continue;                 }                 (*g_4) = (*g_4);                 (**g_977) = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_984, (g_121 = ((*g_4) ^ (~(l_987 = l_986)))))) == 65529UL), l_988));             }         }         else         {             int16_t *l_1001 = (void*)0;             int16_t *l_1002 = &g_424;             int32_t l_1005 = 0x00AC51E5L;             int32_t l_1010 = 0x680F592AL;             uint32_t l_1014 = 0xAEF083F4L;             int32_t ***l_1031 = &g_28;             uint32_t l_1049 = 0x8B1BDCE5L;             const int64_t *l_1056 = &g_100;             const int64_t **l_1055 = &l_1056;             const int64_t ***l_1054 = &l_1055;             const int64_t ****l_1053 = &l_1054;             int32_t **l_1060 = &l_1059;             if (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((*g_399) = (safe_mod_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_s(((*l_1002) = (-8L)), 2)) < 2L) && 0xE706L), ((((***g_976) = (((((safe_add_func_int8_t_s_s((((*g_678) = ((*g_399) != (l_1005 = (**g_398)))) >= ((l_837 >= (safe_sub_func_int16_t_s_s((((((*g_737) = (((safe_mul_func_uint16_t_u_u(l_1010, ((((safe_add_func_uint8_t_u_u(l_1013, l_1014)) != l_1010) >= 0x9DD09AF2792BE9CFLL) != l_778))) >= g_346) <= g_626)) & 0x82L) != (*g_4)) || 0xDAD598D01A36A766LL), g_66))) <= l_1014)), 0x21L)) == 0x20L) == g_253) | 0xA9D49C7A5DD0976BLL) && l_1015)) == l_802) && (***g_559))))), 0x8E9D8DC0A0023DB1LL)), l_1010)), l_1014)), l_1013)) > l_984))             {                 int32_t *l_1029 = &l_894;                 if (((**g_977) = 0x3BC4129EL))                 {                     int32_t **l_1017 = (void*)0;                     int32_t **l_1018 = (void*)0;                     int32_t **l_1019 = &l_1016;                     int32_t **l_1020 = &g_29;                     (*l_1020) = ((*l_1019) = l_1016);                 }                 else                 {                     for (g_286 = 0; (g_286 >= 43); g_286 = safe_add_func_int32_t_s_s(g_286, 4))                     {                         int32_t l_1023 = (-6L);                         int32_t **l_1024 = &l_1016;                         (*g_4) = 1L;                         g_68 = ((*g_4) = (((void*)0 == (*g_864)) | (1L & l_1023)));                         (*l_1024) = (*g_977);                     }                     for (l_979 = 0; (l_979 > 8); l_979++)                     {                         int32_t *l_1027 = &l_1005;                         int32_t **l_1028 = (void*)0;                         int32_t **l_1030 = &l_774;                         g_29 = l_1027;                         (*l_1030) = l_1029;                         g_102 = l_1031;                     }                 }                 (*g_4) = ((g_1032 | (*l_1029)) <= (0L & ((*g_678) = (*g_678))));                 return g_100;             }             else             {                 uint32_t **l_1033 = &g_678;                 uint32_t *l_1034 = &l_979;                 uint32_t **l_1035 = &l_1034;                 int32_t l_1040 = 0x23CA399FL;                 int64_t *** const *l_1052 = &g_559;                 uint8_t l_1057 = 0x48L;                 int32_t **l_1058 = &g_29;                 (*g_4) = (((*l_1033) = &g_581) != ((*l_1035) = l_1034));                 l_1059 = ((*l_1058) = func_6(func_8((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_1040, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((l_1040 < (safe_sub_func_int64_t_s_s((l_1049 < (****g_558)), ((safe_add_func_int64_t_s_s((((l_1052 != l_1053) ^ l_1040) == ((*g_735) != (void*)0)), (**g_560))) >= 1UL)))) >= 0x4F63C655L) > l_1057) >= 0x774F6C96L), g_579)), 2)), 0)))), 0x87L)), l_1057, &l_802, &l_1040, &l_894)));             }             (*l_1060) = (*g_977);             (*l_1060) = &l_894;         }         (*g_4) = ((*l_1059) = ((*l_1059) || (((*l_785) = 1L) || (*g_737))));         (**g_977) = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(g_94, g_253)), ((!(*l_1059)) || ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_1070, ((**g_736) = (safe_mul_func_int8_t_s_s((**g_736), ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((*g_678), (l_1070 & (((*l_1059) <= ((((safe_rshift_func_int16_t_s_u((g_424 = (((safe_rshift_func_int16_t_s_u((0xB0A53188L || 0xD650BE66L), g_346)) & 0L) || 0x44L)), l_1081)) | 4L) & 0x5102C4B7L) <= (*g_678))) || (*l_1059))))) || (*l_1059)), g_859)) | 9UL)))))), l_1070)) || 0xF65FL))));     }
     else     {         (**g_977) = (2L >= (*g_399));     }
     return g_100;
 }
  static int32_t * func_2(int32_t * const p_3) {
     int32_t *l_15 = &g_5;
     int32_t **l_14 = &l_15;
     int32_t l_23 = 0L;
     int32_t *l_773 = &g_5;
     uint8_t **l_743 = &g_445;
     uint8_t ***l_742 = &l_743;
     uint8_t ****l_741 = &l_742;
     uint8_t *****l_740 = &l_741;
     int32_t *l_744 = (void*)0;
     (*l_740) = (void*)0;
     return l_744;
 }
  static uint8_t func_18(int32_t p_19, int32_t p_20, int8_t p_21, int16_t p_22) {
     int32_t l_479 = 1L;
     uint64_t *l_499 = &g_43;
     int32_t * const *l_524 = &g_29;
     int32_t * const **l_523 = &l_524;
     int32_t *l_695 = (void*)0;
     int64_t l_711 = 3L;
     int16_t l_727 = 0x1835L;
     int8_t *l_734 = &g_324;
     int8_t **l_733 = &l_734;
     int8_t ***l_732 = &l_733;
     int64_t l_738 = 0xE61F8CEC9F266AB6LL;
     if (func_26(g_28))     {         int64_t l_494 = 0L;         p_20 = p_20;         if (l_479)         {             return p_22;         }         else         {             int32_t *l_484 = &g_68;             uint64_t *l_509 = &g_66;             for (g_286 = 0; (g_286 < 23); g_286 = safe_add_func_uint32_t_u_u(g_286, 6))             {                 for (g_280 = 0; (g_280 == 18); ++g_280)                 {                     l_484 = l_484;                 }             }             l_484 = &p_20;             for (g_100 = 0; (g_100 == 8); g_100 = safe_add_func_int32_t_s_s(g_100, 6))             {                 if ((p_21 || (safe_sub_func_uint64_t_u_u((l_479 | l_479), l_479))))                 {                     uint32_t *l_489 = &g_280;                     int64_t ***l_493 = (void*)0;                     int64_t ****l_492 = &l_493;                     const int32_t *l_498 = &g_5;                     int32_t **l_500 = &l_484;                     (*g_4) = (0x54L < (p_22 ^ ((*l_489) = 4294967294UL)));                     for (g_286 = 0; (g_286 != 50); g_286 = safe_add_func_uint8_t_u_u(g_286, 5))                     {                         int16_t *l_497 = &g_261;                         (*l_484) = ((l_494 = ((void*)0 != l_492)) != (251UL < (safe_mod_func_int16_t_s_s(0xD4FCL, ((*l_497) = (*l_484))))));                         return g_94;                     }                     (*l_500) = &p_20;                     for (g_152 = 0; (g_152 >= 7); ++g_152)                     {                         return p_20;                     }                 }                 else                 {                     for (g_94 = 0; (g_94 >= 24); ++g_94)                     {                         return p_19;                     }                     if (l_494)                         continue;                     for (g_253 = (-7); (g_253 > 31); ++g_253)                     {                         p_20 = p_20;                         if (p_21)                             continue;                         if (p_21)                             break;                         if (p_22)                             break;                     }                 }             }             (*l_484) = (safe_sub_func_int8_t_s_s(l_494, ((0xFBL | (((void*)0 == l_509) | (-1L))) != 0x91DC7A7DE530967ELL)));         }     }
     else     {         int16_t l_510 = 0xCD87L;         return l_510;     }
     for (g_212 = (-22);
 (g_212 > 27);
 g_212 = safe_add_func_int8_t_s_s(g_212, 3))     {         int16_t *l_522 = &g_424;         int32_t ***l_525 = &g_28;         int32_t l_532 = 0x77335672L;         int8_t *l_533 = &g_346;         int64_t *l_591 = (void*)0;         int32_t *l_603 = (void*)0;         int32_t * const l_640 = &l_479;         uint16_t *l_728 = &g_121;         uint32_t l_731 = 4294967295UL;     }
     return l_738;
 }
  static int32_t func_26(int32_t ** p_27) {
     uint32_t l_47 = 0x930509B9L;
     const int32_t *l_63 = &g_5;
     uint64_t *l_65 = &g_66;
     int32_t *l_69 = &g_5;
     int16_t *****l_477 = &g_448;
     int16_t *****l_478 = &g_448;
     for (g_5 = 0;
 (g_5 <= (-24));
 g_5 = safe_sub_func_uint8_t_u_u(g_5, 9))     {         uint64_t *l_42 = &g_43;         uint16_t l_44 = 7UL;         int32_t l_64 = (-3L);         int32_t *l_70 = &g_5;         int8_t *l_441 = &g_346;         int32_t *l_473 = &g_68;         (*l_473) = ((func_32(g_5, ((func_36(g_5, (((*l_42) = 0xA9D9E177C422D5FBLL) == (l_44 | (!((+(l_47 ^ (safe_lshift_func_int8_t_s_u(((*l_441) = (func_50(((!(l_47 ^ (((*g_28) = func_57(l_63, g_5, (l_44 <= 0UL), l_64, l_65)) != l_63))) && g_66), (*l_63), l_42, l_69, l_70) != (*l_69))), g_5)))) || 0xDFL)))), (*l_70), (*l_70), (*l_70)) < (*l_70)) ^ (*l_63)), (*g_4)) != 0xED652D0F0CD6CE9ELL) >= (*l_70));         return (*g_4);     }
     (*g_28) = (*p_27);
     (*g_28) = func_57(l_69, (*l_63), (*l_63), (((safe_lshift_func_int8_t_s_s((~((l_477 == (l_478 = l_477)) == (-9L))), (*l_69))) <= (0x7DF0E0FF55728C40LL != ((*l_69) <= (*l_69)))) < (*g_99)), l_65);
     return (*l_63);
 }
  static int64_t func_32(int8_t p_33, uint32_t p_34, int32_t p_35) {
     int32_t *l_256 = (void*)0;
     const int32_t *l_262 = &g_5;
     int16_t *l_293 = &g_261;
     return (*l_262);
 }
  static int32_t * func_57(const int32_t * p_58, uint64_t p_59, int64_t p_60, uint16_t p_61, uint64_t * p_62) {
     int32_t *l_67 = &g_68;
     (*l_67) = (*g_29);
     return l_67;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
