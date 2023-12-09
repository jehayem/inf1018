#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

int main (void) {
  char c = 'a';
  char d = 97;
  dump(&c, sizeof(c));
  dump(&d, sizeof(d));
  return 0;
}
