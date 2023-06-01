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
  }
   __mbstate_t;
   typedef struct _G_fpos_t {
  }
   __fpos64_t;
                                                                        static void platform_main_begin(void) {
  }
    static int8_t (safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 + si2);
  }
   static int8_t (safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     (si1 - si2);
  }
    static int8_t (safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
  }
   static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
   static int8_t (safe_lshift_func_int8_t_s_s)(int8_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
  }
    static int8_t (safe_rshift_func_int8_t_s_s)(int8_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
  }
   static int8_t (safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right ) {
    return     ((left < 0) || (((unsigned int)right) >= 32)) ?     ((left)) :     (left >> ((unsigned int)right));
  }
    static int16_t (safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     (si1 + si2);
    return     (si1 - si2);
  }
    static int16_t (safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
    return     ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
   static int16_t (safe_lshift_func_int16_t_s_s)(int16_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
    return     ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
  }
   static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
  }
     static int32_t (safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?     ((si1)) :     (si1 + si2);
  }
   static int32_t (safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?     ((si1)) :     (si1 - si2);
  }
    static int32_t (safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 % si2);
  }
   static int32_t (safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
        static uint8_t (safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 + ui2;
  }
   static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 - ui2;
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
    static uint8_t (safe_lshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?     ((left)) :     (left << ((int)right));
  }
     static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
  }
    static uint16_t (safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return ui1 + ui2;
  }
   static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return ui1 - ui2;
  }
    static uint16_t (safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
   static uint16_t (safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
  }
       static uint32_t (safe_unary_minus_func_uint32_t_u)(uint32_t ui ) {
    return -ui;
  }
   static uint32_t (safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return ui1 + ui2;
  }
   static uint32_t (safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return ui1 - ui2;
  }
    static uint32_t (safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
   static uint32_t (safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 ) {
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 / ui2);
  }
            static uint32_t crc32_tab[256];
   static uint32_t crc32_context = 0xFFFFFFFFUL;
   static void crc32_gentab (void) {
   uint32_t crc;
   const uint32_t poly = 0xEDB88320UL;
   int i, j;
   for (i = 0;
  i < 256;
  i++) {
   crc = i;
   for (j = 8;
 j > 0;
 j--) {    if (crc & 1) {     crc = (crc >> 1) ^ poly;    } else {     crc >>= 1;    }   }
   crc32_tab[i] = crc;
  }
  }
   static void crc32_byte (uint8_t b) {
   crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
  }
   static void crc32_8bytes (uint32_t val) {
   crc32_byte ((val>>0) & 0xff);
  }
   static void transparent_crc (uint32_t val, char* vname, int flag) {
   crc32_8bytes(val);
  }
   struct S0 {
     int32_t f0;
  };
   static int8_t g_19 = 0xF1;
   static int32_t g_24[10] = {
 4,4,4,4,4,4,4,4,4,4};
   static int32_t *g_23 = &g_24[8];
   static const int32_t g_27 = (-2);
   static const int32_t *g_26 = &g_27;
   static int16_t g_34[8] = {
 0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C,0xAA1C};
   static uint8_t g_36[5][7] = {
 };
   static uint8_t g_52 = 1U;
   static uint16_t g_66 = 0U;
   static uint8_t g_67 = 0U;
   static int32_t g_69 = 0x40913DB3;
   static int16_t g_83 = 0x0487;
   static int32_t g_95 = 0x54E6A768;
   static uint32_t g_96 = 0x6F2FD6C9;
   static int16_t **g_98 = (void*)0;
   static int8_t g_137[5] = {
 0xC9C70339};
   static int32_t * const *g_222[4] = {
 &g_23,&g_23,&g_23,&g_23};
   static int32_t * const **g_221 = &g_222[3];
   static int16_t ** const *g_275 = &g_98;
   static int16_t *g_357 = (void*)0;
   static int16_t **g_356[2][3][5] = {
 };
   static uint8_t *g_364[3][7] = {
 };
   static uint8_t **g_363 = &g_364[1][2];
   static int16_t g_376 = 0xAB47;
   static int8_t g_390[3][3] = {
 };
   static const int8_t *g_394 = &g_137[2];
   static const int8_t **g_393 = &g_394;
   static struct S0 g_411 = {
 -6};
   static int8_t g_470 = 0x45;
   static uint16_t *g_476 = (void*)0;
   static int8_t **g_510 = (void*)0;
   static int8_t ***g_509 = &g_510;
   static int8_t ****g_508 = &g_509;
   static struct S0 *g_521 = &g_411;
   static const int32_t * const **g_676 = (void*)0;
   static uint16_t g_720 = 0xD661;
   static uint16_t **g_802 = &g_476;
   static const uint16_t *g_808 = &g_720;
   static const uint16_t **g_807 = &g_808;
   static const uint16_t ***g_806 = &g_807;
   static int32_t * func_12(int16_t p_13, const int8_t p_14, const int32_t * p_15, int16_t p_16);
   static int32_t * func_20(int32_t * const p_21);
   static uint8_t func_1(void) {
      int32_t **l_927 = &g_23;
      uint16_t **l_933 = &g_476;
      uint16_t *l_934 = &g_720;
      if ((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((**l_927), (1U ^ (249U || ((~((**l_927) | (0x9B46EB46 ^ (((*g_806) != l_933) == (((*l_934) = (**l_927)) > (**l_927)))))) == (**l_927)))))) == g_470), (**g_393))))     {
     }
      else     {
         for (g_52 = 22;
 (g_52 != 9);
 --g_52)         {             const int32_t *l_942[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};             int i;             g_26 = (l_942[1] = &g_27);             return (**g_363);         }
     }
  }
   static int32_t * func_2(uint32_t p_3, int32_t * p_4, int32_t * p_5, uint32_t p_6, int32_t * p_7) {
      for (g_19 = 0;
  (g_19 > 15);
  ++g_19)     {
         int16_t l_890 = (-1);
         (*p_5) = (safe_add_func_int32_t_s_s((*p_5), l_890));
     }
      return p_5;
  }
   static uint16_t func_10(int32_t * p_11) {
      int32_t *l_48 = (void*)0;
      uint16_t l_599 = 0x3F55;
      int32_t l_608 = 0xD444DE94;
      const int32_t *l_636 = &g_27;
      int8_t ** const *l_662[5];
      struct S0 **l_682[6];
      const int8_t l_686[8] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
      int32_t ****l_703 = (void*)0;
      int i;
      for (i = 0;
  i < 5;
  i++)         l_662[i] = &g_510;
      for (i = 0;
  i < 6;
  i++)         l_682[i] = &g_521;
      for (g_19 = 7;
  (g_19 >= 2);
  g_19 -= 1)     {
     }
      if (((*l_636) && (**g_363)))     {
         int32_t l_663 = (-1);
         int32_t *l_669 = &l_608;
         const int32_t * const *l_674 = &g_26;
         const int32_t * const **l_673 = &l_674;
         uint8_t l_698[5] = {9U,9U,9U,9U,9U};
         int8_t *l_717 = &g_19;
         int8_t **l_716 = &l_717;
         if (((void*)0 != &g_521))         {             int8_t l_679 = 7;             const int32_t *l_725[10][6][2] = {{{(void*)0,(void*)0},{&l_608,&l_663},{&l_663,&l_663},{&l_608,(void*)0},{(void*)0,&g_24[0]},{&l_663,&l_608}},{{&l_608,&l_663},{&g_69,&l_663},{&g_69,&l_663},{&l_608,&l_608},{&l_663,&g_24[0]},{(void*)0,&l_608}},{{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663}},{{(void*)0,&g_24[7]},{(void*)0,&l_663},{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608}},{{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]}},{{(void*)0,&l_663},{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608}},{{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]},{(void*)0,&l_663}},{{(void*)0,&l_663},{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608}},{{&g_69,&l_608},{&l_663,&l_663},{(void*)0,&l_663},{(void*)0,&g_24[7]},{(void*)0,&l_663},{(void*)0,&l_663}},{{&l_663,&l_608},{&g_69,&l_608},{&l_663,&l_608},{&l_608,&l_608},{&l_663,&l_608},{&g_69,&l_608}}};             int16_t l_736 = 0xB3E5;             int32_t l_737 = 0x0481B764;             int i, j, k;             for (g_66 = 27; (g_66 < 23); --g_66)             {                 g_23 = (**g_221);             }             if (((*p_11) = 0x07AB5164))             {                 int32_t **l_672 = &l_48;                 const int32_t * const ***l_675[7][10] = {{&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,(void*)0,&l_673},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,&l_673,(void*)0},{&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673,(void*)0,&l_673,(void*)0},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673},{(void*)0,&l_673,(void*)0,&l_673,&l_673,&l_673,&l_673,&l_673,(void*)0,&l_673},{&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673},{(void*)0,&l_673,(void*)0,(void*)0,&l_673,&l_673,&l_673,&l_673,&l_673,&l_673}};                 int i, j;                 (*l_672) = &l_663;                 g_676 = l_673;             }             else             {                 int32_t **l_683[8] = {&l_669,&l_669,&l_48,&l_669,&l_669,&l_48,&l_669,&l_669};                 int32_t *** const l_705 = &l_683[5];                 int32_t *** const *l_704[5][2] = {{&l_705,(void*)0},{&l_705,&l_705},{(void*)0,(void*)0},{(void*)0,&l_705},{&l_705,(void*)0}};                 int i, j;                 if ((safe_add_func_int16_t_s_s((((l_669 = func_12(l_679, ((((safe_add_func_uint16_t_u_u(0x79FB, (*l_636))) >= 1U) != 6U) || (l_682[5] == &g_521)), func_20((p_11 = p_11)), (***l_673))) == (*l_674)) != (*l_636)), 0x8639)))                 {                     int8_t *l_685 = (void*)0;                     int8_t **l_684 = &l_685;                     int32_t l_689 = (-7);                     int32_t l_696[3];                     int32_t l_697 = (-1);                     int16_t *l_718 = &g_34[6];                     uint16_t l_719 = 65535U;                     int32_t *l_721 = (void*)0;                     int i;                     for (i = 0; i < 3; i++)                         l_696[i] = 1;                     g_26 = func_12((((**g_508) = l_684) != &l_685), l_686[6], func_20((**g_221)), l_679);                     (*g_521) = (*g_521);                     for (l_663 = 0; (l_663 < 3); l_663 = safe_add_func_int32_t_s_s(l_663, 4))                     {                         uint16_t **l_691 = (void*)0;                         uint16_t ***l_690 = &l_691;                         if (l_689)                             break;                         (*l_690) = (void*)0;                         (*l_669) = (((safe_mod_func_int8_t_s_s((((*g_393) != &l_679) < ((0x41AF >= ((l_689 = (&g_96 == (void*)0)) & l_679)) ^ ((((safe_div_func_int8_t_s_s((l_696[1] = 0), 0x94)) <= (*p_11)) > 0xAD) < 1U))), 0x27)) >= l_697) && (***l_673));                         if ((***g_221))                             continue;                     }                     l_721 = func_12(l_698[1], ((((safe_mod_func_int32_t_s_s((l_679 <= ((safe_mod_func_uint32_t_u_u(g_27, (*g_26))) && ((l_703 == l_704[3][1]) ^ (safe_mod_func_int16_t_s_s((65535U | ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(0, (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((*l_718) = ((**g_508) != l_716)) <= (***l_673)) < l_696[2]), 0xAD9D272E)), (*p_11))))), 0x381DCDA5)) == (*p_11))), l_696[1]))))), 4294967291U)) | (**l_674)) | l_719) == g_720), &l_696[1], l_679);                 }                 else                 {                     int16_t ****l_722 = (void*)0;                     int32_t **l_723 = (void*)0;                     int32_t **l_724 = &l_669;                     g_275 = &g_356[0][0][0];                     (*l_724) = (**g_221);                 }             }             l_725[9][5][1] = (**l_673);             for (g_376 = 0; (g_376 >= (-18)); g_376--)             {                 uint32_t l_728 = 0x03766958;                 int32_t l_729 = 0x035BBBF3;                 int32_t l_732 = (-1);                 int16_t *l_733 = &g_83;                 l_737 = ((*p_11) = (((l_729 = (g_96 = l_728)) & ((safe_rshift_func_int8_t_s_u((l_732 = (&l_599 == (void*)0)), ((**g_363) = (**l_674)))) & ((((*l_717) = 0xF5) <= (((g_470 <= l_728) < ((*l_733) = (*l_636))) < (safe_rshift_func_uint8_t_u_u(((void*)0 != (*g_275)), l_736)))) < (**g_393)))) > 3U));                 return (**l_674);             }         }
     }
  }
   static int32_t * func_12(int16_t p_13, const int8_t p_14, const int32_t * p_15, int16_t p_16) {
      return &g_24[7];
  }
   static int32_t * func_20(int32_t * const p_21) {
      return g_23;
  }
        int main (void) {
      int i, j, k;
      int print_hash_value = 0;
      for (i = 0;
  i < 10;
  i++)     {
     }
      for (i = 0;
  i < 8;
  i++)     {
     }
      for (i = 0;
  i < 5;
  i++)     {
         for (j = 0;
 j < 7;
 j++)         {             transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }
     }
      for (i = 0;
  i < 3;
  i++)     {
         for (j = 0;
 j < 3;
 j++)         {             transparent_crc(g_390[i][j], "g_390[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }
     }
  }
