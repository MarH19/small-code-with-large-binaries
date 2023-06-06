 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef unsigned long int __uint64_t;
        typedef long int __off_t;
        typedef long int __off64_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef struct {
       }
        __mbstate_t;
        typedef struct _G_fpos_t {
         __off_t __pos;
         __mbstate_t __state;
       }
        __fpos_t;
         int8_t safe_add_func_int8_t_s_s_si2;

        int8_t safe_div_func_int8_t_s_s_si1;
int8_t safe_div_func_int8_t_s_s_si2;

        int16_t safe_sub_func_int16_t_s_s_si1;
int16_t safe_sub_func_int16_t_s_s_si2;

        int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;

        int16_t safe_rshift_func_int16_t_s_u_left;
unsigned int safe_rshift_func_int16_t_s_u_right;

         int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;

         int32_t safe_mod_func_int32_t_s_s_si1;
int32_t safe_mod_func_int32_t_s_s_si2;

        uint8_t safe_mul_func_uint8_t_u_u_ui1;
uint8_t safe_mul_func_uint8_t_u_u_ui2;

        uint8_t safe_mod_func_uint8_t_u_u_ui1;
uint8_t safe_mod_func_uint8_t_u_u_ui2;

        uint8_t safe_lshift_func_uint8_t_u_s_left;
