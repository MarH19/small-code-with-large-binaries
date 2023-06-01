 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
         int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;

         int8_t safe_mod_func_int8_t_s_s_si1;
int8_t safe_mod_func_int8_t_s_s_si2;

        int8_t safe_div_func_int8_t_s_s_si1;
int8_t safe_div_func_int8_t_s_s_si2;

        int8_t safe_lshift_func_int8_t_s_s_left;
int safe_lshift_func_int8_t_s_s_right;

        int8_t safe_rshift_func_int8_t_s_u_left;
unsigned int safe_rshift_func_int8_t_s_u_right;

         int16_t safe_add_func_int16_t_s_s_si1;
int16_t safe_add_func_int16_t_s_s_si2;

         int16_t safe_mod_func_int16_t_s_s_si1;
int16_t safe_mod_func_int16_t_s_s_si2;

        int16_t safe_lshift_func_int16_t_s_s_left;
int safe_lshift_func_int16_t_s_s_right;

        int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;

          int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;

        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;

        int32_t safe_div_func_int32_t_s_s_si1;
int32_t safe_div_func_int32_t_s_s_si2;

          uint8_t safe_rshift_func_uint8_t_u_u_left;
unsigned int safe_rshift_func_uint8_t_u_u_right;

         uint16_t safe_add_func_uint16_t_u_u_ui1;
uint16_t safe_add_func_uint16_t_u_u_ui2;
void  (safe_add_func_uint16_t_u_u)( void ) {
          safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
          safe_add_func_uint16_t_u_u_ui1 - safe_add_func_uint16_t_u_u_ui2;
       }
        uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
void  (safe_add_func_uint32_t_u_u)( void ) {
          safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
              (safe_add_func_uint32_t_u_u_ui2 == 0) ?     ((safe_add_func_uint32_t_u_u_ui1)) :     (safe_add_func_uint32_t_u_u_ui1 / safe_add_func_uint32_t_u_u_ui2);
       }
                 static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        int i, j;
        i = 0;
        
        for (0;
       0 < 256;
       i++) {
        j = 8;
        
        for (8;
      8 > 0;
      j--) {
       }
       }
       }
        uint8_t crc32_byte_b;

        uint32_t crc32_8bytes_val;

        uint32_t transparent_crc_val;
char  transparent_crc_vname;
int transparent_crc_flag;

        struct S0 {
          int32_t f0;
       };
        static int8_t g_19 = 0xF1;
        static int32_t g_24[10] = {
      4,4,4,4,4,4,4,4,4,4};
static int32_t g_24_8 = 4;
        static int32_t g_23 = 4;
        static const int32_t g_27 = (-2);
        static const int32_t g_26 = (-2);
        static int16_t g_34[] = {
      0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C};
        static uint8_t g_36[5][7] = {
      };
static uint8_t g_36_0_0;
        static uint8_t g_52 = 1U;
        static uint16_t g_66 = 0U;
        static int16_t g_83 = 0x0487;
        static uint32_t g_96 = 0x6F2FD6C9;
        static int16_t *g_98 = (void*)0;
        static int8_t g_137[5] = {
      0xC9C70339};
static int8_t g_137_2;
        static int32_t  const g_222[4] = {4,4,4,4};
static int32_t const g_222_3 = 4;
        static int32_t  const g_221 = 4;
        static int16_t * const g_275 = (void*)0;
        static int16_t g_356[2][3][5] = {};
        static uint8_t g_364[3][7] = {};
static uint8_t g_364_1_2;
        static uint8_t g_363 = 0;
        static int16_t g_376 = 0xAB47;
        static int8_t g_390[3][3] = {
      };
        static const int8_t g_394 = 0;
        static const int8_t g_393 = 0;
        static struct S0 g_411 = {
      -6};
        static int8_t g_470 = 0x45;
        static uint16_t *g_476 = (void*)0;
        static int8_t *g_510 = (void*)0;
        static struct S0 *g_521 = &g_411;
        static uint16_t g_720 = 0xD661;
        static const uint16_t g_808 = 0xD661;
        static const uint16_t g_807 = 0xD661;
        static const uint16_t g_806 = 0xD661;
        void  func_1(void) {
           int8_t __trans_tmp_1;
           int32_t l_927 = 4;
           
           
           {
                    __trans_tmp_1 =      ((safe_div_func_int8_t_s_s_si2 == 0) || ((safe_div_func_int8_t_s_s_si1 == (-128)) && (safe_div_func_int8_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int8_t_s_s_si1)) :     (safe_div_func_int8_t_s_s_si1 / safe_div_func_int8_t_s_s_si2);
                  }
           
           if ((__trans_tmp_1))     {
          }
           else     {
              g_52 = 22;
              
              for (22;
      (22 != 9);
      --g_52)         {
                  (0);
             }
          }
       }
        int32_t  func_10_p_11;
void  func_10(void) {
           uint8_t __trans_tmp_3;
           int8_t __trans_tmp_2;
           
           
           
           int i;
           i = 0;
           
           g_19 -= 1;
           
           for (0;
       0 < 5;
       1)     {
              
              int8_t l_717 = 1;
              if (((void*)0 != &g_521))         {
                 
                 int32_t l_737 = 0x0481B764;
                 g_66 = 27;
                 
                 for (27;
     (27 < 23);
     --g_66)             
                 {
                 g_376 = 0;
                 
                 for (0;
     (0 >= (-18));
     g_376--)             {
                    
                    int32_t l_729 = 0x035BBBF3;
                    
                    int16_t l_733 = 0x0487;
                    {
                    {
                             __trans_tmp_2 =      ((safe_rshift_func_int8_t_s_u_left < 0) || (((unsigned int)safe_rshift_func_int8_t_s_u_right) >= 32)) ?     ((safe_rshift_func_int8_t_s_u_left)) :     (safe_rshift_func_int8_t_s_u_left >> ((unsigned int)safe_rshift_func_int8_t_s_u_right));
                           }
                    
                    {
                    {
                             __trans_tmp_3 =      (((unsigned int)safe_rshift_func_uint8_t_u_u_right) >= 32) ?     ((safe_rshift_func_uint8_t_u_u_left)) :     (safe_rshift_func_uint8_t_u_u_left >> ((unsigned int)safe_rshift_func_uint8_t_u_u_right));
                           }
                    
                    l_737 = ((func_10_p_11) = (((l_729 = (g_96 = 0x03766958)) & ((__trans_tmp_2) & ((((l_717) = 0xF5) <= (((0x45 <= 0x03766958) < ((l_733) = (g_27))) < (__trans_tmp_3))) < (0)))) > 3U));
                    }
                    }
                     (g_26);
                }
                 }
             }
          }
       }
             int main (void) {
           int i, j;
           int print_hash_value = 0;
           i = 0;
           
           for (i;
       i < 5;
       i++)     {
              j = 0;
              
              for (j;
      j < 7;
      j++)         {
                 {
                         {
                                 {
                                         crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                        }
                                 
                                 ;
                                }
                         
                         ;
                        }
                 
                 ;
             }
          }
           i = 0;
           
           for (i;
       i < 3;
       i++)     {
              j = 0;
              
              for (j;
      j < 3;
      j++)         {
             }
          }
       }
