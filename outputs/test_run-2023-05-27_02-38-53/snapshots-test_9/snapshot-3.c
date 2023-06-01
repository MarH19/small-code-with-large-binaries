 typedef signed char __int8_t;
   typedef unsigned char __uint8_t;
   typedef signed short int __int16_t;
   typedef unsigned short int __uint16_t;
   typedef signed int __int32_t;
   typedef unsigned int __uint32_t;
   typedef unsigned long int __uint64_t;
   typedef struct {
  }
   __fsid_t;
   typedef __int8_t int8_t;
   typedef __int16_t int16_t;
   typedef __int32_t int32_t;
   typedef __uint8_t uint8_t;
   typedef __uint16_t uint16_t;
   typedef __uint32_t uint32_t;
   typedef __uint64_t uint64_t;
   typedef struct {
    union   {
     unsigned int __wch;
     char __wchb[4];
   }
  __value;
  }
   __fpos64_t;
                                                                        static void platform_main_begin(void) {
  }
   static void platform_main_end(uint32_t crc, int flag) {
  }
                     static uint32_t crc32_tab[256];
   static uint32_t crc32_context = 0xFFFFFFFFUL;
   static void crc32_gentab (void) {
   uint32_t crc;
   const uint32_t poly = 0xEDB88320UL;
   int i, j;
   for (i = 0;
  i < 256;
  i++) {
   crc = i;
   for (j = 8;
 j > 0;
 j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }
  }
  }
   static void crc32_byte (uint8_t b) {
   crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
  }
   static void crc32_8bytes (uint64_t val) {
   crc32_byte ((val>>0) & 0xff);
  }
   static void transparent_crc (uint64_t val, char* vname, int flag) {
   crc32_8bytes(val);
  }
   static uint64_t g_61[4][3] = {
 };
   static uint16_t g_135 = 0x8A5EL;
   static int8_t g_187[3][9] = {
 };
   static uint32_t g_513[5] = {
 0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL};
   static int32_t g_588[9][9] = {
 {
7L,7L,7L,7L,7L,7L,7L,7L,7L}
 };
   static int16_t g_1676[4] = {
 0L,0L,0L,0L};
   static uint64_t func_1(void) {
      return g_135;
  }
   int main (void) {
      int i, j, k;
      int print_hash_value = 0;
      crc32_gentab();
      for (i = 0;
  i < 3;
  i++)     {
     }
      for (i = 0;
  i < 9;
  i++)     {
         for (j = 0;
 j < 9;
 j++)         {             transparent_crc(g_588[i][j], "g_588[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }
     }
      for (i = 0;
  i < 1;
  i++)     {
     }
  }
