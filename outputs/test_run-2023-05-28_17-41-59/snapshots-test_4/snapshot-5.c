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
void  (safe_add_func_int8_t_s_s)(void ) {
         int8_t si1 = 0;
              (0 + safe_add_func_int8_t_s_s_si2);
       }
        int8_t safe_sub_func_int8_t_s_s_si1;
int8_t safe_sub_func_int8_t_s_s_si2;
void  (safe_sub_func_int8_t_s_s)( void ) {
              (safe_sub_func_int8_t_s_s_si1 - safe_sub_func_int8_t_s_s_si2);
       }
        int8_t safe_mul_func_int8_t_s_s_si1;
int8_t safe_mul_func_int8_t_s_s_si2;
void  (safe_mul_func_int8_t_s_s)( void ) {
              safe_mul_func_int8_t_s_s_si1 * safe_mul_func_int8_t_s_s_si2;
       }
        int8_t safe_mod_func_int8_t_s_s_si1;
int8_t safe_mod_func_int8_t_s_s_si2;
void  (safe_mod_func_int8_t_s_s)( void ) {
              ((safe_mod_func_int8_t_s_s_si2 == 0) || ((safe_mod_func_int8_t_s_s_si1 == (-128)) && (safe_mod_func_int8_t_s_s_si2 == (-1)))) ?     ((safe_mod_func_int8_t_s_s_si1)) :     (safe_mod_func_int8_t_s_s_si1 % safe_mod_func_int8_t_s_s_si2);
       }
         int8_t safe_lshift_func_int8_t_s_s_left;
int safe_lshift_func_int8_t_s_s_right;
void  (safe_lshift_func_int8_t_s_s)( void ) {
              ((safe_lshift_func_int8_t_s_s_left < 0) || (((int)safe_lshift_func_int8_t_s_s_right) < 0) || (((int)safe_lshift_func_int8_t_s_s_right) >= 32) || (safe_lshift_func_int8_t_s_s_left > ((127) >> ((int)safe_lshift_func_int8_t_s_s_right)))) ?     ((safe_lshift_func_int8_t_s_s_left)) :     (safe_lshift_func_int8_t_s_s_left << ((int)safe_lshift_func_int8_t_s_s_right));
       }
        int8_t safe_rshift_func_int8_t_s_s_left;
int safe_rshift_func_int8_t_s_s_right;

        int16_t safe_add_func_int16_t_s_s_si1;
int16_t safe_add_func_int16_t_s_s_si2;
void  (safe_add_func_int16_t_s_s)( void ) {
              (safe_add_func_int16_t_s_s_si1 + safe_add_func_int16_t_s_s_si2);
       }
        int16_t safe_mul_func_int16_t_s_s_si1;
int16_t safe_mul_func_int16_t_s_s_si2;
void  (safe_mul_func_int16_t_s_s)( void ) {
              safe_mul_func_int16_t_s_s_si1 * safe_mul_func_int16_t_s_s_si2;
       }
         int16_t safe_lshift_func_int16_t_s_s_left;
int safe_lshift_func_int16_t_s_s_right;
void  (safe_lshift_func_int16_t_s_s)( void ) {
              ((safe_lshift_func_int16_t_s_s_left < 0) || (((int)safe_lshift_func_int16_t_s_s_right) < 0) || (((int)safe_lshift_func_int16_t_s_s_right) >= 32) || (safe_lshift_func_int16_t_s_s_left > ((32767) >> ((int)safe_lshift_func_int16_t_s_s_right)))) ?     ((safe_lshift_func_int16_t_s_s_left)) :     (safe_lshift_func_int16_t_s_s_left << ((int)safe_lshift_func_int16_t_s_s_right));
       }
        int16_t safe_lshift_func_int16_t_s_u_left;
unsigned int safe_lshift_func_int16_t_s_u_right;

        int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;
void  (safe_rshift_func_int16_t_s_s)( void ) {
              ((safe_rshift_func_int16_t_s_s_left < 0) || (((int)safe_rshift_func_int16_t_s_s_right) < 0) || (((int)safe_rshift_func_int16_t_s_s_right) >= 32))?     ((safe_rshift_func_int16_t_s_s_left)) :     (safe_rshift_func_int16_t_s_s_left >> ((int)safe_rshift_func_int16_t_s_s_right));
       }
        int16_t safe_rshift_func_int16_t_s_u_left;
