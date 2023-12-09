#include <stdio.h>

int odd_ones (unsigned int x) {
    int n;
    for (n=0;x;) {
        if (x&1)
            n=n^1;
        x = x>>1;
    }
    return n;
}
int main() {
  printf("%x tem numero %s de bits\n",0x01010101,odd_ones(0x01010101) ? "impar":"par");
  printf("%x tem numero %s de bits\n",0x01030101,odd_ones(0x01030101) ? "impar":"par");
  return 0;
}
