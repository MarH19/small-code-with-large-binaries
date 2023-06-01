 typedef signed char __int8_t;
 typedef unsigned char __uint8_t;
 typedef signed short int __int16_t;
 typedef unsigned short int __uint16_t;
 typedef signed int __int32_t;
 typedef unsigned int __uint32_t;
 typedef signed long int __int64_t;
 typedef unsigned long int __uint64_t;
 typedef __int8_t __int_least8_t;
 enum   {     FP_NAN =       0,     FP_INFINITE =       1,     FP_ZERO =       2,     FP_SUBNORMAL =       3,     FP_NORMAL =       4   };
 typedef __int8_t int8_t;
 typedef __int16_t int16_t;
 typedef __int32_t int32_t;
 typedef __int64_t int64_t;
 typedef __uint8_t uint8_t;
 typedef __uint16_t uint16_t;
 typedef __uint32_t uint32_t;
 typedef __uint64_t uint64_t;
 typedef __int_least8_t int_least8_t;
                     extern int printf (const char *__restrict __format, ...);
                                                                      static void platform_main_begin(void) { }
 static void platform_main_end(uint32_t crc, int flag) {  printf ("checksum = %X\n", crc); }
  static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {   return     (si1 + si2); }
 static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {   return     (si1 - si2); }
    static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) ;
 static int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right ) ;
 static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) ;
 static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) ;
   static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) ;
  static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) ;
 static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) ;
   static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) ;
      static int64_t (safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 ) ;
     static uint8_t (safe_unary_minus_func_uint8_t_u)(uint8_t ui ) ;
                 static uint32_t crc32_tab[256];
 static uint32_t crc32_context = 0xFFFFFFFFUL;
 static void crc32_gentab (void) {  uint32_t crc;  const uint32_t poly = 0xEDB88320UL;  int i, j;  for (i = 0; i < 256; i++) {   crc = i;   for (j = 8; j > 0; j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }   crc32_tab[i] = crc;  } }
 static void crc32_byte (uint8_t b) {  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF]; }
 static void crc32_8bytes (uint64_t val) {  crc32_byte ((val>>0) & 0xff);  crc32_byte ((val>>8) & 0xff);  crc32_byte ((val>>16) & 0xff);  crc32_byte ((val>>24) & 0xff);  crc32_byte ((val>>32) & 0xff);  crc32_byte ((val>>40) & 0xff);  crc32_byte ((val>>48) & 0xff);  crc32_byte ((val>>56) & 0xff); }
 static void transparent_crc (uint64_t val, char* vname, int flag) {  crc32_8bytes(val);  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  } }
 static int8_t g_6 = 0x11L;
 static int32_t g_15 = 0xEF5D870AL;
 static uint64_t g_37 = 18446744073709551615UL;
 static uint32_t g_100 = 9UL;
 static int64_t g_164 = 1L;
 static uint16_t g_169 = 65535UL;
 static uint16_t *g_207 = &g_169;
 static uint64_t g_225 = 0UL;
 static int16_t g_232 = (-3L);
 static uint64_t g_235 = 18446744073709551614UL;
 static uint32_t g_237 = 0x02198C40L;
 static const uint64_t g_242 = 0x36C9A4CFDDBE10E3LL;
 static uint32_t g_256 = 1UL;
 static int64_t g_270 = (-1L);
 static uint8_t g_305 = 0UL;
 static uint16_t g_322 = 65530UL;
 static uint8_t g_334 = 0x2DL;
 static int32_t g_349 = 3L;
 static int64_t g_403 = 0xDF87E7BF935BA4CFLL;
 static int32_t g_423 = 0x609A675DL;
 static uint32_t g_436 = 1UL;
 static int64_t g_473 = 0x044F218FDC557DA0LL;
 static int8_t g_483 = 0x5DL;
 static int16_t g_490 = 0x7D96L;
 static int32_t g_525 = 1L;
 static int16_t g_536 = 0x2927L;
 static int32_t g_541 = 0x3B964475L;
 static uint32_t g_554 = 18446744073709551614UL;
 static uint16_t g_610 = 0x3554L;
 static uint32_t g_729 = 1UL;
 static int16_t g_771 = (-5L);
 static int8_t g_773 = 0x80L;
 static int8_t g_776 = 0x38L;
 static uint8_t g_798 = 255UL;
 static int32_t g_954 = 0x5E2A5189L;
 static uint16_t g_1093 = 65532UL;
 static int16_t g_1159 = 0xB37DL;
 static int16_t g_1181 = 0x286EL;
 static int16_t g_1190 = 4L;
 static uint32_t g_1192 = 0x25F6E47FL;
 static int64_t g_1242 = 0x0405A8C3CF53D56CLL;
 static int32_t g_1280 = 1L;
 static uint32_t g_1282 = 0x8462BAA3L;
 static int32_t g_1287 = 0x7616EFBCL;
 static uint32_t g_1380 = 18446744073709551608UL;
 static int32_t g_1436 = 0xD9307563L;
 static int16_t g_1441 = 0x7342L;
 static uint32_t g_1452 = 6UL;
 static int32_t func_1(void) {     uint32_t l_4 = 0x2DB22124L;     int8_t *l_5 = &g_6;     const int32_t l_735 = 0xE8A465BDL;     int32_t *l_738 = &g_541;     int32_t *l_742 = &g_525;     int32_t *l_743 = &g_541;     int32_t *l_744 = &g_15;     int32_t *l_745 = &g_525;     int32_t *l_746 = &g_15;     int32_t *l_747 = &g_15;     int32_t *l_748 = (void*)0;     int32_t l_749 = 5L;     int32_t *l_750 = &g_15;     int32_t *l_751 = &g_15;     int32_t *l_752 = (void*)0;     int32_t *l_753 = &g_541;     int32_t *l_754 = &g_541;     int32_t *l_755 = &g_15;     int32_t l_756 = 0x90F1359EL;     int32_t *l_757 = &g_349;     int32_t *l_758 = &g_541;     int32_t *l_759 = &l_749;     int32_t *l_760 = &g_525;     int32_t *l_761 = &g_15;     int32_t *l_762 = &l_749;     int32_t l_763 = 0xB4C4A82BL;     int32_t *l_764 = &g_15;     int32_t *l_765 = &g_541;     int32_t l_766 = 0xC3D3FB05L;     int32_t *l_767 = &g_541;     int32_t *l_768 = &g_15;     int32_t *l_769 = &g_525;     int32_t *l_770 = &l_763;     int32_t *l_772 = &g_541;     int32_t *l_774 = &l_749;     int32_t l_775 = 1L;     int32_t *l_777 = &g_541;     int32_t *l_778 = &g_541;     int32_t *l_779 = (void*)0;     int32_t *l_780 = &g_15;     int32_t *l_781 = &l_763;     int32_t *l_782 = &l_766;     int32_t *l_783 = &g_15;     int32_t *l_784 = &g_541;     int32_t *l_785 = &g_541;     int32_t *l_786 = &g_525;     int32_t *l_787 = &l_766;     int32_t *l_788 = &l_775;     int32_t *l_789 = &g_15;     int32_t *l_790 = &g_525;     int32_t l_791 = (-7L);     int32_t *l_792 = &l_749;     int32_t *l_793 = &l_775;     int32_t *l_794 = &l_775;     int32_t l_795 = 0xE5E61AE0L;     int32_t *l_796 = &l_763;     int32_t l_797 = 3L;     uint32_t l_809 = 0UL;     uint8_t *l_814 = &g_334;     uint8_t l_815 = 0xFBL;     int64_t *l_834 = &g_473;     int8_t l_839 = (-1L);     uint32_t l_840 = 0x6C1D817BL;     int16_t *l_841 = &g_771;     int8_t *l_842 = &g_773;     int8_t *l_843 = &g_776;     uint64_t *l_844 = (void*)0;     uint64_t *l_845 = &g_225;     uint16_t **l_848 = &g_207;     int8_t l_859 = 0xD9L;     int32_t l_885 = 0xD80C2B33L;     uint16_t l_926 = 1UL;     uint32_t l_941 = 0x7D6FE7D9L;     int8_t *l_982 = &g_483;     uint32_t l_1007 = 9UL;     uint64_t *** const l_1310 = (void*)0;     int32_t l_1423 = 0x87E5B462L;     return g_1380; }
 int main (void) {     int print_hash_value = 0;     platform_main_begin();     crc32_gentab();     func_1();     transparent_crc(g_6, "g_6", print_hash_value);     transparent_crc(g_15, "g_15", print_hash_value);     transparent_crc(g_37, "g_37", print_hash_value);     transparent_crc(g_100, "g_100", print_hash_value);     transparent_crc(g_164, "g_164", print_hash_value);     transparent_crc(g_169, "g_169", print_hash_value);     transparent_crc(g_225, "g_225", print_hash_value);     transparent_crc(g_232, "g_232", print_hash_value);     transparent_crc(g_235, "g_235", print_hash_value);     transparent_crc(g_237, "g_237", print_hash_value);     transparent_crc(g_242, "g_242", print_hash_value);     transparent_crc(g_256, "g_256", print_hash_value);     transparent_crc(g_270, "g_270", print_hash_value);     transparent_crc(g_305, "g_305", print_hash_value);     transparent_crc(g_322, "g_322", print_hash_value);     transparent_crc(g_334, "g_334", print_hash_value);     transparent_crc(g_349, "g_349", print_hash_value);     transparent_crc(g_403, "g_403", print_hash_value);     transparent_crc(g_423, "g_423", print_hash_value);     transparent_crc(g_436, "g_436", print_hash_value);     transparent_crc(g_473, "g_473", print_hash_value);     transparent_crc(g_483, "g_483", print_hash_value);     transparent_crc(g_490, "g_490", print_hash_value);     transparent_crc(g_525, "g_525", print_hash_value);     transparent_crc(g_536, "g_536", print_hash_value);     transparent_crc(g_541, "g_541", print_hash_value);     transparent_crc(g_554, "g_554", print_hash_value);     transparent_crc(g_610, "g_610", print_hash_value);     transparent_crc(g_729, "g_729", print_hash_value);     transparent_crc(g_771, "g_771", print_hash_value);     transparent_crc(g_773, "g_773", print_hash_value);     transparent_crc(g_776, "g_776", print_hash_value);     transparent_crc(g_798, "g_798", print_hash_value);     transparent_crc(g_954, "g_954", print_hash_value);     transparent_crc(g_1093, "g_1093", print_hash_value);     transparent_crc(g_1159, "g_1159", print_hash_value);     transparent_crc(g_1181, "g_1181", print_hash_value);     transparent_crc(g_1190, "g_1190", print_hash_value);     transparent_crc(g_1192, "g_1192", print_hash_value);     transparent_crc(g_1242, "g_1242", print_hash_value);     transparent_crc(g_1280, "g_1280", print_hash_value);     transparent_crc(g_1282, "g_1282", print_hash_value);     transparent_crc(g_1287, "g_1287", print_hash_value);     transparent_crc(g_1380, "g_1380", print_hash_value);     transparent_crc(g_1436, "g_1436", print_hash_value);     transparent_crc(g_1441, "g_1441", print_hash_value);     transparent_crc(g_1452, "g_1452", print_hash_value);     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);     return 0; }