unsigned int safe_rshift_func_int16_t_s_u_right;
void  (safe_rshift_func_int16_t_s_u)( void ) {
              ((safe_rshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_rshift_func_int16_t_s_u_right) >= 32)) ?     ((safe_rshift_func_int16_t_s_u_left)) :     (safe_rshift_func_int16_t_s_u_left >> ((unsigned int)safe_rshift_func_int16_t_s_u_right));
       }
         int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
void  (safe_add_func_int32_t_s_s)( void ) {
              (((safe_add_func_int32_t_s_s_si1>0) && (safe_add_func_int32_t_s_s_si2>0) && (safe_add_func_int32_t_s_s_si1 > ((2147483647)-safe_add_func_int32_t_s_s_si2))) || ((safe_add_func_int32_t_s_s_si1<0) && (safe_add_func_int32_t_s_s_si2<0) && (safe_add_func_int32_t_s_s_si1 < ((-2147483647-1)-safe_add_func_int32_t_s_s_si2)))) ?     ((safe_add_func_int32_t_s_s_si1)) :     (safe_add_func_int32_t_s_s_si1 + safe_add_func_int32_t_s_s_si2);
       }
        int32_t safe_sub_func_int32_t_s_s_si1;
int32_t safe_sub_func_int32_t_s_s_si2;
void  (safe_sub_func_int32_t_s_s)( void ) {
              (((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (((safe_sub_func_int32_t_s_s_si1 ^ ((safe_sub_func_int32_t_s_s_si1^safe_sub_func_int32_t_s_s_si2) & (~(2147483647))))-safe_sub_func_int32_t_s_s_si2)^safe_sub_func_int32_t_s_s_si2)) < 0) ?     ((safe_sub_func_int32_t_s_s_si1)) :     (safe_sub_func_int32_t_s_s_si1 - safe_sub_func_int32_t_s_s_si2);
       }
        uint8_t safe_add_func_uint8_t_u_u_ui1;
uint8_t safe_add_func_uint8_t_u_u_ui2;
void  (safe_add_func_uint8_t_u_u)( void ) {
          safe_add_func_uint8_t_u_u_ui1 + safe_add_func_uint8_t_u_u_ui2;
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
       }
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
        uint8_t safe_rshift_func_uint8_t_u_u_left;
unsigned int safe_rshift_func_uint8_t_u_u_right;
void  (safe_rshift_func_uint8_t_u_u)( void ) {
              (((unsigned int)safe_rshift_func_uint8_t_u_u_right) >= 32) ?     ((safe_rshift_func_uint8_t_u_u_left)) :     (safe_rshift_func_uint8_t_u_u_left >> ((unsigned int)safe_rshift_func_uint8_t_u_u_right));
       }
        uint16_t safe_mul_func_uint16_t_u_u_ui1;
uint16_t safe_mul_func_uint16_t_u_u_ui2;
void  (safe_mul_func_uint16_t_u_u)( void ) {
          ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) * ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
       }
         uint16_t safe_lshift_func_uint16_t_u_s_left;
int safe_lshift_func_uint16_t_u_s_right;
void  (safe_lshift_func_uint16_t_u_s)( void ) {
              ((((int)safe_lshift_func_uint16_t_u_s_right) < 0) || (((int)safe_lshift_func_uint16_t_u_s_right) >= 32) || (safe_lshift_func_uint16_t_u_s_left > ((65535) >> ((int)safe_lshift_func_uint16_t_u_s_right)))) ?     ((safe_lshift_func_uint16_t_u_s_left)) :     (safe_lshift_func_uint16_t_u_s_left << ((int)safe_lshift_func_uint16_t_u_s_right));
       }
        uint16_t safe_lshift_func_uint16_t_u_u_left;
