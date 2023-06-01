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

                                                                                                   static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        uint32_t crc;
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        i = 0;
        
        for (0;
       0 < 256;
       i++) {
        crc = 0;
        j = 8;
        
        for (8;
      8 > 0;
      j--) {
        if (0 & 1) {
        crc = (crc >> 1) ^ 0xEDB88320UL;
       }
     else {
        crc >>= 1;
       }
       }
        crc32_tab_0 = 1;
       }
       }
        uint8_t crc32_byte_b;

        uint64_t crc32_8bytes_val;
static void crc32_8bytes (void) {
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
        {
                crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
               }
        
        ;
       }
        uint64_t transparent_crc_val;
char  transparent_crc_vname;

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
        static const int32_t *g_479 = (void*)0;
        static const int32_t g_548 = 0L;
        static struct S0 g_562 = {
      0L};
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
           struct S0  const l_1161 ;
           uint8_t l_1199 = 1UL;
           g_2 = 0;
           
           for (0;
       (0 <= (-27));
       g_2--)     {
              int32_t l_15 = 0L;
              uint32_t l_862 = 0xB31FBF42L;
              uint16_t l_866 = 2UL;
              uint16_t l_993 = 8UL;
              int32_t l_994 = 1L;
              uint8_t l_1012 = 0x0AL;
              int8_t  const l_1013[7] = {0,0,0,0,0,0,0};
              struct S0 l_1018 = g_562;
              uint32_t l_1040 = 0x81DE801BL;
          }
           (g_479) = (g_479);
            g_231_1;
       }
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           {int flag = 0;
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {int flag = 0;
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {int flag = 0;
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           i = 0;
           
           for (i;
       i < 9;
       i++)     {
              j = 0;
              
              for (j;
      j < 2;
      j++)         {
                 k = 0;
                 
                 for (k;
     k < 8;
     k++)             {
                    {int flag = 0;
                    
                            ;
                            if (0) {
                              0;
                           }
                           }
                    
                    ;
                    if (0) 0;
                }
             }
          }
           i = 0;
           
           for (i;
       i < 2;
       i++)     {
              j = 0;
              
              for (j;
      j < 7;
      j++)         {
                 k = 0;
                 
                 for (k;
     k < 4;
     k++)             {
                    {int flag = 0;
                    
                            ;
                            if (0) {
                              0;
                           }
                           }
                    
                    ;
                    if (0) 0;
                }
             }
              j = 0;
              
              for (j;
      j < 2;
      j++)         {
                 k = 0;
                 
                 for (k;
     k < 3;
     k++)             {
                    {int flag = 0;
                    
                            crc32_8bytes();
                            if (0) {
                              printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                           }
                           }
                    
                    ;
                    if (0) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           {int flag = 0;
           
                   crc32_8bytes();
                   if (0) {
                     printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                  }
                  }
           
           ;
           {int flag = 0;
           
                   crc32_8bytes();
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {int flag = 0;
           
                   crc32_8bytes();
                   if (0) {
                     printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                  }
                  }
           
           ;
           {
                   printf ("checksum = %X\n", platform_main_end_crc);
                  }
           
           ;
       }