int safe_lshift_func_uint8_t_u_s_right;
void  (safe_lshift_func_uint8_t_u_s)( void ) {
              ((((int)safe_lshift_func_uint8_t_u_s_right) < 0) || (((int)safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > ((255) >> ((int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((int)safe_lshift_func_uint8_t_u_s_right));
       }
        uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;

        uint16_t safe_add_func_uint16_t_u_u_ui1;
uint16_t safe_add_func_uint16_t_u_u_ui2;
void  (safe_add_func_uint16_t_u_u)( void ) {
          safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
       }
         uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;
void  (safe_mul_func_uint16_t_u_u)( void ) {
          ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
       }
             uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
void  (safe_add_func_uint32_t_u_u)( void ) {
          safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
       }
           uint32_t safe_div_func_uint32_t_u_u_ui1;
static uint32_t (safe_div_func_uint32_t_u_u)( uint32_t ui2 ) {
         return     (ui2 == 0) ?     ((safe_div_func_uint32_t_u_u_ui1)) :     (safe_div_func_uint32_t_u_u_ui1 / ui2);
       }
                 static uint32_t crc32_tab[1];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        uint32_t crc;
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        i = 0;
        
        for (0;
       0 < 256;
       i++) {
        j = 8;
        
        for (j;
      j > 0;
      j--) {
        crc & 1;
        
         {
        crc = (crc >> 1) ^ 0xEDB88320UL;
       }
      {
        crc >>= 1;
       }
       }
        crc32_tab_0 = 1;
       }
       }
        uint8_t crc32_byte_b;
static void crc32_byte (void) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   1;
       }
        struct S0 {
          const int32_t f0;
          int16_t f1;
          int32_t f2;
          unsigned f3 : 19;
          const int8_t f4;
          int32_t f5;
          int8_t f6;
          unsigned f7 : 24;
          int8_t f8;
       };
        struct S1 {
          int8_t f0;
          uint32_t f1;
       };
        struct S2 {
          signed f0 : 11;
          signed f1 : 20;
          unsigned f2 : 19;
          signed f3 : 18;
       };
        static int32_t g_8 = 0x31EB2391L;
        static int32_t g_7 = 0x31EB2391L;
        static struct S0 g_42 = {
      0x5C1F4ACAL,1L,-1L,404,0L,1L,0L,663,0xEFL};
static int32_t g_42_5 = 1L;
static int16_t g_42_1 = 1L;
        static int32_t g_93 = 0L;
        static uint32_t g_110 = 2UL;
        static uint16_t g_112[16] = {
      
     
    0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L,0x6991L,0xBB5AL,0x6991L
     ,
    0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL,65533UL,0xBB5AL,0xBB5AL
     
      };
static uint16_t g_112_1_1_4;
        static int32_t g_117 = 0x31EB2391L;
        static int32_t g_116 = 0x31EB2391L;
        static int16_t g_136 = 1L;
        static int16_t g_135 = 1L;
        static struct S2 g_144 = {
      37,263,432,-229};
        static struct S1 g_147 = {
      0x33L,0UL};
        static int32_t g_151 = 0L;
        static int8_t g_169 = 2L;
        static uint16_t g_270[1] = {0,0,0,0,0,0,0};
static uint16_t g_270_0 = 0;
        static int32_t *g_287 = (void*)0;
        static struct S1 g_299 = {
      0x33L,0UL};
        static struct S1 g_298 = {
      0x33L,0UL};
        static struct S0 g_318 = {
      0x5C1F4ACAL,1L,-1L,404,0L,1L,0L,663,0xEFL};
        static const int32_t g_390[9] = {0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L};
static const int32_t *g_390_0_0 = &g_8;
        static const int32_t **g_389 = &g_390_0_0;
        static struct S2 g_452 = {
      38,949,229,504};
static int g_452_1 = 949;
        static int32_t g_459 = 0xB1D9F15AL;
        static uint16_t g_509 = 0;
        static struct S2 g_516 = {
      37,263,432,-229};
        static struct S0 g_730 ;
        static uint32_t func_9(int8_t p_10);
        
        static int32_t * func_24(uint16_t p_25);
        void  func_31( void);
        void  func_1(void) {
           int8_t __trans_tmp_7;
           int32_t __trans_tmp_6;
           int *__trans_tmp_5;
           int __trans_tmp_4;
           signed char __trans_tmp_3;
           unsigned int __trans_tmp_2;
           unsigned int __trans_tmp_1;
           int32_t l_16[4] = {0x31EB2391L,0x31EB2391L,0x31EB2391L,0x31EB2391L};
           int32_t l_16_1 = 0x31EB2391L;
           int32_t *l_15 = &l_16_1;
           int32_t l_23 = 0;
           int32_t l_22 = 0;
           int32_t *l_27 = (void*)0;
           int32_t l_772 = 1L;
           __trans_tmp_5 = func_24(((l_27 = &g_8) != &g_8));
           {int32_t *p_19 = __trans_tmp_5;
           
                      __trans_tmp_6 =  (0x31EB2391L);
                  }
           
           __trans_tmp_4 = 0x31EB2391L;
           __trans_tmp_3 = 0;
           __trans_tmp_2 = 0;
           __trans_tmp_1 = 0;
           {int8_t si1 = (__trans_tmp_1);
           
                    __trans_tmp_7 =      ((__trans_tmp_1) + safe_add_func_int8_t_s_s_si2);
                  }
           
           (*g_389) = (((g_7) = (~(__trans_tmp_7))) , (void*)0);
            (*l_27);
       }
        int32_t  func_9_p_11;
const int32_t  func_9_p_12;
static uint32_t func_9(int8_t p_10) {
           return 1L;
       }
        int32_t  func_17_p_18;
int16_t func_17_p_20;
const int8_t func_17_p_21;

        static int32_t * func_24(uint16_t p_25) {
           int32_t l_28 = 0;
           return &l_28;
       }
        uint8_t func_31_p_32;
int8_t func_31_p_33;
void  func_31( void) {
           uint8_t l_36[240] = {
     
    
   0x23L,0x7DL,0UL
    ,
   247UL,246UL,0x9BL
    ,
   255UL,9UL,0xD8L
    ,
   0xC8L,9UL,255UL
    ,
   250UL,246UL,0x82L
    ,
   255UL,255UL,0x7DL
    ,
   247UL,255UL,0x82L
    ,
   0x23L,255UL,255UL
    ,{
   0x42L,0UL,0xD8L}
    ,{
   250UL,0UL,255UL}
    ,{
   0xC8L,0UL,255UL}
    ,{
   255UL,255UL,0x7DL}
    ,{
   247UL,255UL,0x82L}
    ,{
   255UL,9UL,9UL}
    ,{
   0x35L,0xDBL,250UL}
    ,{
   0x9BL,0x63L,250UL}
    ,{
   9UL,250UL,9UL}
    
     ,
    
   0UL,1UL,0x9CL
    ,
   0UL,0x32L,0xB9L
    
     };
            &g_730;
       }
        int main (void) {
           ;
       }