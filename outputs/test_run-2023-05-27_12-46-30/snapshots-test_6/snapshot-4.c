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
                                                                             static void platform_main_begin(void) {
       }
        int8_t safe_unary_minus_func_int8_t_s_si;
static int8_t (safe_unary_minus_func_int8_t_s)(void ) {
         return     -safe_unary_minus_func_int8_t_s_si;
       }
        int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;
static int8_t (safe_add_func_int8_t_s_s)( void ) {
         return     (safe_add_func_int8_t_s_s_si1 + safe_add_func_int8_t_s_s_si2);
       }
        int16_t safe_sub_func_int16_t_s_s_si1;
int16_t safe_sub_func_int16_t_s_s_si2;
static int16_t (safe_sub_func_int16_t_s_s)( void ) {
         return     (safe_sub_func_int16_t_s_s_si1 - safe_sub_func_int16_t_s_s_si2);
       }
        int16_t safe_mul_func_int16_t_s_s_si1;
int16_t safe_mul_func_int16_t_s_s_si2;
static int16_t (safe_mul_func_int16_t_s_s)( void ) {
         return     safe_mul_func_int16_t_s_s_si1 * safe_mul_func_int16_t_s_s_si2;
         return     ((safe_mul_func_int16_t_s_s_si2 == 0) || ((safe_mul_func_int16_t_s_s_si1 == (-32767-1)) && (safe_mul_func_int16_t_s_s_si2 == 0))) ?     (0) :     (safe_mul_func_int16_t_s_s_si1 % safe_mul_func_int16_t_s_s_si2);
       }
              int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
