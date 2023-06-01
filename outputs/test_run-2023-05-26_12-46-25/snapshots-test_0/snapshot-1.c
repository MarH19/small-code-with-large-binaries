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
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>0) & 0xff);
  crc32_byte ((val>>8) & 0xff);
  crc32_byte ((val>>16) & 0xff);
  crc32_byte ((val>>56) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
    int32_t f5;
 };
  static int32_t g_2 = 0x51FE77DDL;
  static const int32_t g_14 = 0L;
  static uint16_t g_98 = 0xF829L;
  static int8_t g_100 = 0L;
  static int32_t g_229[5][9][5] = {
{{(-6L),(-5L),0xFD2DEE4CL,0x0AB2DEA7L,(-5L)},{4L,(-7L),(-7L),4L,1L},{(-4L),7L,0x2DE87007L,(-5L),(-5L)},{1L,4L,1L,1L,4L},{(-5L),0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L},{0x054000ADL,0x054000ADL,0x18954A2BL,4L,0xB1B2C0F5L},{(-6L),(-4L),0x0AB2DEA7L,0x0AB2DEA7L,0x0AB2DEA7L},{1L,0x18954A2BL,(-1L),1L,1L},{0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L,0xFD2DEE4CL}}
};
  static int32_t g_230 = 0xE1F1B1EDL;
  static int8_t *g_249 = &g_100;
  static uint64_t g_300[1] = {
18446744073709551615UL};
  static int8_t func_1(void) {
     int32_t *l_299[2];
     int i;
     for (i = 0;
 i < 2;
 i++)         l_299[i] = (void*)0;
     return (*g_249);
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     for (i = 0;
 i < 1;
 i++)     {         transparent_crc(g_300[i], "g_300[i]", print_hash_value);         if (print_hash_value) printf("index = [%d]\n", i);     }
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
 }
