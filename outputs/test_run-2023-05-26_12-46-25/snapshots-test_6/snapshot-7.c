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
                               FP_NORMAL    };
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
                            extern int printf (const char *__restrict __format, ...);
                                                                             
        uint32_t platform_main_end_crc;
int platform_main_end_flag;

                        
                                                  
                       static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        
        uint8_t crc32_byte_b;

        uint64_t crc32_8bytes_val;

        uint64_t transparent_crc_val;
char  transparent_crc_vname;

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
static int g_105_2 = -7;
static int32_t g_105_1 = 6L;
static int g_105_0 = 1;
static int32_t g_105_5 = 0x02A751A5L;
static int32_t g_105_3 = 0x224A3AAFL;
static int32_t g_105_4 = 0x5405D214L;
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
static int32_t g_229_0_0_0 = (-6L);
        static int32_t g_230 = 0xE1F1B1EDL;
        static uint64_t g_231 = 0x1CC49715F7E578D7LL;
        static uint8_t g_246 = 0UL;
        static int8_t g_249 = 0L;
        static uint64_t g_300[] = {
      18446744073709551615UL};
static uint64_t g_300_0 = 18446744073709551615UL;
        
               uint8_t func_72_p_73;
uint64_t func_72_p_74;

        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           {int flag = 0;
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {int flag = 0;
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {int flag = 0;
           
                   ;
                   0;
                   
                    {
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
           {int flag = 0;
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           i = 0;
           
           for (i;
       i < 5;
       i++)     {
              j = 0;
              
              for (j;
      j < 9;
      j++)         {
                 k = 0;
                 
                 for (k;
     k < 5;
     k++)             {
                    {
                    
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
           {
           
                   ;
                   if (0) {
                     0;
                  }
                  }
           
           ;
           i = 0;
           
           for (i;
       i < 1;
       i++)     {
              {
              
                      ;
                      if (0) {
                        0;
                     }
                     }
              
              ;
              if (0) 0;
          }
           {
                   printf ("checksum = %X\n", platform_main_end_crc);
                  }
           
           ;
       }
