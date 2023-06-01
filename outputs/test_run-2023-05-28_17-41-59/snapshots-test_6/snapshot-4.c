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
        int8_t safe_add_func_int8_t_s_s_si2;
static int8_t (safe_add_func_int8_t_s_s)(int8_t si1 ) {
         return     (si1 + safe_add_func_int8_t_s_s_si2);
       }
        int8_t safe_sub_func_int8_t_s_s_si1;
int8_t safe_sub_func_int8_t_s_s_si2;
static int8_t (safe_sub_func_int8_t_s_s)( void ) {
         return     (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);
       }
        int8_t safe_mul_func_int8_t_s_s_si1;
int8_t safe_mul_func_int8_t_s_s_si2;
static int8_t (safe_mul_func_int8_t_s_s)( void ) {
         return     safe_mul_func_int8_t_s_s_si1 * safe_mul_func_int8_t_s_s_si2;
       }
        int8_t safe_mod_func_int8_t_s_s_si1;
int8_t safe_mod_func_int8_t_s_s_si2;
static int8_t (safe_mod_func_int8_t_s_s)( void ) {
         return     ((safe_mod_func_int8_t_s_s_si2 == 0) || ((safe_mod_func_int8_t_s_s_si1 == (-128)) && (safe_mod_func_int8_t_s_s_si2 == (-1)))) ?     ((safe_mod_func_int8_t_s_s_si1)) :     (safe_mod_func_int8_t_s_s_si1 % safe_mod_func_int8_t_s_s_si2);
       }
         int8_t safe_lshift_func_int8_t_s_s_left;
int safe_lshift_func_int8_t_s_s_right;
static int8_t (safe_lshift_func_int8_t_s_s)( void ) {
         return     ((safe_lshift_func_int8_t_s_s_left < 0) || (((int)safe_lshift_func_int8_t_s_s_right) < 0) || (((int)safe_lshift_func_int8_t_s_s_right) >= 32) || (safe_lshift_func_int8_t_s_s_left > ((127) >> ((int)safe_lshift_func_int8_t_s_s_right)))) ?     ((safe_lshift_func_int8_t_s_s_left)) :     (safe_lshift_func_int8_t_s_s_left << ((int)safe_lshift_func_int8_t_s_s_right));
       }
        int8_t safe_rshift_func_int8_t_s_s_left;
int safe_rshift_func_int8_t_s_s_right;
static int8_t (safe_rshift_func_int8_t_s_s)( void ) {
         return     ((safe_rshift_func_int8_t_s_s_left < 0) || (((int)safe_rshift_func_int8_t_s_s_right) < 0) || (((int)safe_rshift_func_int8_t_s_s_right) >= 32))?     ((safe_rshift_func_int8_t_s_s_left)) :     (safe_rshift_func_int8_t_s_s_left >> ((int)safe_rshift_func_int8_t_s_s_right));
       }
        int16_t safe_add_func_int16_t_s_s_si1;
int16_t safe_add_func_int16_t_s_s_si2;
static int16_t (safe_add_func_int16_t_s_s)( void ) {
         return     (safe_add_func_int16_t_s_s_si1 + safe_add_func_int16_t_s_s_si2);
       }
        int16_t safe_mul_func_int16_t_s_s_si1;
int16_t safe_mul_func_int16_t_s_s_si2;
static int16_t (safe_mul_func_int16_t_s_s)( void ) {
         return     safe_mul_func_int16_t_s_s_si1 * safe_mul_func_int16_t_s_s_si2;
       }
         int16_t safe_lshift_func_int16_t_s_s_left;
int safe_lshift_func_int16_t_s_s_right;
static int16_t (safe_lshift_func_int16_t_s_s)( void ) {
         return     ((safe_lshift_func_int16_t_s_s_left < 0) || (((int)safe_lshift_func_int16_t_s_s_right) < 0) || (((int)safe_lshift_func_int16_t_s_s_right) >= 32) || (safe_lshift_func_int16_t_s_s_left > ((32767) >> ((int)safe_lshift_func_int16_t_s_s_right)))) ?     ((safe_lshift_func_int16_t_s_s_left)) :     (safe_lshift_func_int16_t_s_s_left << ((int)safe_lshift_func_int16_t_s_s_right));
       }
        int16_t safe_lshift_func_int16_t_s_u_left;
