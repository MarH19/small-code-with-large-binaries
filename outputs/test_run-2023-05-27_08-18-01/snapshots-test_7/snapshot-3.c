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
        static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
         return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
       }
        static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
         return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
       }
            static uint8_t (safe_unary_minus_func_uint8_t_u)(uint8_t ui ) {
         return -ui;
       }
        static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
         return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
       }
        static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
       }
        static uint16_t (safe_unary_minus_func_uint16_t_u)(uint16_t ui ) {
         return -ui;
       }
        static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return ui1 + ui2;
       }
        static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return ui1 - ui2;
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
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
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
           if ((((p_14 <= (g_153 = (p_17 <= ((((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x90EE, (safe_add_func_uint16_t_u_u((p_15 != (safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_131, (safe_div_func_uint32_t_u_u(4294967295U, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_734 = g_131), 0x0DF8CB76)), (((p_17 && 0x04) == p_14) < l_735))), l_735)))))) , 0x8D54), g_281))), p_14)))), 4294967289U)) ^ l_735), g_93)) == 1) | p_16) > p_15)))) || 0x38) < p_17))     {
              return g_93;
          }
       }
        static uint32_t func_18(uint32_t p_19, int16_t p_20, int32_t p_21, uint16_t p_22) {
           uint32_t l_338 = 0x90B11C7D;
           int32_t l_352 = 0x5F1AE000;
           if ((safe_div_func_uint16_t_u_u((((g_153 , (((g_281 = ((safe_unary_minus_func_int8_t_s(l_338)) | p_20)) && (l_338 | ((safe_div_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_22, (((l_352 = (((p_20 = l_338) ^ ((safe_rshift_func_int16_t_s_u(l_338, g_8)) || (safe_sub_func_int16_t_s_s(((g_131 || 251U) > p_22), g_110)))) >= 0U)) > 0x73544DA8) & g_197))), p_19)) < 65530U) < p_21), l_338)) & 1U))) ^ p_22)) && g_8) ^ g_332), l_338)))     {
          }
           else     {
              for (p_20 = (-21);
      (p_20 == 5);
      p_20 = safe_add_func_int32_t_s_s(p_20, 1))         {
             }
          }
           for (g_131 = (-11);
       (g_131 < 52);
       g_131++)     
           return g_153;
       }
        static uint32_t func_40(int32_t p_41) ;
        static int16_t func_48(uint32_t p_49, int16_t p_50, int32_t p_51, int32_t p_52, int32_t p_53) {
           int8_t l_65 = 0x65;
           int32_t l_73 = 9;
           int32_t l_76 = 0x8784865E;
           for (p_49 = (-26);
       (p_49 != 27);
       ++p_49)     {
              uint8_t l_66 = 3U;
              if ((((l_66 != (safe_div_func_int32_t_s_s((1U ^ (l_76 = (((l_65 , g_8) <= ((l_66 != (+(((p_49 != ((+(safe_lshift_func_int16_t_s_u((p_52 , (((p_53 = (((l_73 = p_49) || (safe_div_func_int32_t_s_s(0x4E0C42EF, l_66))) >= l_66)) == g_8) , p_51)), 5))) , p_51)) , l_66) <= g_8))) , g_8)) , 0xC37461BC))), p_51))) != 0xB0) <= l_65))         {
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
