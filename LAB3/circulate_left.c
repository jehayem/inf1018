#include<stdio.h>

unsigned char rotate_left(unsigned char x, int n){
  return ((x<<n)|(x>>(8-n)));
}

int main(){
  unsigned char input_byte = 0x61;
  unsigned char switched_byte = rotate_left(input_byte,1);
  printf("Valor original: 0x%X\n", input_byte);
  printf("Valor trocado:  0x%X\n", switched_byte);
  unsigned char switched_byte1 = rotate_left(input_byte,2);
  printf("Valor original: 0x%X\n", input_byte);
  printf("Valor trocado:  0x%X\n", switched_byte1);
  unsigned char switched_byte2 = rotate_left(input_byte,7);
  printf("Valor original: 0x%X\n", input_byte);
  printf("Valor trocado:  0x%X\n", switched_byte2);
  return 0;
 }

