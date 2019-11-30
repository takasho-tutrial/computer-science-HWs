#include <stdio.h>

int main () {
  int h, m, s, result;

  printf("h = "); scanf("%d", &h);
  printf("m = "); scanf("%d", &m);
  printf("s = "); scanf("%d", &s);

  result = ( h * 60 + m ) * 60 + s;

  printf("result : %d\n", result);
}
