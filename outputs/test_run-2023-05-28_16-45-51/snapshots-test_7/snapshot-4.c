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
        for (j = 8;
      j > 0;
      j--) {
        if (crc & 1) {
        crc = (crc >> 1) ^ poly;
       }
     else {
        crc >>= 1;
       }
       }
        crc32_tab[i] = crc;
       }
       }
        static void crc32_byte (uint8_t b) {
        crc32_context =   ((crc32_context >> 8) & 0x00FFFFFF) ^   crc32_tab[(crc32_context ^ b) & 0xFF];
       }
        static void crc32_8bytes (uint32_t val) {
        crc32_byte ((val>>0) & 0xff);
        crc32_byte ((val>>8) & 0xff);
        crc32_byte ((val>>16) & 0xff);
        crc32_byte ((val>>24) & 0xff);
       }
        static void transparent_crc (uint32_t val, char* vname, int flag) {
        crc32_8bytes(val);
        if (flag) {
          printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
       }
       }
        static int32_t g_3 = (-7);
        static int32_t g_4 = 0x45C8100C;
        static int32_t g_5 = 0x3C67EE39;
        static int32_t g_6 = 0xDD013D0B;
        static int32_t g_7 = 2;
        static int32_t g_9 = 8;
        static int16_t g_73[5] = {
      3,3,3,3,3};
        static int16_t g_76 = 1;
        static int8_t g_78 = 1;
        static int32_t g_79 = 0x0CFCE320;
        static const int32_t g_93 = 0x642E063A;
        static int16_t g_105 = 2;
        static uint8_t g_204 = 0xC0;
        static uint8_t g_208[7][9] = {
      {
     0x18,250U,1U,0x26,0x1B,0x91,0x1B,0x26,1U}
      ,{
     0U,0U,255U,1U,0x1B,1U,0xB1,0xF3,2U}
      ,{
     4U,0x57,0xF3,0xB1,0xF6,0x1B,0x57,1U,1U}
      ,{
     250U,4U,0xF3,0xF6,0xF3,4U,250U,0x91,1U}
      ,{
     250U,0x57,255U,4U,0x68,0x0C,0x1B,0x08,0U}
      ,{
     0x31,1U,0x0C,0x26,0x91,0x68,0x68,0x91,0x26}
      ,{
     0x97,0x31,0x97,1U,255U,0x68,0xF6,1U,0xF3}
      };
        static uint32_t g_224 = 4294967295U;
        static uint32_t g_251 = 0xE312AFD5;
        static uint16_t g_258[5] = {
      0U,0U,0U,0U,0U};
        static int16_t g_265[4] = {
      0xF110,0xF110,0xF110,0xF110};
        static uint32_t g_266 = 0U;
        static int8_t g_295 = 0x18;
        static uint32_t g_296 = 4294967293U;
        static uint16_t g_345[10] = {
      0x3B09,0x3B09,1U,0x3B09,0x3B09,1U,0x3B09,0x3B09,1U,0x3B09};
        static const int8_t g_397 = 1;
        static const int16_t g_445 = (-1);
        static int8_t g_527[10] = {
      (-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
        static int8_t g_584 = 0x78;
        static int16_t g_585 = 6;
        static uint32_t g_791 = 0x30A9C3AB;
        static const int8_t g_845 = 1;
        static uint8_t g_894 = 1U;
        static uint32_t g_896 = 0x55278DEF;
        static int32_t g_897 = 0xCCD0F77E;
        static uint8_t g_947 = 0x59;
        static int32_t g_961 = 0x3328F841;
        static uint32_t g_1007[1][9][10] = {
      {
     {
    0x63497A48,0x207ADE2D,4294967292U,4294967292U,0x207ADE2D,0x63497A48,1U,0xDC13B441,0xA243F465,0xB3C137F2}
     ,{
    0xB3C137F2,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U,4294967289U,0x93CCB31E}
     ,{
    0xB3C137F2,4294967294U,0xB3C137F2,0x9BC81840,0U,0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441}
     ,{
    0x63497A48,0x93CCB31E,0x1A81B186,0x133BB1D3,0xDC13B441,0xDC13B441,0x133BB1D3,0x1A81B186,0x93CCB31E,0x63497A48}
     ,{
    0x207ADE2D,0xA798751D,0xB3C137F2,1U,0x133BB1D3,0x93CCB31E,4294967289U,4294967294U,0x63497A48,4294967294U}
     ,{
    0xA243F465,0xB3C137F2,0x133BB1D3,0xA798751D,0x133BB1D3,0xB3C137F2,0xA243F465,0xDC13B441,1U,0x63497A48}
     ,{
    0x133BB1D3,4294967289U,4294967292U,0x1A81B186,0xDC13B441,0U,1U,1U,0U,0xDC13B441}
     ,{
    1U,4294967289U,4294967289U,1U,0U,0x133BB1D3,0xA243F465,0x63497A48,2U,0x93CCB31E}
     ,{
    4294967292U,0xB3C137F2,2U,0xA243F465,4294967289U,0x1A81B186,4294967289U,0xA243F465,2U,0xB3C137F2}
     }
      };
        static uint16_t g_1009 = 1U;
        static int32_t func_1(void) {
           int16_t l_2[6][1][10] = {
     {
    {
   0xE2A8,1,(-10),0x4CDB,0,0xDED6,0x4555,(-5),0xDFE4,0xDFE4}
    }
     ,{
    {
   0,0,0x8E41,0x4555,0x4555,0x8E41,0xDED6,0x77AB,0,0xB3E9}
    }
     ,{
    {
   0xE2A8,0x77AB,0,0x5070,(-10),7,0x1265,0,(-4),0x4555}
    }
     ,{
    {
   0xBDA7,0x8E41,0,(-10),0,0,(-1),0x77AB,1,0x77AB}
    }
     ,{
    {
   0x47DC,(-8),0x8E41,0xB3E9,0x8E41,(-8),0x47DC,0xBDA7,0x5070,0xE2A8}
    }
     ,{
    {
   0xDA43,1,0xA527,0xE2A8,7,(-6),0,0xDED6,(-5),0xBDA7}
    }
     };
           uint32_t l_917 = 0xA833F4F9;
           int32_t ***l_1030[1];
           int16_t l_1035 = 1;
           int16_t l_1054 = 0x46FA;
           uint16_t **l_1056 = (void*)0;
           uint32_t l_1074[10][9][2] = {
     {
    {
   0U,1U}
    ,{
   0x9DBE34FF,4294967295U}
    ,{
   1U,4294967295U}
    ,{
   4U,4294967295U}
    ,{
   4294967288U,1U}
    ,{
   0x601124BB,8U}
    ,{
   0U,4U}
    ,{
   4294967293U,4294967295U}
    ,{
   4294967289U,4294967289U}
    }
     ,{
    {
   0x31663202,0x3057A298}
    ,{
   0U,0U}
    ,{
   0x8B4992FF,0x5FAC1BAF}
    ,{
   4294967291U,0U}
    ,{
   0x49E5C0FB,1U}
    ,{
   0x41AAA537,1U}
    ,{
   4294967295U,0x8B4992FF}
    ,{
   0x84797908,1U}
    }
     ,{
    {
   0x89EAEE4E,0xA9CFA961}
    ,{
   0x08ADB001,0x4C786C28}
    ,{
   0x9F96A6C2,4294967286U}
    ,{
   4294967295U,0x49E5C0FB}
    ,{
   1U,0x9B568CB4}
    ,{
   4294967286U,0xFF6E61CF}
    ,{
   0U,0xF0423536}
    ,{
   0xA6EAE12D,4294967292U}
    ,{
   0x0A68C87A,4U}
    ,{
   4U,0x2B989F32}
    ,{
   1U,0x5B70D6D8}
    ,{
   0U,0xFF6E61CF}
    }
     };
           int32_t l_1079 = (-1);
           int8_t l_1084 = 0x11;
           int16_t l_1101 = (-9);
           int i, j, k;
           for (i = 0;
       i < 1;
       i++)         l_1030[i] = (void*)0;
           for (g_3 = 0;
       (g_3 >= 0);
       g_3 -= 1)     {
              int32_t l_44[2][8] ;
              const int32_t l_944 = (-8);
              int32_t l_945 = 0x40FE3C1A;
              int32_t l_948 = 0xEF1A60B2;
              int32_t l_1037 = 0x5817A531;
              int8_t *l_1059 = &g_527[3];
              int8_t l_1073 = 8;
              uint8_t *l_1087 = &g_208[1][1];
              uint8_t **l_1086 = &l_1087;
              uint32_t *l_1096 = (void*)0;
              uint32_t *l_1097 = &l_917;
              int16_t *l_1100 = &g_105;
              int i, j;
          }
           return g_296;
       }
               int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           platform_main_begin();
           transparent_crc(g_897, "g_897", print_hash_value);
           transparent_crc(g_947, "g_947", print_hash_value);
           transparent_crc(g_961, "g_961", print_hash_value);
           for (i = 0;
       i < 1;
       i++)     {
              for (j = 0;
      j < 9;
      j++)         {
                 for (k = 0;
     k < 10;
     k++)             {
                    transparent_crc(g_1007[i][j][k], "g_1007[i][k]", print_hash_value);
                    if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
                }
             }
          }
           transparent_crc(g_1009, "g_1009", print_hash_value);
           platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
       }
