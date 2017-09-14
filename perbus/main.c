void main() {
  volatile unsigned char *a = (unsigned char *) 0xa0;
  volatile unsigned *b = (unsigned *) 0x130;
  unsigned k;
  
  *a = (unsigned char) 0x00cd;
  k = *b;
}
