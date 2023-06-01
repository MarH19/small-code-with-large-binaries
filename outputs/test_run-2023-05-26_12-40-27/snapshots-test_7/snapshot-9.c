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
        typedef struct {
         struct   {
        }
       __value;
       }
        __mbstate_t;
        uint32_t platform_main_end_crc;
int platform_main_end_flag;

        int8_t safe_unary_minus_func_int8_t_s_si;
void  (safe_unary_minus_func_int8_t_s)(void ) {
              -safe_unary_minus_func_int8_t_s_si;
       }
        int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;
void  (safe_add_func_int8_t_s_s)( void ) {
              (safe_add_func_int8_t_s_s_si1 + safe_add_func_int8_t_s_s_si2);
       }
        int8_t safe_mul_func_int8_t_s_s_si1;
int8_t safe_mul_func_int8_t_s_s_si2;
void  (safe_mul_func_int8_t_s_s)( void ) {
              ((safe_mul_func_int8_t_s_s_si2 == 0) || ((safe_mul_func_int8_t_s_s_si1 == 0) && (safe_mul_func_int8_t_s_s_si2 == 0))) ?     ((safe_mul_func_int8_t_s_s_si1)) :     (safe_mul_func_int8_t_s_s_si1 % safe_mul_func_int8_t_s_s_si2);
       }
         int8_t safe_lshift_func_int8_t_s_s_left;
int safe_lshift_func_int8_t_s_s_right;
void  (safe_lshift_func_int8_t_s_s)( void ) {
              ((safe_lshift_func_int8_t_s_s_left < 0) || (((int)safe_lshift_func_int8_t_s_s_right) < 0) || (((int)safe_lshift_func_int8_t_s_s_right) >= 32) || (safe_lshift_func_int8_t_s_s_left > ((127) >> ((int)safe_lshift_func_int8_t_s_s_right)))) ?     ((safe_lshift_func_int8_t_s_s_left)) :     (safe_lshift_func_int8_t_s_s_left << ((int)safe_lshift_func_int8_t_s_s_right));
       }
        int16_t safe_unary_minus_func_int16_t_s_si;
void  (safe_unary_minus_func_int16_t_s)(void ) {
              -safe_unary_minus_func_int16_t_s_si;
       }
        int16_t safe_add_func_int16_t_s_s_si1;
int16_t safe_add_func_int16_t_s_s_si2;
void  (safe_add_func_int16_t_s_s)( void ) {
              ((safe_add_func_int16_t_s_s_si2 == 0) || ((safe_add_func_int16_t_s_s_si1 == (-32767-1)) && (safe_add_func_int16_t_s_s_si2 == (-1)))) ?     ((safe_add_func_int16_t_s_s_si1)) :     (safe_add_func_int16_t_s_s_si1 / safe_add_func_int16_t_s_s_si2);
       }
           int16_t safe_rshift_func_int16_t_s_u_left;
unsigned int safe_rshift_func_int16_t_s_u_right;
void  (safe_rshift_func_int16_t_s_u)( void ) {
              ((safe_rshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_rshift_func_int16_t_s_u_right) >= 32)) ?     ((safe_rshift_func_int16_t_s_u_left)) :     (safe_rshift_func_int16_t_s_u_left >> ((unsigned int)safe_rshift_func_int16_t_s_u_right));
       }
         int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
void  (safe_add_func_int32_t_s_s)( void ) {
              (((safe_add_func_int32_t_s_s_si1^safe_add_func_int32_t_s_s_si2) & (((safe_add_func_int32_t_s_s_si1 ^ ((safe_add_func_int32_t_s_s_si1^safe_add_func_int32_t_s_s_si2) & (~(2147483647))))-safe_add_func_int32_t_s_s_si2)^safe_add_func_int32_t_s_s_si2)) < 0) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 - safe_add_func_int32_t_s_s_si2);
       }
        int64_t safe_sub_func_int64_t_s_s_si1;
