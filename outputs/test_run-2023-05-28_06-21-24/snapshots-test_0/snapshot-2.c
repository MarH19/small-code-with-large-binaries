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
        typedef struct 
        __mbstate_t;
        typedef struct _G_fpos_t 
        __fpos_t;
        typedef struct _G_fpos64_t 
        __fpos64_t;
         static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
         return     0;
       }
           static uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return     (ui2 == 0) ?     0 :     0;
        int i, j;
        for (i = 0;
       i < 256;
       i++) ;
       }
        struct S0 {
          int32_t f5;
       };
        struct S2 {
          signed f0 : 11;
          signed f1 : 20;
          unsigned f2 : 19;
          signed f3 : 18;
       };
        static int32_t g_8 = 0x31EB2391L;
        static int32_t *g_7 = &g_8;
        static struct S0 g_42 ;
        static int32_t **g_117 = &g_7;
        static const int32_t *g_390[3][3] ;
        static const int32_t **g_389 = &g_390[0][0];
        static struct S2 g_452 ;
        static struct S0 *g_730 = 00;
        static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12);
        static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21);
        static int32_t * func_24(uint16_t p_25);
        static uint32_t func_1(void) {
           int32_t *l_16[4] ;
           int32_t **l_15 = &l_16[1];
           int32_t **l_23 = 00;
           int32_t ***l_22 = &l_23;
           int32_t *l_27 = 00;
           int32_t *l_772 = &g_42.f5;
           (*g_389) = (((*g_7) = (~(safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0, (g_8 , func_9(((safe_add_func_int8_t_s_s((4UL != (0 != ((*g_389) = func_17(0, func_24(((l_27 = &g_8) != &g_8)), g_8, g_8)))), 0xEEL)) | 0xC097L), l_772, 0)))), g_452.f1)))) , (void*)0);
           return (*l_27);
       }
        static uint32_t func_9(int8_t p_10, int32_t * p_11, const int32_t * p_12) {
           return g_42.f5;
       }
        static int32_t * func_17(int32_t ** p_18, int32_t * p_19, int16_t p_20, const int8_t p_21) {
           return 0;
       }
        static int32_t * func_24(uint16_t p_25) {
           int32_t *l_28 = (void*)0;
           return l_28;
       }
        
        int main (void) {
           func_1();
       }