unsigned int safe_lshift_func_uint16_t_u_u_right;
void  (safe_lshift_func_uint16_t_u_u)( void ) {
              ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) || (safe_lshift_func_uint16_t_u_u_left > ((65535) >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right)))) ?     ((safe_lshift_func_uint16_t_u_u_left)) :     (safe_lshift_func_uint16_t_u_u_left << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
       }
        uint16_t safe_rshift_func_uint16_t_u_s_left;
int safe_rshift_func_uint16_t_u_s_right;
void  (safe_rshift_func_uint16_t_u_s)( void ) {
              ((((int)safe_rshift_func_uint16_t_u_s_right) < 0) || (((int)safe_rshift_func_uint16_t_u_s_right) >= 32)) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((int)safe_rshift_func_uint16_t_u_s_right));
              (((unsigned int)safe_rshift_func_uint16_t_u_s_right) >= 32) ?     ((safe_rshift_func_uint16_t_u_s_left)) :     (safe_rshift_func_uint16_t_u_s_left >> ((unsigned int)safe_rshift_func_uint16_t_u_s_right));
       }
         uint32_t safe_add_func_uint32_t_u_u_ui1;
uint32_t safe_add_func_uint32_t_u_u_ui2;
void  (safe_add_func_uint32_t_u_u)( void ) {
          safe_add_func_uint32_t_u_u_ui1 + safe_add_func_uint32_t_u_u_ui2;
       }
                 static uint32_t crc32_tab[256];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_gentab (void) ;
        uint8_t crc32_byte_b;

        uint32_t crc32_8bytes_val;

        uint32_t transparent_crc_val;
char  transparent_crc_vname;
int transparent_crc_flag;

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
        void  func_1(void) {
           int16_t __trans_tmp_2;
           int8_t __trans_tmp_1;
           uint8_t l_18 = 0xBB;
           int32_t l_23 = 0x4456E348;
           uint32_t l_287 = 0x71E7E6F1;
           const int8_t l_307 = 0x5D;
           g_73 = (-30);
           
           for (g_73;
       (g_73 > 22);
       g_73++)     {
              uint8_t l_668 = 249U;
              uint8_t l_693 = 255U;
              const int32_t l_789 = 1;
              {
                       __trans_tmp_1 =      ((safe_rshift_func_int8_t_s_s_left < 0) || (((int)safe_rshift_func_int8_t_s_s_right) < 0) || (((int)safe_rshift_func_int8_t_s_s_right) >= 32))?     ((safe_rshift_func_int8_t_s_s_left)) :     (safe_rshift_func_int8_t_s_s_left >> ((int)safe_rshift_func_int8_t_s_s_right));
                     }
              
              {
                       __trans_tmp_2 =      ((safe_lshift_func_int16_t_s_u_left < 0) || (((unsigned int)safe_lshift_func_int16_t_s_u_right) >= 32) || (safe_lshift_func_int16_t_s_u_left > ((32767) >> ((unsigned int)safe_lshift_func_int16_t_s_u_right)))) ?     ((safe_lshift_func_int16_t_s_u_left)) :     (safe_lshift_func_int16_t_s_u_left << ((unsigned int)safe_lshift_func_int16_t_s_u_right));
                     }
              
              if (((g_73 >= (((0xF5A2F617 >= (((__trans_tmp_1) == ((254U == (g_515 == (((__trans_tmp_2) == 2U) || 253U))) & 0xB3198A8F)) | 0x797B69E0)) | g_372) && 0x14FDFC62)) > l_18))         
                  l_789;
             
          }
       }
        int32_t func_5_p_6;
int8_t func_5_p_7;
uint32_t func_5_p_8;
const uint32_t func_5_p_9;
void  func_5(   void) {
            g_194;
       }
        int16_t func_46_p_47;
uint8_t func_46_p_48;
void  func_46( void) {
            func_46_p_48;
       }
        uint32_t func_61_p_62;
void  func_61(void) {
            func_61_p_62;
       }
        int16_t func_95_p_96;
int32_t func_95_p_97;
int32_t func_95_p_98;
void  func_95(  void) {
            func_95_p_97;
       }
        int main (void) {
           int print_hash_value = 0;
           {
                   {
                           {
                                   crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab_0;
                                  }
                           
                           ;
                          }
                   
                   ;
                  }
           
           ;
       }
