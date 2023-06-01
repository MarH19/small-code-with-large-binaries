extern int printf(const char *__restrict __format, ...);
;
static unsigned int platform_main_end_crc;
static int platform_main_end_flag;
static unsigned int crc32_tab;
static unsigned crc32_tab_0;
static unsigned int crc32_context = 0xFFFFUL;
static unsigned char crc32_byte_b;
static unsigned long crc32_8bytes_val;
static unsigned long transparent_crc_val;
static char transparent_crc_vname;
static int g_2 = 1375631325L;
static const int g_14 = 0L;
static signed char g_20 = 0;
static signed g_24 = 0xB4L;
static unsigned char g_26 = 0xF6L;
static int g_54 = 0x2E510B2DL;
static unsigned short g_90 = 0x032EL;
static unsigned g_96 = 3777187026L;
static unsigned short g_98 = 0xF829L;
static signed char g_100 = 0L;
static unsigned int g_102 = 9UL;
static int g_104 = 3455048707L;
static int g_105 = 0;
static int g_105_5 = 0x02A751A5L;
static int g_105_3 = 0x224A3AAFL;
static int g_105_4 = 1409667604L;
static long g_108 = 1094170171799657907LL;
static long g_142 = 18446744073709551615UL;
static unsigned char g_175 = 185L;
static short g_216 = 0L;
static int g_229[] = {
    00,          4247645772L, 0x0AB2DEA7L, 0,           4L,
    0,           0,           4L,          1L,          (4L),
    7L,          0x2DE87007L, (5L),        (5L),        1L,
    4L,          1L,          1L,          4L,          (5L),
    4247645772L, 0x0AB2DEA7L, (5L),        0x0AB2DEA7L, 0x054000ADL,
    0x054000ADL, 0x18954A2BL, 4L,          2981282037L, (6L),
    (4L),        0x0AB2DEA7L, 0x0AB2DEA7L, 0x0AB2DEA7L, 1L,
    0x18954A2BL, (1L),        1L,          1L,          4247645772L,
    0x0AB2DEA7L, (5L),        0x0AB2DEA7L, 0xFD2DEE4CL, (1L),
    1L,          0x18954A2BL, 1L,          1L,          4247645772L,
    0x2DE87007L, 0x2DE87007L, 4247645772L, 0L,          1L,
    (7L),        0x054000ADL, 1L,          1L,          (1L),
    4247645772L, (1L),        0L,          4247645772L, 1L,
    0x18954A2BL, 1L,          1L,          1L,          (6L),
    (6L),        (5L),        4247645772L, 0x0AB2DEA7L, 0x0AB2DEA7L,
    0x2DE87007L, (1L),        0x0AB2DEA7L, 0L,          (7L),
    1L,          0x054000ADL, 1L,          (7L),        (1L),
    (6L),        0x2DE87007L, 0L,          (6L),        (7L),
    0x18954A2BL, 0x18954A2BL, (7L),        1L,          0x0AB2DEA7L,
    0xFD2DEE4CL, (5L),        (6L),        (6L),        (1L),
    (7L),        (1L),        1L,          (7L),        (6L),
    0x2DE87007L, 0L,          (6L),        0L,          1L,
    1L,          0x054000ADL, (7L),        1L,          (1L),
    0x0AB2DEA7L, 0L,          0L,          0x0AB2DEA7L, 1L,
    0x18954A2BL, (1L),        1L,          1L,          4247645772L,
    0x0AB2DEA7L, (5L),        0x0AB2DEA7L, 0xFD2DEE4CL, (1L),
    1L,          0x18954A2BL, 1L,          1L,          4247645772L,
    0x2DE87007L, 0x2DE87007L, 4247645772L, 0L};
static unsigned long g_300[] = {18446744073709551615UL};
static unsigned long g_300_0 = 18446744073709551615UL;
static unsigned char func_72_p_73;
static unsigned long func_72_p_74;
static int main_i;
static int main_j;
static int main_k;
static int main_print_hash_value = 0;
int main(void) {
  {{}} { int flag = 0; }
  { int flag = 0; }
  {
    0;
    { 0; }
  }
  {
    0;
    { 0; }
    { 0; }
  }
  {
    0;
    { 0; }
  }
  {
    0;
    { 0; }
  }
  {
    0;
    { 0; }
    { 0; }
  }
  {
    0;
    { 0; }
  }
  {
    0;
    { 0; }
  }
  {
    0;
    { 0; }
    { 0; }
    main_j = 0;
    for (main_j; main_j < 9; main_j++) {
      main_k = 0;
      for (main_k; main_k < 5; main_k++) {
        {
          0;
          {}
        }
        0;
      }
      0;
    }
  }
  { printf("checksum = %X\n", platform_main_end_crc); }
}
