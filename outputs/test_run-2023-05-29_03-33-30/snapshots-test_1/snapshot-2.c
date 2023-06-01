 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef signed long int __int64_t;
  typedef unsigned long int __uint64_t;
  typedef long int __off_t;
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
 }
  __mbstate_t;
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
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  struct S0 {
    int16_t f0;
 };
  static int32_t g_2 = 0L;
  static int8_t g_74 = 0L;
  static int32_t g_78 = 1L;
  static int8_t g_88 = 0xE5L;
  static int16_t g_109 = 0x1B3EL;
  static uint32_t g_133[7] = {
4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
  static int32_t g_136 = 0xDDAD4DBFL;
  static uint16_t g_139 = 8UL;
  static struct S0 g_145 = {
0xB76AL};
  static uint64_t g_206 = 3UL;
  static uint8_t g_229 = 0x3AL;
  static int16_t g_231[4] = {
(-2L),(-2L),(-2L),(-2L)};
  static const int32_t g_348 = 1L;
  static int16_t g_413 = (-1L);
  static const int32_t *g_480[1] = {
(void*)0};
  static struct S0 *g_562 = &g_145;
  static const int32_t g_745[9][2][8] = {
};
  static uint32_t g_863[2][7][4] = {
};
  static uint64_t g_905[2][2][3] = {
};
  inline static uint16_t func_1(void) {
     for (g_2 = 0;
 (g_2 <= (-27));
 g_2--)     {         int32_t l_15 = 0L;         uint32_t *l_862 = &g_863[0][4][0];         uint16_t l_866 = 2UL;         uint16_t *l_993 = &g_139;         int32_t *l_994 = &g_78;         uint8_t l_1012 = 0x0AL;         int8_t *** const l_1013[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};         struct S0 **l_1018 = &g_562;         uint32_t l_1040 = 0x81DE801BL;         uint16_t l_1137[1][5];         int i, j;         for (i = 0; i < 1; i++)         {             for (j = 0; j < 5; j++)                 l_1137[i][j] = 65535UL;         }     }
     return g_231[1];
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     for (i = 0;
 i < 9;
 i++)     {         for (j = 0; j < 2; j++)         {             for (k = 0; k < 8; k++)             {                 transparent_crc(g_745[i][j][k], "g_745[i][j][k]", print_hash_value);                 if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);             }         }     }
     for (i = 0;
 i < 2;
 i++)     {         for (j = 0; j < 7; j++)         {             for (k = 0; k < 4; k++)             {                 transparent_crc(g_863[i][j][k], "g_863[i][j][k]", print_hash_value);                 if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);             }         }     }
     for (i = 0;
 i < 2;
 i++)     {         for (j = 0; j < 2; j++)         {             for (k = 0; k < 3; k++)             {                 transparent_crc(g_905[i][j][k], "g_905[i][j][k]", print_hash_value);                 if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);             }         }     }
 }
