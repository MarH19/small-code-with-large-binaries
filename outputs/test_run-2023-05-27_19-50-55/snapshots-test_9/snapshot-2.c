 typedef signed char __int8_t;
        typedef unsigned char __uint8_t;
        typedef signed short int __int16_t;
        typedef signed int __int32_t;
        typedef unsigned int __uint32_t;
        typedef unsigned long int __uint64_t;
        typedef __int8_t int8_t;
        typedef __int16_t int16_t;
        typedef __int32_t int32_t;
        typedef __uint8_t uint8_t;
        typedef __uint32_t uint32_t;
        typedef __uint64_t uint64_t;
          
                                
                                         static uint32_t crc32_tab[256];
        static uint32_t crc32_context = 0xFFFFFFFFUL;
        
        static void crc32_byte (uint8_t b) ;
        static void crc32_8bytes (uint64_t val) ;
        static void transparent_crc (uint64_t val, char* vname, int flag) {
        crc32_8bytes(val);
       }
        struct S0 ;
        
        
        static int32_t g_9[6][1][2] ;
        
        
        static int16_t g_65 = 0xBD5FL;
        
        
        
        
        int main (void) {
           int i, j, k;
           int print_hash_value = 0;
           for (i = 0;
       i < 6;
       i++)     {
              for (j = 0;
      j < 1;
      j++)         ;
          }
       }
