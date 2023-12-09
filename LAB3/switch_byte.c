#include <stdio.h>

unsigned char switch_byte(unsigned char x) {
  return ((x << 4) | (x >> 4));
 }


int main(){
  unsigned char input_byte = 0xAB;
  unsigned char switched_byte = switch_byte(input_byte);
  printf("Valor original: 0x%X\n", input_byte);
  printf("Valor trocado:  0x%X\n", switched_byte);
  return 0;
 }
                                 
