 typedef signed char __int8_t;
       typedef unsigned char __uint8_t;
       typedef signed int __int32_t;
       typedef unsigned int __uint32_t;
       typedef unsigned long int __uint64_t;
       typedef __int8_t int8_t;
       typedef __int32_t int32_t;
       typedef __uint8_t uint8_t;
       typedef __uint32_t uint32_t;
       typedef __uint64_t uint64_t;
                      static uint32_t crc32_tab[256];
       static uint32_t crc32_context = 0xFFFFFFFFUL;
       static void crc32_gentab (void) {
       uint32_t crc;
       int i, j;
       for (i = 0;
      i < 256;
      i++) {
       crc = i;
       for (j = 8;
     j > 0;
     j--) {
      }
       crc32_tab[i] = crc;
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
      };
       static int8_t g_100 = 0L;
       static int32_t g_229[5][9][5] = {
     };
       static uint64_t g_231 = 0x1CC49715F7E578D7LL;
       static int8_t *g_249 = &g_100;
       static uint64_t g_300[1] = {
     18446744073709551615UL};
       static int8_t func_1(void) {
          return (*g_249);
      }
       int main (void) {
          int i, j, k;
          int print_hash_value = 0;
          crc32_gentab();
          for (i = 0;
      i < 1;
      i++)     {
         }
      }
