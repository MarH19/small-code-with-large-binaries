 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;
        typedef long int __off_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
        typedef struct {
         int __count;
         union   {
          unsigned int __wch;
          char __wchb[4];
        }
       __value;
       }
        __mbstate_t;
        typedef struct _G_fpos_t {
         __off_t __pos;
         __mbstate_t __state;
       }
        __fpos_t;
                                                                             static void platform_main_begin(void) {
       }
        static void platform_main_end(uint32_t crc, int flag) {
        printf ("checksum = %X\n", crc);
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
      j--) {
        if (crc & 1) {
        crc = (crc >> 1) ^ poly;
       }
     else {
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
          int16_t f0;
       };
        static int32_t g_2 = 0L;
        static int8_t g_74 = 0L;
        static int32_t g_78 = 1L;
        static int8_t g_88 = 0xE5L;
        static int16_t g_109 = 0x1B3EL;
        static uint32_t g_133[7] = {
      4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        static int32_t g_136 = 0xDDAD4DBFL;
        static uint16_t g_139 = 8UL;
        static struct S0 g_145 = {
      0L};
        static struct S0 g_199 = {
      0xB76AL};
        static uint64_t g_206 = 3UL;
        static uint8_t g_229 = 0x3AL;
        static int16_t g_231[4] = {
      (-2L),(-2L),(-2L),(-2L)};
        static const int32_t g_348 = 1L;
        static int64_t g_372 = 0xCE5CD6D2EC17A5ADLL;
        static int16_t g_413 = (-1L);
        static const int32_t *g_480[1] = {
      (void*)0};
        static const int32_t **g_479 = &g_480[0];
        static const int32_t g_548 = 0L;
        static struct S0 *g_562 = &g_145;
        static const int16_t g_712 = 0xB773L;
        static const int32_t g_745[9][2][8] = {
      {
     {
    0L,0xBAEB79B3L,0xF7030F14L,1L,1L,0xF7030F14L,(-3L),8L}
     ,{
    (-1L),8L,0x68B45CC1L,0xA746E752L,0x88F3DE28L,(-3L),0x74751707L,0xBAEB79B3L}
     }
      ,{
     {
    0x88F3DE28L,0x88F3DE28L,0xBAEB79B3L,0xF7030F14L,0L,0x68B45CC1L,(-1L),0L}
     }
      ,{
     {
    0L,0x68B45CC1L,(-1L),0L,0x74751707L,1L,0x74751707L,0L}
     ,{
    0x68B45CC1L,0xBAEB79B3L,0x68B45CC1L,0xF7030F14L,0x741B7FB2L,0x01561442L,(-3L),1L}
     }
      ,{
     {
    0L,(-1L),0xF7030F14L,0x88F3DE28L,(-1L),0x741B7FB2L,0x741B7FB2L,(-1L)}
     ,{
    0L,0x74751707L,0x74751707L,0L,0x741B7FB2L,0x88F3DE28L,0L,0x01561442L}
     }
      ,{
     {
    0x68B45CC1L,0xA746E752L,0x88F3DE28L,(-3L),0x74751707L,0xBAEB79B3L,0x01561442L,0xBAEB79B3L}
     ,{
    0L,0xA746E752L,0L,0xA746E752L,0L,0x88F3DE28L,0L,8L}
     }
      ,{
     {
    0x88F3DE28L,0x74751707L,0L,1L,0xEACF512AL,0x741B7FB2L,0xA746E752L,0xA746E752L}
     ,{
    0x01561442L,(-1L),0L,0L,(-1L),0x01561442L,0L,0xEACF512AL}
     }
      ,{
     {
    0xEACF512AL,0xBAEB79B3L,0L,8L,0xA746E752L,1L,0x01561442L,0x88F3DE28L}
     ,{
    0L,0x68B45CC1L,0x88F3DE28L,8L,0x88F3DE28L,0x68B45CC1L,0L,0xEACF512AL}
     }
      ,{
     {
    (-1L),0x88F3DE28L,0x74751707L,0L,1L,0xEACF512AL,0x741B7FB2L,0xA746E752L}
     ,{
    8L,(-3L),0xF7030F14L,1L,1L,0xF7030F14L,(-3L),8L}
     }
      };
        static uint32_t g_863[2][7][4] = {
      {
     {
    0x681A688CL,6UL,1UL,0xCE63F4FEL}
     ,{
    18446744073709551610UL,18446744073709551615UL,6UL,6UL}
     ,{
    18446744073709551615UL,18446744073709551615UL,6UL,0x69D4DF5EL}
     ,{
    18446744073709551610UL,7UL,1UL,18446744073709551615UL}
     ,{
    0xB31FBF42L,0xB31FBF42L,18446744073709551615UL,18446744073709551615UL}
     }
      };
        static uint64_t g_905[2][2][3] = {
      {
     {
    0xBEF4F2D2195BE546LL,18446744073709551615UL,0xBEF4F2D2195BE546LL}
     ,{
    0x3BF03803AFBF9BBCLL,0x3BF03803AFBF9BBCLL,2UL}
     }
      };
        static uint16_t g_962 = 0x7F7CL;
        static uint32_t g_992 = 3UL;
        static int32_t g_1093 = 0xAF5976EAL;
        static uint8_t g_1106 = 250UL;
        static uint32_t g_1127 = 0x43BD6F45L;
        inline static uint16_t func_1(void) ;
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           transparent_crc(g_2, "g_2", print_hash_value);
           transparent_crc(g_74, "g_74", print_hash_value);
           transparent_crc(g_712, "g_712", print_hash_value);
           for (i = 0;
       i < 9;
       i++)     {
              for (j = 0;
      j < 2;
      j++)         {
                 for (k = 0;
     k < 8;
     k++)             {
                    transparent_crc(g_745[i][j][k], "g_745[i][j][k]", print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           for (i = 0;
       i < 2;
       i++)     {
              for (j = 0;
      j < 7;
      j++)         {
                 for (k = 0;
     k < 4;
     k++)             {
                    transparent_crc(g_863[i][j][k], "g_863[i][j][k]", print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
              for (j = 0;
      j < 2;
      j++)         {
                 for (k = 0;
     k < 3;
     k++)             {
                    transparent_crc(g_905[i][j][k], "g_905[i][j][k]", print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           transparent_crc(g_1093, "g_1093", print_hash_value);
           transparent_crc(g_1106, "g_1106", print_hash_value);
           transparent_crc(g_1127, "g_1127", print_hash_value);
           platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
       }
