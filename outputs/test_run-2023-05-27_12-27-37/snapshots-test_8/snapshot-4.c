 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
         static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
         return     ((si2 == 0) || 0) ?     0 :     0;
       }
        
         
         
        
        
          static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
         return     0 ?     0 :     0;
       }
         static int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
         return     0 ?     0 :     0;
       }
        
         
          
        static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return     0 ?     ((ui1)) :     (ui1 / ui2);
       }
         
        
         static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return ui1 + ui2;
       }
        static int32_t g_12 = 0x53E58BFCL;
        static uint32_t g_71 = 4294967295UL;
        static uint32_t g_74 = 0x7FAE0CD5L;
        static int32_t g_83 = 0xCD3C6E85L;
        static uint64_t g_97 = 18446744073709551607UL;
        static uint16_t g_110[3] ;
        static int32_t g_250 = 4L;
        static int8_t g_251 = 0;
        static int8_t g_494[2] ;
        static uint16_t *g_520 = (void*)0;
        static uint8_t g_580[1][2] ;
        static uint32_t g_686 = 7UL;
        static int64_t func_4(int64_t p_5, uint32_t p_6);
        static uint32_t func_8(uint32_t p_9);
        static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17);
        inline static int16_t func_19(int8_t p_20);
        static uint16_t func_27(int32_t p_28, int64_t p_29);
        static int32_t func_30(int32_t p_31, int64_t p_32);
        static uint64_t func_1(void) {
           int32_t l_7[1][4][2] = {
     };
           int32_t l_18[4][1] ;
           int32_t l_268 = 0xADBD7DA9L;
           int8_t *l_493 = &g_494[1];
           l_18[3][0] = (safe_add_func_int8_t_s_s((func_4(l_7[0][3][0], func_8(((safe_mod_func_int32_t_s_s(0L, g_12)) | ((*l_493) |= (((l_18[3][0] = func_13(l_7[0][3][0], (l_18[3][0] = 0xD4L), (func_19(((g_12 | l_7[0][3][0]) && (safe_mod_func_uint32_t_u_u((l_268 &= (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(func_27(func_30(l_7[0][3][0], g_12), g_250), (-1L))), g_250))), 0x54E90A01L)))) & l_7[0][0][1]), g_97)) ^ l_7[0][3][0]) == l_7[0][1][0]))))) < g_251), l_7[0][1][1]));
           ((void) sizeof ((g_520 == 0 || (g_520 >= &g_110[0] && g_520 <= &g_110[2])) ? 1 : 0), __extension__ ({
      }
      ));
           return g_686;
       }
        static int64_t func_4(int64_t p_5, uint32_t p_6) {
           return p_6;
       }
        static uint32_t func_8(uint32_t p_9) {
           int32_t *l_528 = &g_83;
           return (*l_528);
       }
        static uint32_t func_13(uint64_t p_14, uint8_t p_15, uint64_t p_16, int8_t p_17) {
           return p_17;
       }
        inline static int16_t func_19(int8_t p_20) {
           return g_74;
       }
        static uint16_t func_27(int32_t p_28, int64_t p_29) {
           int32_t l_267 = (-1L);
           return l_267;
       }
        static int32_t func_30(int32_t p_31, int64_t p_32) {
           int i, j, k;
           for (i = 0;
       (g_71 <= 3);
       g_71 += 1)     ;
           return g_110[0];
       }
        int main (void) {
           int i, j;
           func_1();
           for (i = 0;
       i < 1;
       i++)     ;
       }
