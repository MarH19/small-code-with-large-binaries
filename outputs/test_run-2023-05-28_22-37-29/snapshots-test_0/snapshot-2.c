   typedef signed int __int32_t;
    typedef unsigned int __uint32_t;
    typedef __uint32_t uint32_t;
                                                                         static void platform_main_begin(void) {
   }
    static void platform_main_end(uint32_t crc, int flag) {
    printf ("checksum = %X\n", crc);
   }
    static uint32_t crc32_context = 0xFFFFFFFFUL;
    static void crc32_gentab (void) {
    int i, j;
    for (i = 0;
   i < 256;
   i++) {
    for (j = 8;
  j > 0;
  j--) {
   }
   }
   }
    int main (void) {
       int print_hash_value = 0;
       platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
   }
