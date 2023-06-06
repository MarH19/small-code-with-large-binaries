typedef int __int32_t;
typedef long int __int64_t;
static unsigned long int __uint64_t;
static signed char __int_least8_t;
static int a;
typedef short int16_t;
static __int64_t int64_t;
static unsigned int platform_main_end_crc;
static int platform_main_end_flag;
static signed char safe_mul_func_int8_t_s_s_si1;
static signed char safe_mul_func_int8_t_s_s_si2;
static unsigned int crc32_tab;
static unsigned int crc32_tab_0;
static unsigned int crc32_context = 0xFUL;
static unsigned int crc32_gentab_crc;
static const unsigned int crc32_gentab_poly = 230196000UL;
static int crc32_gentab_i;
static unsigned char crc32_byte_b;
static unsigned int crc32_8bytes_val;
static long __undefined;
static unsigned short g_16 = 65532U;
static __int32_t g_17 = 1828943047;
static unsigned short g_21 = 00;
static __int32_t g_23 = 6;
static unsigned char g_32 = 0x0E;
static int16_t g_69 = 0x922C;
static __int32_t g_84 = 3868989431;
static unsigned char g_136 = 250U;
static signed char g_141 = 0;
static __int32_t g_201 = 0;
static unsigned char g_205 = 0x9F;
static unsigned int g_222 = 2U;
static signed char g_233 = 0xB3;
static unsigned int g_257 = 3U;
static int16_t g_307 = 0x1E10;
static __int32_t g_321 = 0;
static unsigned int g_334 = 2931833550;
static __int32_t g_338 = 6;
static unsigned short g_359 = 0x640A;
static unsigned int g_414 = 0x37E68031;
static unsigned short g_464 = 0x78B8;
static __int32_t g_506 = 2;
static int16_t g_507 = 0xA81A;
static unsigned int g_519 = 0U;
static unsigned short g_523 = 0x01D6;
static unsigned int g_605 = 0U;
static unsigned int g_664 = 4294967291U;
static unsigned char g_668 = 0x85;
static __int32_t g_832 = 0;
static unsigned int g_855 = 2805148135;
static __int32_t g_886 = 0x17D0DB72;
static unsigned short g_962 = 0x366F;
static unsigned short g_1010 = 1U;
static __int32_t g_1121 = 1365483787;
static int16_t g_1123 = 0;
static __int32_t g_1148 = 0;
static unsigned int g_1187 = 1046942235;
static signed char g_1289 = 0;
static int16_t g_1295 = 0x2241;
static unsigned char g_1321 = 0xFC;
static int16_t g_1654 = 0;
static unsigned int g_1718 = 1081460213;
static __int32_t g_1862 = 0x042EDB77;
static unsigned int g_1870 = 4294967295U;
static unsigned char g_1936 = 0U;
static unsigned int func_1_l_1979 = 2103187390;
static int main_print_hash_value = 0;
static void platform_main_begin(void) {}
static void(safe_mul_func_int8_t_s_s)(void) {
  safe_mul_func_int8_t_s_s_si1 *safe_mul_func_int8_t_s_s_si2;
}
static void crc32_gentab() { crc32_gentab_i = 0; }
static void transparent_crc(unsigned int, char *vname, int flag) {
  {
    { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ 0; }
    { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ 0; }
    { crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ 0; }
  }
}
int main() {
  0;
  transparent_crc(0xB3, "g_233", main_print_hash_value);
  transparent_crc(3U, "g_257", main_print_hash_value);
  transparent_crc(0x1E10, "g_307", main_print_hash_value);
  transparent_crc(2931833550, "g_334", main_print_hash_value);
  transparent_crc(0x640A, "g_359", main_print_hash_value);
  transparent_crc(0x37E68031, "g_414", main_print_hash_value);
  transparent_crc(0x78B8, "g_464", main_print_hash_value);
  transparent_crc(2, "g_506", main_print_hash_value);
  transparent_crc(0xA81A, "g_507", main_print_hash_value);
  transparent_crc(0U, "g_519", main_print_hash_value);
  transparent_crc(0x01D6, "g_523", main_print_hash_value);
  transparent_crc(0U, "g_605", main_print_hash_value);
  transparent_crc(4294967291U, "g_664", main_print_hash_value);
  transparent_crc(0x85, "g_668", main_print_hash_value);
  transparent_crc(0, "g_832", main_print_hash_value);
  transparent_crc(2805148135, "g_855", main_print_hash_value);
  transparent_crc(0x17D0DB72, "g_886", main_print_hash_value);
  transparent_crc(0x366F, "g_962", main_print_hash_value);
  transparent_crc(1U, "g_1010", main_print_hash_value);
  transparent_crc(1365483787, "g_1121", main_print_hash_value);
  transparent_crc(g_1123, "g_1123", main_print_hash_value);
  transparent_crc(g_1148, "g_1148", main_print_hash_value);
  transparent_crc(1046942235, "g_1187", main_print_hash_value);
  {}
}