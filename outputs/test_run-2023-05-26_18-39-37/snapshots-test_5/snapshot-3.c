 typedef signed char __int8_t;
   typedef unsigned char __uint8_t;
   typedef signed short int __int16_t;
   typedef unsigned short int __uint16_t;
   typedef signed int __int32_t;
   typedef unsigned int __uint32_t;
   typedef struct {
  }
   __fsid_t;
   typedef __int8_t int8_t;
   typedef __int16_t int16_t;
   typedef __int32_t int32_t;
   typedef __uint8_t uint8_t;
   typedef __uint16_t uint16_t;
   typedef __uint32_t uint32_t;
   extern void __assert_fail (const char *__assertion, const char *__file,       unsigned int __line, const char *__function)      __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
                                                                        static void platform_main_begin(void) {
  }
   static int8_t (safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 ) {
    return     ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?     ((si1)) :     (si1 / si2);
  }
         static int16_t (safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 ) {
    return     (si1 - si2);
    return     si1 * si2;
  }
     static int16_t (safe_rshift_func_int16_t_s_s)(int16_t left, int right ) {
    return     ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?     ((left)) :     (left >> ((int)right));
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
       static uint8_t (safe_unary_minus_func_uint8_t_u)(uint8_t ui ) {
    return -ui;
  }
   static uint8_t (safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ui1 - ui2;
  }
   static uint8_t (safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 ) {
    return ((unsigned int)ui1) * ((unsigned int)ui2);
    return     (ui2 == 0) ?     ((ui1)) :     (ui1 % ui2);
  }
      static uint8_t (safe_rshift_func_uint8_t_u_s)(uint8_t left, int right ) {
    return     ((((int)right) < 0) || (((int)right) >= 32)) ?     ((left)) :     (left >> ((int)right));
  }
   static uint8_t (safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right ) {
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
  }
     static uint16_t (safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return ui1 - ui2;
  }
   static uint16_t (safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 ) {
    return ((unsigned int)ui1) * ((unsigned int)ui2);
  }
      static uint16_t (safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right ) {
    return     ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?     ((left)) :     (left << ((unsigned int)right));
    return     (((unsigned int)right) >= 32) ?     ((left)) :     (left >> ((unsigned int)right));
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
     volatile uint32_t csmith_sink_ = 0;
   static uint8_t g_5 = 1U;
   static uint8_t g_8 = 255U;
   static uint32_t g_13 = 1U;
   static int32_t g_15 = 0x23DCDF5E;
   static int32_t g_18 = 0xF42C60ED;
   static int8_t g_24[4][8] = {
 };
   static int32_t g_100 = 0;
   static uint32_t *g_130 = (void*)0;
   static uint32_t g_145 = 1U;
   static int32_t *g_209 = &g_15;
   static int32_t **g_208[3] = {
 &g_209,&g_209,&g_209};
   static uint32_t * const g_248 = &g_145;
   static uint32_t * const *g_247 = &g_248;
   static uint32_t g_254 = 0x2D114BE7;
   static int32_t g_268 = 0xCA8E44E8;
   static uint8_t g_291 = 247U;
   static int8_t *g_319[6][2] = {
 };
   static uint16_t g_341 = 65527U;
   static uint16_t *g_340 = &g_341;
   static int8_t **g_411 = &g_319[1][0];
   static int32_t ***g_455[8] = {
 &g_208[0],&g_208[0],&g_208[1],&g_208[0],&g_208[0],&g_208[1],&g_208[0],&g_208[0]};
   static int8_t **g_465[4][7][6] = {
 };
   static int8_t g_602 = 0xDF;
   static int8_t * const g_601 = &g_602;
   static int8_t * const *g_600[8][5] = {
 };
   static uint8_t *g_616 = &g_291;
   static uint8_t **g_615 = &g_616;
   static uint8_t ***g_614 = &g_615;
   static int32_t g_633 = (-5);
   static int32_t g_638 = 0xD647801E;
   static uint16_t **g_743 = &g_340;
   static uint16_t ***g_742 = &g_743;
   static const uint32_t *g_777 = (void*)0;
   static const uint32_t * const *g_776[3] = {
 &g_777,&g_777,&g_777};
   static const uint32_t * const **g_775 = &g_776[0];
   static int32_t *g_946 = &g_268;
   static uint8_t ** const *g_948 = &g_615;
   static uint8_t ** const **g_947 = &g_948;
   static int16_t *g_994 = (void*)0;
   static uint32_t **g_1171 = &g_130;
   static uint32_t ***g_1170 = &g_1171;
   static int8_t ***g_1191 = &g_411;
   static int8_t ****g_1190 = &g_1191;
   static const int32_t *g_1206 = &g_633;
   static const int32_t **g_1205 = &g_1206;
   static const int32_t ***g_1204 = &g_1205;
   static uint16_t g_1246[2] = {
 0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307,0x79A35307};
   static int16_t g_1452[9][3][4] = {
 };
   static int32_t *** const *g_1524 = &g_455[3];
   static uint32_t ****g_1652 = &g_1170;
   static uint32_t ***** const g_1651 = &g_1652;
   static uint32_t *****g_1653 = (void*)0;
   static int32_t func_9(uint32_t p_10);
   static int32_t func_32(int16_t p_33, int32_t * p_34);
   static uint32_t * func_35(int32_t p_36, int16_t p_37, uint8_t * p_38, uint32_t * p_39, int8_t p_40);
   static const int32_t * func_45(int32_t * const p_46);
   static int32_t * func_108(int32_t ** p_109, uint8_t * const p_110, const int32_t p_111, uint32_t p_112, int32_t p_113);
   static int8_t func_1(void) {
      int32_t *l_1594 = &g_100;
      uint8_t ***l_1595 = &g_615;
      int32_t *l_1606 = &g_633;
      int16_t **l_1648 = &g_994;
      int32_t l_1669[8];
      int i, j;
      for (i = 0;
  i < 8;
  i++)         l_1669[i] = 0xC2A517C2;
      if ((safe_sub_func_int16_t_s_s(((+0U) | g_5), ((g_5 <= (safe_unary_minus_func_uint8_t_u(((g_8 = 253U) | 0x4E)))) && g_5))))     {
         int16_t l_11 = 1;
         uint32_t *l_12 = &g_13;
         int32_t *l_28 = &g_15;
         int32_t *l_29 = &g_18;
         uint8_t ****l_1596[7][5];
         uint16_t * const ***l_1603 = (void*)0;
         uint32_t *l_1605 = &g_254;
         uint32_t **l_1604 = &l_1605;
         int8_t l_1629 = 0xA3;
         uint8_t l_1639 = 5U;
         if (((g_5--) > ((***g_948) = (func_32(((((*l_1604) = (l_12 = func_35((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((**g_1204) = func_45(&g_15)) != l_1594), 1)), 0x7971AA41)) == (*l_1594)) || (((((*g_947) == (g_614 = l_1595)) > (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((*l_1594) | (((void*)0 == l_1603) != (*g_601))) && 0x4119), (*l_1594))) || (****g_947)), (****g_947))), (*l_29)))) > 0x48) <= 0U)), l_11, (**l_1595), l_1594, (*l_1594)))) == l_1594) == (*l_1594)), l_1606) >= l_1629))))         {             uint32_t l_1630 = 4294967295U;             int32_t l_1633 = (-4);             int32_t *l_1634 = (void*)0;             int32_t *l_1635 = &g_633;             int32_t *l_1636 = (void*)0;             int32_t *l_1637 = &g_15;             int32_t *l_1638[1][1][4] = {{{&g_268,&g_268,&g_268,&g_268}}};             int i, j, k;             --l_1630;             --l_1639;         }
         else         {             uint32_t * const **l_1647[5][9] = {{(void*)0,&g_247,(void*)0,(void*)0,(void*)0,&g_247,(void*)0,(void*)0,&g_247},{&g_247,&g_247,&g_247,&g_247,(void*)0,&g_247,&g_247,&g_247,(void*)0},{&g_247,(void*)0,(void*)0,&g_247,&g_247,&g_247,&g_247,(void*)0,&g_247},{(void*)0,(void*)0,&g_247,&g_247,&g_247,&g_247,&g_247,&g_247,(void*)0},{&g_247,&g_247,&g_247,(void*)0,&g_247,(void*)0,&g_247,&g_247,&g_247}};             int32_t *l_1649[8] = {&g_268,&g_15,&g_15,&g_268,&g_15,&g_15,&g_268,&g_15};             int32_t *l_1650 = &g_15;             int i, j; lbl_1654:             (*g_946) |= (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((((*l_1594) ^ (((!(((&g_247 == l_1647[3][4]) ^ (***g_614)) || ((-6) & ((**g_775) == ((**g_1170) = func_108(&l_29, (**g_948), ((*l_1650) = (((l_1648 != &g_994) == (*l_29)) > (*l_28))), (*l_29), (*l_29))))))) && (**g_411)) > 0x1B)) <= (*l_1606)) && (*l_28)) & (*l_29)) ^ (*l_1606)), (*l_29))), (*l_1606)));             g_1653 = g_1651;             ((void) sizeof ((g_1653 == &g_1652) ? 1 : 0), __extension__ ({ if (g_1653 == &g_1652) ; else __assert_fail ("g_1653 == &g_1652", "/tmp/tmp6t_bgfzu.c", 187, __extension__ __PRETTY_FUNCTION__); }));             if (g_18)                 goto lbl_1654;         }
         ((void) sizeof ((l_12 == &g_100) ? 1 : 0), __extension__ ({ if (l_12 == &g_100) ; else __assert_fail ("l_12 == &g_100", "/tmp/tmp6t_bgfzu.c", 192, __extension__ __PRETTY_FUNCTION__); }
));
     }
      ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({
 if (g_1191 == &g_411 || g_1191 == 0) ;
 else __assert_fail ("g_1191 == &g_411 || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 338, __extension__ __PRETTY_FUNCTION__);
 }
 ));
  }
   static const uint32_t func_56(uint8_t * const p_57, int32_t p_58, const uint8_t * p_59, uint32_t p_60, int16_t p_61) {
      uint32_t l_1575[7];
      for (p_61 = 26;
  (p_61 <= (-7));
  p_61 = safe_sub_func_int32_t_s_s(p_61, 6))     {
         int32_t *l_1581 = (void*)0;
         int32_t l_1586 = 0;
         int32_t *l_1587[3][5] = {{&g_268,&g_268,&g_268,&g_268,&g_268},{&g_100,&g_100,&g_100,&g_100,&g_100},{&g_268,&g_268,&g_268,&g_268,&g_268}};
         l_1587[0][1] = (void*)0;
     }
      return p_61;
  }
   static uint8_t * func_62(uint8_t * p_63, int32_t p_64) {
      int32_t * const l_757 = &g_268;
      int16_t **l_1375 = &g_994;
      int8_t *** const l_1546 = &g_465[1][3][0];
      for (p_64 = (-25);
  (p_64 <= (-13));
  --g_18)     {
         int32_t *l_116 = &g_100;
         int32_t l_1535 = 0x3B177D63;
         ((void) sizeof ((g_1191 == &g_411 || g_1191 == 0) ? 1 : 0), __extension__ ({ if (g_1191 == &g_411 || g_1191 == 0) ; else __assert_fail ("g_1191 == &g_411 || g_1191 == 0", "/tmp/tmp6t_bgfzu.c", 438, __extension__ __PRETTY_FUNCTION__); }
));
     }
  }
     static int32_t * func_108(int32_t ** p_109, uint8_t * const p_110, const int32_t p_111, uint32_t p_112, int32_t p_113) {
      int32_t *l_756 = &g_633;
      int i;
      for (i = 0;
  i < 4;
  p_112 += 1)     {
     }
      return l_756;
  }
   int main (void) {
      int i, j, k;
      for (i = 0;
  i < 9;
  i++)     {
         for (j = 0;
 j < 3;
 j++)         {             for (k = 0; k < 4; k++)             {                 csmith_sink_ = g_1452[i][j][k];             }         }
     }
  }
