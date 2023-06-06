 typedef unsigned long int __u_long;
 typedef signed char __int8_t;
 typedef unsigned char __uint8_t;
 typedef signed short int __int16_t;
 typedef unsigned short int __uint16_t;
 typedef signed int __int32_t;
 typedef unsigned int __uint32_t;
 typedef signed long int __int64_t;
 typedef unsigned long int __uint64_t;
 typedef __int8_t __int_least8_t;
 typedef __int8_t int8_t;
 typedef __int16_t int16_t;
 typedef __int32_t int32_t;
 typedef __int64_t int64_t;
 typedef __uint8_t uint8_t;
 typedef __uint16_t uint16_t;
 typedef __uint32_t uint32_t;
 typedef __uint64_t uint64_t;
 struct _IO_FILE;
                     extern int printf (const char *__restrict __format, ...);
                                                                      static void platform_main_begin(void) { }
 static void platform_main_end(uint32_t crc, int flag) {  printf ("checksum = %X\n", crc); }
   static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {   return     (si1 - si2); }
    static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) ;
 static int8_t (safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right ) ;
 static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) ;
   static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) ;
   static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) ;
  static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) ;
  static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) ;
    static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) ;
 static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {   return ui1 + ui2; }
 static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {   return ui1 - ui2; }
      static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right)); }
 static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {   return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right)); }
  static uint16_t (safe_rshift_func_uint16_t_u_s)(uint16_t left, int right ) {   return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right)); }
                                static uint32_t crc32_tab[256];
 static uint32_t crc32_context = 0xFFFFFFFFUL;
 static void crc32_gentab (void) {  uint32_t crc;  const uint32_t poly = 0xEDB88320UL;  int i, j;  for (i = 0; i < 256; i++) {   crc = i;   for (j = 8; j > 0; j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }   crc32_tab[i] = crc;  } }
 static void crc32_byte (uint8_t b) {  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF]; }
 static void crc32_8bytes (uint64_t val) {  crc32_byte ((val>>0) & 0xff);  crc32_byte ((val>>8) & 0xff);  crc32_byte ((val>>16) & 0xff);  crc32_byte ((val>>24) & 0xff);  crc32_byte ((val>>32) & 0xff);  crc32_byte ((val>>40) & 0xff);  crc32_byte ((val>>48) & 0xff);  crc32_byte ((val>>56) & 0xff); }
 static void transparent_crc (uint64_t val, char* vname, int flag) {  crc32_8bytes(val);  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  } }
 static int32_t g_11 = 0x272A7275L;
 static int32_t g_20 = 0x0CBEB969L;
 static const int32_t *g_19[1] = {&g_20};
 static int32_t *g_74 = (void*)0;
 static int32_t **g_73 = &g_74;
 static uint32_t g_77 = 1UL;
 static int32_t g_85 = (-1L);
 static int32_t g_87 = 1L;
 static uint8_t g_90 = 0xA2L;
 static uint32_t g_93 = 1UL;
 static uint32_t g_95 = 0UL;
 static uint16_t g_100 = 0UL;
 static uint8_t g_104 = 3UL;
 static int16_t g_106 = (-4L);
 static int8_t g_115[4][10][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
 static uint32_t g_121 = 0x4A01C31EL;
 static int32_t g_128 = 0L;
 static uint16_t g_172 = 9UL;
 static uint8_t *g_206 = &g_90;
 static uint8_t **g_269 = &g_206;
 static int8_t g_292 = 9L;
 static int16_t g_364 = 0xF1D1L;
 static int32_t ***g_366 = &g_73;
 static uint32_t *g_412[4][1] = {{&g_121}, {&g_121}, {&g_121}, {&g_121}};
 static uint32_t **g_411[6][10] = {{&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}, {&g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[3][0], &g_412[2][0], &g_412[1][0], &g_412[2][0], &g_412[2][0]}};
 static int8_t g_482 = 0xA4L;
 static int32_t ****g_552 = &g_366;
 static uint32_t **g_772[2] = {(void*)0, (void*)0};
 static uint32_t ***g_771[2] = {&g_772[0], &g_772[0]};
 static int16_t *g_792 = &g_106;
 static uint32_t g_858 = 0xB46FDF36L;
 static int16_t g_945 = 0xC844L;
 static uint8_t g_980 = 3UL;
 static int32_t g_984 = 0L;
 static int32_t g_1066 = 6L;
 static uint8_t g_1067[3][7] = {{0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L}, {0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L}, {0x08L, 0xE4L, 8UL, 0xE9L, 0x40L, 253UL, 0x40L}};
 static int8_t g_1068 = 0x25L;
 static uint32_t g_1075 = 1UL;
 static uint8_t g_1100 = 9UL;
 static const uint16_t g_1175 = 0xB3E2L;
 static int32_t * func_2(uint8_t p_3, int32_t * p_4);
 inline static uint8_t func_17(const int32_t * p_18);
 inline static const uint16_t func_1(void) {     int8_t l_16 = 1L;     int32_t *l_921[2][8][7] = {{{&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}}, {{&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}, {&g_85, &g_20, &g_85, (void*)0, &g_85, &g_87, &g_20}}};     int32_t *****l_942[4][2] = {{&g_552, (void*)0}, {&g_552, (void*)0}, {&g_552, (void*)0}, {&g_552, (void*)0}};     uint32_t ***l_943[2][3] = {{&g_411[5][9], &g_411[5][9], &g_411[5][4]}, {&g_411[5][9], &g_411[5][9], &g_411[5][4]}};     uint8_t l_946 = 0UL;     int8_t l_1004 = 0L;     int32_t *l_1010 = &g_20;     uint32_t ***l_1024 = &g_411[5][0];     int32_t l_1097[5][2][8] = {{{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}, {{(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}, {(-6L), 0xB495BAC3L, 1L, 0L, 0x4184C125L, (-6L), 1L, (-10L)}}};     uint32_t l_1098 = 0x879A852DL;     const uint16_t *l_1174 = &g_1175;     int8_t l_1180 = 0x38L;     uint8_t l_1183 = 0xFEL;     int i, j, k;     (***g_552) = func_2(((**g_269) = (((*g_792) = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(g_11, (safe_rshift_func_uint16_t_u_s(0x020BL, 2)))) | (safe_add_func_uint8_t_u_u(l_16, (g_11 || func_17(g_19[0]))))), 2))) | (!(g_128 | l_16)))), l_921[1][1][6]);     (***g_552) = (l_921[1][1][6] = l_921[1][1][6]);     for (g_90 = 0; (g_90 >= 57); g_90++)     {         int32_t l_937 = (-7L);         int32_t l_938 = 0x8C267EBAL;         uint32_t *l_956 = (void*)0;         int32_t ***l_976 = &g_73;         const int8_t l_977 = 1L;         uint32_t l_1016 = 0UL;         uint32_t ***l_1023[8] = {(void*)0, &g_411[4][8], (void*)0, &g_411[4][8], (void*)0, &g_411[4][8], (void*)0, &g_411[4][8]};         uint32_t *l_1142[3][8] = {{&g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}, {&g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}, {&g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075, &g_95, &g_1075}};         uint32_t ****l_1146 = &g_771[0];         int16_t *l_1162[7] = {(void*)0, &g_106, (void*)0, &g_106, (void*)0, &g_106, (void*)0};         uint32_t l_1165[4] = {0xB28DED35L, 0xB598FF87L, 0xB28DED35L, 0xB598FF87L};         const int32_t l_1182 = 0xA87564DFL;         int i, j;     }     return g_984; }
 static int32_t * func_2(uint8_t p_3, int32_t * p_4) {     int32_t l_922 = 4L;     int32_t *l_923 = &g_20;     (*l_923) = l_922;     return (*g_73); }
 inline static uint8_t func_17(const int32_t * p_18) {     uint16_t l_28 = 1UL;     int32_t *l_611 = &g_20;     const uint8_t l_735 = 0x48L;     int16_t l_744 = 0x8E95L;     int32_t ***l_778[3];     int32_t l_807 = 1L;     uint32_t l_874 = 0x384A7072L;     uint32_t l_875 = 4294967295UL;     uint8_t *l_886[7][5] = {{&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}, {&g_104, &g_104, &g_104, &g_90, &g_90}};     uint8_t *l_887[2][1][1];     uint32_t ***l_915 = &g_772[0];     uint8_t l_918 = 0x5FL;     int32_t l_919 = 0L;     int i, j, k;     for (i = 0; i < 3; i++)         l_778[i] = &g_73;     for (i = 0; i < 2; i++)     {         for (j = 0; j < 1; j++)         {             for (k = 0; k < 1; k++)                 l_887[i][j][k] = (void*)0;         }     }     return (*g_206); }
 int main (void) {     int i, j, k;     int print_hash_value = 0;     platform_main_begin();     crc32_gentab();     func_1();     transparent_crc(g_11, "g_11", print_hash_value);     transparent_crc(g_20, "g_20", print_hash_value);     transparent_crc(g_77, "g_77", print_hash_value);     transparent_crc(g_85, "g_85", print_hash_value);     transparent_crc(g_87, "g_87", print_hash_value);     transparent_crc(g_90, "g_90", print_hash_value);     transparent_crc(g_93, "g_93", print_hash_value);     transparent_crc(g_95, "g_95", print_hash_value);     transparent_crc(g_100, "g_100", print_hash_value);     transparent_crc(g_104, "g_104", print_hash_value);     transparent_crc(g_106, "g_106", print_hash_value);     for (i = 0; i < 4; i++)     {         for (j = 0; j < 10; j++)         {             for (k = 0; k < 1; k++)             {                 transparent_crc(g_115[i][j][k], "g_115[i][j][k]", print_hash_value);                 if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);             }         }     }     transparent_crc(g_121, "g_121", print_hash_value);     transparent_crc(g_128, "g_128", print_hash_value);     transparent_crc(g_172, "g_172", print_hash_value);     transparent_crc(g_292, "g_292", print_hash_value);     transparent_crc(g_364, "g_364", print_hash_value);     transparent_crc(g_482, "g_482", print_hash_value);     transparent_crc(g_858, "g_858", print_hash_value);     transparent_crc(g_945, "g_945", print_hash_value);     transparent_crc(g_980, "g_980", print_hash_value);     transparent_crc(g_984, "g_984", print_hash_value);     transparent_crc(g_1066, "g_1066", print_hash_value);     for (i = 0; i < 3; i++)     {         for (j = 0; j < 7; j++)         {             transparent_crc(g_1067[i][j], "g_1067[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }     }     transparent_crc(g_1068, "g_1068", print_hash_value);     transparent_crc(g_1075, "g_1075", print_hash_value);     transparent_crc(g_1100, "g_1100", print_hash_value);     transparent_crc(g_1175, "g_1175", print_hash_value);     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);     return 0; }