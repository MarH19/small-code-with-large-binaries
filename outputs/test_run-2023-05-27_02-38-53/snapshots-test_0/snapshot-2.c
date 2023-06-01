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
    }
   __value;
   }
    __fpos64_t;
                                                                         static void platform_main_begin(void) {
   }
    static void platform_main_end(uint32_t crc, int flag) {
    printf ("checksum = %X\n", crc);
   }
    static uint32_t crc32_context = 0xFFFFFFFFUL;
    static void crc32_gentab (void) {
    uint32_t crc;
    const uint32_t poly = 0xEDB88320UL;
    int i, j;
    for (i = 0;
   i < 256;
   i++) {
    for (j = 8;
  j > 0;
  j--) {
    if (crc & 1) {     crc = (crc >> 1) ^ poly;    }
 else {     crc >>= 1;    }
   }
   }
   }
    static uint16_t g_135 = 0x8A5EL;
    static int8_t g_187[3][9] = {
  };
    static uint32_t g_513[5] = {
  0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL};
    static int32_t g_588[9][9] = {
  };
    static const uint8_t g_1655[1] = {
  0UL};
    static int16_t g_1676[4] = {
  0L,0L,0L,0L};
    static uint64_t func_1(void) {
       return g_135;
   }
    int main (void) {
       int i, j, k;
       int print_hash_value = 0;
       for (i = 0;
   i < 3;
   i++)     {
      }
       for (i = 0;
   i < 1;
   i++)     {
      }
       platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
   }
