 typedef signed char __int8_t;
                typedef unsigned char __uint8_t;
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef __int8_t int8_t;
                typedef __int16_t int16_t;
                         typedef __uint8_t uint8_t;
                typedef __uint16_t uint16_t;
                                                                                                       __uint32_t platform_main_end_crc;
                                                                                          __uint32_t crc32_tab_0;
                __uint32_t crc32_context = 0xFFFFFFFFUL;
                void crc32_gentab (void) {
               __uint32_t crc;
                        int i, j;
               i = 0;
                        for (;
              0 < 256;
              i) {
              j = 8;
                       for (j;
            j > 0;
            j--) {
             crc & 1;
                       {
            crc = 0 ^ 0xEDB88320UL;
           }
           {
            crc >>= 1;
           }
            }
              crc32_tab_0 = 1;
             }
              }
                                      int transparent_crc_flag;
        void transparent_crc (  void) {
               {
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
                        ;
               transparent_crc_flag;
                         {
             }
              }
                __int32_t g_3 = 0;
                                           __int32_t g_7 = 2;
                __int32_t g_9 = 8;
                __int32_t g_79 = 0x0CFCE320;
                __int32_t g_93 = 0x642E063A;
                int16_t g_105 = 2;
                uint8_t g_204 = 0xC0;
                uint8_t g_208[] = {
                   0x18250U,1U,0x26,0x1B,0x91,0x1B,0x261U       ,      0U,0U,255U,1U,0x1B,1U,0xB1,0xF3,2U       ,      4U,0x57,0xF3,0xB1,0xF6,0x1B,0x57,1U,1U       ,      250U,4U,0xF3,0xF6,0xF3,4U,250U,0x91,1U       ,      250U,0x57,255U,4U,0x68,0x0C,0x1B,0x08,0U       ,      0x31,1U,0x0C,0x26,0x91,0x68,0x68,0x91,0x26       ,      0x97,0x31,0x97,1U,255U,0x68,0xF6,1U,0xF3       };
        uint8_t g_208_1_1 = 0U;
                __uint32_t g_224 = 4294967295U;
                __uint32_t g_251 = 0xE312AFD5;
                uint16_t g_258[] = {
             0U,0U,0U,0U,};
                int16_t g_265[] = {
             0xF110,0xF110,0xF110,0xF110};
                __uint32_t g_266 = 0U;
                int8_t g_295 = 0x18;
                __uint32_t g_296 = 4294967293U;
                uint16_t g_345[] = {
             0x3B09,0x3B091U,0x3B09,0x3B091U,0x3B09,0x3B091U,0x3B09};
                const int8_t g_397 = 1;
                const int16_t g_445 = 0;
                int8_t g_527[] = {
             (1),(1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
        int8_t g_527_3 = (1);
                int8_t g_584 = 0x78;
                int16_t g_585 = 6;
                __uint32_t g_791 = 0x30A9C3AB;
                const int8_t g_845 = 1;
                uint8_t g_894 = 1U;
                __uint32_t g_896 = 0x55278DEF;
                __int32_t g_897 = 0xCCD0F77E;
                uint8_t g_947 = 0x59;
                __int32_t g_961 = 0x3328F841;
                __uint32_t g_1007[] = {
                        0x63497A48,0x207ADE2D,4294967292U,4294967292U,0x207ADE2D,0x63497A481U,0xDC13B441,0xA243F465,0xB3C137F2      ,     0xB3C137F21U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U,4294967289U,0x93CCB31E      ,     0xB3C137F2,4294967294U,0xB3C137F2,0x9BC818400U,0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441      ,     0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441,0xDC13B441,0x133BB1D3,0x1A81B186,0x93CCB31E,0x63497A48      ,     0x207ADE2D,0xA798751D,0xB3C137F21U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U      ,     0xA243F465,0xB3C137F2,0xDC13B4411U,0x63497A48      ,     0x133BB1D3,4294967289U,4294967292U,0x1A81B186,0xDC13B4410U,1U,1U,0U,0xDC13B441      ,     1U,4294967289U,4294967289U,1U,0U,0x133BB1D3,0xA243F465,0x63497A482U,0x93CCB31E      ,     4294967292U,0xB3C137F22U,0xA243F465,4294967289U,0x1A81B186,4294967289U,0xA243F465,2U,0xB3C137F2             };
        __uint32_t g_1007_0_0_0 = 0x63497A48;
                void  func_1(void) {
                  int16_t l_2[60] = {
                    0xE2A81,(-10),0x4CDB,0,0xDED6,0x4555,(-5),0xDFE4,0xDFE4           ,         0,0,0x8E41,0x4555,0x4555,0x8E41,0xDED6,0x77AB,0,0xB3E9           ,         0xE2A8,0x77AB,0,0x5070,(-10),7,0x1265,0,(-4),0x4555           ,         0xBDA7,0x8E41,0,(-10),0,0,(-1),0x77AB,1,0x77AB           ,         0x47DC,(-8),0x8E41,0xB3E9,0x8E41,(-8),0x47DC,0xBDA7,0x5070,0xE2A8           ,         0xDA43,1,0xA527,0xE2A8,7,(-6),0,0xDED6,(-5),0xBDA7           };
                  __uint32_t l_917 = 0xA833F4F9;
                  __int32_t l_1030;
                  __uint32_t l_1074[180] = {
                    0U,1U     ,    0x9DBE34FF,4294967295U     ,    1U,4294967295U     ,    4U,4294967295U     ,    4294967288U,1U     ,    0x601124BB,8U     ,    0U,4U     ,    4294967293U,4294967295U     ,    4294967289U,4294967289U           ,         0x31663202,0x3057A298     ,    0U,0U     ,    0x8B4992FF,0x5FAC1BAF     ,    4294967291U,0U     ,    0x49E5C0FB,1U     ,    0x41AAA537,1U     ,    4294967295U,0x8B4992FF     ,    0x84797908,1U           ,         0x89EAEE4E,0xA9CFA961     ,    0x08ADB001,0x4C786C28     ,    0x9F96A6C2,4294967286U     ,    4294967295U,0x49E5C0FB     ,    1U,0x9B568CB4     ,    4294967286U,0xFF6E61CF     ,    0U,0xF0423536     ,    0xA6EAE12D,4294967292U     ,    0x0A68C87A,4U     ,{
        4U,0x2B989F32}
          ,{
        1U,0x5B70D6D8}
          ,{
        0U,0xFF6E61CF}
                };
                              for (1;
              (1 >= 0);
              1)     {
                    __int32_t l_44 ;
                    const __int32_t l_944 = (-8);
                    __int32_t l_945 = 0x40FE3C1A;
                    __int32_t l_948 = 0xEF1A60B2;
                    __int32_t l_1037 = 0x5817A531;
                    int8_t l_1059 = g_527_3;
                    __uint32_t l_1097 = 0xA833F4F9;
                }
                   4294967293U;
              }
                       int main (void) {
                  int i, j, k;
                  int print_hash_value = 0;
                  i = 0;
                              for (i;
              i < 1;
              i++)     {
                    j = 0;
                                   for (j;
            j < 9;
            j++)         {
                      k = 0;
                                        for (k;
          k < 10;
          k++)             {
                                              0;
                    }
                  }
                }
                  {
                         printf ("checksum = %X\n", platform_main_end_crc);
                        }
              }
