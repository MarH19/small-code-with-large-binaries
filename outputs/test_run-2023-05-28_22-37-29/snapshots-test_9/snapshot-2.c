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
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  static int8_t g_6 = 0x11L;
  static int32_t g_15 = 0xEF5D870AL;
  static uint64_t g_37 = 18446744073709551615UL;
  static uint32_t g_100 = 9UL;
  static int64_t g_164 = 1L;
  static uint16_t g_169 = 65535UL;
  static uint16_t *g_207 = &g_169;
  static uint8_t g_305 = 0UL;
  static uint16_t g_322 = 65530UL;
  static uint8_t g_334 = 0x2DL;
  static int32_t g_349 = 3L;
  static int64_t g_403 = 0xDF87E7BF935BA4CFLL;
  static int32_t g_423 = 0x609A675DL;
  static int32_t g_1287 = 0x7616EFBCL;
  static uint32_t g_1380 = 18446744073709551608UL;
  static int32_t g_1436 = 0xD9307563L;
  static int16_t g_1441 = 0x7342L;
  static uint32_t g_1452 = 6UL;
  static int32_t func_1(void) {
     return g_1380;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     transparent_crc(g_1436, "g_1436", print_hash_value);
     transparent_crc(g_1441, "g_1441", print_hash_value);
     transparent_crc(g_1452, "g_1452", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
