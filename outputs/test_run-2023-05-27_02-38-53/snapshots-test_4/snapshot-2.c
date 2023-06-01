 typedef signed char __int8_t;
   typedef unsigned char __uint8_t;
   typedef signed short int __int16_t;
   typedef unsigned short int __uint16_t;
   typedef signed int __int32_t;
   typedef unsigned int __uint32_t;
   typedef signed long int __int64_t;
   typedef unsigned long int __uint64_t;
   typedef struct {
  int __val[2];
  }
   __fsid_t;
   typedef __int8_t int8_t;
   typedef __int16_t int16_t;
   typedef __int32_t int32_t;
   typedef __int64_t int64_t;
   typedef __uint8_t uint8_t;
   typedef __uint16_t uint16_t;
   typedef __uint32_t uint32_t;
   typedef __uint64_t uint64_t;
   typedef struct {
    int __count;
    union   {
     unsigned int __wch;
     char __wchb[4];
   }
  __value;
  }
   __fpos64_t;
                                                                        static void platform_main_begin(void) {
  }
   static void platform_main_end(uint32_t crc, int flag) {
   printf ("checksum = %X\n", crc);
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
   static void crc32_8bytes (uint64_t val) {
   crc32_byte ((val>>0) & 0xff);
   crc32_byte ((val>>8) & 0xff);
   crc32_byte ((val>>16) & 0xff);
   crc32_byte ((val>>24) & 0xff);
   crc32_byte ((val>>32) & 0xff);
   crc32_byte ((val>>40) & 0xff);
   crc32_byte ((val>>48) & 0xff);
   crc32_byte ((val>>56) & 0xff);
  }
   static void transparent_crc (uint64_t val, char* vname, int flag) {
   crc32_8bytes(val);
   if (flag) {
     printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
  }
  }
   static uint64_t g_3 = 0xDD8D13034D00693ELL;
   static int32_t g_76 = 0xE05BF5EFL;
   static int16_t g_104 = 8L;
   static int32_t g_108 = 0xE62ED8E9L;
   static uint16_t g_135 = 0x8A5EL;
   static uint32_t g_141 = 18446744073709551615UL;
   static uint8_t g_144 = 0x31L;
   static uint32_t g_166 = 5UL;
   static int8_t g_187[3][9] = {
 {
1L,1L,1L,1L,1L,1L,1L,1L,1L}
 ,{
{0xA212EB4F3A628D86LL,0x9BEB6E18EC0D0173LL,0x5171171D35FC118CLL}
,{0xD6A9AA89525BE554LL,0xC1D393908CA69266LL,2UL}
,{1UL,1UL,18446744073709551606UL}
,{0xF28CA52837081A23LL,1UL,2UL}
}
 ,{
{0xCD9FD2C490EA19DDLL,0xC1D393908CA69266LL,1UL}
,{0x65A3C54BD25B4213LL,0x9BEB6E18EC0D0173LL,0x7D469F3BFDC2BF5ELL}
,{2UL,0xCD9FD2C490EA19DDLL,1UL}
,{0xBBA6016F2BD89C7BLL,2UL,2UL}
}
 ,{
{0xA78A7768BC73AE71LL,0xA212EB4F3A628D86LL,18446744073709551606UL}
,{0xA78A7768BC73AE71LL,18446744073709551606UL,2UL}
,{0xBBA6016F2BD89C7BLL,0xF28CA52837081A23LL,0x5171171D35FC118CLL}
,{2UL,0x65A3C54BD25B4213LL,0xFEC59831632895B5LL}
}
 ,{
{0x65A3C54BD25B4213LL,0xF28CA52837081A23LL,0xD6A9AA89525BE554LL}
,{0xCD9FD2C490EA19DDLL,18446744073709551606UL,0xCD9FD2C490EA19DDLL}
,{0xF28CA52837081A23LL,0xA212EB4F3A628D86LL,0xCD9FD2C490EA19DDLL}
,{1UL,2UL,0xD6A9AA89525BE554LL}
}
 };
   static uint8_t g_219 = 1UL;
   static int32_t g_229 = 1L;
   static uint8_t g_294[8] = {
 0UL,250UL,0UL,0UL,250UL,0UL,0UL,250UL};
   static int8_t g_512 = (-9L);
   static uint32_t g_513[5] = {
 0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL};
   static int16_t g_516 = 0x2F93L;
   static uint8_t g_517 = 0x33L;
   static uint32_t g_529 = 1UL;
   static int64_t g_533 = 0xED784760C996D737LL;
   static uint8_t g_540 = 248UL;
   static int32_t g_588[9][9] = {
 {
7L,7L,7L,7L,7L,7L,7L,7L,7L}
 ,{
0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL}
 ,{
7L,7L,7L,7L,7L,7L,7L,7L,7L}
 ,{
0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL}
 ,{
7L,7L,7L,7L,7L,7L,7L,7L,7L}
 ,{
0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL}
 ,{
7L,7L,7L,7L,7L,7L,7L,7L,7L}
 ,{
0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL}
 ,{
7L,7L,7L,7L,7L,7L,7L,7L,7L}
 ,{
{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
,{1UL,0x25L,1UL}
,{254UL,4UL,0xC8L}
,{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
}
 ,{
{1UL,0x25L,1UL}
,{254UL,0x1EL,0xC8L}
,{1UL,0x25L,1UL}
,{254UL,4UL,0xC8L}
}
 ,{
{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
,{1UL,0x25L,1UL}
,{254UL,4UL,0xC8L}
,{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
}
 ,{
{1UL,0x25L,1UL}
,{254UL,4UL,0xC8L}
,{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
,{1UL,0x25L,1UL}
,{254UL,4UL,0xC8L}
}
 ,{
{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
,{1UL,0x25L,1UL}
,{254UL,4UL,0xC8L}
,{248UL,0x25L,248UL}
,{254UL,0x1EL,0xC8L}
}
 };
   static uint16_t g_1271 = 0xB6A9L;
   static uint64_t g_1273 = 0x34D6610E5908C4A5LL;
   static int8_t g_1340 = (-2L);
   static uint8_t g_1421 = 0xB4L;
   static int8_t *g_1429 = (void*)0;
   static int8_t **g_1428 = &g_1429;
   static uint32_t g_1458 = 0x36F78E21L;
   static int8_t g_1529 = (-1L);
   static int8_t g_1536 = 0x30L;
   static int64_t g_1573 = 9L;
   static const int64_t g_1594 = 6L;
   static const uint8_t g_1655[1] = {
 0UL};
   static int32_t g_1665 = (-4L);
   static int16_t g_1676[4] = {
 0L,0L,0L,0L};
   static uint64_t func_1(void) {
      uint64_t l_2[9] = {
0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL,0x3198A8F93905C809LL};
      int32_t l_582[2];
      int64_t l_589 = 0x9F05023EBAF44911LL;
      int32_t l_620[9][4] = {
{7L,(-7L),0x68318166L,(-7L)}
,{0x68318166L,(-7L),7L,5L}
,{(-7L),(-10L),0x4F717860L,0x68318166L}
,{0x7A093A2CL,0x86E3B2CBL,0x86E3B2CBL,0x7A093A2CL}
,{0x7A093A2CL,5L,0x4F717860L,0xFCC3A8E8L}
,{(-7L),0x7A093A2CL,7L,(-10L)}
,{0x68318166L,0x171559C0L,0x68318166L,(-10L)}
,{7L,0x7A093A2CL,(-7L),0xFCC3A8E8L}
,{0x4F717860L,5L,0x7A093A2CL,0x7A093A2CL}
};
      int64_t l_1042 = 0x57EC9B933590F456LL;
      int16_t l_1047 = 1L;
      uint8_t l_1098 = 0x51L;
      int8_t l_1102[7][1][6] = {
{{0xF4L,0xF4L,(-1L),0x70L,0xF4L,0x70L}}
,{{1L,0xF4L,1L,0x48L,(-1L),(-1L)}}
,{{0xD6L,1L,1L,0xD6L,0xF4L,0x70L}}
,{{0x70L,0xD6L,(-1L),0xD6L,0x70L,0x48L}}
,{{0xD6L,0x70L,0x48L,0x48L,0x70L,0xD6L}}
,{{1L,0xD6L,0xF4L,0x70L,0xF4L,0xD6L}}
,{{0xF4L,1L,0x48L,(-1L),(-1L),0x48L}}
};
      uint32_t l_1156 = 0UL;
      int32_t *l_1171 = (void*)0;
      int32_t l_1189[3][7];
      uint32_t l_1683[2];
      uint32_t l_1726[3];
      int i, j, k;
      for (i = 0;
  i < 2;
  i++)         l_582[i] = 0x1E53B733L;
      for (i = 0;
  i < 3;
  i++)     {
         for (j = 0;
 j < 7;
 j++)             l_1189[i][j] = 0x3288C8DEL;
     }
      for (i = 0;
  i < 3;
  i++)         l_1726[i] = 0xED5D79DAL;
      return g_135;
  }
   int main (void) {
      int i, j, k;
      int print_hash_value = 0;
      platform_main_begin();
      transparent_crc(g_141, "g_141", print_hash_value);
      transparent_crc(g_144, "g_144", print_hash_value);
      transparent_crc(g_517, "g_517", print_hash_value);
      transparent_crc(g_529, "g_529", print_hash_value);
      transparent_crc(g_533, "g_533", print_hash_value);
      transparent_crc(g_540, "g_540", print_hash_value);
      for (i = 0;
  i < 9;
  i++)     {
         for (j = 0;
 j < 9;
 j++)         {             transparent_crc(g_588[i][j], "g_588[i][j]", print_hash_value);             if (print_hash_value) printf("index = [%d][%d]\n", i, j);         }
     }
      transparent_crc(g_1273, "g_1273", print_hash_value);
      transparent_crc(g_1340, "g_1340", print_hash_value);
      transparent_crc(g_1573, "g_1573", print_hash_value);
      transparent_crc(g_1594, "g_1594", print_hash_value);
      for (i = 0;
  i < 1;
  i++)     {
         transparent_crc(g_1676[i], "g_1676[i]", print_hash_value);
         if (print_hash_value) printf("index = [%d]\n", i);
     }
      platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
      return 0;
  }
