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
                                                                             
        
        
        
        
        
        
        
        
        
        
        
        int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;

        int32_t safe_div_func_int32_t_s_s_si1;
int32_t safe_div_func_int32_t_s_s_si2;

            uint8_t safe_unary_minus_func_uint8_t_u_ui;

        uint8_t safe_add_func_uint8_t_u_u_ui1;
uint8_t safe_add_func_uint8_t_u_u_ui2;

        uint8_t safe_lshift_func_uint8_t_u_s_left;
int safe_lshift_func_uint8_t_u_s_right;

        uint16_t safe_unary_minus_func_uint16_t_u_ui;

        uint16_t safe_add_func_uint16_t_u_u_ui1;
uint16_t safe_add_func_uint16_t_u_u_ui2;

        uint16_t safe_sub_func_uint16_t_u_u_ui1;
uint16_t safe_sub_func_uint16_t_u_u_ui2;

        uint16_t safe_mod_func_uint16_t_u_u_ui1;
uint16_t safe_mod_func_uint16_t_u_u_ui2;

        uint16_t safe_div_func_uint16_t_u_u_ui1;
uint16_t safe_div_func_uint16_t_u_u_ui2;

        uint16_t safe_lshift_func_uint16_t_u_s_left;
int safe_lshift_func_uint16_t_u_s_right;
void  (safe_lshift_func_uint16_t_u_s)( void ) {
              ((((int)safe_lshift_func_uint16_t_u_s_right) < 0) || (((int)safe_lshift_func_uint16_t_u_s_right) >= 32) || (safe_lshift_func_uint16_t_u_s_left > ((65535) >> ((int)safe_lshift_func_uint16_t_u_s_right)))) ?     ((safe_lshift_func_uint16_t_u_s_left)) :     (safe_lshift_func_uint16_t_u_s_left << ((int)safe_lshift_func_uint16_t_u_s_right));
       }
        uint16_t safe_rshift_func_uint16_t_u_s_left;
int safe_rshift_func_uint16_t_u_s_right;
void  (safe_rshift_func_uint16_t_u_s)( void ) {
              ((((int)safe_rshift_func_uint16_t_u_s_right) < 0) || (((int)safe_rshift_func_uint16_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((int)safe_rshift_func_uint16_t_u_s_right));
       }
        uint32_t safe_unary_minus_func_uint32_t_u_ui;
void  (safe_unary_minus_func_uint32_t_u)(void ) {
          -safe_unary_minus_func_uint32_t_u_ui;
       }
        uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
void  (safe_add_func_uint32_t_u_u)( void ) {
          safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
       }
        uint32_t safe_sub_func_uint32_t_u_u_ui1;
uint32_t safe_sub_func_uint32_t_u_u_ui2;
void  (safe_sub_func_uint32_t_u_u)( void ) {
          safe_sub_func_uint32_t_u_u_ui1 - safe_sub_func_uint32_t_u_u_ui2;
       }
         uint32_t safe_mod_func_uint32_t_u_u_ui1;
uint32_t safe_mod_func_uint32_t_u_u_ui2;
void  (safe_mod_func_uint32_t_u_u)( void ) {
              (safe_mod_func_uint32_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint32_t_u_u_ui1)) :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
       }
        uint32_t safe_div_func_uint32_t_u_u_ui1;
uint32_t safe_div_func_uint32_t_u_u_ui2;
void  (safe_div_func_uint32_t_u_u)( void ) {
              (safe_div_func_uint32_t_u_u_ui2 == 0) ?     ((safe_div_func_uint32_t_u_u_ui1)) :     (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
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
      j--) ;
       }
       }
        uint8_t crc32_byte_b;

        uint32_t crc32_8bytes_val;

        uint32_t transparent_crc_val;
char  transparent_crc_vname;
int transparent_crc_flag;

        static uint8_t g_8 = 7U;
        static uint32_t g_93 = 0U;
        static uint8_t g_110 = 1U;
        static uint32_t g_131 = 0xB6C63C42;
        static uint16_t g_153 = 0x679C;
        static int32_t g_197 = 1;
        static uint8_t g_281 = 1U;
        static uint32_t g_288 = 0xFF553064;
        static uint8_t g_332 = 0U;
        static uint16_t g_771 = 8U;
        void  func_1(void) {
           uint16_t __trans_tmp_1;
           {
                    __trans_tmp_1 =  safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
                  }
           
           g_288 = (-9);
           
           g_288 = __trans_tmp_1;
           
           for (__trans_tmp_1;
       (__trans_tmp_1 < 35);
       __trans_tmp_1)     {
               1;
          }
       }
        uint32_t func_10_p_11;
uint32_t func_10_p_12;
void  func_10( void) {
            func_10_p_12;
       }
        uint32_t func_13_p_14;
int16_t func_13_p_15;
const uint8_t func_13_p_16;
int32_t func_13_p_17;
void  func_13(   void) {
           uint16_t __trans_tmp_2;
           uint32_t l_734 = 4294967286U;
           int32_t l_735 = 0x4084D062;
           {
                    __trans_tmp_2 =      (safe_mod_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint16_t_u_u_ui1)) :     (safe_mod_func_uint16_t_u_u_ui1 % safe_mod_func_uint16_t_u_u_ui2);
                  }
           
           if ((((func_13_p_14 <= (g_153 = (func_13_p_17 <= ((((__trans_tmp_2) == 1) | func_13_p_16) > func_13_p_15)))) || 0x38) < func_13_p_17))     {
               0U;
          }
       }
        uint32_t func_18_p_19;
int16_t func_18_p_20;
int32_t func_18_p_21;
uint16_t func_18_p_22;

        int32_t func_40_p_41;
void  func_40(void) {
           int32_t l_165 = 0xB44CA3D1;
           func_40_p_41 = 0;
           
           func_40_p_41 = ((uint32_t)(func_40_p_41) - (uint32_t)(9));
           
           for (func_40_p_41;
       (func_40_p_41 >= (-27));
       func_40_p_41)     
            0xB44CA3D1;
       }
        uint32_t func_48_p_49;
int16_t func_48_p_50;
int32_t func_48_p_51;
int32_t func_48_p_52;
int32_t func_48_p_53;
void  func_48(    void) {
           int32_t __trans_tmp_5;
           int8_t l_65 = 0x65;
           int32_t l_73 = 9;
           int32_t l_76 = 0x8784865E;
           func_48_p_49 = (-26);
           
           for (func_48_p_49;
       (func_48_p_49 != 27);
       ++func_48_p_49)     {
              uint8_t l_66 = 3U;
              {
                       __trans_tmp_5 =      ((safe_div_func_int32_t_s_s_si2 == 0) || ((safe_div_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_div_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int32_t_s_s_si1)) :     (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
                     }
              
              if ((((3U != (__trans_tmp_5)) != 0xB0) <= 0x65))         {
                  func_48_p_52;
             }
          }
       }
        const int32_t func_56_p_57;
uint8_t func_56_p_58;
uint8_t func_56_p_59;
uint16_t func_56_p_60;
void  func_56(   void) {
            func_56_p_60;
       }
        int main (void) {
           int print_hash_value = 0;
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