static int32_t (safe_add_func_int32_t_s_s)( void ) {
         return     (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
       }
                 int64_t safe_add_func_int64_t_s_s_si1;
int64_t safe_add_func_int64_t_s_s_si2;
static int64_t (safe_add_func_int64_t_s_s)( void ) {
         return     (((safe_add_func_int64_t_s_s_si1>0) && (safe_add_func_int64_t_s_s_si2>0) && (safe_add_func_int64_t_s_s_si1 > ((9223372036854775807L)-safe_add_func_int64_t_s_s_si2))) || ((safe_add_func_int64_t_s_s_si1<0) && (safe_add_func_int64_t_s_s_si2<0) && (safe_add_func_int64_t_s_s_si1 < ((-9223372036854775807L -1)-safe_add_func_int64_t_s_s_si2)))) ?     ((safe_add_func_int64_t_s_s_si1)) :     (safe_add_func_int64_t_s_s_si1 + safe_add_func_int64_t_s_s_si2);
       }
        int64_t safe_sub_func_int64_t_s_s_si1;
int64_t safe_sub_func_int64_t_s_s_si2;
static int64_t (safe_sub_func_int64_t_s_s)( void ) {
         return     (((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (((safe_sub_func_int64_t_s_s_si1 ^ ((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (~(9223372036854775807L))))-safe_sub_func_int64_t_s_s_si2)^safe_sub_func_int64_t_s_s_si2)) < 0) ?     ((safe_sub_func_int64_t_s_s_si1)) :     (safe_sub_func_int64_t_s_s_si1 - safe_sub_func_int64_t_s_s_si2);
       }
                uint8_t safe_add_func_uint8_t_u_u_ui1;
uint8_t safe_add_func_uint8_t_u_u_ui2;
static uint8_t (safe_add_func_uint8_t_u_u)( void ) {
         return safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
       }
              uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;
static uint8_t (safe_rshift_func_uint8_t_u_s)( void ) {
         return     ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
       }
        uint8_t safe_rshift_func_uint8_t_u_u_left;
unsigned int safe_rshift_func_uint8_t_u_u_right;
static uint8_t (safe_rshift_func_uint8_t_u_u)( void ) {
         return     (((unsigned int)safe_rshift_func_uint8_t_u_u_right) >= 32) ?     ((safe_rshift_func_uint8_t_u_u_left)) :     (safe_rshift_func_uint8_t_u_u_left >> ((unsigned int)safe_rshift_func_uint8_t_u_u_right));
       }
           uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;
static uint16_t (safe_mul_func_uint16_t_u_u)( void ) {
         return ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
         return     (safe_mul_func_uint16_t_u_u_ui2 == 0) ?     ((safe_mul_func_uint16_t_u_u_ui1)) :     (safe_mul_func_uint16_t_u_u_ui1 % safe_mul_func_uint16_t_u_u_ui2);
       }
          uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
static uint16_t (safe_lshift_func_uint16_t_u_u)( void ) {
         return     ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
         return     (((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
       }
         uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
static uint32_t (safe_add_func_uint32_t_u_u)( void ) {
         return safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
       }
        uint32_t safe_sub_func_uint32_t_u_u_ui1;
uint32_t safe_sub_func_uint32_t_u_u_ui2;
static uint32_t (safe_sub_func_uint32_t_u_u)( void ) {
         return safe_sub_func_uint32_t_u_u_ui1 - safe_sub_func_uint32_t_u_u_ui2;
       }
               uint64_t safe_unary_minus_func_uint64_t_u_ui;
static uint64_t (safe_unary_minus_func_uint64_t_u)(void ) {
         return -safe_unary_minus_func_uint64_t_u_ui;
       }
        uint64_t safe_add_func_uint64_t_u_u_ui1;
uint64_t safe_add_func_uint64_t_u_u_ui2;
static uint64_t (safe_add_func_uint64_t_u_u)( void ) {
         return safe_add_func_uint64_t_u_u_ui1 + safe_add_func_uint64_t_u_u_ui2;
       }
                 static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        uint8_t crc32_byte_b;
static void crc32_byte (void) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
       }
        uint64_t crc32_8bytes_val;
static void crc32_8bytes (void) {
        crc32_byte ();
       }
        uint64_t transparent_crc_val;
char * transparent_crc_vname;
int transparent_crc_flag;
static void transparent_crc (  void) {
        crc32_8bytes();
       }
        static int64_t g_2 = (-1L);
        static int32_t g_4 = 0x897A4A12L;
        static int32_t g_7 = (-1L);
        static uint16_t g_21 = 65535UL;
        static int64_t g_130 = 0xB426AB799115BA09LL;
        static uint32_t g_132 = 2UL;
        static uint64_t g_141 = 7UL;
        static uint16_t g_147 = 0xF6E0L;
        static int32_t *g_161 = &g_4;
        static int32_t **g_160 = &g_161;
        static int8_t g_193 = (-1L);
        static uint64_t g_264 = 1UL;
        static uint32_t g_304 = 18446744073709551614UL;
        static uint64_t *g_319 = (void*)0;
        static uint64_t **g_318 = &g_319;
        static uint32_t g_337 = 0x9F0F0CF3L;
        static uint8_t g_427 = 255UL;
        static uint32_t func_1(void) {
           int32_t l_478 = 9L;
           return l_478;
       }
        uint16_t * func_22_p_23;
uint16_t * func_22_p_24;
uint64_t func_22_p_25;
static int32_t * func_22(  void) {
           int32_t l_287 = 0L;
           int32_t l_288 = (-6L);
           int32_t *l_290 = &l_288;
           int32_t *l_293 = &l_288;
           int32_t l_298 = (-1L);
           int32_t *l_300 = &l_287;
           int32_t *l_302 = &l_298;
           int32_t l_334 = (-9L);
           if (func_22_p_25)     {
              int32_t l_311 = 0xC2C0AFCBL;
              uint64_t *l_313 = &g_264;
              uint64_t **l_312 = &l_313;
              uint64_t ***l_314 = &l_312;
              int8_t *l_320 = &g_193;
              int32_t l_325 = 0x06CC3F75L;
              (*l_290) = (((safe_add_func_int64_t_s_s( )) | g_130) == g_7);
              int16_t l_326 = 0xB259L;
              uint32_t *l_335 = &g_132;
              uint32_t *l_336 = &g_337;
              int32_t l_338 = 0xA6BA308FL;
              uint64_t l_351 = 1UL;
              l_338 = ((l_326 <= 0L) || ((((g_2 &= (((*l_336) = ((*l_335) = (safe_add_func_uint8_t_u_u( )))) <= g_304)) >= 0x6D6EEA9B94AA32D8LL) >= (*l_302)) , 0x63E07D31L));
              for (l_334 = (-13);
      (l_334 == 12);
      l_334 = safe_add_func_int32_t_s_s( ))         {
                 int64_t *l_349 = &g_130;
                 int32_t l_350 = 6L;
                 (*l_302) |= (0x93L | (func_22_p_25 ^ (0xFC80131CL >= (safe_mul_func_uint16_t_u_u( )))));
             }
          }
           return (*g_160);
       }
        uint16_t * func_26_p_27;
int32_t func_26_p_28;
uint16_t * func_26_p_29;
int8_t func_26_p_30;
static uint16_t * func_26(   void) {
           return &g_147;
       }
        uint16_t * func_32_p_33;
static uint64_t func_32(void) {
           uint16_t l_34 = 0x632CL;
           return l_34;
       }
        int16_t func_37_p_38;
static int32_t * func_37(void) {
           return (*g_160);
       }
        uint64_t * func_39_p_40;
uint64_t * func_39_p_41;
uint16_t * func_39_p_42;
static uint8_t func_39(   uint16_t * p_43, uint64_t * p_44) {
           int32_t *l_171 = &g_7;
           return (*l_171);
       }
        static uint64_t * func_45(uint16_t * p_46, uint16_t * p_47, uint8_t p_48) {
           return &g_141;
       }
        static uint16_t * func_49(uint32_t p_50, int32_t p_51) {
           return &g_21;
       }
        int16_t * func_76_p_79;
static int8_t func_76(int8_t p_77, int16_t p_78) {
           return g_147;
       }
        int main (void) {
           int print_hash_value = 0;
           transparent_crc(  );
       }
