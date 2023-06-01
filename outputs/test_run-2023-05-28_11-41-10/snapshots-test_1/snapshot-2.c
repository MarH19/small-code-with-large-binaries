 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef long int __off_t;
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
  typedef struct {
 }
  __mbstate_t;
  typedef struct _G_fpos_t {
   __off_t __pos;
   __mbstate_t __state;
 }
  __fpos_t;
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
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
  if (flag) {     printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);  }
 }
  static uint32_t g_22 = 0x67457993;
  static int32_t g_71 = 0x0E5C5CC9;
  static int32_t *g_129 = &g_71;
  static int32_t **g_128 = &g_129;
  static uint16_t g_265[1] = {
0xD5EF};
  static uint16_t g_288 = 0x11CA;
  static uint32_t g_312 = 0x6D2BC901;
  static uint16_t g_328 = 65534U;
  static uint32_t g_331[8][10][3] = {
{{4294967295U,0xFD3BF148,0xFA5FF65F},{4294967289U,4294967295U,4294967295U},{4294967295U,0x2C104672,0U},{0xCFCF3885,4294967295U,0U},{0x92DC4278,4294967295U,0x5D0FB07C},{4294967295U,0xF7C64EC2,0U},{0U,4294967295U,0x8F18FD03},{8U,4294967295U,0x921B171C},{0x2D4D6344,0x2C104672,0xC3DCDBF5},{0U,4294967289U,0x1111568D}}
,{{4294967295U,4294967290U,4294967286U},{0U,0xFF1E0223,4294967294U},{5U,1U,1U},{0xE1FE8385,9U,0x494CCD08},{4294967295U,4294967289U,0x5D0FB07C},{1U,4294967293U,4294967295U},{0xCFCF3885,0x1CDC0773,4294967295U},{0xBE30F185,0xB32E1C42,0x5D0FB07C},{0xC3DCDBF5,0xFD3BF148,0x494CCD08},{0U,4294967295U,1U}}
,{{4294967290U,4294967295U,4294967294U},{0x2D4D6344,0x18D7C328,4294967286U},{4294967295U,0x113F0E6E,0x1111568D},{0xC3DCDBF5,9U,0xC3DCDBF5},{0x92DC4278,0xFF1E0223,0x921B171C},{0U,4294967295U,0x8F18FD03},{0xE1FE8385,8U,0U},{0x58814E8A,0x113F0E6E,0x5D0FB07C},{0xE1FE8385,0x2C104672,0U},{0U,0x1CDC0773,0U}}
,{{4294967290U,4294967293U,4294967286U},{0U,4294967289U,0x1CDC0773},{4294967286U,9U,0x48461366},{0U,1U,0xB27480D8},{0U,0xFF1E0223,1U},{1U,4294967290U,0U},{0U,4294967295U,4294967295U},{4294967295U,0xFA5FF65F,0xFD3BF148},{0x48461366,1U,1U},{0xFF1E0223,9U,0xC9D16F30}}
,{{0x1CDC0773,8U,0xCFCF3885},{1U,9U,0x2D4D6344},{0U,1U,0x1CE63495},{0x61E61F33,0xFA5FF65F,0x1111568D},{0x8F18FD03,4294967295U,0x113F0E6E},{0x1CDC0773,0xBE30F185,4294967295U},{0x19938994,1U,0x494CCD08},{0xC3DCDBF5,4294967293U,9U},{0x7342C774,0x92DC4278,0U},{4294967295U,4294967295U,0xC9D16F30}}
};
  static int32_t ***g_335 = &g_128;
  static int32_t ****g_334 = &g_335;
  static uint32_t g_401 = 0xECD72320;
  static int32_t g_808 = 0xC81FD44C;
  static int32_t g_943 = (-1);
  static int8_t g_978[2] = {
0,0};
  static int32_t func_8(uint16_t p_9, int8_t p_10);
  static int16_t func_12(int16_t p_13, uint32_t p_14);
  static const int32_t func_26(uint32_t p_27, int8_t p_28, uint16_t p_29, uint32_t p_30);
  static uint8_t func_1(void) {
     uint8_t l_931 = 0xB0;
     return g_265[0];
 }
  static uint8_t func_23(int8_t p_24, uint32_t p_25) {
     uint16_t l_549 = 1U;
     int32_t *l_554 = &g_71;
     int i, j, k;
     return (****g_334);
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
 }
