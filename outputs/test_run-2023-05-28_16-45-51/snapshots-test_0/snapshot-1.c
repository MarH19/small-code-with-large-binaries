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
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint32_t val) {
  crc32_byte ((val>>0) & 0xff);
  crc32_byte ((val>>24) & 0xff);
 }
  static void transparent_crc (uint32_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);  }
 }
  static int32_t g_3 = (-7);
  static int32_t g_4 = 0x45C8100C;
  static uint8_t g_204 = 0xC0;
  static uint8_t g_208[7][9] = {
};
  static uint32_t g_224 = 4294967295U;
  static uint32_t g_251 = 0xE312AFD5;
  static uint16_t g_258[5] = {
0xF110,0xF110,0xF110,0xF110};
  static uint32_t g_266 = 0U;
  static int8_t g_295 = 0x18;
  static uint32_t g_296 = 4294967293U;
  static uint8_t g_947 = 0x59;
  static int32_t g_961 = 0x3328F841;
  static uint32_t g_1007[1][9][10] = {
{{0x63497A48,0x207ADE2D,4294967292U,4294967292U,0x207ADE2D,0x63497A48,1U,0xDC13B441,0xA243F465,0xB3C137F2},{0xB3C137F2,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U,4294967289U,0x93CCB31E},{0xB3C137F2,4294967294U,0xB3C137F2,0x9BC81840,0U,0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441},{0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441,0xDC13B441,0x133BB1D3,0x1A81B186,0x93CCB31E,0x63497A48},{0x207ADE2D,0xA798751D,0xB3C137F2,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U},{0xA243F465,0xB3C137F2,0x133BB1D3,0xA798751D,0x133BB1D3,0xB3C137F2,0xA243F465,0xDC13B441,1U,0x63497A48},{0x133BB1D3,4294967289U,4294967292U,0x1A81B186,0xDC13B441,0U,1U,1U,0U,0xDC13B441},{1U,4294967289U,4294967289U,1U,0U,0x133BB1D3,0xA243F465,0x63497A48,2U,0x93CCB31E},{4294967292U,0xB3C137F2,2U,0xA243F465,4294967289U,0x1A81B186,4294967289U,0xA243F465,2U,0xB3C137F2}}
};
  static uint16_t g_1009 = 1U;
  static int32_t func_1(void) {
     int16_t l_2[6][1][10] = {{{0xE2A8,1,(-10),0x4CDB,0,0xDED6,0x4555,(-5),0xDFE4,0xDFE4}},{{0,0,0x8E41,0x4555,0x4555,0x8E41,0xDED6,0x77AB,0,0xB3E9}},{{0xE2A8,0x77AB,0,0x5070,(-10),7,0x1265,0,(-4),0x4555}},{{0xBDA7,0x8E41,0,(-10),0,0,(-1),0x77AB,1,0x77AB}},{{0x47DC,(-8),0x8E41,0xB3E9,0x8E41,(-8),0x47DC,0xBDA7,0x5070,0xE2A8}},{{0xDA43,1,0xA527,0xE2A8,7,(-6),0,0xDED6,(-5),0xBDA7}}};
     uint32_t l_917 = 0xA833F4F9;
     return g_296;
 }
         int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     transparent_crc(g_961, "g_961", print_hash_value);
     for (i = 0;
 i < 1;
 i++)     {         for (j = 0; j < 9; j++)         {             for (k = 0; k < 10; k++)             {                 transparent_crc(g_1007[i][j][k], "g_1007[i][j][k]", print_hash_value);                 if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);             }         }     }
     return 0;
 }
