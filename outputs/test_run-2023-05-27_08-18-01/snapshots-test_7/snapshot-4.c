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
                                                                             
        static int8_t (safe_unary_minus_func_int8_t_s)(int8_t si ) ;
        static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) ;
        
        static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) ;
        static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) ;
        static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) ;
        static int16_t (safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 ) ;
        static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) ;
        static int16_t (safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right ) ;
        static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) ;
        static int32_t (safe_unary_minus_func_int32_t_s)(int32_t si ) ;
        int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
static int32_t (safe_add_func_int32_t_s_s)( void ) {
         return     ((safe_add_func_int32_t_s_s_si2 == 0) || ((safe_add_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_add_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 % safe_add_func_int32_t_s_s_si2);
       }
        int32_t safe_div_func_int32_t_s_s_si1;
int32_t safe_div_func_int32_t_s_s_si2;
static int32_t (safe_div_func_int32_t_s_s)( void ) {
         return     ((safe_div_func_int32_t_s_s_si2 == 0) || ((safe_div_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_div_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int32_t_s_s_si1)) :     (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
       }
            uint8_t safe_unary_minus_func_uint8_t_u_ui;
static uint8_t (safe_unary_minus_func_uint8_t_u)(void ) {
         return -safe_unary_minus_func_uint8_t_u_ui;
       }
        uint8_t safe_add_func_uint8_t_u_u_ui1;
uint8_t safe_add_func_uint8_t_u_u_ui2;
static uint8_t (safe_add_func_uint8_t_u_u)( void ) {
         return     (safe_add_func_uint8_t_u_u_ui2 == 0) ?     ((safe_add_func_uint8_t_u_u_ui1)) :     (safe_add_func_uint8_t_u_u_ui1 % safe_add_func_uint8_t_u_u_ui2);
       }
        uint8_t safe_lshift_func_uint8_t_u_s_left;
int safe_lshift_func_uint8_t_u_s_right;
static uint8_t (safe_lshift_func_uint8_t_u_s)( void ) {
         return     ((((int)safe_lshift_func_uint8_t_u_s_right) < 0) || (((int)safe_lshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left >> ((int)safe_lshift_func_uint8_t_u_s_right));
       }
        uint16_t safe_unary_minus_func_uint16_t_u_ui;
static uint16_t (safe_unary_minus_func_uint16_t_u)(void ) {
         return -safe_unary_minus_func_uint16_t_u_ui;
       }
        static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return ui1 + ui2;
       }
        uint16_t safe_sub_func_uint16_t_u_u_ui2;
static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1 ) {
         return ui1 - safe_sub_func_uint16_t_u_u_ui2;
       }
        static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
       }
        static uint16_t (safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
       }
        static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
       }
        static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
       }
        static uint32_t (safe_unary_minus_func_uint32_t_u)(uint32_t ui ) {
         return -ui;
       }
        static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return ui1 + ui2;
       }
        static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return ui1 - ui2;
       }
         static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
       }
        static uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
       }
                 static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        int i, j;
        for (i = 0;
       i < 256;
       i++) {
        for (j = 8;
      j > 0;
      j--) ;
       }
       }
        static void crc32_byte (uint8_t b) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
       }
        static void crc32_8bytes (uint32_t val) {
        crc32_byte ((val>>0) & 0xff);
       }
        static void transparent_crc (uint32_t val, char* vname, int flag) {
        crc32_8bytes(val);
       }
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
        static uint32_t func_1(void) {
           for (g_288 = (-9);
       (g_288 < 35);
       g_288 = safe_add_func_uint16_t_u_u(g_288, 4))     {
              return g_197;
          }
       }
        static int8_t func_10(uint32_t p_11, uint32_t p_12) {
           return p_12;
       }
        static uint16_t func_13(uint32_t p_14, int16_t p_15, const uint8_t p_16, int32_t p_17) {
           uint32_t l_734 = 4294967286U;
           int32_t l_735 = 0x4084D062;
           if ((((p_14 <= (g_153 = (p_17 <= ((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x90EE, (safe_add_func_uint16_t_u_u((p_15 != (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_131, (safe_div_func_uint32_t_u_u(4294967295U, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_734 = g_131), 0x0DF8CB76)), (((p_17 && 0x04) == p_14) < l_735))), l_735)))))) , 0x8D54)))), p_14)))), 4294967289U)) ^ l_735), g_93)) == 1) | p_16) > p_15)))) || 0x38) < p_17))     {
              return g_93;
          }
       }
        static uint32_t func_18(uint32_t p_19, int16_t p_20, int32_t p_21, uint16_t p_22) {
           uint32_t l_338 = 0x90B11C7D;
           int32_t l_352 = 0x5F1AE000;
           if ((safe_div_func_uint16_t_u_u((((g_153 , (((g_281 = ((safe_unary_minus_func_int8_t_s(l_338)) | p_20)) && (l_338 | ((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u( )) < 65530U) < p_21), l_338)) & 1U))) ^ p_22)) && g_8) ^ g_332), l_338)))     {
          }
           else     {
              for (p_20 = (-21);
      (p_20 == 5);
      p_20 = safe_add_func_int32_t_s_s( ))         {
             }
          }
           for (g_131 = (-11);
       (g_131 < 52);
       g_131++)     
           return g_153;
       }
        static uint32_t func_40(int32_t p_41) {
           int32_t l_165 = 0xB44CA3D1;
           for (p_41 = 0;
       (p_41 >= (-27));
       p_41 = ((uint32_t)(p_41) - (uint32_t)(9)))     
           return l_165;
       }
        static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53) {
           int8_t l_65 = 0x65;
           int32_t l_73 = 9;
           int32_t l_76 = 0x8784865E;
           for (p_49 = (-26);
       (p_49 != 27);
       ++p_49)     {
              uint8_t l_66 = 3U;
              if ((((l_66 != (safe_div_func_int32_t_s_s( ))) != 0xB0) <= l_65))         {
                 return p_52;
             }
          }
       }
        static int8_t func_56(const int32_t p_57, uint8_t p_58, uint8_t p_59, uint16_t p_60) {
           return p_60;
       }
        int main (void) {
           int print_hash_value = 0;
           transparent_crc(g_771, "g_771", print_hash_value);
       }
