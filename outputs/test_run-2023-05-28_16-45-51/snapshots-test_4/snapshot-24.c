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
                                                                                                                                                                                               static __uint32_t crc32_tab_0;
                     static __uint32_t crc32_context = 4294967295UL;
                     __uint32_t crc32_gentab_crc;
     int crc32_gentab_i;
     int crc32_gentab_j;
     static void crc32_gentab (void) {
                                                            crc32_gentab_i = 0;
                            for (0;
                  0 < 256;
                  crc32_gentab_i++) {
                 crc32_gentab_j = 8;
                          for (crc32_gentab_j;
               crc32_gentab_j > 0;
               crc32_gentab_j--)                crc32_tab_0 = 1;
                }
                  }
                                           int transparent_crc_flag;
             static void transparent_crc (  void) {
                   {
                                                                                                                                                       {
                               crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
                              }
                                                                 {
                               crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
                              }
                                                                }
                   transparent_crc_flag;
                             {
                }
                  }
                     static __int32_t g_3 = 0;
                                       static __int32_t g_6 = 3707845899;
                     static __int32_t g_7 = 2;
                     static __int32_t g_9 = 8;
                     static int16_t g_73[1] = {
                 33333};
                     static int8_t g_78 = 1;
                     static __int32_t g_79 = 0x0CFCE320;
                     static const __int32_t g_93 = 1680737850;
                     static int16_t g_105 = 2;
                     static uint8_t g_204 = 0xC0;
                     static uint8_t g_208[1] = {
                       0x18250U,1U,0x26,0x1B,0x91,0x1B,0x261U       ,      0U,0U,255U,1U,0x1B1U,0xB1,0xF32U       ,      4U,0x57,0xF3,0xB1,0xF6,0x1B,0x571U,1U       ,      250U,4U,0xF3,0xF6,0xF3,4U,250U,0x91,1U       ,      250U,0x57,255U,4U,0x68,0x0C,0x1B,0x08,0U       ,      0x31,1U,0x0C,0x26,0x91,0x68,0x68,0x91,0x26       ,      0x97,0x31,0x97,1U,255U,0x68,0xF6,1U,0xF3       };
             static uint8_t g_208_1_1 = 0U;
                     static __uint32_t g_224 = 4294967295U;
                     static __uint32_t g_251 = 3809652693;
                     static uint16_t g_258[1] = {
                 0U,0U,0U,0U,0U};
                     static int16_t g_265[1] = {
                 0xF110,0xF110,0xF110,0xF110};
                     static __uint32_t g_266 = 0U;
                     static int8_t g_295 = 0x18;
                     static __uint32_t g_296 = 4294967293U;
                     static uint16_t g_345[1] = {
                 0x3B09,0x3B09,1U,0x3B09,0x3B09,1U,0x3B09,0x3B09,1U,0x3B09};
                     static const int8_t g_397 = 1;
                     static const int16_t g_445 = (-1);
                     static int8_t g_527[1] = {
                 (-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
             static int8_t g_527_3 = (-1);
                     static int8_t g_584 = 0x78;
                     static int16_t g_585 = 6;
                     static __uint32_t g_791 = 0x30A9C3AB;
                     static const int8_t g_845 = 1;
                     static uint8_t g_894 = 1U;
                     static __uint32_t g_896 = 1428655599;
                     static __int32_t g_897 = 3436246910;
                     static uint8_t g_947 = 0x59;
                     static __int32_t g_961 = 0x3328F841;
                     static __uint32_t g_1007[1] = {
                            1665759816,0x207ADE2D,4294967292U,4294967292U,0x207ADE2D,0x63497A48,1U,3692278849,2722362469,3015784434      ,     3015784434,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,1665759816,4294967294U,4294967289U,2479665950      ,     3015784434,4294967294U,3015784434,2613581888,0U,1665759816,2479665950,0x1A81B186,0x133BB1D3,3692278849      ,     1665759816,2479665950,0x1A81B186,0x133BB1D3,3692278849,3692278849,0x133BB1D3,0x1A81B186,2479665950,1665759816      ,     0x207ADE2D,0xA798751D,3015784434,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,1665759816,4294967294U      ,     2722362469,3015784434,0x133BB1D3,0xA798751D,0x133BB1D3,0xB3C137F2,2722362469,3692278849,1U,1665759816      ,     0x133BB1D3,4294967289U,4294967292U,0x1A81B186,0xDC13B441,0U,1U,1U,0U,3692278849      ,     1U,4294967289U,4294967289U,1U,0U,0x133BB1D3,0xA243F465,1665759816,2U,2479665950      ,     4294967292U,3015784434,2U,2722362469,4294967289U,0x1A81B186,4294967289U,2722362469,2U,3015784434             };
             static __uint32_t g_1007_0_0_0 = 1665759816;
                     int16_t func_1_l_2[1][1] = {
               {
                0xE2A8,1,(-10),0x4CDB,0,0xDED6,0x4555,(-5),0xDFE4,0xDFE4     }
               ,{
                0,0,0x8E41,0x4555,0x4555,0x8E41,0xDED6,0x77AB,0,0xB3E9     }
               ,{
                0xE2A8,0x77AB,0,0x5070,(-10),7,0x1265,0,(-4),0x4555     }
               ,{
                0xBDA7,0x8E41,0,(-10),0,0,(-1),0x77AB,1,0x77AB     }
               ,{
                0x47DC,(-8),0x8E41,0xB3E9,0x8E41,(-8),0x47DC,0xBDA7,0x5070,0xE2A8     }
               ,{
                0xDA43,1,0xA527,0xE2A8,7,(-6),0,0xDED6,(-5),0xBDA7     }
               };
     __uint32_t func_1_l_917 = 2821977337;
     __int32_t ***func_1_l_1030_0;
     int16_t func_1_l_1035 = 1;
     int16_t func_1_l_1054 = 0x46FA;
     uint16_t func_1_l_1056 = 0;
     __uint32_t func_1_l_1074[1][1][1] = {
               {
            {
         4294967291U,0U}
            ,{
         0U,4285424079}
            }
               };
     __int32_t func_1_l_1079 = (-1);
     int8_t func_1_l_1084 = 0x11;
     __int32_t func_1_l_948 = 4011483314;
     void  func_1(void) {
                                                                                                                                                                                                                                                   g_3 -= 1;
                                  for (1;
                  (1 >= 0);
                  1)     {
                                                                                                                                int8_t l_1059 = g_527_3;
                                                                                  }
                       4294967293U;
                  }
                            int main_i;
     int main_j;
     int main_k;
     int main (void) {
                                                            {
                           }
                      main_i = 0;
                                  for (main_i;
                  main_i < 1;
                  main_i++)     {
                       main_j = 0;
                                      for (main_j;
               main_j < 9;
               main_j++)         {
                        main_k = 0;
                                          for (main_k;
            main_k < 10;
            main_k++)             {
                                               0;
                     }
                    }
                           }
                  }
