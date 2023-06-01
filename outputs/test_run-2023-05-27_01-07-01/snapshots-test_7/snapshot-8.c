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
        typedef struct {
         struct   {
          unsigned int __wch;
          char __wchb[4];
        }
       __value;
       }
        __mbstate_t;
                                                                             static void platform_main_begin(void) {
       }
        uint32_t platform_main_end_crc;
int platform_main_end_flag;

         int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;
void  (safe_add_func_int8_t_s_s)( void ) {
              (safe_add_func_int8_t_s_s_si1 + safe_add_func_int8_t_s_s_si2);
       }
         int8_t safe_mod_func_int8_t_s_s_si1;
int8_t safe_mod_func_int8_t_s_s_si2;
void  (safe_mod_func_int8_t_s_s)( void ) {
              ((safe_mod_func_int8_t_s_s_si2 == 0) || ((safe_mod_func_int8_t_s_s_si1 == 0) && (safe_mod_func_int8_t_s_s_si2 == 0))) ?     ((safe_mod_func_int8_t_s_s_si1)) :     (safe_mod_func_int8_t_s_s_si1 % safe_mod_func_int8_t_s_s_si2);
       }
        int16_t safe_lshift_func_int16_t_s_u_left;
unsigned int safe_lshift_func_int16_t_s_u_right;
void  (safe_lshift_func_int16_t_s_u)( void ) {
              ((safe_lshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) || (safe_lshift_func_int16_t_s_u_left > ((32767) >> ((unsigned int)safe_lshift_func_int16_t_s_u_right)))) ?     ((safe_lshift_func_int16_t_s_u_left)) :     (safe_lshift_func_int16_t_s_u_left << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
       }
          int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;

        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;
void  (safe_sub_func_int32_t_s_s)( void ) {
              (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);
       }
        int32_t safe_div_func_int32_t_s_s_si1;
int32_t safe_div_func_int32_t_s_s_si2;
void  (safe_div_func_int32_t_s_s)( void ) {
              ((safe_div_func_int32_t_s_s_si2 == 0) || ((safe_div_func_int32_t_s_s_si1 == (-2147483647-1)) && (safe_div_func_int32_t_s_s_si2 == (-1)))) ?     ((safe_div_func_int32_t_s_s_si1)) :     (safe_div_func_int32_t_s_s_si1 / safe_div_func_int32_t_s_s_si2);
       }
          uint8_t safe_div_func_uint8_t_u_u_ui1;
uint8_t safe_div_func_uint8_t_u_u_ui2;

        uint8_t safe_lshift_func_uint8_t_u_s_left;
int safe_lshift_func_uint8_t_u_s_right;
void  (safe_lshift_func_uint8_t_u_s)( void ) {
              ((((int)safe_lshift_func_uint8_t_u_s_right) < 0) || (((int)safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > ((255) >> ((int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((int)safe_lshift_func_uint8_t_u_s_right));
       }
        uint8_t safe_lshift_func_uint8_t_u_u_left;
unsigned int safe_lshift_func_uint8_t_u_u_right;
void  (safe_lshift_func_uint8_t_u_u)( void ) {
              ((((unsigned int)safe_lshift_func_uint8_t_u_u_right) >= 32) || (safe_lshift_func_uint8_t_u_u_left > ((255) >> ((unsigned int)safe_lshift_func_uint8_t_u_u_right)))) ?     ((safe_lshift_func_uint8_t_u_u_left)) :     (safe_lshift_func_uint8_t_u_u_left << ((unsigned int)safe_lshift_func_uint8_t_u_u_right));
       }
             uint16_t safe_mod_func_uint16_t_u_u_ui1;
uint16_t safe_mod_func_uint16_t_u_u_ui2;
void  (safe_mod_func_uint16_t_u_u)( void ) {
              (safe_mod_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint16_t_u_u_ui1)) :     (safe_mod_func_uint16_t_u_u_ui1 % safe_mod_func_uint16_t_u_u_ui2);
       }
        uint16_t safe_lshift_func_uint16_t_u_s_left;
int safe_lshift_func_uint16_t_u_s_right;
void  (safe_lshift_func_uint16_t_u_s)( void ) {
              ((((int)safe_lshift_func_uint16_t_u_s_right) < 0) || (((int)safe_lshift_func_uint16_t_u_s_right) >= 32)) ?     ((safe_lshift_func_uint16_t_u_s_left)) :     (safe_lshift_func_uint16_t_u_s_left >> ((int)safe_lshift_func_uint16_t_u_s_right));
       }
        uint16_t safe_rshift_func_uint16_t_u_u_left;
unsigned int safe_rshift_func_uint16_t_u_u_right;
void  (safe_rshift_func_uint16_t_u_u)( void ) {
              (((unsigned int)safe_rshift_func_uint16_t_u_u_right) >= 32) ?     ((safe_rshift_func_uint16_t_u_u_left)) :     (safe_rshift_func_uint16_t_u_u_left >> ((unsigned int)safe_rshift_func_uint16_t_u_u_right));
       }
          uint32_t safe_sub_func_uint32_t_u_u_ui1;
uint32_t safe_sub_func_uint32_t_u_u_ui2;

         uint32_t safe_mod_func_uint32_t_u_u_ui1;
uint32_t safe_mod_func_uint32_t_u_u_ui2;
void  (safe_mod_func_uint32_t_u_u)( void ) {
              (safe_mod_func_uint32_t_u_u_ui2 == 0) ?     ((safe_mod_func_uint32_t_u_u_ui1)) :     (safe_mod_func_uint32_t_u_u_ui1 % safe_mod_func_uint32_t_u_u_ui2);
       }
        static int32_t g_16 = 1;
        static int32_t g_34 = 0xA7609FA8;
        static uint32_t g_38 = 0x7B88CDF8;
        static int16_t g_51 = 0xDE5A;
        static int32_t g_66 = 1;
        static int32_t g_65[2][8][9] = {};
        static int8_t g_81 = 9;
        static int16_t g_132[8][5][6] = {};
static int16_t *g_132_1_0_3;
        static int16_t g_131[3] = {0,0,0};
static int16_t **g_131_0 = &g_132_1_0_3;
        static uint32_t *g_141 = &g_38;
        static int32_t g_157[2][6] = {
      };
static int32_t g_157_1_5;
        static uint32_t g_176 = 9U;
        static uint32_t g_183 = 0x7B88CDF8;
        static uint32_t *g_182[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t *g_182_3 = (void*)0;
        static int32_t g_245 = 0xA7609FA8;
        static uint32_t g_276 = 0x7B88CDF8;
        static uint32_t **g_320 = (void*)0;
        static uint16_t g_329 = 0x3FAA;
        static uint16_t g_328[6][9][4] = {};
static uint16_t g_328_3_0_0;
        static uint16_t g_327 = 0;
        static uint32_t g_351[6] = {
      0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946,0x7B752946};
        static uint32_t g_399 = 0xD37FD78E;
        static uint8_t g_636 = 255U;
        static uint8_t g_635 = 255U;
        uint32_t func_2_p_3;
uint32_t func_2_p_4;
int32_t func_2_p_5;
void  func_2(  void) {
           int32_t l_960 = g_34;
            &l_960;
       }
        int16_t func_8_p_9;
uint32_t func_8_p_10;
uint32_t func_8_p_11;
int32_t func_8_p_12;
void  func_8(   void) {
            (g_635);
       }
        uint16_t func_14_p_15;
void  func_14(void) {
           uint32_t __trans_tmp_2;
           uint8_t __trans_tmp_1;
           int16_t l_172 = g_51;
           int16_t l_173 = g_51;
           uint32_t l_175[1][6] = {
     };
           int16_t l_177 = (-1);
           int32_t l_179 = 0xFA26938D;
           uint32_t l_185 = g_183;
           int32_t l_238 = 0x8E098A7A;
           int32_t l_243 = l_179;
           uint32_t **l_403 = g_320;
           {
                    __trans_tmp_1 =      (safe_div_func_uint8_t_u_u_ui2 == 0) ?     ((safe_div_func_uint8_t_u_u_ui1)) :     (safe_div_func_uint8_t_u_u_ui1 / safe_div_func_uint8_t_u_u_ui2);
                  }
           
           if ((((g_38 >= (__trans_tmp_1)) || l_179) & g_38))     {
              int32_t l_242 = l_179;
              uint16_t l_401 = 0xEF64;
              uint32_t l_426[7][1];
              uint16_t *l_600 = &g_327;
              int16_t l_659 = 1;
              int i, j;
              {
                       __trans_tmp_2 =  safe_sub_func_uint32_t_u_u_ui1 - safe_sub_func_uint32_t_u_u_ui2;
                     }
              
              if ((((void*)0 == (l_600)) ^ ((8 ^ ((g_276) = 3U)) & ((((&l_403) != ((safe_lshift_func_uint16_t_u_s( )) , (&g_320))) || ((((func_14_p_15 | (+(__trans_tmp_2))) != (g_245)) && func_14_p_15) > 65535U)) , (l_242)))))         {
                 int32_t *l_660 = &l_238;
                 for (g_81 = 0;
     (g_81 <= 8);
     g_81 += 1)             {
                    int8_t l_662 = 0;
                     l_662;
                }
                  func_14_p_15;
             }
              else         {
                 int32_t *l_663 = &l_242;
                 (l_663) = (void*)0;
             }
          }
       }
        int32_t * func_21_p_22;
uint32_t func_21_p_23;
int32_t  func_21_p_24;
uint32_t func_21_p_25;
uint32_t func_21_p_26;
void  func_21(    void) {
           int32_t __trans_tmp_3;
           int16_t l_136 = (-1);
           int16_t **l_137 = g_131_0;
           uint32_t *l_139 = &g_38;
           uint32_t *l_138 = l_139;
           int32_t *l_140 = &g_16;
           uint32_t *l_143[2];
           uint32_t *l_143_0;
           uint32_t **l_142 = &l_143_0;
           int16_t l_144 = 0x8226;
       lbl_152:     l_144 = (l_136 < (((((&func_21_p_24 == func_21_p_22) , ((((func_21_p_26 , &g_131_0) == &l_137) >= (((l_138) = &g_38) == ((*l_142) = (g_141 = &func_21_p_23)))) > (*l_140))) | (-8)) > (*l_140)) <= func_21_p_25));
           {
                    __trans_tmp_3 =      (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
                  }
           
           for (func_21_p_23 = 0;
       (func_21_p_23 == 36);
       func_21_p_23 = __trans_tmp_3)     {
          }
            (*l_140);
       }
        int32_t * func_27_p_28;
int8_t func_27_p_29;
void  func_27( void) {
           for (func_27_p_29 = 0;
       func_27_p_29 < 2;
       func_27_p_29 += 1)     {
              for (g_34 = 0;
      g_34 < 8;
      g_34 += 1)         {
             }
          }
            func_27_p_28;
       }
        int32_t * func_39_p_40;
uint32_t func_39_p_41;
uint32_t func_39_p_42;
int32_t * func_39_p_43;
void  func_39(   void) {
            (*func_39_p_43);
       }
        int main (void) {
           {
                   printf ("checksum = %X\n", platform_main_end_crc);
                  }
           
           ;
       }