unsigned int safe_lshift_func_int16_t_s_u_right;
static int16_t (safe_lshift_func_int16_t_s_u)( void ) {
         return     ((safe_lshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) || (safe_lshift_func_int16_t_s_u_left > ((32767) >> ((unsigned int)safe_lshift_func_int16_t_s_u_right)))) ?     ((safe_lshift_func_int16_t_s_u_left)) :     (safe_lshift_func_int16_t_s_u_left << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
       }
        int16_t safe_rshift_func_int16_t_s_s_left;
static int16_t (safe_rshift_func_int16_t_s_s)( int right ) {
         return     ((safe_rshift_func_int16_t_s_s_left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((safe_rshift_func_int16_t_s_s_left)) :     (safe_rshift_func_int16_t_s_s_left >> ((int)right));
       }
        static int16_t (safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right ) {
         return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
       }
         static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
         return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
       }
        static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
         return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
       }
        static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
         return ui1 + ui2;
       }
        uint8_t safe_sub_func_uint8_t_u_u_ui2;
static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1 ) {
         return ui1 - safe_sub_func_uint8_t_u_u_ui2;
       }
        static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
         return ((unsigned int)ui1) * ((unsigned int)ui2);
       }
         static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
       }
        static uint8_t (safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
         return     ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
       }
        static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
         return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
       }
        static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
         return ((unsigned int)ui1) * ((unsigned int)ui2);
       }
         static uint16_t (safe_lshift_func_uint16_t_u_s)(uint16_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
       }
        static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
         return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
       }
        static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {
         return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
         return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
       }
         static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
         return ui1 + ui2;
       }
                 static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) ;
        static void crc32_byte (uint8_t b) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
       }
        static void crc32_8bytes (uint32_t val) {
        crc32_byte ((val>>0) & 0xff);
       }
        static void transparent_crc (uint32_t val, char* vname, int flag) {
        crc32_8bytes(val);
       }
        static uint32_t g_2 = 0xB3198A8F;
        static uint32_t g_39 = 0xF5A2F617;
        static uint32_t g_54 = 0xAC245771;
        static int32_t g_60 = 0x797B69E0;
        static int16_t g_65 = 0;
        static int16_t g_67 = 0;
        static uint32_t g_73 = 7U;
        static uint8_t g_194 = 9U;
        static uint32_t g_200 = 0xF1D446CA;
        static int32_t g_225 = 0x5D562BBF;
        static uint32_t g_226 = 0x14FDFC62;
        static uint8_t g_259 = 253U;
        static uint32_t g_263 = 0xC8B09539;
        static uint8_t g_311 = 1U;
        static uint8_t g_372 = 0x5C;
        static int8_t g_515 = (-5);
        static uint32_t g_662 = 0U;
        static const int8_t g_692 = 0x73;
        static uint32_t g_739 = 0x20CCCE2B;
        static uint8_t g_760 = 8U;
        static uint32_t g_788 = 4294967294U;
        inline static const uint32_t func_1(void) {
           uint8_t l_18 = 0xBB;
           int32_t l_23 = 0x4456E348;
           uint32_t l_287 = 0x71E7E6F1;
           const int8_t l_307 = 0x5D;
           for (g_73 = (-30);
       (g_73 > 22);
       g_73++)     {
              uint8_t l_668 = 249U;
              uint8_t l_693 = 255U;
              const int32_t l_789 = 1;
              if (((g_73 >= (((g_39 >= (((safe_rshift_func_int8_t_s_s( )) == ((254U == (g_515 == (((safe_lshift_func_int16_t_s_u( )) == 2U) || g_259))) & g_2)) | g_60)) | g_372) && g_226)) > l_18))         
                 return l_789;
             
          }
       }
        static int16_t func_5(int32_t p_6, int8_t p_7, uint32_t p_8, const uint32_t p_9) {
           return g_194;
       }
        inline static int16_t func_46(int16_t p_47, uint8_t p_48) {
           return p_48;
       }
        static int16_t func_61(uint32_t p_62) {
           return p_62;
       }
        static uint8_t func_95(int16_t p_96, int32_t p_97, int32_t p_98) {
           return p_97;
       }
        int main (void) {
           int print_hash_value = 0;
           transparent_crc(g_760, "g_760", print_hash_value);
       }