int64_t safe_sub_func_int64_t_s_s_si2;
void  (safe_sub_func_int64_t_s_s)( void ) {
              (((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (((safe_sub_func_int64_t_s_s_si1 ^ ((safe_sub_func_int64_t_s_s_si1^safe_sub_func_int64_t_s_s_si2) & (~(9223372036854775807L))))-safe_sub_func_int64_t_s_s_si2)^safe_sub_func_int64_t_s_s_si2)) < 0) ?     ((safe_sub_func_int64_t_s_s_si1)) :     (safe_sub_func_int64_t_s_s_si1 - safe_sub_func_int64_t_s_s_si2);
       }
         int64_t safe_mod_func_int64_t_s_s_si1;
int64_t safe_mod_func_int64_t_s_s_si2;

             uint8_t safe_add_func_uint8_t_u_u_ui1;
uint8_t safe_add_func_uint8_t_u_u_ui2;

          uint8_t safe_lshift_func_uint8_t_u_s_left;
int safe_lshift_func_uint8_t_u_s_right;
void  (safe_lshift_func_uint8_t_u_s)( void ) {
              ((((unsigned int)safe_lshift_func_uint8_t_u_s_right) >= 32) || (safe_lshift_func_uint8_t_u_s_left > ((255) >> ((unsigned int)safe_lshift_func_uint8_t_u_s_right)))) ?     ((safe_lshift_func_uint8_t_u_s_left)) :     (safe_lshift_func_uint8_t_u_s_left << ((unsigned int)safe_lshift_func_uint8_t_u_s_right));
       }
        uint8_t safe_rshift_func_uint8_t_u_s_left;
int safe_rshift_func_uint8_t_u_s_right;
void  (safe_rshift_func_uint8_t_u_s)( void ) {
              ((((int)safe_rshift_func_uint8_t_u_s_right) < 0) || (((int)safe_rshift_func_uint8_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint8_t_u_s_left)) :     (safe_rshift_func_uint8_t_u_s_left >> ((int)safe_rshift_func_uint8_t_u_s_right));
       }
         uint16_t safe_add_func_uint16_t_u_u_ui1;
uint16_t safe_add_func_uint16_t_u_u_ui2;
void  (safe_add_func_uint16_t_u_u)( void ) {
          safe_add_func_uint16_t_u_u_ui1 + safe_add_func_uint16_t_u_u_ui2;
          ((unsigned int)safe_add_func_uint16_t_u_u_ui1) * ((unsigned int)safe_add_func_uint16_t_u_u_ui2);
              (safe_add_func_uint16_t_u_u_ui2 == 0) ?     ((safe_add_func_uint16_t_u_u_ui1)) :     (safe_add_func_uint16_t_u_u_ui1 / safe_add_func_uint16_t_u_u_ui2);
       }
         uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
void  (safe_lshift_func_uint16_t_u_u)( void ) {
              ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
              ((((int)safe_lshift_func_uint16_t_u_u_right) < 0) || (((int)safe_lshift_func_uint16_t_u_u_right) >= 32)) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left >> ((int)safe_lshift_func_uint16_t_u_u_right));
       }
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) {
        const uint32_t poly = 0xEDB88320UL;
        int i, j;
        for (i = 0;
       i < 256;
       i++) {
        for (j = 8;
      j > 0;
      j--) {
       }
       }
       }
        struct S0 {
          unsigned f0 : 7;
          unsigned f1 : 2;
          signed f2 : 29;
          signed f3 : 20;
          unsigned f4 : 21;
          const signed f5 : 26;
          uint64_t f6;
          signed f7 : 16;
       };
        static int32_t g_2 = 0L;
        static int32_t g_7 = 0x4515FDC8L;
        static int32_t *g_100 = &g_7;
        static int32_t *g_99 = &g_7;
        static int64_t g_126 = 0x3FF80110037B8604LL;
        static int16_t g_130 = (-1L);
        static int32_t *g_133 = &g_7;
        static uint64_t g_142 = 7UL;
        static uint16_t g_152 = 0xF855L;
        static struct S0 g_271 = {
      2,1,-11116,827,1412,-5598,18446744073709551615UL,177};
