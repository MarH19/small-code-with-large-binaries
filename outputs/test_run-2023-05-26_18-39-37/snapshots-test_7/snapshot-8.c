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
        extern void __assert_fail (         void)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
                                                                             static void platform_main_begin(void) {
       }
        int8_t safe_div_func_int8_t_s_s_si1;
int8_t safe_div_func_int8_t_s_s_si2;
void  (safe_div_func_int8_t_s_s)( void ) {
              ((safe_div_func_int8_t_s_s_si2 == 0) || ((safe_div_func_int8_t_s_s_si1 == (-128)) && (safe_div_func_int8_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int8_t_s_s_si1)) :     (safe_div_func_int8_t_s_s_si1 / safe_div_func_int8_t_s_s_si2);
       }
              int16_t safe_sub_func_int16_t_s_s_si1;
int16_t safe_sub_func_int16_t_s_s_si2;
static int16_t (safe_sub_func_int16_t_s_s)( void ) {
         return     (safe_sub_func_int16_t_s_s_si1 - safe_sub_func_int16_t_s_s_si2);
         return     safe_sub_func_int16_t_s_s_si1 * safe_sub_func_int16_t_s_s_si2;
       }
          int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;
void  (safe_rshift_func_int16_t_s_s)( void ) {
              ((safe_rshift_func_int16_t_s_s_left < 0) || (((int)safe_rshift_func_int16_t_s_s_right) < 0) || (((int)safe_rshift_func_int16_t_s_s_right) >= 32))?     ((safe_rshift_func_int16_t_s_s_left)) :     (safe_rshift_func_int16_t_s_s_left >> ((int)safe_rshift_func_int16_t_s_s_right));
       }
        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;
static int32_t (safe_sub_func_int32_t_s_s)( void ) {
         return     (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);
       }
         int32_t safe_mod_func_int32_t_s_s_si1;
int32_t safe_mod_func_int32_t_s_s_si2;
void  (safe_mod_func_int32_t_s_s)( void ) {
              ((safe_mod_func_int32_t_s_s_si2 == 0) || ((safe_mod_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_mod_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_mod_func_int32_t_s_s_si1)) :     (safe_mod_func_int32_t_s_s_si1 % safe_mod_func_int32_t_s_s_si2);
       }
        int32_t safe_div_func_int32_t_s_s_si1;
int32_t safe_div_func_int32_t_s_s_si2;
void  (safe_div_func_int32_t_s_s)( void ) {
              ((safe_div_func_int32_t_s_s_si2 == 0) || ((safe_div_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_div_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int32_t_s_s_si1)) :     (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
       }
            uint8_t safe_unary_minus_func_uint8_t_u_ui;
void  (safe_unary_minus_func_uint8_t_u)(void ) {
          -safe_unary_minus_func_uint8_t_u_ui;
       }
        uint8_t safe_sub_func_uint8_t_u_u_ui1;
uint8_t safe_sub_func_uint8_t_u_u_ui2;
void  (safe_sub_func_uint8_t_u_u)( void ) {
          safe_sub_func_uint8_t_u_u_ui1 - safe_sub_func_uint8_t_u_u_ui2;
       }
        uint8_t safe_mul_func_uint8_t_u_u_ui1;
uint8_t safe_mul_func_uint8_t_u_u_ui2;
void  (safe_mul_func_uint8_t_u_u)( void ) {
          ((unsigned int)safe_mul_func_uint8_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint8_t_u_u_ui2);
              (safe_mul_func_uint8_t_u_u_ui2 == 0) ?     ((safe_mul_func_uint8_t_u_u_ui1)) :     (safe_mul_func_uint8_t_u_u_ui1 % safe_mul_func_uint8_t_u_u_ui2);
       }
           uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;
void  (safe_rshift_func_uint8_t_u_s)( void ) {
              ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
       }
        uint8_t safe_rshift_func_uint8_t_u_u_left;
unsigned int safe_rshift_func_uint8_t_u_u_right;
void  (safe_rshift_func_uint8_t_u_u)( void ) {
              (((unsigned int)safe_rshift_func_uint8_t_u_u_right) >= 32) ?     ((safe_rshift_func_uint8_t_u_u_left)) :     (safe_rshift_func_uint8_t_u_u_left >> ((unsigned int)safe_rshift_func_uint8_t_u_u_right));
       }
          uint16_t safe_sub_func_uint16_t_u_u_ui1;
uint16_t safe_sub_func_uint16_t_u_u_ui2;
void  (safe_sub_func_uint16_t_u_u)( void ) {
          safe_sub_func_uint16_t_u_u_ui1 - safe_sub_func_uint16_t_u_u_ui2;
       }
        uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;
void  (safe_mul_func_uint16_t_u_u)( void ) {
          ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
       }
           uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
static uint16_t (safe_lshift_func_uint16_t_u_u)( void ) {
         return     ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
         return     (((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
       }
          uint32_t safe_sub_func_uint32_t_u_u_ui1;
uint32_t safe_sub_func_uint32_t_u_u_ui2;
static uint32_t (safe_sub_func_uint32_t_u_u)( void ) {
         return safe_sub_func_uint32_t_u_u_ui1 - safe_sub_func_uint32_t_u_u_ui2;
       }
         uint32_t safe_mod_func_uint32_t_u_u_ui1;
uint32_t safe_mod_func_uint32_t_u_u_ui2;
void  (safe_mod_func_uint32_t_u_u)( void ) {
              (safe_mod_func_uint32_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint32_t_u_u_ui1)) :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
       }
        uint32_t safe_div_func_uint32_t_u_u_ui1;
uint32_t safe_div_func_uint32_t_u_u_ui2;
static uint32_t (safe_div_func_uint32_t_u_u)( void ) {
         return     (safe_div_func_uint32_t_u_u_ui2 == 0) ?     ((safe_div_func_uint32_t_u_u_ui1)) :     (safe_div_func_uint32_t_u_u_ui1 / safe_div_func_uint32_t_u_u_ui2);
       }
          volatile uint32_t csmith_sink_ = 0;
        static uint8_t g_5 = 1U;
        static uint8_t g_8 = 255U;
        static uint32_t g_13 = 1U;
        static int32_t g_15 = 0x23DCDF5E;
        static int32_t g_18 = 0xF42C60ED;
        static int8_t g_24[4][8] = {
      };
        static int32_t g_100 = 0;
        static uint32_t *g_130 = (void*)0;
        static uint32_t g_145 = 1U;
        static int32_t *g_209 = &g_15;
        static int32_t **g_208[] = {
      &g_209,&g_209,&g_209};
static int32_t **g_208_1 = &g_209;
static int32_t **g_208_0 = &g_209;
        static uint32_t * const g_248 = &g_145;
        static uint32_t * const *g_247 = &g_248;
        static uint32_t g_254 = 0x2D114BE7;
        static int32_t g_268 = 0xCA8E44E8;
        static uint8_t g_291 = 247U;
        static int8_t *g_319[6][2] = {
      };
static int8_t *g_319_1_0;
        static uint16_t g_341 = 65527U;
        static uint16_t *g_340 = &g_341;
        static int8_t **g_411 = &g_319_1_0;
        static int32_t ***g_455[] = {
      &g_208_0,&g_208_0,&g_208_1,&g_208_0,&g_208_0,&g_208_1,&g_208_0,&g_208_0};
static int32_t ***g_455_3 = &g_208_0;
        static uint8_t *g_616 = &g_291;
        static uint8_t **g_615 = &g_616;
        static uint8_t ***g_614 = &g_615;
        static int32_t g_633 = (-5);
        static const uint32_t *g_777 = (void*)0;
        static const uint32_t * const *g_776[3] = {
      &g_777,&g_777,&g_777};
static const uint32_t *const *g_776_0 = &g_777;
        static const uint32_t * const **g_775 = &g_776_0;
        static int32_t *g_946 = &g_268;
        static uint8_t ** const *g_948 = &g_615;
        static uint8_t ** const **g_947 = &g_948;
        static int16_t *g_994 = (void*)0;
        static int8_t ***g_1191 = &g_411;
        static int8_t ****g_1190 = &g_1191;
        static const int32_t *g_1206 = &g_633;
        static const int32_t **g_1205 = &g_1206;
        static const int32_t ***g_1204 = &g_1205;
        static uint16_t g_1246[2] = {
      0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307};
        static int16_t g_1452[9][3][4] = {
      };
static int16_t g_1452_0_0_0;
        static int32_t *** const *g_1524 = &g_455_3;
        static int32_t * func_108(    void);
        static int8_t func_1(void) {
           int32_t *l_1594 = &g_100;
           int32_t l_1669[8];
           int32_t l_1669_0;
           int i, j;
           for (i = 0;
       i < 8;
       i++)         l_1669_0 = 0xC2A517C2;
           if ((safe_sub_func_int16_t_s_s( )))     {
              int16_t l_11 = 1;
              uint32_t *l_12 = &g_13;
              int32_t *l_28 = &g_15;
              int32_t *l_29 = &g_18;
              ((void) sizeof ((l_12 == &g_100) ? 1 : 0), __extension__ ({
     if (l_12 == &g_100) ;
     else __assert_fail (   );
     }
     ));
          }
           ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({
      }
      ));
       }
        uint8_t *const func_56_p_57;
int32_t func_56_p_58;
const uint8_t * func_56_p_59;
uint32_t func_56_p_60;
int16_t func_56_p_61;
static const uint32_t func_56(    void) {
           for (func_56_p_61 = 26;
       (func_56_p_61 <= (-7));
       func_56_p_61 = safe_sub_func_int32_t_s_s( ))     
           return func_56_p_61;
       }
        uint8_t * func_62_p_63;
int32_t func_62_p_64;
static uint8_t * func_62( void) {
           for (func_62_p_64 = (-25);
       (func_62_p_64 <= (-13));
       --g_18)     {
              ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({
     if (g_1191 == &g_411 || g_1191 == 0) ;
     else __assert_fail (   );
     }
     ));
          }
       }
          int32_t ** func_108_p_109;
uint8_t *const func_108_p_110;
const int32_t func_108_p_111;
uint32_t func_108_p_112;
int32_t func_108_p_113;
static int32_t * func_108(    void) {
           int32_t *l_756 = &g_633;
           int i;
           for (i = 0;
       i < 4;
       func_108_p_112 += 1)     {
          }
           return l_756;
       }
        int main (void) {
           int i, j, k;
           for (i = 0;
       i < 9;
       i++)     {
              for (j = 0;
      j < 3;
      j++)         {
                 for (k = 0;
     k < 4;
     k++)             {
                    csmith_sink_ = g_1452_0_0_0;
                }
             }
          }
       }
