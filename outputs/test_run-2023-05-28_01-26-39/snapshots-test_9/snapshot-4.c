int crc32_context = 0xFFFFFFFFUL;
unsigned crc32_byte_b;
int main() {
  {
    {
      { crc32_context = 0 ^ (crc32_context ^ crc32_byte_b) & 0xFF; }
    }
  }
}
