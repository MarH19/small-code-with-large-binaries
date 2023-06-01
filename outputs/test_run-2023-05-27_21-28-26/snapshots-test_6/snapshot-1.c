 typedef unsigned long int __u_long;
  typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef signed long int __int64_t;
  typedef unsigned long int __uint64_t;
  typedef __int8_t __int_least8_t;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   extern int signgam;
  enum   {
     FP_NAN =       0,     FP_INFINITE =       1,     FP_ZERO =       2,     FP_SUBNORMAL =       3,     FP_NORMAL =       4   };
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __int64_t int64_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
     static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     si1 * si2;
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
   static long __undefined;
  static uint16_t g_16 = 65532U;
  static int32_t g_17 = 0x6D0374C7;
  static uint16_t * const g_21 = (void*)0;
  static int32_t g_23 = 6;
  static uint8_t g_32 = 0x0E;
  static int16_t g_69 = 0x922C;
  static int32_t g_84 = 0xE69C17F7;
  static uint8_t g_136 = 250U;
  static int8_t g_141 = 0;
  static int32_t g_201 = 0;
  static uint8_t g_205 = 0x9F;
  static uint32_t g_222 = 2U;
  static int8_t g_233 = 0xB3;
  static uint32_t g_257 = 3U;
  static int16_t g_307 = 0x1E10;
  static int32_t g_321 = 0;
  static uint32_t g_334 = 0xAEC03ACE;
  static int32_t *g_338 = &g_23;
  static uint16_t g_359 = 0x640A;
  static uint32_t g_414 = 0x37E68031;
  static uint16_t g_464 = 0x78B8;
  static int32_t g_506 = 2;
  static int16_t g_507 = 0xA81A;
  static uint32_t g_519 = 0U;
  static uint16_t g_523 = 0x01D6;
  static uint32_t g_605 = 0U;
  static uint32_t g_664 = 4294967291U;
  static uint8_t g_668 = 0x85;
  static int32_t g_832 = 0;
  static uint32_t g_855 = 0xA73329E7;
  static int32_t g_886 = 0x17D0DB72;
  static uint16_t g_962 = 0x366F;
  static uint16_t g_1010 = 1U;
  static int32_t g_1121 = 0x5163A10B;
  static int16_t g_1123 = (-3);
  static int32_t g_1148 = (-1);
  static uint32_t g_1187 = 0x3E67121B;
  static int8_t g_1289 = 0;
  static int16_t g_1295 = 0x2241;
  static uint8_t g_1321 = 0xFC;
  static uint32_t *g_1363 = (void*)0;
  static uint8_t g_1521 = 0U;
  static int16_t g_1527 = 1;
  static int32_t g_1559 = (-1);
  static int16_t g_1654 = 0;
  static uint32_t g_1718 = 0x4075C5F5;
  static uint8_t g_1815 = 0x89;
  static int8_t g_1828 = 0x93;
  static int32_t g_1862 = 0x042EDB77;
  static uint32_t g_1870 = 4294967295U;
  static int16_t g_1894 = 0x1817;
  static uint8_t g_1928 = 0x8A;
  static uint8_t g_1936 = 0U;
  static uint32_t g_2032 = 0x91402598;
  static uint8_t g_2060 = 0x0F;
  static const int8_t g_2120 = 1;
  static int32_t g_2157 = 0;
  static uint32_t func_1(void) {
     uint16_t l_8 = 0U;
     uint16_t *l_14 = (void*)0;
     uint16_t *l_15 = &g_16;
     int32_t l_39 = 0x26C71534;
     uint16_t l_40 = 0xDA2A;
     int32_t *l_1940 = &g_1862;
     const uint32_t l_1979 = 0x7D5C17BE;
     const int32_t l_2021 = (-5);
     int8_t *l_2105 = &g_1289;
     int8_t **l_2104 = &l_2105;
     int32_t l_2109 = 1;
     int32_t l_2147 = 0xBC9C02F7;
     int32_t * const *l_2245 = &g_338;
     int32_t * const **l_2244 = &l_2245;
     int32_t *l_2329 = (void*)0;
     uint8_t l_2342 = 0x62;
     return l_2342;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     func_1();
     transparent_crc(g_16, "g_16", print_hash_value);
     transparent_crc(g_17, "g_17", print_hash_value);
     transparent_crc(g_23, "g_23", print_hash_value);
     transparent_crc(g_32, "g_32", print_hash_value);
     transparent_crc(g_69, "g_69", print_hash_value);
     transparent_crc(g_84, "g_84", print_hash_value);
     transparent_crc(g_136, "g_136", print_hash_value);
     transparent_crc(g_141, "g_141", print_hash_value);
     transparent_crc(g_201, "g_201", print_hash_value);
     transparent_crc(g_205, "g_205", print_hash_value);
     transparent_crc(g_222, "g_222", print_hash_value);
     transparent_crc(g_233, "g_233", print_hash_value);
     transparent_crc(g_257, "g_257", print_hash_value);
     transparent_crc(g_307, "g_307", print_hash_value);
     transparent_crc(g_321, "g_321", print_hash_value);
     transparent_crc(g_334, "g_334", print_hash_value);
     transparent_crc(g_359, "g_359", print_hash_value);
     transparent_crc(g_414, "g_414", print_hash_value);
     transparent_crc(g_464, "g_464", print_hash_value);
     transparent_crc(g_506, "g_506", print_hash_value);
     transparent_crc(g_507, "g_507", print_hash_value);
     transparent_crc(g_519, "g_519", print_hash_value);
     transparent_crc(g_523, "g_523", print_hash_value);
     transparent_crc(g_605, "g_605", print_hash_value);
     transparent_crc(g_664, "g_664", print_hash_value);
     transparent_crc(g_832, "g_832", print_hash_value);
     transparent_crc(g_855, "g_855", print_hash_value);
     transparent_crc(g_886, "g_886", print_hash_value);
     transparent_crc(g_962, "g_962", print_hash_value);
     transparent_crc(g_1010, "g_1010", print_hash_value);
     transparent_crc(g_1121, "g_1121", print_hash_value);
     transparent_crc(g_1123, "g_1123", print_hash_value);
     transparent_crc(g_1148, "g_1148", print_hash_value);
     transparent_crc(g_1187, "g_1187", print_hash_value);
     transparent_crc(g_1289, "g_1289", print_hash_value);
     transparent_crc(g_1295, "g_1295", print_hash_value);
     transparent_crc(g_1321, "g_1321", print_hash_value);
     transparent_crc(g_1521, "g_1521", print_hash_value);
     transparent_crc(g_1527, "g_1527", print_hash_value);
     transparent_crc(g_1559, "g_1559", print_hash_value);
     transparent_crc(g_1654, "g_1654", print_hash_value);
     transparent_crc(g_1718, "g_1718", print_hash_value);
     transparent_crc(g_1815, "g_1815", print_hash_value);
     transparent_crc(g_1828, "g_1828", print_hash_value);
     transparent_crc(g_1862, "g_1862", print_hash_value);
     transparent_crc(g_1870, "g_1870", print_hash_value);
     transparent_crc(g_1894, "g_1894", print_hash_value);
     transparent_crc(g_1928, "g_1928", print_hash_value);
     transparent_crc(g_1936, "g_1936", print_hash_value);
     transparent_crc(g_2032, "g_2032", print_hash_value);
     transparent_crc(g_2060, "g_2060", print_hash_value);
     transparent_crc(g_2120, "g_2120", print_hash_value);
     transparent_crc(g_2157, "g_2157", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
