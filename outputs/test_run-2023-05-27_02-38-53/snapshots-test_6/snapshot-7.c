 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef unsigned short int __uint16_t;
        typedef signed int __int32_t;
        
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
        typedef unsigned int uint32_t;
        typedef __uint64_t uint64_t;
        typedef struct {
         int __count;
         struct   {
          unsigned int __wch;
          char __wchb[4];
        }
       __value;
       }
        __fpos64_t;
                                                                             
        uint32_t platform_main_end_crc;
int platform_main_end_flag;

                          static uint32_t crc32_tab[1];
static uint32_t crc32_tab_0;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        
        uint8_t crc32_byte_b;

        uint64_t crc32_8bytes_val;

        uint64_t transparent_crc_val;

        static uint64_t g_3 = 0xDD8D13034D00693ELL;
        static int32_t g_76 = 0xE05BF5EFL;
        static int16_t g_104 = 8L;
        static int32_t g_108 = 0xE62ED8E9L;
        static uint16_t g_135 = 0x8A5EL;
        static uint32_t g_141 = 18446744073709551615UL;
        static uint8_t g_144 = 0x31L;
        static uint32_t g_166 = 5UL;
        static int8_t g_187[1] = {
      
     1L,1L,1L,1L,1L,1L,1L,1L,1L
      ,
     {
    0xA212EB4F3A628D86LL,0x9BEB6E18EC0D0173LL,0x5171171D35FC118CLL}
     ,{
    0xD6A9AA89525BE554LL,0xC1D393908CA69266LL,2UL}
     ,{
    1UL,1UL,18446744073709551606UL}
     ,{
    0xF28CA52837081A23LL,1UL,2UL}
     
      ,
     {
    0xCD9FD2C490EA19DDLL,0xC1D393908CA69266LL,1UL}
     ,{
    0x65A3C54BD25B4213LL,0x9BEB6E18EC0D0173LL,0x7D469F3BFDC2BF5ELL}
     ,{
    2UL,0xCD9FD2C490EA19DDLL,1UL}
     ,{
    0xBBA6016F2BD89C7BLL,2UL,2UL}
     
      ,{
     {
    0xA78A7768BC73AE71LL,0xA212EB4F3A628D86LL,18446744073709551606UL}
     ,{
    0xA78A7768BC73AE71LL,18446744073709551606UL,2UL}
     ,{
    0xBBA6016F2BD89C7BLL,0xF28CA52837081A23LL,0x5171171D35FC118CLL}
     ,{
    2UL,0x65A3C54BD25B4213LL,0xFEC59831632895B5LL}
     }
      ,{
     {
    0x65A3C54BD25B4213LL,0xF28CA52837081A23LL,0xD6A9AA89525BE554LL}
     ,{
    0xCD9FD2C490EA19DDLL,18446744073709551606UL,0xCD9FD2C490EA19DDLL}
     ,{
    0xF28CA52837081A23LL,0xA212EB4F3A628D86LL,0xCD9FD2C490EA19DDLL}
     ,{
    1UL,2UL,0xD6A9AA89525BE554LL}
     }
      };
        static uint8_t g_219 = 1UL;
        static int32_t g_229 = 1L;
        static uint8_t g_294[1] = {
      0UL,250UL,0UL,0UL,250UL,0UL,0UL,250UL};
        static int8_t g_512 = (-9L);
        static uint32_t g_513[1] = {
      0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL,0x0C3C40BEL};
        static int16_t g_516 = 0x2F93L;
        static uint8_t g_517 = 0x33L;
        static uint32_t g_529 = 1UL;
        static int64_t g_533 = 0xED784760C996D737LL;
        static uint8_t g_540 = 248UL;
        static int32_t g_588[1] = {
      
     7L,7L,7L,7L,7L,7L,7L,7L,7L
      ,
     0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL
      ,
     7L,7L,7L,7L,7L,7L,7L,7L,7L
      ,
     0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL
      ,
     7L,7L,7L,7L,7L,7L,7L,7L,7L
      ,
     0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL,0xCB8BBBDEL
      ,
     7L,7L,7L,7L,7L,7L,7L,7L,7L
      ,
      };
static int32_t g_588_0_0 = 7L;
        static uint16_t g_1271 = 0xB6A9L;
        static uint64_t g_1273 = 0x34D6610E5908C4A5LL;
        static int8_t g_1340 = (-2L);
        static uint8_t g_1421 = 0xB4L;
        static int8_t *g_1429 = (void*)0;
        static int8_t *g_1428 = (void*)0;
        static uint32_t g_1458 = 0x36F78E21L;
        static int8_t g_1529 = (-1L);
        static int8_t g_1536 = 0x30L;
        static int64_t g_1573 = 9L;
        static const int64_t g_1594 = 6L;
        static const uint8_t g_1655[1] = {
      0UL};
        static int32_t g_1665 = (-4L);
        static int16_t g_1676[1] = {
      0L,0L,0L,0L};

        void  func_1(void) {
           
           
           int32_t l_582_0;
           
           
           
           
           
           
           
           int32_t l_1189_0_0;
           
           
           uint32_t l_1726_0;
           int i, j;
           i = 0;
           
           for (0;
       0 < 2;
       i++)         l_582_0 = 0x1E53B733L;
           i = 0;
           
           for (0;
       0 < 3;
       i++)     {
              j = 0;
              
              for (0;
      0 < 7;
      j++)             l_1189_0_0 = 0x3288C8DEL;
          }
           i = 0;
           
           for (0;
       0 < 3;
       i++)         l_1726_0 = 0xED5D79DAL;
            0x8A5EL;
       }
        int main (void) {
           int i, j;
           
           {
                  }
           
           ;
           {
           
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {
           
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {
           
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {
           
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {
           
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {
           
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           i = 0;
           
           for (i;
       i < 9;
       i++)     {
              j = 0;
              
              for (j;
      j < 9;
      j++)         {
                 {
                 
                 
                         ;
                         0;
                         
                          {
                           0;
                        }
                        }
                 
                 ;
                 0;
                 
                  0;
             }
          }
           {char *vname = "g_1273";
           int flag = 0;
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {char *vname = "g_1340";
           int flag = 0;
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {char *vname = "g_1573";
           int flag = 0;
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           {char *vname = "g_1594";
           int flag = 0;
           
                   ;
                   0;
                   
                    {
                     0;
                  }
                  }
           
           ;
           i = 0;
           
           for (i;
       i < 1;
       i++)     {
              {char *vname = "g_1676[i]";
              int flag = 0;
              
                      ;
                      0;
                      
                       {
                        0;
                     }
                     }
              
              ;
              0;
              
               0;
          }
           {
                   printf ("checksum = %X\n", platform_main_end_crc);
                  }
           
           ;
           return 0;
       }
