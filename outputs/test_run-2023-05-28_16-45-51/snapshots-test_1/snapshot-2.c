  typedef unsigned char __uint8_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef __int32_t int32_t;
        typedef __uint8_t uint8_t;
        typedef __uint32_t uint32_t;
                                                                               static uint32_t crc32_tab;
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        static void crc32_byte () ;
        static void crc32_8bytes () ;
        static void transparent_crc (uint32_t val, char* vname, int flag) ;
        
        static uint32_t g_1007[1][9][10] ;
        
               int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           for (i = 0;
       i < 1;
       i++)     {
              for (j = 0;
      j < 9;
      j++)         {
                 for (k = 0;
     k < 10;
     k++)             {
                    printf ("%d\n", g_1007[i][j][k]);
                }
             }
          }
       }
