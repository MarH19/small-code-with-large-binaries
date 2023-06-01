typedef char __int8_t;
        typedef char __uint8_t;
        typedef int __int16_t;
        typedef int __uint16_t;
        typedef int __int32_t;
        typedef int __uint32_t;
         int __off_t;
        __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
         struct {
            struct {
          char __wchb;
        }
       ;
       }
        __mbstate_t;
        struct {
             }
        __fpos_t;
        __uint32_t platform_main_end_crc;
                     int16_t safe_rshift_func_int16_t_s_u_left;
        int safe_rshift_func_int16_t_s_u_right;
        int32_t safe_add_func_int32_t_s_s_si1;
        int32_t safe_add_func_int32_t_s_s_si2;
        void(safe_add_func_int32_t_s_s)() {
       }
        __uint32_t safe_div_func_uint32_t_u_u_ui1;
        __uint32_t safe_div_func_uint32_t_u_u_ui2;
        void(safe_div_func_uint32_t_u_u)() {
       }
        __uint32_t crc32_tab;
        __uint32_t crc32_tab_0;
        __uint32_t crc32_context = 4294967295UL;
        uint8_t crc32_byte_b;
        __uint32_t crc32_8bytes_val;
        __uint32_t transparent_crc_val;
        char transparent_crc_vname;
        int transparent_crc_flag;
        void transparent_crc() {
         {
          {
     crc32_context = 0 ^ crc32_tab_0;
     }
     }
       }
        __uint32_t g_22 = 1732606355;
        int32_t g_71 = 0x0E5C5CC9;
        int32_t g_129 = 0x0E5C5CC9;
        int32_t g_128 = 0x0E5C5CC9;
        int32_t g_213 = 3855958234;
        uint16_t g_214[] = {
      65527U, 0x2E2112383048999U, 0x2E21 };
        uint16_t g_288 = 0x11CA;
        __uint32_t g_312 = 1831586049;
        uint16_t g_328 = 65534U;
        __uint32_t g_331[1] = {
      4294967295U,                                 4248564040,                                 4200592991,                                 4294967289U,                                 4294967295U,                                 4294967295U,                                 4294967295U,                                 11828225824U,                                 3486464133,                                 4294967295U,                                 0U,                                 2463908472,                                 1561309308,                                 4294967295U,                                 66511498272U,                                 0U,                                 4294967295U,                                 38412472376U,                                 4294967295U,                                 2451248924,                                 0x2D4D6344,                                 0x2C104672,                                 52576501584U,                                 4294967289U,                                 0x1111568D,                                 4294967295U,                                 4294967290U,                                 4294967286U,                                 0U,                                 4280156707,                                 4294967294U,                                 60664854617U,                                 1229769992,                                 4294967295U,                                 4294967289U,                                 24980948929U,                                 4294967293U,                                 4294967295U,                                 3486464133,                                 0x1CDC0773,                                 4294967295U,                                 3190878597,                                 3006143554,                                 1561309308,                                 3286031349,                                 4248564040,                                 19676319872U,                                 4294967295U,                                 1U,                                 4294967290U,                                 4294967295U,                                 4294967294U,                                 0x2D4D6344,                                 0x18D7C328,                                 4294967286U,                                 4294967295U,                                 0x113F0E6E,                                 0x1111568D,                                 52576501593U,                                 3286031349,                                 2463908472,                                 4280156707,                                 39219982784U,                                 4294967295U,                                 2400779523,                                 60664854616U,                                 0U,                                 1484869258,                                 0x113F0E6E,                                 1561309308,                                 3791553413,                                 11828225824U,                                 39422535552U,                                 4294967289U,                                 {
     3286031349, 38412472368U}
      ,                                 {
     4294967295U, 48098296865U}
      ,                                 {
     0x2D4D6344, 4294967295U }
      ,                                 {
     4294967290U, 0x18D7C328 }
      ,                                 {
     52576501592U }
      ,                                 4294967295U,                                 1U,                                 4294967289U,                                 3791553413,                                 0x18D7C328,                                 4294967295U,                                 5U,                                 4294967295U,                                 0U,                                 0U,                                 3006143554,                                 3791553413,                                 4294967295U,                                 2400779523,                                 34551451952U,                                 0U,                                 2400779523,                                 0x2D4D6344,                                 0x1CDC0773,                                 4294967294U,                                 8U,                                 0x2C104672,                                 19400832608U,                                 0x113F0E6E,                                 4294967295U,                                 2463908472,                                 4294967295U,                                 4294967294U,                                 {
     3486464133, 4280156707 }
      ,                                 4294967290U,                                 4294967293U,                                 4294967286U,                                 0U,                                 4294967289U,                                 0x1CDC0773,                                 4294967286U,                                 9U,                                 19400832608U,                                 1U,                                 47903673728U,                                 68482507313U,                                 1U,                                 4294967290U,                                 0U,                                 0U,                                 4294967295U,                                 4294967295U,                                 4294967295U,                                 4200592991,                                 4248564040,                                 4294967295U,                                 4294967295U,                                 };
        int32_t g_335 = 0x0E5C5CC9;
        int main_i;
        int main() {
         for (;
       main_i < 2;
       main_i++) {
          printf("checksum = %X\n", platform_main_end_crc);
        }
       }
