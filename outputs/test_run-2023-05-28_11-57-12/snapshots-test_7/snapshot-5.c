 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef signed long int __int64_t;
        typedef unsigned long int __uint64_t;
        typedef long int __off_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __int64_t int64_t;
        typedef __uint8_t uint8_t;
        typedef __uint16_t uint16_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
        typedef struct {
         struct   {
          unsigned int __wch;
          char __wchb[4];
        }
       __value;
       }
        __mbstate_t;
        typedef struct _G_fpos_t {
       }
        __fpos_t;
        uint32_t platform_main_end_crc;
int platform_main_end_flag;
static void platform_main_end( void) {
        printf ("checksum = %X\n", platform_main_end_crc);
       }
          int8_t safe_sub_func_int8_t_s_s_si1;
int8_t safe_sub_func_int8_t_s_s_si2;

              int8_t safe_rshift_func_int8_t_s_u_left;
unsigned int safe_rshift_func_int8_t_s_u_right;
void  (safe_rshift_func_int8_t_s_u)( void ) {
              (0 || (((unsigned int)safe_rshift_func_int8_t_s_u_right) >= 32)) ?     ((safe_rshift_func_int8_t_s_u_left)) :     (safe_rshift_func_int8_t_s_u_left >> ((unsigned int)safe_rshift_func_int8_t_s_u_right));
              ((safe_rshift_func_int8_t_s_u_left < 0) || (((unsigned int)safe_rshift_func_int8_t_s_u_right) >= 32) || (safe_rshift_func_int8_t_s_u_left > ((32767) >> ((unsigned int)safe_rshift_func_int8_t_s_u_right)))) ?     ((safe_rshift_func_int8_t_s_u_left)) :     (safe_rshift_func_int8_t_s_u_left << ((unsigned int)safe_rshift_func_int8_t_s_u_right));
       }
           int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
