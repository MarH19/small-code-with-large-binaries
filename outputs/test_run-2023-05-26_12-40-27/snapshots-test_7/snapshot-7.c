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
         union   {
        }
       __value;
       }
        __mbstate_t;
        static void platform_main_end(uint32_t crc, int flag) {
        printf ("checksum = %X\n", crc);
       }
        static int8_t (safe_unary_minus_func_int8_t_s)(int8_t si ) {
         return     -si;
       }
        static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
         return     (si1 + si2);
       }
        static int8_t (safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
         return     ((si2 == 0) || ((si1 == 0) && (si2 == 0))) ?     ((si1)) :     (si1 % si2);
       }
         static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
         return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
       }
        static int16_t (safe_unary_minus_func_int16_t_s)(int16_t si ) {
         return     -si;
       }
        static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
         return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
       }
           static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
         return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
       }
         static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
         return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
       }
        static int64_t (safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
         return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
       }
         static int64_t (safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 ) {
         return     ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
       }
             static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
         return ui1 + ui2;
       }
          static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
         return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
       }
        static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
       }
         static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return ui1 + ui2;
         return ((unsigned int)ui1) * ((unsigned int)ui2);
         return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
       }
         static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
         return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
         return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
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
        static int32_t **g_99 = &g_100;
        static int64_t g_126 = 0x3FF80110037B8604LL;
        static int16_t g_130 = (-1L);
        static int32_t **g_133 = &g_100;
        static uint64_t g_142 = 7UL;
        static uint16_t g_152 = 0xF855L;
        static struct S0 g_271 = {
      2,1,-11116,827,1412,-5598,18446744073709551615UL,177};
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
        static int8_t **g_996 = &g_997;
        static int8_t ***g_995 = &g_996;
        static uint64_t ****g_1007 = (void*)0;
        static int8_t g_1151 = 0x78L;
        static int8_t *g_1155 = &g_585;
        static struct S0 func_73(int32_t p_74, int16_t p_75, uint16_t p_76);
        static struct S0 func_1() {
           int32_t *l_8 = &g_7;
           int32_t l_9 = 0x74952F34L;
           int32_t *l_26 = &l_9;
           int32_t *l_35 = &l_9;
           int32_t l_41 = 1L;
           int32_t *l_44 = &l_41;
           struct S0 l_1131 = {
     7,0,14275,80,1002,7194,7UL,-138};
           int8_t ***l_1136 = &g_996;
           int16_t *l_1144 = &g_937;
           uint64_t ***l_1149 = &g_674;
           uint64_t ****l_1148 = &l_1149;
           struct S0 *l_1157 = &l_1131;
           struct S0 ** const l_1156 = &l_1157;
           uint8_t l_1163 = 0xFAL;
       lbl_1167:     for (g_2 = 24;
       (g_2 != 7);
       --g_2)     {
              int8_t ****l_1137 = &g_995;
              uint64_t ***l_1139 = &g_674;
              uint64_t ****l_1138 = &l_1139;
              if ((+(((g_317 , ((*l_1137) = l_1136)) == l_1136) ^ (((*l_1138) = &g_674) == &g_674))))         {
                 int16_t l_1147 = 0x43D9L;
                 int32_t l_1166 = 1L;
                 if (((*g_987) , ((g_1007 = g_1007) != (((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((g_271.f1 , 0UL) != (**g_133)) <= (*l_8)), (l_1144 == &g_130))), (safe_add_func_int8_t_s_s(l_1147, l_1147)))) >= g_126) , l_1148))))             {
                    return g_271;
                    uint8_t l_1150 = 0UL;
                    int8_t *l_1152 = &g_1151;
                    int8_t **l_1153 = (void*)0;
                    int8_t **l_1154 = &l_1152;
                    int32_t ****l_1160 = (void*)0;
                    int32_t ***l_1162 = &g_99;
                    int32_t ****l_1161 = &l_1162;
                    struct S0 * const * const l_1164 = &l_1157;
                    int64_t *l_1165 = &g_126;
                    (*l_35) = (l_1150 == (g_1151 ^ ((((**l_1136) = (*g_996)) != (g_1155 = ((*l_1154) = l_1152))) >= (l_1166 = ((*l_1165) = (((l_1156 == ((safe_add_func_int16_t_s_s((func_73(g_746, ((-7L) > (((255UL || ((((*l_1161) = &g_133) != &g_99) > (*l_26))) & (**g_99)) , (**g_674))), l_1147) , 1L), l_1163)) , l_1164)) , 4294967293UL) || g_152))))));
                }
             }
          }
       }
        static int32_t * func_56(int32_t * p_57, int32_t * p_58, struct S0 p_59) {
           for (g_719 = (-13);
       (g_719 == 6);
       g_719 = safe_add_func_uint8_t_u_u(g_719, 5))     {
          }
           return p_58;
       }
        static const int64_t func_90(struct S0 p_91, uint8_t p_92) {
           const int32_t l_101 = 0xCFDD8C90L;
           return l_101;
       }
        int main (void) {
           int print_hash_value = 0;
           platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
       }
