#include <stdio.h>

int main () {
  int x, y;
  printf("x = "); scanf("%d", &x);
  printf("y = "); scanf("%d", &y);
  
  printf("交換前：x=%d, y=%d\n", x, y);

  x ^= y ^= x ^= y;

  printf("交換後：x=%d, y=%d\n", x, y);
}
