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
  static uint16_t g_16 = 65532U;
  static int32_t g_17 = 0x6D0374C7;
  static int32_t g_23 = 6;
  static uint8_t g_32 = 0x0E;
  static int16_t g_69 = 0x922C;
  static int32_t g_84 = 0xE69C17F7;
  static uint8_t g_136 = 250U;
  static int8_t g_141 = 0;
  static int32_t g_201 = 0;
  static uint8_t g_205 = 0x9F;
  static uint32_t g_222 = 2U;
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
  static int8_t g_1828 = 0x93;
  static int32_t g_1862 = 0x042EDB77;
  static uint8_t g_2060 = 0x0F;
  static const int8_t g_2120 = 1;
  static int32_t g_2157 = 0;
  static uint32_t func_1(void) {
     uint16_t l_8 = 0U;
     const uint32_t l_1979 = 0x7D5C17BE;
     const int32_t l_2021 = (-5);
     int8_t *l_2105 = &g_1289;
     int32_t *l_2329 = (void*)0;
     uint8_t l_2342 = 0x62;
     return l_2342;
 }
  int main (void) {
     int print_hash_value = 0;
     platform_main_begin();
     transparent_crc(g_2120, "g_2120", print_hash_value);
     transparent_crc(g_2157, "g_2157", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
