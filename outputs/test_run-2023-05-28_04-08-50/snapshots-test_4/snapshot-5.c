 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
                                                                             static void platform_main_begin(void) ;
        uint32_t platform_main_end_crc;
int platform_main_end_flag;

        int64_t safe_sub_func_int64_t_s_s_si1;
int64_t safe_sub_func_int64_t_s_s_si2;

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

        uint64_t transparent_crc_val;
char  transparent_crc_vname;
int transparent_crc_flag;

        static int32_t g_2[] = {
      (-7L),6L,(-7L),(-7L),6L,(-7L),(-7L),6L,(-7L)};
static int32_t g_2_3 = (-7L);
static int32_t g_2_2 = (-7L);
static int32_t g_2_4 = 6L;
static int32_t g_2_0 = (-7L);
static int32_t g_2_5 = (-7L);
static int32_t g_2_6 = (-7L);
        static int32_t g_5[3] = {
      1L,1L,1L};
static int32_t g_5_1 = 1L;
static int32_t g_5_2 = 1L;
static int32_t g_5_0 = 1L;
        static int32_t g_9 = 0x067E307BL;
        static uint64_t g_49 = 4UL;
        static int32_t g_61 = 1L;
        static int32_t g_60 = 1L;
        static uint32_t g_66 = 0xE47BEBA6L;
        static int8_t g_101 = 0x77L;
        static int8_t g_110 = 0x3DL;
        static uint64_t g_135 = 0x483D774F3CB375AFLL;
        static uint16_t g_151 = 65529UL;
        static int16_t g_153[4] = {
      (-1L),(-1L),(-1L),(-1L)};
static int16_t g_153_0 = (-1L);
        static uint32_t g_186 = 18446744073709551607UL;
        static int32_t g_203 = 0xF96E852CL;
        static int8_t g_206[2][3][10] = {
      {
     {
    0x8BL,0L,(-9L),0L,(-9L),0L,0x8BL,0L,(-9L),0L}
     ,{
    (-6L),0L,(-6L),0L,4L,0L,(-6L),0L,(-6L),0L}
     ,{
    (-8L),0L,(-8L),0x1EL,(-9L),0x1EL,(-8L),0L,(-8L),0x1EL}
     ,{
    (-6L),0L,4L,0L,(-6L),0L,(-6L),0L,4L,0L}
     }
      };
static int8_t g_206_0_0_0 = 0x8BL;
static int8_t g_206_0_2_7 = 0L;
        static int8_t g_207 = 0x59L;
        static int32_t g_211 = 0x067E307BL;
        static int64_t g_288 = 0x2BE48C0DEFCDF892LL;
        static uint64_t g_396 = 18446744073709551615UL;
        static int32_t g_398 = 9L;
        static int64_t g_405[2][8][5] = {
      {
     {
    0x0FE5EFB6F7C9921FLL,0xA2C6E8D11DA5C2CDLL,0x8739ECE6004F4858LL,0x8739ECE6004F4858LL,0xA2C6E8D11DA5C2CDLL}
     ,{
    0xBFBD8C90541F7247LL,(-1L),0L,0xA2C6E8D11DA5C2CDLL,1L}
     ,{
    (-1L),0L,0x3B409539DDD20A62LL,0xC25879B4C805FC86LL,0xE58D5345B4A9BF71LL}
     ,{
    1L,(-1L),0x8739ECE6004F4858LL,1L,8L}
     ,{
    (-1L),(-2L),0x0FE5EFB6F7C9921FLL,0xBFBD8C90541F7247LL,1L}
     ,{
    0xBFBD8C90541F7247LL,0xD102B0D34948EE17LL,0xD909BC677A76B645LL,0xC25879B4C805FC86LL,0xF3E973057089537BLL}
     ,{
    0x0FE5EFB6F7C9921FLL,8L,(-1L),0xA053FD55D3DFACCELL,0xF3E973057089537BLL}
     ,{
    0L,1L,1L,0L,1L}
     }
      ,{
     {
    0xE58D5345B4A9BF71LL,0L,0L,0xF3E973057089537BLL,8L}
     ,{
    0L,(-1L),1L,(-1L),0xE58D5345B4A9BF71LL}
     ,{
    0L,0xA053FD55D3DFACCELL,0x0FE5EFB6F7C9921FLL,0xF3E973057089537BLL,1L}
     ,{
    0xA04CBEC2B73690E3LL,0xA2C6E8D11DA5C2CDLL,0L,0L,0xA2C6E8D11DA5C2CDLL}
     ,{
    1L,(-1L),0L,0xA053FD55D3DFACCELL,(-1L)}
     }
      };
