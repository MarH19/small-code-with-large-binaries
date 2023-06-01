 typedef signed char __int8_t;
       typedef unsigned char __uint8_t;
       typedef signed short int __int16_t;
       typedef signed int __int32_t;
       typedef unsigned int __uint32_t;
       typedef __int8_t int8_t;
       typedef __int16_t int16_t;
       typedef __int32_t int32_t;
       typedef __uint8_t uint8_t;
       typedef __uint32_t uint32_t;
       static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
        return     (si1 + si2);
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
      }
       static uint8_t g_194 = 9U;
       static uint8_t g_760 = 8U;
       inline static const uint32_t func_1(void) {
          return g_194;
      }
       inline static int16_t func_46(int16_t p_47, uint8_t p_48) {
          return p_48;
      }
       static int16_t func_61(uint32_t p_62) {
          return p_62;
      }
       static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98) {
          return p_97;
      }
       int main (void) {
          int print_hash_value = 0;
          transparent_crc(g_760, "g_760", print_hash_value);
      }
