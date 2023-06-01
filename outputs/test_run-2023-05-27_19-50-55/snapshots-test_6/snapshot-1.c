 typedef signed char __int8_t;
  typedef unsigned char __uint8_t;
  typedef signed short int __int16_t;
  typedef unsigned short int __uint16_t;
  typedef signed int __int32_t;
  typedef unsigned int __uint32_t;
  typedef unsigned long int __uint64_t;
  typedef __int8_t int8_t;
  typedef __int16_t int16_t;
  typedef __int32_t int32_t;
  typedef __uint8_t uint8_t;
  typedef __uint16_t uint16_t;
  typedef __uint32_t uint32_t;
  typedef __uint64_t uint64_t;
                                                                       static void platform_main_begin(void) {
 }
  static void platform_main_end(uint32_t crc, int flag) {
  printf ("checksum = %X\n", crc);
 }
    static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
   return     (si1 - si2);
 }
                          static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
   return ui1 - ui2;
 }
                                   static uint32_t crc32_tab[256];
  static uint32_t crc32_context = 0xFFFFFFFFUL;
  static void crc32_gentab (void) {
  uint32_t crc;
  const uint32_t poly = 0xEDB88320UL;
  int i, j;
  for (i = 0;
 i < 256;
 i++) {   crc = i;   for (j = 8; j > 0; j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }   crc32_tab[i] = crc;  }
 }
  static void crc32_byte (uint8_t b) {
  crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
 }
  static void crc32_8bytes (uint64_t val) {
  crc32_byte ((val>>32) & 0xff);
  crc32_byte ((val>>40) & 0xff);
  crc32_byte ((val>>48) & 0xff);
  crc32_byte ((val>>56) & 0xff);
 }
  static void transparent_crc (uint64_t val, char* vname, int flag) {
  crc32_8bytes(val);
  if (flag) {     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);  }
 }
  struct S0 {
    int32_t f0;
 };
  static int32_t g_2 = 0x90DA1152L;
  static int32_t g_5 = 0xED23B618L;
  static int32_t g_9[6][1][2] = {
{{8L,0x08CCCDDDL}}
,{{0x08CCCDDDL,8L}}
,{{0x08CCCDDDL,0x08CCCDDDL}}
,{{8L,0x08CCCDDDL}}
,{{0x08CCCDDDL,8L}}
,{{0x08CCCDDDL,0x08CCCDDDL}}
};
  static int32_t g_12 = 5L;
  static struct S0 g_15 = {
7L};
  static uint8_t g_54 = 0x39L;
  static int16_t g_56[10] = {
(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
  static int16_t g_65 = 0xBD5FL;
  static int16_t *g_67 = &g_65;
  static uint32_t g_84 = 1UL;
  static uint8_t g_93 = 255UL;
  static int8_t g_102 = 0xDDL;
  static uint16_t g_104 = 65527UL;
  static uint32_t g_122[4] = {
0xAC9F79E4L,0xAC9F79E4L,0xAC9F79E4L,0xAC9F79E4L};
  static uint8_t g_142 = 0x43L;
  static struct S0 g_146[5][7][1] = {
{{{0x6A910B13L}},{{0xB8760324L}},{{0x6A910B13L}},{{0x0BD6DA29L}},{{1L}},{{1L}},{{0x0BD6DA29L}}}
,{{{0x6A910B13L}},{{0xB8760324L}},{{0x6A910B13L}},{{0x0BD6DA29L}},{{1L}},{{1L}},{{0x0BD6DA29L}}}
,{{{0x6A910B13L}},{{0xB8760324L}},{{0x6A910B13L}},{{0x0BD6DA29L}},{{1L}},{{1L}},{{0xB8760324L}}}
,{{{0x0BD6DA29L}},{{0x0F57B567L}},{{0x0BD6DA29L}},{{0xB8760324L}},{{0x75C33281L}},{{0x75C33281L}},{{0xB8760324L}}}
,{{{0x0BD6DA29L}},{{0x0F57B567L}},{{0x0BD6DA29L}},{{0xB8760324L}},{{0x75C33281L}},{{0x75C33281L}},{{0xB8760324L}}}
};
  static int32_t *g_169 = &g_146[2][2][0].f0;
  static uint32_t *g_175[1] = {
(void*)0};
  static int16_t **g_198[1] = {
&g_67};
  static int16_t ***g_197 = &g_198[0];
  static uint32_t g_251 = 0xC5A20AEDL;
  static int32_t **g_258 = &g_169;
  static int32_t ***g_257 = &g_258;
  static int8_t *g_317 = &g_102;
  static int8_t **g_316 = &g_317;
  static int8_t ***g_372 = &g_316;
  static const int32_t g_443 = 0x944CA479L;
  static uint16_t g_480 = 1UL;
  static int16_t g_503 = 0L;
  static uint32_t g_607 = 0x8271C945L;
  static int16_t func_1(void) {
     int32_t l_34[7][6][5] = {{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),1L,(-1L),0xE7AEBB1BL,(-1L)},{1L,1L,0xA3A7221EL,1L,1L},{(-1L),0xE7AEBB1BL,(-1L),1L,(-1L)},{1L,(-6L),(-6L),1L,(-6L)}},{{(-1L),0xE7AEBB1BL,1L,0xE7AEBB1BL,(-1L)},{(-6L),1L,(-6L),(-6L),1L},{(-1L),0xBF7C295AL,1L,1L,1L},{(-6L),(-6L),1L,(-6L),(-6L)},{1L,1L,1L,0xBF7C295AL,(-1L)},{(-6L),0xA3A7221EL,0xA3A7221EL,(-6L),0xA3A7221EL}},{{(-1L),1L,(-1L),1L,(-1L)},{0xA3A7221EL,(-6L),0xA3A7221EL,0xA3A7221EL,(-6L)},{(-1L),0xBF7C295AL,1L,1L,1L},{(-6L),(-6L),1L,(-6L),(-6L)},{1L,1L,1L,0xBF7C295AL,(-1L)},{(-6L),0xA3A7221EL,0xA3A7221EL,(-6L),0xA3A7221EL}},{{(-1L),1L,(-1L),1L,(-1L)},{0xA3A7221EL,(-6L),0xA3A7221EL,0xA3A7221EL,(-6L)},{(-1L),0xBF7C295AL,1L,1L,1L},{(-6L),(-6L),1L,(-6L),(-6L)},{1L,1L,1L,0xBF7C295AL,(-1L)},{(-6L),0xA3A7221EL,0xA3A7221EL,(-6L),0xA3A7221EL}}};
     int32_t l_66 = 5L;
     int16_t l_399 = 1L;
     struct S0 *l_656[4][1] = {{&g_146[2][2][0]},{&g_146[2][2][0]},{&g_146[2][2][0]},{&g_146[2][2][0]}};
     uint8_t l_683 = 0x8FL;
     int32_t ****l_684 = &g_257;
     uint16_t l_695[5][4] = {{65530UL,65535UL,65535UL,65530UL},{1UL,0x73D1L,65535UL,0UL},{65530UL,65526UL,1UL,65526UL},{65526UL,65535UL,1UL,65526UL},{1UL,65526UL,0UL,0UL}};
     uint8_t l_705[7][7] = {{0xA9L,0x88L,0xA5L,0x88L,0xA9L,0x3AL,0xA9L},{0UL,0x64L,0x64L,0UL,0x64L,0x64L,0UL},{0x84L,0x88L,0x84L,1UL,0xA9L,1UL,0x84L},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0xA9L,1UL,0x84L,0x88L,0x84L,1UL,0xA9L},{0x64L,0UL,0x64L,0x64L,0UL,0x64L,0x64L},{0xA9L,0x88L,0xA5L,0x88L,0xA9L,0x3AL,0xA9L}};
     int32_t l_777 = 1L;
     struct S0 l_799[5] = {{1L},{1L},{1L},{1L},{1L}};
     struct S0 l_820 = {-6L};
     int32_t l_821 = 0xEEF8580BL;
     int i, j, k;
     for (g_2 = 24;
 (g_2 >= (-22));
 g_2 = safe_sub_func_int8_t_s_s(g_2, 7))     {         uint32_t l_8[10];         int32_t l_29[3][9] = {{0L,0x3423637BL,0x8F62C4DFL,0x8F62C4DFL,0x3423637BL,0L,0x3423637BL,0x8F62C4DFL,0x8F62C4DFL},{0x0477AE27L,0x0477AE27L,0x6C4779D4L,0x1FCC8AF9L,0x6C4779D4L,0x0477AE27L,0x0477AE27L,0x6C4779D4L,0x1FCC8AF9L},{0xF4CC511EL,0x3423637BL,0xF4CC511EL,0L,0L,0xF4CC511EL,0x3423637BL,0xF4CC511EL,0L}};         int16_t * const l_68 = (void*)0;         int8_t l_420 = (-1L);         struct S0 *l_646[2][1];         struct S0 **l_655[9][5][5] = {{{&l_646[0][0],(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[1][0]},{&l_646[1][0],(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[0][0],(void*)0,&l_646[0][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}},{{(void*)0,(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0},{&l_646[0][0],&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[1][0],(void*)0,&l_646[0][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0]},{(void*)0,&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0,&l_646[1][0]},{&l_646[0][0],&l_646[0][0],&l_646[1][0],(void*)0,(void*)0},{&l_646[0][0],(void*)0,&l_646[1][0],&l_646[0][0],&l_646[1][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,(void*)0,&l_646[1][0],&l_646[1][0],&l_646[0][0]},{(void*)0,&l_646[0][0],(void*)0,(void*)0,&l_646[1][0]},{&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,(void*)0,(void*)0,&l_646[1][0],&l_646[1][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[1][0]},{&l_646[0][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]},{(void*)0,&l_646[0][0],(void*)0,&l_646[1][0],&l_646[0][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0}},{{&l_646[0][0],&l_646[1][0],(void*)0,(void*)0,&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,&l_646[1][0],&l_646[1][0],(void*)0,(void*)0},{&l_646[1][0],&l_646[0][0],&l_646[1][0],(void*)0,&l_646[1][0]},{(void*)0,&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]}},{{&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[0][0],&l_646[1][0]},{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[0][0],(void*)0,&l_646[1][0]},{&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0]},{&l_646[1][0],(void*)0,&l_646[1][0],(void*)0,&l_646[0][0]}},{{&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0],(void*)0},{(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0},{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0]},{(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]},{&l_646[1][0],&l_646[1][0],&l_646[0][0],&l_646[0][0],&l_646[0][0]}},{{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],(void*)0},{&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[1][0],&l_646[0][0]},{&l_646[1][0],(void*)0,&l_646[1][0],&l_646[1][0],&l_646[1][0]},{&l_646[1][0],&l_646[0][0],&l_646[1][0],&l_646[1][0],&l_646[1][0]},{(void*)0,&l_646[0][0],(void*)0,&l_646[1][0],&l_646[1][0]}}};         const int32_t *l_682 = &g_9[2][0][0];         int8_t ****l_691[6] = {&g_372,&g_372,&g_372,&g_372,&g_372,&g_372};         int32_t l_710 = (-4L);         int16_t ***l_715 = (void*)0;         int16_t ****l_716[5][1];         struct S0 * const *l_717 = &l_656[2][0];         uint16_t *l_724 = &g_104;         uint16_t *l_729 = &l_695[3][3];         uint8_t l_733 = 0x58L;         int32_t l_766 = 0x867B5445L;         uint32_t **l_819 = &g_175[0];         int i, j, k;         for (i = 0; i < 10; i++)             l_8[i] = 4294967287UL;         for (i = 0; i < 2; i++)         {             for (j = 0; j < 1; j++)                 l_646[i][j] = &g_15;         }         for (i = 0; i < 5; i++)         {             for (j = 0; j < 1; j++)                 l_716[i][j] = &g_197;         }         for (g_5 = (-8); (g_5 == (-4)); ++g_5)         {             for (g_9[1][0][0] = 0; g_9[1][0][0] < 10; g_9[1][0][0] += 1)             {                 l_8[g_9[1][0][0]] = 3UL;             }             return g_9[4][0][1];         }         for (g_5 = 22; (g_5 < (-25)); g_5 = safe_sub_func_uint8_t_u_u(g_5, 7))         {             uint32_t l_52 = 0x54C3DC4DL;             uint8_t *l_53 = &g_54;             int16_t *l_55 = &g_56[4];             int16_t *l_64[10] = {&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65,&g_65};             int32_t *l_458 = &l_66;             struct S0 *l_611 = (void*)0;             struct S0 **l_610 = &l_611;             struct S0 *l_612 = &g_15;             struct S0 ***l_654[2];             int32_t *****l_685 = &l_684;             int8_t ****l_692 = (void*)0;             int i;             for (i = 0; i < 2; i++)                 l_654[i] = &l_610;             if (g_2)                 break;             for (g_12 = 0; (g_12 == (-13)); g_12 = safe_sub_func_int8_t_s_s(g_12, 1))             {                 struct S0 *l_16[8];                 int i;                 for (i = 0; i < 8; i++)                     l_16[i] = (void*)0;                 g_15 = g_15;             }         }     }
     return l_821;
 }
  int main (void) {
     int i, j, k;
     int print_hash_value = 0;
     platform_main_begin();
     crc32_gentab();
     func_1();
     transparent_crc(g_2, "g_2", print_hash_value);
     transparent_crc(g_5, "g_5", print_hash_value);
     for (i = 0;
 i < 6;
 i++)     {         for (j = 0; j < 1; j++)         {             for (k = 0; k < 2; k++)             {                 transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);                 if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);             }         }     }
     transparent_crc(g_12, "g_12", print_hash_value);
     transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
     transparent_crc(g_54, "g_54", print_hash_value);
     for (i = 0;
 i < 10;
 i++)     {         transparent_crc(g_56[i], "g_56[i]", print_hash_value);         if (print_hash_value) printf("index = [%d]\n", i);     }
     transparent_crc(g_607, "g_607", print_hash_value);
     platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
     return 0;
 }
