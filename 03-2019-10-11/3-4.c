#include <stdio.h>
#include <math.h>

int main () {
  int a, b, c, d;
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("c = "); scanf("%d", &c);

  d = pow(b, 2) - 4 * a * c;

  printf("方程式 %dx^2+%dx+%d=0 の解の個数は", a, b, c);
  if (d > 0) {
    printf("2");
  } else if (d == 0) {
    printf("1");
  } else {
    printf("0");
  }
  printf("個です\n");

}
