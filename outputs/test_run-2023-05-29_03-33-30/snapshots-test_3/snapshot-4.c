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
         struct   {
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
        uint32_t platform_main_end_crc;
int platform_main_end_flag;
static void platform_main_end( void) {
        printf ("checksum = %X\n", platform_main_end_crc);
       }
                                                                                                   static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
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
        crc32_tab_0 = crc;
       }
       }
        uint8_t crc32_byte_b;
static void crc32_byte (void) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
       }
        uint64_t crc32_8bytes_val;
static void crc32_8bytes (void) {
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
               }
        
        ;
        crc32_byte ();
        crc32_byte ();
        crc32_byte ();
        crc32_byte ();
        crc32_byte ();
       }
        uint64_t transparent_crc_val;
char * transparent_crc_vname;
static void transparent_crc (  int flag) {
        crc32_8bytes();
        if (flag) {
          printf("...checksum after hashing %s : %lX\n", transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
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
        static uint32_t g_133[] = {
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
static int16_t g_231_1 = (-2L);
        static const int32_t g_348 = 1L;
        static int64_t g_372 = 0xCE5CD6D2EC17A5ADLL;
        static int16_t g_413 = (-1L);
        static const int32_t *g_480[1] = {
      (void*)0};
static const int32_t *g_480_0 = (void*)0;
        static const int32_t **g_479 = &g_480_0;
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
static const int32_t g_745_0_0_0 = 0L;
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
static uint32_t g_863_0_0_0 = 0x681A688CL;
static uint32_t g_863_0_4_0 = 0xB31FBF42L;
        static uint64_t g_905[2][2][3] = {
      {
     {
    0xBEF4F2D2195BE546LL,18446744073709551615UL,0xBEF4F2D2195BE546LL}
     ,{
    0x3BF03803AFBF9BBCLL,0x3BF03803AFBF9BBCLL,2UL}
     }
      };
static uint64_t g_905_0_0_0 = 0xBEF4F2D2195BE546LL;
        static uint16_t g_962 = 0x7F7CL;
        static uint32_t g_992 = 3UL;
        static int32_t g_1093 = 0xAF5976EAL;
        static uint8_t g_1106 = 250UL;
        static uint32_t g_1127 = 0x43BD6F45L;
        void  func_1(void) {
           int32_t l_42 = 9L;
           struct S0 *** const l_1161 = (void*)0;
           uint8_t l_1199 = 1UL;
           for (g_2 = 0;
       (g_2 <= (-27));
       g_2--)     {
              int32_t l_15 = 0L;
              uint32_t *l_862 = &g_863_0_4_0;
              uint16_t l_866 = 2UL;
              uint16_t *l_993 = &g_139;
              int32_t *l_994 = &g_78;
              uint8_t l_1012 = 0x0AL;
              int8_t *** const l_1013[7] = {
    (void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
              struct S0 **l_1018 = &g_562;
              uint32_t l_1040 = 0x81DE801BL;
          }
           (*g_479) = (*g_479);
            g_231_1;
       }
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           transparent_crc(  print_hash_value);
           transparent_crc(  print_hash_value);
           transparent_crc(  print_hash_value);
           for (i = 0;
       i < 9;
       i++)     {
              for (j = 0;
      j < 2;
      j++)         {
                 for (k = 0;
     k < 8;
     k++)             {
                    transparent_crc(  print_hash_value);
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
                    transparent_crc(  print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
              for (j = 0;
      j < 2;
      j++)         {
                 for (k = 0;
     k < 3;
     k++)             {
                    transparent_crc(  print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           transparent_crc(  print_hash_value);
           {int flag = print_hash_value;
           
                   crc32_8bytes();
                   if (flag) {
                     printf("...checksum after hashing %s : %lX\n", transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                  }
                  }
           
           ;
           transparent_crc(  print_hash_value);
           platform_main_end( );
       }
