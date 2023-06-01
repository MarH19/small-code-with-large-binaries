                                     typedef signed int __int32_t;
                typedef unsigned int __uint32_t;
                typedef unsigned long int __uint64_t;
                         typedef short int16_t;
                                                                                                                                  void platform_main_begin(void) {
              }
                __uint32_t platform_main_end_crc;
        int platform_main_end_flag;
        void platform_main_end( void) {
              }
                unsigned char safe_add_func_uint8_t_u_u_ui1;
        unsigned char safe_add_func_uint8_t_u_u_ui2;
        void  (safe_add_func_uint8_t_u_u)( void ) {
                 safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
              }
                unsigned char safe_sub_func_uint8_t_u_u_ui1;
        unsigned char safe_sub_func_uint8_t_u_u_ui2;
        void  (safe_sub_func_uint8_t_u_u)( void ) {
                 safe_sub_func_uint8_t_u_u_ui1 - safe_sub_func_uint8_t_u_u_ui2;
              }
                     unsigned char safe_rshift_func_uint8_t_u_s_left;
        int safe_rshift_func_uint8_t_u_s_right;
        void  (safe_rshift_func_uint8_t_u_s)( void ) {
                     (((safe_rshift_func_uint8_t_u_s_right) = 32)) ?      :     (safe_rshift_func_uint8_t_u_s_left >> (safe_rshift_func_uint8_t_u_s_right));
              }
                 unsigned short safe_rshift_func_uint16_t_u_s_left;
        int safe_rshift_func_uint16_t_u_s_right;
        void  (safe_rshift_func_uint16_t_u_s)( void ) {
                     (((safe_rshift_func_uint16_t_u_s_right) = 32)) ?      :     (safe_rshift_func_uint16_t_u_s_left >> (safe_rshift_func_uint16_t_u_s_right));
              }
                                               __uint32_t crc32_tab;
        __uint32_t crc32_tab_0;
                __uint32_t crc32_context = 0xFFFFFFFFUL;
                __uint32_t crc32_gentab_crc;
const __uint32_t crc32_gentab_poly = 0xEDB88320UL;
void crc32_gentab () {
               
               
              }
                unsigned char crc32_byte_b;
                 __uint64_t crc32_8bytes_val;
        void crc32_8bytes () {
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
               {
                      crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                     }
                        
              }
                __uint64_t transparent_crc_val;
        char  transparent_crc_vname;
        int transparent_crc_flag;
                 __int32_t g_11 = 0x272A7275L;
                __int32_t g_20 = 0x0CBEB969L;
                const __int32_t g_19[] ;
        const __int32_t g_19_0 = 0x0CBEB969L;
                __int32_t *g_74 = 00;
                __int32_t **g_73 = &g_74;
                __uint32_t g_77 = 1UL;
                __int32_t g_85 = 0;
                __int32_t g_87 = 1L;
                char g_90 = 0xA2L;
                unsigned short g_100 = 0UL;
                unsigned char g_104 = 3UL;
                int16_t g_106 = 0;
                signed char g_115[] = {
                        0L      ,      0L      ,      0L                    };
                __uint32_t g_121 = 0x4A01C31EL;
                __int32_t g_128 = 0L;
                unsigned g_172 = 9UL;
                unsigned char g_206 = 0xA2L;
                unsigned char g_269 = 0xA2L;
                signed char g_292 = 9L;
                int16_t g_364 = 0xF1D1L;
                __int32_t ***g_366 = &g_73;
                __uint32_t g_412[] ;
        __uint32_t g_412_1_0;
        __uint32_t g_412_3_0;
                __uint32_t g_411[1][10] ;
                char g_482 = 0xA4L;
                __int32_t ****g_552 = &g_366;
                __uint32_t g_772[1] ;
                __uint32_t g_858 = 0xB46FDF36L;
                int16_t g_945 = 0xC844L;
                unsigned g_980 = 3UL;
                __int32_t g_984 = 0L;
                __int32_t g_1066 = 6L;
                unsigned char g_1067[] = {
                   0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L       ,       0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L       ,       0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L       };
                signed char g_1068 = 0x25L;
                __uint32_t g_1075 = 1UL;
                unsigned char g_1100 = 9UL;
                const unsigned short g_1175 = 0xB3E2L;
                static __int32_t func_2;
                __int32_t func_1___trans_tmp_1;
signed char func_1_l_16 = 1L;
__int32_t func_1_l_921[112] = {
     0,0x0CBEB969L,0001L,0x0CBEB969L,0,0x0CBEB969L,0001L,0x0CBEB969L,0,0x0CBEB969L,0001L,0x0CBEB969L,0,0x0CBEB969L,0001L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0xCBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L,0,0x0CBEB969L,0,0,0,1L,0x0CBEB969L};
__int32_t *func_1_l_921_1_1_6 = &g_20;
__int32_t func_1_l_922 = 4L;
__int32_t func_1_l_923 = 0x0CBEB969L;
__int32_t func_1_l_937 = (-7L);
__int32_t func_1_l_938 = 0x8C267EBAL;
__uint32_t func_1_l_956 = 0;
const signed char func_1_l_977 = 1L;
__uint32_t func_1_l_1142[1][1] = {
    {
   0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL}
    ,{
   0UL,1UL,0UL,1UL,0UL,1UL,0UL,1UL}
    };
int func_1_i;
int func_1_j;
void  func_1(void) {
                  
                  
                  
                  
                  __int32_t l_942[1] = {
     ****g_552,0,****g_552,0,****g_552,0,****g_552,0};
                  {
                            
                            
                            func_1___trans_tmp_1 =  *(*g_73);
                        }
                              (***g_552) = &func_1___trans_tmp_1;
                  (***g_552) = (func_1_l_921_1_1_6 = func_1_l_921_1_1_6);
                  g_90 = 0;
                              for (0;
              (0 >= 57);
              g_90++)     {
                    
                    
                    
                    __int32_t l_976 = **g_73;
                    
                    
                    
                }
                   0L;
              }
                 const __int32_t  func_17_p_18;
                 int main_print_hash_value = 0;
int main (void) {
                  
                  {
                         ;
                         transparent_crc_flag;
                                              {
                          printf("...checksum after hashing %s : %lX\n", &transparent_crc_vname, crc32_context ^ 0xFFFFFFFFUL);
                       }
                        }
              }
