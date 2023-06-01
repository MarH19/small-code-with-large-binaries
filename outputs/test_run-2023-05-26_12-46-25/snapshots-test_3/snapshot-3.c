 typedef unsigned long int __u_long;
        typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;
        enum   {
           FP_NAN =       0,     FP_INFINITE =       1,     FP_ZERO =       2,     FP_SUBNORMAL =       3,     FP_NORMAL =       4   };
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
                            extern int printf (const char *__restrict __format, ...);
                                                                             static void platform_main_begin(void) {
       }
        static void platform_main_end(uint32_t crc, int flag) {
        printf ("checksum = %X\n", crc);
       }
                        static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) ;
                                                  static uint16_t (safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) ;
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
      j--) {
        if (crc & 1) {
        crc >>= 1;
       }
       }
        crc32_tab[i] = crc;
       }
       }
        static void crc32_byte (uint8_t b) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
       }
        static void crc32_8bytes (uint64_t val) {
        crc32_byte ((val>>0) & 0xff);
        crc32_byte ((val>>8) & 0xff);
        crc32_byte ((val>>16) & 0xff);
        crc32_byte ((val>>24) & 0xff);
        crc32_byte ((val>>32) & 0xff);
        crc32_byte ((val>>40) & 0xff);
        crc32_byte ((val>>48) & 0xff);
        crc32_byte ((val>>56) & 0xff);
       }
        static void transparent_crc (uint64_t val, char* vname, int flag) {
        crc32_8bytes(val);
        if (flag) {
          printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
       }
       }
        struct S0 {
          signed f0 : 5;
          int32_t f1;
          signed f2 : 11;
          int32_t f3;
          int32_t f4;
          int32_t f5;
       };
        static int32_t g_2 = 0x51FE77DDL;
        static const int32_t g_14 = 0L;
        static int8_t g_20 = 0;
        static int8_t g_24 = 0xB4L;
        static uint8_t g_26 = 0xF6L;
        static int32_t g_54 = 0x2E510B2DL;
        static uint16_t g_90 = 0x032EL;
        static uint32_t g_96 = 0xE1234CD2L;
        static uint16_t g_98 = 0xF829L;
        static int8_t g_100 = 0L;
        static uint32_t g_102 = 9UL;
        static int32_t g_104 = 0xCDEFDC03L;
        static struct S0 g_105 = {
      1,6L,-7,0x224A3AAFL,0x5405D214L,0x02A751A5L};
        static int64_t g_108 = 0x0F2F45F95DF25DB3LL;
        static uint64_t g_142 = 18446744073709551615UL;
        static uint8_t g_175 = 0xB9L;
        static int16_t g_216 = 0L;
        static int32_t g_229[5][9][5] = {
      {
     {
    (-6L),(-5L),0xFD2DEE4CL,0x0AB2DEA7L,(-5L)}
     ,{
    4L,(-7L),(-7L),4L,1L}
     ,{
    (-4L),7L,0x2DE87007L,(-5L),(-5L)}
     ,{
    1L,4L,1L,1L,4L}
     ,{
    (-5L),0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L}
     ,{
    0x054000ADL,0x054000ADL,0x18954A2BL,4L,0xB1B2C0F5L}
     ,{
    (-6L),(-4L),0x0AB2DEA7L,0x0AB2DEA7L,0x0AB2DEA7L}
     ,{
    1L,0x18954A2BL,(-1L),1L,1L}
     ,{
    0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L,0xFD2DEE4CL}
     }
      ,{
     {
    (-1L),1L,0x18954A2BL,1L,1L}
     ,{
    0xFD2DEE4CL,0x2DE87007L,0x2DE87007L,0xFD2DEE4CL,0L}
     ,{
    1L,(-7L),0x054000ADL,1L,1L}
     ,{
    (-1L),0xFD2DEE4CL,(-1L),0L,0xFD2DEE4CL}
     ,{
    1L,0x18954A2BL,1L,1L,1L}
     ,{
    (-6L),(-6L),(-5L),0xFD2DEE4CL,0x0AB2DEA7L}
     ,{
    0x0AB2DEA7L,0x2DE87007L,(-1L),0x0AB2DEA7L,0L}
     ,{
    (-7L),1L,0x054000ADL,1L,(-7L)}
     }
      ,{
     {
    (-1L),(-6L),0x2DE87007L,0L,(-6L)}
     ,{
    (-7L),0x18954A2BL,0x18954A2BL,(-7L),1L}
     ,{
    0x0AB2DEA7L,0xFD2DEE4CL,(-5L),(-6L),(-6L)}
     ,{
    (-1L),(-7L),(-1L),1L,(-7L)}
     ,{
    (-6L),0x2DE87007L,0L,(-6L),0L}
     ,{
    1L,1L,0x054000ADL,(-7L),1L}
     ,{
    (-1L),0x0AB2DEA7L,0L,0L,0x0AB2DEA7L}
     ,{
    1L,0x18954A2BL,(-1L),1L,1L}
     ,{
    0xFD2DEE4CL,0x0AB2DEA7L,(-5L),0x0AB2DEA7L,0xFD2DEE4CL}
     }
      ,{
     {
    (-1L),1L,0x18954A2BL,1L,1L}
     ,{
    0xFD2DEE4CL,0x2DE87007L,0x2DE87007L,0xFD2DEE4CL,0L}
     }
      };
        static int32_t g_230 = 0xE1F1B1EDL;
        static uint64_t g_231 = 0x1CC49715F7E578D7LL;
        static uint8_t g_246 = 0UL;
        static int8_t *g_249 = &g_100;
        static uint64_t g_300[1] = {
      18446744073709551615UL};
        static int8_t func_1(void) {
           uint64_t l_17 = 0x5B263D188047D203LL;
           int8_t *l_25[7] = {
     &g_24,&g_24,&g_24,&g_24,&g_24,&g_24,&g_24};
           int32_t l_287 = 1L;
           int32_t l_288 = 0x9F678E49L;
           int32_t l_289 = (-4L);
           int32_t l_290 = 0xE0EACEF5L;
           uint32_t l_291 = 18446744073709551610UL;
           struct S0 l_294 = {
     3,7L,-16,0x511E1152L,0xBCAEF4B9L,0x8183C4D5L};
           int32_t *l_297 = &l_294.f3;
           int32_t *l_298 = &l_294.f4;
           int32_t *l_299[2];
           int i;
           for (i = 0;
       i < 2;
       i++)         l_299[i] = (void*)0;
           return (*g_249);
       }
               static const int32_t * func_72(uint8_t p_73, uint64_t p_74) {
           int32_t *l_122 = &g_54;
           int32_t *l_123 = &g_105.f4;
           int32_t *l_124 = &g_54;
           int32_t *l_125 = &g_105.f3;
           int32_t *l_126[10][4] = {
     {
    &g_105.f3,&g_105.f5,&g_105.f5,&g_105.f3}
     ,{
    &g_105.f3,&g_105.f5,&g_105.f5,&g_105.f3}
     };
           uint8_t l_127 = 0xFBL;
           return l_126[1][2];
       }
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           transparent_crc(g_2, "g_2", print_hash_value);
           transparent_crc(g_14, "g_14", print_hash_value);
           transparent_crc(g_20, "g_20", print_hash_value);
           transparent_crc(g_24, "g_24", print_hash_value);
           transparent_crc(g_26, "g_26", print_hash_value);
           transparent_crc(g_54, "g_54", print_hash_value);
           transparent_crc(g_90, "g_90", print_hash_value);
           transparent_crc(g_96, "g_96", print_hash_value);
           ;
           transparent_crc(g_100, "g_100", print_hash_value);
           transparent_crc(g_102, "g_102", print_hash_value);
           transparent_crc(g_104, "g_104", print_hash_value);
           transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
           transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
           transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
           transparent_crc(g_216, "g_216", print_hash_value);
           for (i = 0;
       i < 5;
       i++)     {
              for (j = 0;
      j < 9;
      j++)         {
                 for (k = 0;
     k < 5;
     k++)             {
                    transparent_crc(g_229[i][j][k], "g_229[i][j][k]", print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           transparent_crc(g_230, "g_230", print_hash_value);
           for (i = 0;
       i < 1;
       i++)     {
              transparent_crc(g_300[i], "g_300[i]", print_hash_value);
              if (print_hash_value) printf("index = [%d]\n", i);
          }
           platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
       }
