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
        
                                                                             
        int8_t safe_div_func_int8_t_s_s_si1;
int8_t safe_div_func_int8_t_s_s_si2;

              int16_t safe_sub_func_int16_t_s_s_si1;
int16_t safe_sub_func_int16_t_s_s_si2;

          int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;

        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;

         int32_t safe_mod_func_int32_t_s_s_si1;
int32_t safe_mod_func_int32_t_s_s_si2;

        int32_t safe_div_func_int32_t_s_s_si1;
int32_t safe_div_func_int32_t_s_s_si2;

            uint8_t safe_unary_minus_func_uint8_t_u_ui;

        uint8_t safe_sub_func_uint8_t_u_u_ui1;
uint8_t safe_sub_func_uint8_t_u_u_ui2;

        uint8_t safe_mul_func_uint8_t_u_u_ui1;
uint8_t safe_mul_func_uint8_t_u_u_ui2;

           uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;

        uint8_t safe_rshift_func_uint8_t_u_u_left;
unsigned int safe_rshift_func_uint8_t_u_u_right;

          uint16_t safe_sub_func_uint16_t_u_u_ui1;
uint16_t safe_sub_func_uint16_t_u_u_ui2;

           uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
void  (safe_lshift_func_uint16_t_u_u)( void ) {
              ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
              (((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
       }
          uint32_t safe_sub_func_uint32_t_u_u_ui1;
uint32_t safe_sub_func_uint32_t_u_u_ui2;

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
          volatile uint32_t csmith_sink_ = 0;
        static uint8_t g_5 = 1U;
        static uint8_t g_8 = 255U;
        static uint32_t g_13 = 1U;
        static int32_t g_15 = 0x23DCDF5E;
        static int32_t g_18 = 0xF42C60ED;
        static int8_t g_24[32] = {
      };
        static int32_t g_100 = 0;
        static uint32_t *g_130 = (void*)0;
        static uint32_t g_145 = 1U;
        static int32_t *g_209 = &g_15;
        static int32_t g_208[] = {0x23DCDF5E,0x23DCDF5E,0x23DCDF5E};
static int32_t g_208_1 = 0x23DCDF5E;
static int32_t g_208_0 = 0x23DCDF5E;
        static uint32_t  const g_248 = 1U;
        static uint32_t  const g_247 = 1U;
        static uint32_t g_254 = 0x2D114BE7;
        static int32_t g_268 = 0xCA8E44E8;
        static uint8_t g_291 = 247U;
        static int8_t g_319[12] = {};
static int8_t *g_319_1_0;
        static uint16_t g_341 = 65527U;
        static uint16_t g_340 = 65527U;
        static int8_t **g_411 = &g_319_1_0;
        static int32_t g_455[] = {0x23DCDF5E,0x23DCDF5E,0x23DCDF5E,0x23DCDF5E,0x23DCDF5E,0x23DCDF5E,0x23DCDF5E,0x23DCDF5E};
static int32_t g_455_3 = 0x23DCDF5E;
        static uint8_t g_616 = 247U;
        static uint8_t g_615 = 247U;
        static uint8_t g_614 = 247U;
        static int32_t g_633 = (-5);
        static int32_t g_638 = 0xD647801E;
        static uint16_t g_743 = 65527U;
        static uint16_t g_742 = 65527U;
        static const uint32_t *g_777 = (void*)0;
        static const uint32_t * const g_776[3] = {(void*)0,(void*)0,(void*)0};
static const uint32_t *const g_776_0 = (void*)0;
        static const uint32_t * const g_775 = (void*)0;
        static int32_t g_946 = 0xCA8E44E8;
        static uint8_t  const g_948 = 247U;
        static uint8_t  const g_947 = 247U;
        static int16_t *g_994 = (void*)0;
        static int8_t **g_1191 = &g_319_1_0;
        static int8_t g_1190 = 0;
        static const int32_t g_1206 = (-5);
        static const int32_t g_1205 = (-5);
        static const int32_t g_1204 = (-5);
        static uint16_t g_1246[2] = {
      0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307};
        static int16_t g_1452[9][3][4] = {
      };
static int16_t g_1452_0_0_0;
        static int32_t  const g_1524 = 0x23DCDF5E;
        void  func_108(    void);
        void  func_1(void) {
           int16_t __trans_tmp_1;
           int32_t l_1594 = 0;
           int32_t l_1669[8];
           int32_t l_1669_0;
           int i, j;
           i = 0;
           
           for (0;
       0 < 8;
       i++)         l_1669_0 = 0xC2A517C2;
           {
                    __trans_tmp_1 =      (safe_sub_func_int16_t_s_s_si1 - safe_sub_func_int16_t_s_s_si2);
                    __trans_tmp_1 =      safe_sub_func_int16_t_s_s_si1 * safe_sub_func_int16_t_s_s_si2;
                  }
           
           (__trans_tmp_1);
           
            {
              int16_t l_11 = 1;
              uint32_t l_12 = 1U;
              int32_t l_28 = 0x23DCDF5E;
              int32_t l_29 = 0xF42C60ED;
              ((void) sizeof ((&l_12 == &g_100) ? 1 : 0), __extension__ ({
     &l_12 == &g_100;
     
      ;
      ;
     }
     ));
          }
           ((void) sizeof ((&g_1191 == &g_411 || &g_1191 == 0) ? 1 : 0), __extension__ ({
      }
      ));
       }
        uint8_t const func_56_p_57;
int32_t func_56_p_58;


int16_t func_56_p_61;
void  func_56(    void) {
           int32_t __trans_tmp_2;
           {
                    __trans_tmp_2 =      (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);
                  }
           
           func_56_p_61 = 26;
           
           func_56_p_61 = __trans_tmp_2;
           
           for (__trans_tmp_2;
       (__trans_tmp_2 <= (-7));
       __trans_tmp_2)     
            __trans_tmp_2;
       }
        
int32_t func_62_p_64;
void  func_62( void) {
           func_62_p_64 = (-25);
           
           for (func_62_p_64;
       (func_62_p_64 <= (-13));
       --g_18)     {
              ((void) sizeof ((&g_1191 == &g_411 || &g_1191 == 0) ? 1 : 0), __extension__ ({
     &g_1191 == &g_411 || &g_1191 == 0;
     
      ;
      ;
     }
     ));
          }
       }
          


uint32_t func_108_p_112;

void  func_108(    void) {
           int32_t l_756 = g_633;
           int i;
           i = 0;
           
           func_108_p_112 += 1;
           
           for (0;
       0 < 4;
       1)     {
          }
            &l_756;
       }
        int main (void) {
           int i, j, k;
           i = 0;
           
           for (i;
       i < 9;
       i++)     {
              j = 0;
              
              for (j;
      j < 3;
      j++)         {
                 k = 0;
                 
                 for (k;
     k < 4;
     k++)             {
                    csmith_sink_ = g_1452_0_0_0;
                }
             }
          }
       }
