typedef char __int8_t;
typedef char __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __off_t;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef struct {
  int __count;
  struct {
    int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t {
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
__uint32_t platform_main_end_crc;
int platform_main_end_flag;
int8_t safe_add_func_int8_t_s_s_si1;
int8_t safe_add_func_int8_t_s_s_si2;
int8_t safe_sub_func_int8_t_s_s_si1;
int8_t safe_sub_func_int8_t_s_s_si2;
int16_t safe_div_func_int16_t_s_s_si1;
int16_t safe_div_func_int16_t_s_s_si2;
int16_t safe_lshift_func_int16_t_s_s_left;
int safe_lshift_func_int16_t_s_s_right;
int16_t safe_lshift_func_int16_t_s_u_left;
unsigned int safe_lshift_func_int16_t_s_u_right;
int16_t safe_rshift_func_int16_t_s_s_left;
int safe_rshift_func_int16_t_s_s_right;
int16_t safe_rshift_func_int16_t_s_u_left;
unsigned int safe_rshift_func_int16_t_s_u_right;
int32_t safe_add_func_int32_t_s_s_si1;
int32_t safe_add_func_int32_t_s_s_si2;
void(safe_add_func_int32_t_s_s)(void) {
  0
      ? 0
      : 0;
}
__uint32_t safe_div_func_uint32_t_u_u_ui1;
__uint32_t safe_div_func_uint32_t_u_u_ui2;
void(safe_div_func_uint32_t_u_u)(void) {
  0
      ? 0
      : 0;
}
static __uint32_t crc32_tab;
static __uint32_t crc32_tab_0;
static __uint32_t crc32_context = 0xFFFFFFFFUL;
uint8_t crc32_byte_b;
__uint32_t crc32_8bytes_val;
__uint32_t transparent_crc_val;
char transparent_crc_vname;
int transparent_crc_flag;
static void transparent_crc(void) {
  {
    { crc32_context = 0 ^ crc32_tab_0; };
    { crc32_context = 0 ^ crc32_tab_0; };
    { crc32_context = 0 ^ crc32_tab_0; };
    { crc32_context = 0 ^ crc32_tab_0; };
  }
}
static __uint32_t g_22 = 0x67457993;
static int32_t g_71 = 0x0E5C5CC9;
static int32_t g_129 = 0x0E5C5CC9;
static int32_t g_128 = 0x0E5C5CC9;
static int32_t g_213 = 0xE5D540DA;
static uint16_t g_214[1] = {65527U, 0x2E21, 0x2E21, 65527U, 0x2E21, 0x2E21};
static uint16_t g_265[] = {0xD5EF};
static uint16_t g_288 = 0x11CA;
static __uint32_t g_312 = 0x6D2BC901;
static uint16_t g_328 = 65534U;
static __uint32_t g_331[240] = {4294967295U,
                                0xFD3BF148,
                                0xFA5FF65F,
                                4294967289U,
                                4294967295U,
                                4294967295U,
                                4294967295U,
                                0x2C104672,
                                0U,
                                0xCFCF3885,
                                4294967295U,
                                0U,
                                0x92DC4278,
                                4294967295U,
                                0x5D0FB07C,
                                4294967295U,
                                0xF7C64EC2,
                                0U,
                                0U,
                                4294967295U,
                                0x8F18FD03,
                                8U,
                                4294967295U,
                                0x921B171C,
                                0x2D4D6344,
                                0x2C104672,
                                0xC3DCDBF5,
                                0U,
                                4294967289U,
                                0x1111568D,
                                4294967295U,
                                4294967290U,
                                4294967286U,
                                0U,
                                0xFF1E0223,
                                4294967294U,
                                0xE1FE8385,
                                9U,
                                0x494CCD08,
                                4294967295U,
                                4294967289U,
                                0x5D0FB07C,
                                1U,
                                4294967293U,
                                4294967295U,
                                0xCFCF3885,
                                0x1CDC0773,
                                4294967295U,
                                0xBE30F185,
                                0xB32E1C42,
                                0x5D0FB07C,
                                0xC3DCDBF5,
                                0xFD3BF148,
                                0x494CCD08,
                                0U,
                                4294967295U,
                                1U,
                                4294967290U,
                                4294967295U,
                                4294967294U,
                                0x2D4D6344,
                                0x18D7C328,
                                4294967286U,
                                4294967295U,
                                0x113F0E6E,
                                0x1111568D,
                                0xC3DCDBF5,
                                9U,
                                0xC3DCDBF5,
                                0x92DC4278,
                                0xFF1E0223,
                                0x921B171C,
                                0U,
                                4294967295U,
                                0x8F18FD03,
                                0xE1FE8385,
                                8U,
                                0U,
                                0x58814E8A,
                                0x113F0E6E,
                                0x5D0FB07C,
                                0xE1FE8385,
                                0x2C104672,
                                0U,
                                0x92DC4278,
                                0U,
                                4294967289U,
                                {0xC3DCDBF5, 0x8F18FD03, 0U},
                                {4294967295U, 0xB32E1C42, 1U},
                                {0x2D4D6344, 4294967295U, 0xB27480D8},
                                {4294967290U, 0x18D7C328, 0x48461366},
                                {0xC3DCDBF5, 8U, 4294967286U},
                                {1U, 8U, 0x80B6D513},
                                4294967295U,
                                1U,
                                4294967289U,
                                0xE1FE8385,
                                0x18D7C328,
                                4294967295U,
                                5U,
                                4294967295U,
                                0U,
                                0U,
                                0xB32E1C42,
                                0xE1FE8385,
                                4294967295U,
                                0x8F18FD03,
                                0x80B6D513,
                                0U,
                                0U,
                                0x8F18FD03,
                                0x2D4D6344,
                                0x1CDC0773,
                                4294967294U,
                                8U,
                                0x2C104672,
                                0x48461366,
                                0U,
                                0x113F0E6E,
                                4294967295U,
                                0x92DC4278,
                                4294967295U,
                                4294967294U,
                                {0xCFCF3885, 0xFF1E0223, 0x8F18FD03},
                                {4294967289U, 9U, 0x80B6D513},
                                {4294967290U, 0x1CDC0773, 0x921B171C},
                                4294967290U,
                                4294967293U,
                                4294967286U,
                                0U,
                                4294967289U,
                                0x1CDC0773,
                                4294967286U,
                                9U,
                                0x48461366,
                                0U,
                                1U,
                                0xB27480D8,
                                0U,
                                0xFF1E0223,
                                1U,
                                1U,
                                4294967290U,
                                0U,
                                0U,
                                4294967295U,
                                4294967295U,
                                4294967295U,
                                0xFA5FF65F,
                                0xFD3BF148,
                                4294967295U,
                                4294967295U,
                                0xC9D16F30};
static int32_t g_335 = 0x0E5C5CC9;
static int32_t g_334 = 0x0E5C5CC9;
static __uint32_t g_401 = 0xECD72320;
static int8_t g_502 = 0xB3;
static __uint32_t g_525 = 4294967295U;
static int32_t g_557 = 0x8BE1264C;
static int16_t g_582 = 0xF1BB;
void func_1(void) { 0; }
int main(void) {
  int i;
  i = 0;
  for (i; i < 2; i++) {
    0;
    printf("checksum = %X\n", platform_main_end_crc);
  }
}
