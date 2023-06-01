                   typedef signed int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef signed long int __int64_t;
                typedef unsigned long int __uint64_t;
                                                                                                                                                             static void platform_main_begin(void) {
              }
                __uint32_t platform_main_end_crc;
                                 static __uint32_t crc32_tab;
        static __uint32_t crc32_tab_0;
                static __uint32_t crc32_context = 0xFFFFFFFFUL;
                static void crc32_gentab (void) {
               __uint32_t crc;
               const __uint32_t poly = 0xEDB88320UL;
               int i, j;
               i = 0;
                        for (0;
              0 < 256;
              i++) {
              j = 8;
                       for (j;
            j > 0;
            j--) {
                       {
            crc = 0 ^ 0xEDB88320UL;
           }
            }
              crc32_tab_0 = crc;
             }
              }
                static void crc32_byte (unsigned char b) {
               crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
              }
                __uint64_t crc32_8bytes_val;
                 static void transparent_crc (__uint64_t val, char* vname, int flag) {
               {
                     }
              }
                static signed char g_6 = 0x11L;
                static __int32_t g_15 = 0xEF5D870AL;
                static __uint64_t g_37 = 18446744073709551615UL;
                static __uint32_t g_100 = 9UL;
                static __int64_t g_164 = 1L;
                static __uint16_t g_169 = 65535UL;
                static __uint16_t g_207 = 65535UL;
                static __uint64_t g_225 = 0UL;
                static __int16_t g_232 = 0;
                static __uint64_t g_235 = 18446744073709551614UL;
                static __uint32_t g_237 = 0x02198C40L;
                static const __uint64_t g_242 = 0x36C9A4CFDDBE10E3LL;
                static __uint32_t g_256 = 1UL;
                static __int64_t g_270 = 0;
                static unsigned char g_305 = 0UL;
                static __uint16_t g_322 = 65530UL;
                static unsigned char g_334 = 0x2DL;
                static __int32_t g_349 = 3L;
                static __int64_t g_403 = 0xDF87E7BF935BA4CFLL;
                static __int32_t g_423 = 0x609A675DL;
                static __uint32_t g_436 = 1UL;
                static __int64_t g_473 = 0x044F218FDC557DA0LL;
                static signed char g_483 = 0x5DL;
                static __int16_t g_490 = 0x7D96L;
                static __int32_t g_525 = 1L;
                static __int16_t g_536 = 0x2927L;
                static __int32_t g_541 = 0x3B964475L;
                static __uint32_t g_554 = 18446744073709551614UL;
                static __uint16_t g_610 = 0x3554L;
                static __uint32_t g_729 = 1UL;
                static __int16_t g_771 = 0;
                static signed char g_773 = 0x80L;
                static signed char g_776 = 0x38L;
                static unsigned char g_798 = 255UL;
                static __int32_t g_954 = 0x5E2A5189L;
                static __uint16_t g_1093 = 65532UL;
                static __int16_t g_1159 = 0xB37DL;
                static __int16_t g_1181 = 0x286EL;
                static __int16_t g_1190 = 4L;
                static __uint32_t g_1192 = 0x25F6E47FL;
                static __int64_t g_1242 = 0x0405A8C3CF53D56CLL;
                static __int32_t g_1280 = 1L;
                static __uint32_t g_1282 = 0x8462BAA3L;
                static __int32_t g_1287 = 0x7616EFBCL;
                static __uint32_t g_1380 = 18446744073709551608UL;
                static __int32_t g_1436 = 0xD9307563L;
                static __int16_t g_1441 = 0x7342L;
                void  func_1(void) {
                  __uint32_t l_4 = 0x2DB22124L;
                  signed char l_5 = 0x11L;
                  const __int32_t l_735 = 0xE8A465BDL;
                  __int32_t l_738 = 0x3B964475L;
                  __int32_t l_742 = 1L;
                  __int32_t l_743 = 0x3B964475L;
                  __int32_t l_744 = 0xEF5D870AL;
                  __int32_t l_745 = 1L;
                  __int32_t l_746 = 0xEF5D870AL;
                  __int32_t l_747 = 0xEF5D870AL;
                  __int32_t l_748 = 0;
                  __int32_t l_749 = 5L;
                  __int32_t l_750 = 0xEF5D870AL;
                  __int32_t l_751 = 0xEF5D870AL;
                  __int32_t l_752 = 0;
                  __int32_t l_753 = 0x3B964475L;
                     ;
                  __int32_t l_755 = 0xEF5D870AL;
                  __int32_t l_756 = 0x90F1359EL;
                  __int32_t l_757 = 3L;
                  __int32_t l_758 = 0x3B964475L;
                  __int32_t l_759 = 5L;
                  __int32_t l_760 = 1L;
                  __int32_t l_761 = 0xEF5D870AL;
                  __int32_t l_762 = 5L;
                  __int32_t l_763 = 0xB4C4A82BL;
                  __int32_t l_764 = 0xEF5D870AL;
                  __int32_t l_765 = 0x3B964475L;
                  __int32_t l_766 = 0xC3D3FB05L;
                  __int32_t l_767 = 0x3B964475L;
                  __int32_t l_768 = 0xEF5D870AL;
                  signed char l_859 = 0xD9L;
                  __int32_t l_1423 = 0x87E5B462L;
                   18446744073709551608UL;
              }
                int main (void) {
                  int print_hash_value = 0;
                  platform_main_begin;
                  transparent_crc(18446744073709551615UL, "g_37", print_hash_value);
                              0;
                  transparent_crc(1L, "g_164", print_hash_value);
                  transparent_crc(65535UL, "g_169", print_hash_value);
                  transparent_crc(0UL, "g_225", print_hash_value);
                  transparent_crc(0, "g_232", print_hash_value);
                  transparent_crc(18446744073709551614UL, "g_235", print_hash_value);
                  transparent_crc(0x02198C40L, "g_237", print_hash_value);
                  transparent_crc(0x36C9A4CFDDBE10E3LL, "g_242", print_hash_value);
                  transparent_crc(1UL, "g_256", print_hash_value);
                  transparent_crc(g_270, "g_270", print_hash_value);
                  transparent_crc(0UL, "g_305", print_hash_value);
                  transparent_crc(65530UL, "g_322", print_hash_value);
                  transparent_crc(0x2DL, "g_334", print_hash_value);
                  transparent_crc(3L, "g_349", print_hash_value);
                  transparent_crc(0xDF87E7BF935BA4CFLL, "g_403", print_hash_value);
                  transparent_crc(0x609A675DL, "g_423", print_hash_value);
                  transparent_crc(1UL, "g_436", print_hash_value);
                  transparent_crc(0x044F218FDC557DA0LL, "g_473", print_hash_value);
                  transparent_crc(0x5DL, "g_483", print_hash_value);
                  transparent_crc(0x7D96L, "g_490", print_hash_value);
                  transparent_crc(1L, "g_525", print_hash_value);
                  transparent_crc(0x2927L, "g_536", print_hash_value);
                  transparent_crc(0x3B964475L, "g_541", print_hash_value);
                  transparent_crc(18446744073709551614UL, "g_554", print_hash_value);
                  transparent_crc(0x3554L, "g_610", print_hash_value);
                  transparent_crc(1UL, "g_729", print_hash_value);
                  transparent_crc(g_771, "g_771", print_hash_value);
                  transparent_crc(0x80L, "g_773", print_hash_value);
                  transparent_crc(0x38L, "g_776", print_hash_value);
                  transparent_crc(255UL, "g_798", print_hash_value);
                  transparent_crc(0x5E2A5189L, "g_954", print_hash_value);
                  transparent_crc(65532UL, "g_1093", print_hash_value);
                              ;
              }
