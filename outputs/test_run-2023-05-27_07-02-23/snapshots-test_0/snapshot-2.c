 typedef signed char __int8_t;
   typedef unsigned char __uint8_t;
   typedef signed short int __int16_t;
   typedef unsigned short int __uint16_t;
   typedef signed int __int32_t;
   typedef unsigned int __uint32_t;
   typedef unsigned long int __uint64_t;
   typedef __int8_t int8_t;
   typedef __int16_t int16_t;
   typedef __int32_t int32_t;
   typedef __uint8_t uint8_t;
   typedef __uint16_t uint16_t;
   typedef __uint32_t uint32_t;
   typedef __uint64_t uint64_t;
                                                                        static void platform_main_begin(void) {
  }
   static void platform_main_end(uint32_t crc, int flag) {
   printf ("checksum = %X\n", crc);
  }
   static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 - ui2;
  }
        static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
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
   crc32_tab[i] = crc;
  }
  }
   static void crc32_byte (uint8_t b) {
  }
   static void crc32_8bytes (uint64_t val) {
  }
   static void transparent_crc (uint64_t val, char* vname, int flag) {
  }
   static int32_t *g_74 = (void*)0;
   static int32_t **g_73 = &g_74;
   static uint8_t g_90 = 0xA2L;
   static uint32_t g_95 = 0UL;
   static int16_t g_106 = (-4L);
   static int8_t g_115[4][10][1] = {
 };
   static uint8_t *g_206 = &g_90;
   static uint32_t *g_412[4][1] = {
 };
   static uint32_t **g_411[6][10] = {
 };
   static uint32_t **g_772[2] = {
 (void*)0, (void*)0};
   static uint32_t ***g_771[2] = {
 &g_772[0], &g_772[0]};
   static int32_t g_984 = 0L;
   inline static const uint16_t func_1(void) {
      for (g_90 = 0;
  (g_90 >= 57);
  g_90++)     {
         int32_t l_937 = (-7L);
         int32_t l_938 = 0x8C267EBAL;
         const int32_t l_1182 = 0xA87564DFL;
         int i, j;
     }
      return (*g_206);
  }
   int main (void) {
      int print_hash_value = 0;
      platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  }