void  (safe_add_func_int32_t_s_s)( void ) {
              (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
              (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((9223372036854775807L)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-9223372036854775807L -1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
       }
        int64_t safe_sub_func_int64_t_s_s_si1;
int64_t safe_sub_func_int64_t_s_s_si2;
void  (safe_sub_func_int64_t_s_s)( void ) {
              (((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (((safe_sub_func_int64_t_s_s_si1 ^ ((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (~(9223372036854775807L))))-safe_sub_func_int64_t_s_s_si2)^safe_sub_func_int64_t_s_s_si2)) < 0) ?     ((safe_sub_func_int64_t_s_s_si1)) :     (safe_sub_func_int64_t_s_s_si1 - safe_sub_func_int64_t_s_s_si2);
              ((safe_sub_func_int64_t_s_s_si2 == 0) || ((safe_sub_func_int64_t_s_s_si1 == (-9223372036854775807L -1)) && (safe_sub_func_int64_t_s_s_si2 == (-1)))) ?     ((safe_sub_func_int64_t_s_s_si1)) :     (safe_sub_func_int64_t_s_s_si1 % safe_sub_func_int64_t_s_s_si2);
       }
                     uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;
void  (safe_rshift_func_uint8_t_u_s)( void ) {
              ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
       }
           uint16_t safe_sub_func_uint16_t_u_u_ui1;
uint16_t safe_sub_func_uint16_t_u_u_ui2;
void  (safe_sub_func_uint16_t_u_u)( void ) {
          safe_sub_func_uint16_t_u_u_ui1 - safe_sub_func_uint16_t_u_u_ui2;
       }
                uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
void  (safe_add_func_uint32_t_u_u)( void ) {
          safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
       }
                 uint64_t safe_add_func_uint64_t_u_u_ui1;
uint64_t safe_add_func_uint64_t_u_u_ui2;

                        static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        uint32_t crc;
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        for (i = 0;
       i < 256;
       i++) {
        for (j = 8;
      j > 0;
      j--) {
        if (crc & 1) {
        crc = (crc >> 1) ^ poly;
       }
       }
        crc32_tab_0 = crc;
       }
       }
        uint8_t crc32_byte_b;
static void crc32_byte (void) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
       }
        static int32_t g_3 = 0x01C08901L;
        static int32_t g_18 = 0xB6BC3EC3L;
        static int32_t g_26[9] = {
      0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L, 0x2978D8EFL, 0x2978D8EFL, 0x3EC93CC2L};
static int32_t g_26_4 = 0x2978D8EFL;
static int32_t g_26_6 = 0x2978D8EFL;
static int32_t g_26_7 = 0x2978D8EFL;
        static int32_t g_30 = 0xEDFC3E8CL;
        static int16_t g_49 = 0x00C0L;
        static int32_t g_75[10] = {0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL,0x01C08901L,0x2978D8EFL};
static int32_t g_75_4 = 0x01C08901L;
        static int32_t g_116 = 0x69094389L;
        static int32_t *g_136 = &g_26_6;
        static uint32_t g_140 = 0x46C4C103L;
        static uint8_t g_174 = 0x8EL;
        static uint8_t g_178 = 0xE9L;
        static uint16_t g_199 = 0x70E5L;
        static int16_t g_202 = (-3L);
        static int64_t g_242 = (-8L);
        static uint8_t *g_245[8] = {
      (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178, (void*)0, &g_178};
static uint8_t *g_245_2 = (void*)0;
static uint8_t *g_245_3 = &g_178;
        static uint32_t g_288 = 0x937974BFL;
        static int32_t *g_292 = &g_3;
        static int8_t g_347[5] = {
      2L, 1L, 2L, 1L, 2L};
        static uint64_t g_365 = 0UL;
        static int32_t g_498 = 6L;
        static int32_t * const g_546 = &g_26_6;
        static int32_t * const  const g_545 = &g_26_6;
        static int32_t * const  const g_544 = &g_26_6;
        static int32_t * const  const g_543 = &g_26_6;
        static int16_t *g_606[5][5] = {
      {
     (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}
      , {
     (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}
      , {
     (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}
      };
        static int32_t g_817 = (-7L);
        void  func_1(void) {
           int8_t __trans_tmp_1;
           int32_t *l_2 = &g_3;
           uint16_t *l_768[6];
           uint16_t *l_768_0;
           int32_t l_822[1];
           uint8_t *l_831 = g_245_3;
           int i, j, k;
           for (i = 0;
       i < 6;
       i++)         l_768_0 = &g_199;
       lbl_782:     (*l_2) ^= (-3L);
           {
                    __trans_tmp_1 =      (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);
                  }
           
           for (g_817 = 15;
       (g_817 < 2);
       g_817 = __trans_tmp_1)     {
              int32_t l_871 = 6L;
              int32_t l_872 = (-10L);
              int32_t l_873 = 0L;
              int32_t l_874[1][9][6] = {
    {
   {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   , {
  5L, 0xE194263EL, 0L, 0xE194263EL, 5L, 1L}
   }
    };
              int64_t l_875 = 0x7BFF7E2D3CA482DELL;
              uint16_t l_877 = 65526UL;
              (*g_543) = (&l_831 == &g_245_2);
          }
            g_18;
       }
        const int32_t * func_10_p_11;
int64_t func_10_p_12;
uint16_t func_10_p_13;
void  func_10(  void) {
           uint64_t __trans_tmp_2;
           int16_t l_767 = 0x48B7L;
           int i, j, k;
           for (i = 0;
       i < 1;
       g_18--)     {
              int32_t l_45 = (-3L);
              {
                       __trans_tmp_2 =  safe_add_func_uint64_t_u_u_ui1 + safe_add_func_uint64_t_u_u_ui2;
                     }
              
              for (func_10_p_12 = 17;
      (func_10_p_12 == 18);
      func_10_p_12 = __trans_tmp_2)         {
                 uint64_t l_33[2][6][3] = {
   {
  {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  }
   , {
  {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  , {
  0UL, 0x9C5A74D4B4B26D8FLL, 3UL}
  }
   };
                 uint64_t l_33_1_4_1 = 0x9C5A74D4B4B26D8FLL;
                 int i, j, k;
                 for (func_10_p_13 = 0;
     (func_10_p_13 > 44);
     ++func_10_p_13)             {
                    int32_t *l_36 = &g_26_4;
                    int32_t *l_37 = &g_30;
                    int32_t *l_44[9][2];
                    for (i = 0;
    (g_26_4 == 23);
    ++g_26_4)                 {
                       int32_t *l_29 = &g_30;
                       int32_t l_31 = 0;
                       l_33_1_4_1--;
                   }
                    if (g_49)                     continue;
                }
             }
          }
            l_767;
       }
        int64_t func_14_p_15;
const uint16_t func_14_p_16;
const uint8_t func_14_p_17;
void  func_14(  void) {
           int64_t l_19 = 0x3303773672D714F9LL;
            l_19;
       }
             int32_t * func_86_p_87;
void  func_86(void) {
           int32_t *l_125[2][8] = {
     };
            l_125[1][1];
       }
         int main (void) {
           func_1();
       }
