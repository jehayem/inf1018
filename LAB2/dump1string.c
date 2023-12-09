#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}
int main (void) {
  char a[]="''";
  char b[]="$";
  char c[]="A";
  char d[]="\n";
  char p[] = "7509";
  dump(p, sizeof(p));
  dump(a, sizeof(a));
  dump(b,sizeof(b));
  dump(c,sizeof(c));
  dump(d,sizeof(d));
  return 0;
}
