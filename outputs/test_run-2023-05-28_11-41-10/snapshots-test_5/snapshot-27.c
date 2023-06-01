          typedef unsigned char __uint8_t;
                        typedef signed short int __int16_t;
                        typedef unsigned short int __uint16_t;
                        typedef signed int __int32_t;
                        typedef unsigned int __uint32_t;
                        typedef long int __off_t;
                                                   typedef __uint8_t uint8_t;
                                          typedef struct {
                       int __count;
                       struct   {
                      unsigned int __wch;
                      char __wchb[];
                    }
                     __value;
                     }
                        __mbstate_t;
                        typedef struct _G_fpos_t {
                       __mbstate_t __state;
                     }
                        __fpos_t;
                                                                                                      __uint32_t platform_main_end_crc;
                int platform_main_end_flag;
                          signed char safe_add_func_int8_t_s_s_si1;
                signed char safe_add_func_int8_t_s_s_si2;
                         signed char safe_sub_func_int8_t_s_s_si1;
                signed char safe_sub_func_int8_t_s_s_si2;
                         __int16_t safe_div_func_int16_t_s_s_si1;
                __int16_t safe_div_func_int16_t_s_s_si2;
                         __int16_t safe_lshift_func_int16_t_s_s_left;
                int safe_lshift_func_int16_t_s_s_right;
                         __int16_t safe_lshift_func_int16_t_s_u_left;
                unsigned int safe_lshift_func_int16_t_s_u_right;
                         __int16_t safe_rshift_func_int16_t_s_s_left;
                int safe_rshift_func_int16_t_s_s_right;
                         __int16_t safe_rshift_func_int16_t_s_u_left;
                unsigned int safe_rshift_func_int16_t_s_u_right;
                void  (safe_rshift_func_int16_t_s_u)( void ) {
                            ((safe_rshift_func_int16_t_s_u_left < 0) || ((safe_rshift_func_int16_t_s_u_right) >= 32)) ?      :     (safe_rshift_func_int16_t_s_u_left >> ((unsigned )safe_rshift_func_int16_t_s_u_right));
                     }
                         __int32_t safe_add_func_int32_t_s_s_si1;
                __int32_t safe_add_func_int32_t_s_s_si2;
                void  (safe_add_func_int32_t_s_s)( void ) {
                            (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > (0-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < (0-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
                     }
                        __uint32_t safe_div_func_uint32_t_u_u_ui1;
                __uint32_t safe_div_func_uint32_t_u_u_ui2;
                                  static __uint32_t crc32_tab;
                static __uint32_t crc32_tab_0;
                        static __uint32_t crc32_context = 4294967295UL;
                         __uint32_t crc32_8bytes_val;
                         __uint32_t transparent_crc_val;
                char  transparent_crc_vname;
                int transparent_crc_flag;
                static void transparent_crc (  void) {
                      {
                            {
                                  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                 }
                                             ;
                            {
                                  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                 }
                                             ;
                            {
                                  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                 }
                                             ;
                           }
                      transparent_crc_flag;
                     }
                        static __uint32_t g_22 = 1732606355;
                        static __int32_t g_71 = 0x0E5C5CC9;
                        static __int32_t g_129 = 0x0E5C5CC9;
                        static __int32_t g_128 = 0x0E5C5CC9;
                        static __uint32_t g_312 = 1831586049;
                        static __uint16_t g_328 = 65534U;
                        static __uint32_t g_331[1][1][1] = {
                    {
                 {
              4294967295U,4248564040,4200592991}
                 ,{
              4294967289U,4294967295U,4294967295U}
                 ,{
              4294967295U,0x2C104672,0U}
                 ,{
              3486464133,4294967295U,0U}
                 ,{
              2463908472,4294967295U,1561309308}
                 ,{
              4294967295U,4156968642,0U}
                 ,{
              0U,4294967295U,2400779523}
                 ,{
              8U,4294967295U,4294967289U,0x1111568D}
                 }
                    ,{
                 {
              4294967295U,4294967290U,4294967286U}
                 ,{
              0U,4280156707,4294967294U}
                 ,{
              3791553413,9U,1229769992}
                 ,{
              4294967295U,4294967289U,1561309308}
                 ,{
              1U,4294967293U,4294967295U}
                 ,{
              3486464133,0x1CDC0773,4294967295U}
                 ,{
              3190878597,3006143554,1561309308}
                 ,{
              3286031349,4248564040,1229769992}
                 ,{
              0U,4294967295U,1U}
                 }
                    ,{
                 {
              4294967290U,4294967295U,4294967294U}
                 ,{
              0x2D4D6344,0x18D7C328,4294967286U}
                 ,{
              4294967295U,0x113F0E6E,0x1111568D}
                 ,{
              3286031349,9U,3286031349}
                 ,{
              2463908472,4280156707,2451248924}
                 ,{
              0U,4294967295U,2400779523}
                 ,{
              3791553413,8U,0U}
                 ,{
              1484869258,0x113F0E6E,0x5D0FB07C}
                 ,{
              3791553413,0x2C104672,0U}
                 ,{
              2463908472,0U,4294967289U}
                 ,{
              3286031349,2400779523,0U}
                 ,{
              4294967295U,3006143554,1U}
                 ,{
              0x2D4D6344,4294967295U,2993979608}
                 ,{
              4294967290U,0x18D7C328,0x48461366}
                 ,{
              0U,1U,0x1CDC0773}
                 ,{
              3286031349,8U,4294967286U}
                 ,{
              3190878597,1U,2451248924}
                 ,{
              5U,4294967295U,0U}
                 ,{
              0U,3006143554,3791553413}
                 ,{
              4294967295U,2400779523,2159465747}
                 ,{
              0U,0U,2400779523}
                 ,{
              0x2D4D6344,0x1CDC0773,4294967294U}
                 ,{
              8U,0x2C104672,0x48461366}
                 }
                    };
                        static __int32_t g_335 = 0x0E5C5CC9;
                        static __int32_t g_334 = 0x0E5C5CC9;
                        static __uint32_t g_401 = 3973522208;
                        static const signed char g_436 = 0x99;
                        static __int32_t g_501[1] = {
                    0,0,0,0,0};
                        __uint32_t func_1_l_11 = 0x281D21F1;
                        int main_i;
        int main (void) {
                                     for (main_i;
                     main_i < 2;
                     main_i++)     {
                              }
                     }