static int64_t g_405_1_7_4;
        static uint16_t g_407 = 0x95FBL;
        static uint32_t g_434 = 0x05DACDAEL;
        void  func_1(void) {
           int64_t __trans_tmp_1;
           int32_t *l_453 = &g_211;
           int i, j;
           {
                    __trans_tmp_1 =      (((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (((safe_sub_func_int64_t_s_s_si1 ^ ((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (~(9223372036854775807L))))-safe_sub_func_int64_t_s_s_si2)^safe_sub_func_int64_t_s_s_si2)) < 0) ?     (0) :     (safe_sub_func_int64_t_s_s_si1 - safe_sub_func_int64_t_s_s_si2);
                  }
           
           for (g_2_6 = 16;
       (g_2_6 >= (-2));
       g_2_6 = __trans_tmp_1)     {
              uint32_t l_18 = 6UL;
              int32_t *l_397 = &g_398;
              int64_t *l_403 = (void*)0;
              int64_t l_404 = g_405_1_7_4;
              uint16_t *l_406[9][9] = {
    {
   &g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,(void*)0,&g_407}
    ,{
   &g_407,&g_407,(void*)0,&g_407,&g_407,(void*)0,&g_407,&g_407,&g_407}
    ,{
   &g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407}
    ,{
   &g_407,&g_407,&g_407,&g_407,(void*)0,&g_407,&g_407,(void*)0,&g_407}
    ,{
   &g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407,&g_407}
    ,{
   &g_407,&g_407,&g_407,&g_407,(void*)0,&g_407,(void*)0,&g_407,&g_407}
    };
              int32_t l_409 = 0x02ADAA44L;
              uint64_t *l_444 = &g_396;
              int32_t *l_452 = &g_60;
              int8_t *l_454 = &g_206_0_2_7;
              int8_t *l_455 = l_454;
              int16_t l_456 = 0L;
              int i, j;
              for (g_5_0 = (-17);
      (g_5_0 < 1);
      ++g_5_0)         {
                 int32_t *l_8 = &g_9;
                 int32_t *l_10 = (void*)0;
                 int32_t *l_11 = &g_9;
                 int32_t *l_12 = (void*)0;
                 int32_t *l_13 = &g_9;
                 int32_t *l_14 = &g_9;
                 int32_t *l_15 = &g_9;
                 int32_t *l_16 = &g_9;
                 int32_t *l_17[7][6][5] = {
   {
  {
  (void*)0,&g_5_0,(void*)0,&g_9,&g_2_5}
  ,{
  &g_5_2,&g_5_1,&g_2_0,&g_2_6,(void*)0}
  ,{
  &g_9,&g_2_5,(void*)0,&g_9,&g_2_0}
  ,{
  &g_2_6,(void*)0,&g_9,&g_5_1,(void*)0}
  ,{
  &g_9,&g_2_6,&g_5_1,&g_9,(void*)0}
  ,{
  &g_9,&g_5_2,&g_9,&g_2_4,&g_2_0}
  }
   ,{
  {
  &g_5_0,&g_5_1,&g_9,&g_5_0,&g_2_6}
  ,{
  &g_2_6,&g_5_0,(void*)0,&g_5_0,&g_2_6}
  ,{
  &g_9,&g_2_0,&g_9,(void*)0,(void*)0}
  ,{
  &g_5_0,(void*)0,&g_5_0,&g_2_2,&g_5_1}
  ,{
  &g_2_6,&g_2_6,&g_9,&g_2_0,(void*)0}
  ,{
  &g_9,&g_2_2,&g_5_0,&g_5_0,&g_2_6}
  }
   ,{
  {
  (void*)0,&g_2_6,(void*)0,(void*)0,&g_2_6}
  ,{
  &g_9,&g_9,&g_5_2,&g_5_1,&g_2_0}
  ,{
  (void*)0,&g_2_3,&g_9,&g_2_5,(void*)0}
  ,{
  &g_5_1,(void*)0,&g_2_6,&g_2_6,(void*)0}
  ,{
  &g_5_0,&g_2_6,&g_2_6,(void*)0,&g_2_0}
  ,{
  &g_5_1,&g_2_0,(void*)0,&g_2_6,(void*)0}
  }
   ,{
  {
  &g_5_0,&g_5_0,&g_9,&g_2_6,&g_2_5}
  ,{
  &g_5_1,&g_5_0,&g_2_6,&g_9,&g_5_0}
  ,{
  &g_5_0,(void*)0,(void*)0,&g_2_6,&g_2_0}
  ,{
  (void*)0,&g_2_6,&g_5_2,&g_2_6,&g_9}
  ,{
  &g_9,&g_2_0,&g_5_2,(void*)0,&g_5_1}
  }
   ,{
  {
  &g_2_6,&g_2_6,&g_5_0,(void*)0,&g_2_2}
  ,{
  (void*)0,&g_2_6,&g_5_0,&g_9,&g_9}
  ,{
  &g_5_0,&g_2_6,&g_9,&g_5_0,(void*)0}
  }
   };
             }
          }
            (*l_453);
       }
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           for (i = 0;
       i < 4;
       i++)     {
              {
                      {
                             }
                      
                      ;
                      if (transparent_crc_flag) {
                        printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                     }
                     }
              
              ;
              if (print_hash_value) printf("index = [%d]\n", i);
          }
           {
                   {
                          }
                   
                   ;
                   if (transparent_crc_flag) {
                     printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                  }
                  }
           
           ;
           {
                   {
                          }
                   
                   ;
                   if (transparent_crc_flag) {
                     printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                  }
                  }
           
           ;
           for (i = 0;
       i < 2;
       i++)     {
              for (j = 0;
      j < 3;
      j++)         {
                 for (k = 0;
     k < 10;
     k++)             {
                    {
                            {
                                   }
                            
                            ;
                            if (transparent_crc_flag) {
                              printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                           }
                           }
                    
                    ;
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           {
                   {
                          }
                   
                   ;
                   if (transparent_crc_flag) {
                     printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                  }
                  }
           
           ;
           {
                   printf ("checksum = %X\n", platform_main_end_crc);
                  }
           
           ;
       }
