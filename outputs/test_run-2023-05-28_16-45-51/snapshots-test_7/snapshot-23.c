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
                __uint32_t crc32_context = 4294967295UL;
                __uint32_t crc32_gentab_crc;
int crc32_gentab_i;
int crc32_gentab_j;
void crc32_gentab (void) {
               
                        
               crc32_gentab_i = 0;
                        for (;
              0 < 256;
              crc32_gentab_i) {
              crc32_gentab_j = 8;
                       for (crc32_gentab_j;
            crc32_gentab_j > 0;
            crc32_gentab_j--) 
              crc32_tab_0 = 1;
             }
              }
                                      int transparent_crc_flag;
        void transparent_crc (  void) {
               {
                      
                                       
                      
                                       
                      {
                             crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
                            }
                                       
                      {
                             crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
                            }
                                       
                     }
                        
               transparent_crc_flag;
                         
              }
                __int32_t g_3 = 0;
                                           __int32_t g_7 = 2;
                __int32_t g_9 = 8;
                __int32_t g_79 = 0x0CFCE320;
                __int32_t g_93 = 1680737850;
                int16_t g_105 = 2;
                uint8_t g_204 = 0xC0;
                uint8_t g_208[] = {
                   0x18250U,1U,0x26,0x1B,0x91,0x1B,0x261U       ,      0U,0U,255U,1U,0x1B1U,0xB1,0xF32U       ,      4U,0x57,0xF3,0xB1,0xF6,0x1B,0x571U,1U       ,      250U,4U,0xF3,0xF6,0xF34U,250U,0x911U       ,      250U,0x57,255U,4U,0x68,0x0C,0x1B,0x08,0U       ,      0x31,1U,0x0C,0x26,0x91,0x68,0x68,0x91,0x26       ,      0x97,0x31,0x97,1U,255U,0x68,0xF6,1U,0xF3       };
        uint8_t g_208_1_1 = 0U;
                __uint32_t g_224 = 4294967295U;
                __uint32_t g_251 = 3809652693;
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
                __uint32_t g_896 = 1428655599;
                __int32_t g_897 = 3436246910;
                uint8_t g_947 = 0x59;
                __int32_t g_961 = 0x3328F841;
                __uint32_t g_1007[] = {
                        1665759816,0x207ADE2D,4294967292U,4294967292U,0x207ADE2D,0x63497A481U,3692278849,2722362469,3015784434      ,     48252550945U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,1665759816,4294967294U,4294967289U,2479665950      ,     3015784434,4294967294U,3015784434,41817310208U,1665759816,2479665950,0x1A81B186,0x133BB1D3,3692278849      ,     1665759816,2479665950,0x1A81B186,0x133BB1D3,3692278849,3692278849,0x133BB1D3,0x1A81B186,2479665950,1665759816      ,     0x207ADE2D,0xA798751D,48252550945U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,1665759816,4294967294U      ,     2722362469,3015784434,0x133BB1D3,0xA798751D,0x133BB1D3,0xB3C137F2,2722362469,59076461585U,1665759816      ,     0x133BB1D3,4294967289U,4294967292U,0x1A81B186,0xDC13B4410U,1U,1U,0U,3692278849      ,     1U,4294967289U,4294967289U,1U,0U,0x133BB1D3,0xA243F465,26652157058U,2479665950      ,     4294967292U,48252550946U,2722362469,4294967289U,0x1A81B186,4294967289U,2722362469,2U,0xB3C137F2             };
        __uint32_t g_1007_0_0_0 = 0x63497A48;
                int16_t func_1_l_2[60] = {
                    0xE2A81,(-10),0x4CDB,0,0xDED6,0x4555,(-5),0xDFE4,0xDFE4           ,         0,0,0x8E41,0x4555,0x4555,0x8E41,0xDED6,0x77AB,0,46057           ,         0xE2A8,0x77AB,0,0x5070,(-10),7,0x1265,0,(-4),0x4555           ,         0xBDA7,0x8E41,0,(-10),0,0,(-1),0x77AB,1,0x77AB           ,         0x47DC,(-8),0x8E41,0xB3E9,0x8E41,(-8),0x47DC,0xBDA7,0x5070,0xE2A8           ,         0xDA43,1,0xA527,0xE2A8,7,(-6),0,0xDED6,(-5),0xBDA7           };
__uint32_t func_1_l_917 = 0xA833F4F9;
__int32_t func_1_l_1030;
__uint32_t func_1_l_1074[180] = {
                    0U,1U     ,    0x9DBE34FF,4294967295U     ,    1U,4294967295U     ,    4U,4294967295U     ,    4294967288U,1U     ,    0x601124BB,8U     ,    0U,4U     ,    4294967293U,4294967295U     ,    4294967289U,4294967289U           ,         0x31663202,0x3057A298     ,    0U,0U     ,    0x8B4992FF,0x5FAC1BAF     ,    4294967291U,0U     ,    0x49E5C0FB,1U     ,    0x41AAA537,1U     ,    4294967295U,0x8B4992FF     ,    0x84797908,1U           ,         0x89EAEE4E,0xA9CFA961     ,    0x08ADB001,0x4C786C28     ,    0x9F96A6C2,4294967286U     ,    4294967295U,0x49E5C0FB     ,    1U,0x9B568CB4     ,    4294967286U,0xFF6E61CF     ,    0U,0xF0423536     ,    0xA6EAE12D,4294967292U     ,    0x0A68C87A,4U     ,{
        4U,0x2B989F32}
          ,{
        1U,0x5B70D6D8}
          ,{
        0U,0xFF6E61CF}
                };
__int32_t func_1_l_44;
const __int32_t func_1_l_944 = (-8);
__int32_t func_1_l_945 = 0x40FE3C1A;
__int32_t func_1_l_948 = 0xEF1A60B2;
__int32_t func_1_l_1037 = 0x5817A531;
__uint32_t func_1_l_1097 = 0xA833F4F9;
void  func_1(void) {
                  
                  
                  
                  
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
int main_print_hash_value = 0;
int main (void) {
                  
                  
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
                  {
                         printf ("checksum = %X\n", platform_main_end_crc);
                        }
              }
