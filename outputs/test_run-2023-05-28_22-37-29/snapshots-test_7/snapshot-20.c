          typedef unsigned char __uint8_t;
                typedef signed short int __int16_t;
                typedef unsigned short int __uint16_t;
                typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef signed long int __int64_t;
                typedef unsigned long int __uint64_t;
                         typedef __int16_t int16_t;
                                                             typedef __uint64_t uint64_t;
                                                                                     void platform_main_begin(void) {
              }
                __uint32_t platform_main_end_crc;
        int platform_main_end_flag;
                                 __uint32_t crc32_tab;
        __uint32_t crc32_tab_0;
                __uint32_t crc32_context = 1048575UL;
                __uint32_t crc32_gentab_crc;
const __uint32_t crc32_gentab_poly = 3988292384UL;
int crc32_gentab_i;
int crc32_gentab_j;
void crc32_gentab () {
               
               
               
               crc32_gentab_i = 0;
                        for (;
              0 < 256;
              ) {
              crc32_gentab_j = 8;
                       for (crc32_gentab_j;
            crc32_gentab_j > 0;
            crc32_gentab_j--) 
              crc32_tab_0 = crc32_gentab_crc;
             }
              }
                void crc32_byte (__uint8_t ) {
               crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
              }
                uint64_t crc32_8bytes_val;
                 void transparent_crc (uint64_t val, char* vname, int flag) {
               
              }
                signed char g_6 = 0x11L;
                __int32_t g_15 = 4015884042L;
                uint64_t g_37 = 18446744073709551615UL;
                __uint32_t g_100 = 9UL;
                __int64_t g_164 = 1L;
                __uint16_t g_169 = 65535UL;
                __uint16_t g_207 = 65535UL;
                uint64_t g_225 = 0UL;
                uint64_t g_235 = 18446744073709551614UL;
                __uint32_t g_237 = 0x02198C40L;
                uint64_t g_242 = 3947867761052356835LL;
                __uint32_t g_256 = 1UL;
                __int64_t g_270 = 0;
                __uint8_t g_305 = 0UL;
                __uint16_t g_322 = 65530UL;
                __uint8_t g_334 = 0x2DL;
                __int32_t g_349 = 3L;
                __int64_t g_403 = 16107097402310894799LL;
                __int32_t g_423 = 1620731741L;
                __uint32_t g_436 = 1UL;
                __int64_t g_473 = 310503801072483744LL;
                char g_483 = 93L;
                int16_t g_490 = 32150L;
                __int32_t g_525 = 1L;
                int16_t g_536 = 0x2927L;
                __int32_t g_541 = 0x3B964475L;
                __uint32_t g_554 = 18446744073709551614UL;
                __uint16_t g_610 = 0x3554L;
                __uint32_t g_729 = 1UL;
                int16_t g_771 = 0;
                char g_773 = 0x80L;
                char g_776 = 0x38L;
                __uint8_t g_798 = 255UL;
                __int32_t g_954 = 1579831689L;
                __uint16_t g_1093 = 65532UL;
                int16_t g_1159 = 0xB37DL;
                int16_t g_1181 = 0x286EL;
                int16_t g_1190 = 4L;
                __uint32_t g_1192 = 0x25F6E47FL;
                __int64_t g_1242 = 289823309985731948LL;
                __int32_t g_1280 = 1L;
                __uint32_t g_1282 = 2221062819L;
                __int32_t g_1287 = 1981214652L;
                __uint32_t g_1380 = 18446744073709551608UL;
                __int32_t g_1436 = 3643831651L;
                int16_t g_1441 = 0x7342L;
                __uint32_t func_1_l_4 = 0x2DB22124L;
char func_1_l_5 = 0x11L;
__int32_t func_1_l_735 = 3903088061L;
__int32_t func_1_l_738 = 0x3B964475L;
__int32_t func_1_l_742 = 1L;
__int32_t func_1_l_743 = 0x3B964475L;
__int32_t func_1_l_744 = 4015884042L;
__int32_t func_1_l_745 = 1L;
__int32_t func_1_l_746 = 4015884042L;
__int32_t func_1_l_747 = 4015884042L;
__int32_t func_1_l_748 = 0;
__int32_t func_1_l_749 = 5L;
__int32_t func_1_l_750 = 4015884042L;
__int32_t func_1_l_751 = 4015884042L;
__int32_t func_1_l_752 = 0;
__int32_t func_1_l_753 = 0x3B964475L;
__int32_t func_1_l_754 = 0x3B964475L;
__int32_t func_1_l_755 = 4015884042L;
__int32_t func_1_l_756 = 2431727006L;
__int32_t func_1_l_757 = 3L;
__int32_t func_1_l_758 = 0x3B964475L;
__int32_t func_1_l_759 = 5L;
__int32_t func_1_l_760 = 1L;
__int32_t func_1_l_761 = 4015884042L;
__int32_t func_1_l_762 = 5L;
__int32_t func_1_l_763 = 3032786987L;
__int32_t func_1_l_764 = 4015884042L;
__int32_t func_1_l_765 = 0x3B964475L;
__int32_t func_1_l_766 = 3285449477L;
__int32_t func_1_l_767 = 0x3B964475L;
__int32_t func_1_l_768 = 4015884042L;
signed char func_1_l_859 = 0xD9L;
__int32_t func_1_l_1423 = 2279978082L;
void  func_1() {
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                  
                   18446744073709551608UL;
              }
                int main_print_hash_value = 0;
int main (void) {
                  
                  platform_main_begin;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  transparent_crc;
                  {uint64_t val = 1620731741L;
                  char *vname = "g_423";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  transparent_crc;
                  {uint64_t val = 310503801072483744LL;
                  char *vname = "g_473";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 0x5DL;
                  char *vname = "g_483";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 0x7D96L;
                  char *vname = "g_490";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 1L;
                  char *vname = "g_525";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 0x2927L;
                  char *vname = "g_536";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 0x3B964475L;
                  char *vname = "g_541";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 18446744073709551614UL;
                  char *vname = "g_554";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 0x3554L;
                  char *vname = "g_610";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 1UL;
                  char *vname = "g_729";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = g_771;
                  char *vname = "g_771";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  {uint64_t val = 0x80L;
                  char *vname = "g_773";
                  int flag = 0;
                  
                                 
                                }
                  
                  ;
                  transparent_crc(0x38L, "g_776", 0);
                  {
                         printf ("checksum = %X\n", platform_main_end_crc);
                        }
              }