static unsigned int g_271_1 = 1;
        static uint8_t g_317 = 5UL;
        static int8_t g_585 = 0x1BL;
        static uint64_t *g_675 = &g_142;
        static uint64_t **g_674 = &g_675;
        static uint16_t g_719 = 0x5253L;
        static uint32_t g_746 = 0x8304BA9EL;
        static int16_t g_937 = 0xA768L;
        static const uint32_t g_988 = 0xB3791BA4L;
        static const uint32_t *g_987 = &g_988;
        static int8_t *g_997 = (void*)0;
        static int8_t *g_996 = (void*)0;
        static int8_t *g_995 = (void*)0;
        static uint64_t *g_1007 = (void*)0;
        static int8_t g_1151 = 0x78L;
        static int8_t *g_1155 = &g_585;
        void  func_73(  void);
        void  func_1(void) {
           int64_t __trans_tmp_1;
           int32_t *l_8 = &g_7;
           int32_t l_9 = 0x74952F34L;
           int32_t *l_26 = &l_9;
           int32_t *l_35 = &l_9;
           int32_t l_41 = 1L;
           int32_t *l_44 = &l_41;
           struct S0 l_1131 = {
     7,0,14275,80,1002,7194,7UL,-138};
           int8_t **l_1136 = &g_996;
           int16_t *l_1144 = &g_937;
           uint64_t **l_1149 = g_674;
           uint64_t ***l_1148 = &l_1149;
           struct S0 *l_1157 = &l_1131;
           struct S0 ** const l_1156 = &l_1157;
           uint8_t l_1163 = 0xFAL;
       lbl_1167:     for (g_2 = 24;
       (g_2 != 7);
       --g_2)     {
              int8_t **l_1137 = &g_995;
              uint64_t **l_1139 = g_674;
              uint64_t **l_1138 = l_1139;
              if ((+(((g_317 , ((l_1137) = l_1136)) == &l_1136) ^ (((l_1138) = g_674) == &g_674))))         {
                 int16_t l_1147 = 0x43D9L;
                 int32_t l_1166 = 1L;
                 {
                          __trans_tmp_1 =      ((safe_mod_func_int64_t_s_s_si2 == 0) || ((safe_mod_func_int64_t_s_s_si1 == (-9223372036854775807L -1)) && (safe_mod_func_int64_t_s_s_si2 == (-1)))) ?     ((safe_mod_func_int64_t_s_s_si1)) :     (safe_mod_func_int64_t_s_s_si1 / safe_mod_func_int64_t_s_s_si2);
                        }
                 
                 if (((*g_987) , ((g_1007 = &*g_1007) != (((__trans_tmp_1) >= g_126) , &l_1148))))             {
                     g_271;
                    uint8_t l_1150 = 0UL;
                    int8_t *l_1152 = &g_1151;
                    int8_t *l_1153 = 0;
                    int8_t **l_1154 = &l_1152;
                    int32_t **l_1160 = 0;
                    int32_t **l_1162 = &g_99;
                    int32_t **l_1161 = l_1162;
                    struct S0 * const * const l_1164 = &l_1157;
                    int64_t *l_1165 = &g_126;
                    (*l_35) = (l_1150 == (g_1151 ^ ((((*l_1136) = (g_996)) != (g_1155 = ((*l_1154) = l_1152))) >= (l_1166 = ((*l_1165) = (((l_1156 == ((safe_add_func_int16_t_s_s( )) , l_1164)) , 4294967293UL) || g_152))))));
                }
             }
          }
       }
        int32_t * func_56_p_57;
int32_t * func_56_p_58;
struct S0 func_56_p_59;
void  func_56(  void) {
           uint8_t __trans_tmp_2;
           {
                    __trans_tmp_2 =  safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
                  }
           
           for (g_719 = (-13);
       (g_719 == 6);
       g_719 = __trans_tmp_2)     {
          }
            func_56_p_58;
       }
        struct S0 func_90_p_91;
uint8_t func_90_p_92;
void  func_90( void) {
           const int32_t l_101 = 0xCFDD8C90L;
            l_101;
       }
        int main (void) {
           int print_hash_value = 0;
           {
                   printf ("checksum = %X\n", platform_main_end_crc);
                  }
           
           ;
       }
