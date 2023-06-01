 typedef signed char __int8_t;
    typedef unsigned char __uint8_t;
    typedef signed short int __int16_t;
    typedef signed int __int32_t;
    typedef unsigned int __uint32_t;
    typedef signed long int __int64_t;
    typedef unsigned long int __uint64_t;
    typedef __int8_t int8_t;
    typedef __int16_t int16_t;
    typedef __int32_t int32_t;
    typedef __int64_t int64_t;
    typedef __uint8_t uint8_t;
    typedef __uint32_t uint32_t;
    typedef __uint64_t uint64_t;
                                                                         static void platform_main_begin(void) {
   }
    static void platform_main_end(uint32_t crc, int flag) {
    printf ("checksum = %X\n", crc);
   }
    static int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
     return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
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
    static int32_t g_2[9] = {
  1L,1L,1L};
    static int32_t g_9 = 0x067E307BL;
    static int32_t *g_211 = &g_9;
    static int64_t func_1(void) {
       int32_t **l_453 = &g_211;
       for (g_2[6] = 16;
   (g_2[6] >= (-2));
   g_2[6] = safe_sub_func_int64_t_s_s(g_2[6], 9))     {
      }
       return (**l_453);
   }
    int main (void) {
       int i, j, k;
       int print_hash_value = 0;
       for (i = 0;
   i < 4;
   i++)     {
      }
       platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
   }
