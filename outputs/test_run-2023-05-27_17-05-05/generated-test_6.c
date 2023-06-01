typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef __uint16_t uint16_t;
typedef __uint64_t uint64_t;
static __uint32_t platform_main_end_crc;
static int platform_main_end_flag;
static signed char safe_add_func_int8_t_s_s_si1;
static signed char safe_mod_func_int8_t_s_s_si1;
static signed char safe_mod_func_int8_t_s_s_si2;
static signed char safe_lshift_func_int8_t_s_s_left;
static int safe_lshift_func_int8_t_s_s_right;
static signed char safe_lshift_func_int8_t_s_u_left;
static unsigned int safe_lshift_func_int8_t_s_u_right;
static __int16_t safe_add_func_int16_t_s_s_si1;
static __int16_t safe_add_func_int16_t_s_s_si2;
static __int16_t safe_lshift_func_int16_t_s_s_left;
static int safe_lshift_func_int16_t_s_s_right;
static __int16_t safe_rshift_func_int16_t_s_s_left;
static int safe_rshift_func_int16_t_s_s_right;
static __int32_t safe_add_func_int32_t_s_s_si1;
static __int32_t safe_add_func_int32_t_s_s_si2;
static __int64_t safe_unary_minus_func_int64_t_s_si;
static __int64_t safe_add_func_int64_t_s_s_si1;
static __int64_t safe_add_func_int64_t_s_s_si2;
static __int64_t safe_sub_func_int64_t_s_s_si1;
static __int64_t safe_sub_func_int64_t_s_s_si2;
static __int64_t safe_mod_func_int64_t_s_s_si1;
static __int64_t safe_mod_func_int64_t_s_s_si2;
static unsigned int safe_add_func_uint8_t_u_u_ui1;
static unsigned int safe_add_func_uint8_t_u_u_ui2;
static unsigned int safe_sub_func_uint8_t_u_u_ui1;
static unsigned int safe_sub_func_uint8_t_u_u_ui2;
static unsigned int safe_mul_func_uint8_t_u_u_ui1;
static unsigned int safe_mul_func_uint8_t_u_u_ui2;
static unsigned int safe_mod_func_uint8_t_u_u_ui1;
static unsigned int safe_mod_func_uint8_t_u_u_ui2;
static unsigned int safe_lshift_func_uint8_t_u_s_left;
static int safe_lshift_func_uint8_t_u_s_right;
static unsigned int safe_rshift_func_uint8_t_u_s_left;
static int safe_rshift_func_uint8_t_u_s_right;
static uint16_t safe_mul_func_uint16_t_u_u_ui1;
static uint16_t safe_mul_func_uint16_t_u_u_ui2;
static uint16_t safe_lshift_func_uint16_t_u_u_left;
static unsigned int safe_lshift_func_uint16_t_u_u_right;
static __uint32_t safe_add_func_uint32_t_u_u_ui1;
static __uint32_t safe_add_func_uint32_t_u_u_ui2;
static __uint32_t safe_sub_func_uint32_t_u_u_ui1;
static __uint32_t safe_sub_func_uint32_t_u_u_ui2;
static uint64_t safe_add_func_uint64_t_u_u_ui1;
static uint64_t safe_add_func_uint64_t_u_u_ui2;
static uint64_t safe_sub_func_uint64_t_u_u_ui1;
static uint64_t safe_sub_func_uint64_t_u_u_ui2;
static uint64_t safe_mod_func_uint64_t_u_u_ui1;
static uint64_t safe_mod_func_uint64_t_u_u_ui2;
static unsigned int func_1___trans_tmp_3;
static unsigned int func_1___trans_tmp_2;
static void(safe_lshift_func_uint8_t_u_s)(void) {
  (0 || (safe_lshift_func_uint8_t_u_s_left >
         (0 >> (safe_lshift_func_uint8_t_u_s_right))))
      ?: (safe_lshift_func_uint8_t_u_s_left
          << (safe_lshift_func_uint8_t_u_s_right));
  (((safe_lshift_func_uint8_t_u_s_right) >= 32) ||
   (safe_lshift_func_uint8_t_u_s_left >
    (0 >> ((unsigned int)safe_lshift_func_uint8_t_u_s_right))))
      ? ((safe_lshift_func_uint8_t_u_s_left))
      : (safe_lshift_func_uint8_t_u_s_left
         << ((unsigned int)safe_lshift_func_uint8_t_u_s_right));
}
static void(safe_rshift_func_uint8_t_u_s)(void) {
  (((safe_rshift_func_uint8_t_u_s_right) < 0) ||
   (((int)safe_rshift_func_uint8_t_u_s_right) >= 32))
      ? ((safe_rshift_func_uint8_t_u_s_left))
      : (safe_rshift_func_uint8_t_u_s_left >>
         ((int)safe_rshift_func_uint8_t_u_s_right));
  (((unsigned int)safe_rshift_func_uint8_t_u_s_right) >= 32)
      ? ((safe_rshift_func_uint8_t_u_s_left))
      : (safe_rshift_func_uint8_t_u_s_left >>
         ((unsigned int)safe_rshift_func_uint8_t_u_s_right));
}
static void(safe_mul_func_uint16_t_u_u)(void) {
  ((unsigned int)safe_mul_func_uint16_t_u_u_ui1) *
      ((unsigned int)safe_mul_func_uint16_t_u_u_ui2);
  (safe_mul_func_uint16_t_u_u_ui2 == 0)
      ? ((safe_mul_func_uint16_t_u_u_ui1))
      : (safe_mul_func_uint16_t_u_u_ui1 % safe_mul_func_uint16_t_u_u_ui2);
}
static void(safe_lshift_func_uint16_t_u_u)(void) {
  ((((unsigned int)safe_lshift_func_uint16_t_u_u_right) >= 32) ||
   (safe_lshift_func_uint16_t_u_u_left >
    (0 >> ((unsigned int)safe_lshift_func_uint16_t_u_u_right))))
      ? ((safe_lshift_func_uint16_t_u_u_left))
      : (safe_lshift_func_uint16_t_u_u_left
         << ((unsigned int)safe_lshift_func_uint16_t_u_u_right));
}
static void(safe_sub_func_uint32_t_u_u)(void) {
  (safe_sub_func_uint32_t_u_u_ui2 == 0)
      ? ((safe_sub_func_uint32_t_u_u_ui1))
      : (safe_sub_func_uint32_t_u_u_ui1 % safe_sub_func_uint32_t_u_u_ui2);
}
static void(safe_add_func_uint64_t_u_u)(void) {
  safe_add_func_uint64_t_u_u_ui1 + safe_add_func_uint64_t_u_u_ui2;
}
static void(safe_sub_func_uint64_t_u_u)(void) {
  safe_sub_func_uint64_t_u_u_ui1 - safe_sub_func_uint64_t_u_u_ui2;
}
static void(safe_mod_func_uint64_t_u_u)(void) {
  (safe_mod_func_uint64_t_u_u_ui2 == 0)
      ? ((safe_mod_func_uint64_t_u_u_ui1))
      : (safe_mod_func_uint64_t_u_u_ui1 % safe_mod_func_uint64_t_u_u_ui2);
}
static void a() {
  {} {
    {
      func_1___trans_tmp_2 =
          (safe_mod_func_uint8_t_u_u_ui2 == 0)
              ? ((safe_mod_func_uint8_t_u_u_ui1))
              : (safe_mod_func_uint8_t_u_u_ui1 % safe_mod_func_uint8_t_u_u_ui2);
    }
  }
  for (func_1___trans_tmp_3; (func_1___trans_tmp_3 <= 0);
       func_1___trans_tmp_3) {
  }
}
int main(void) {
  { printf("checksum = %X\n", platform_main_end_crc); }
}
