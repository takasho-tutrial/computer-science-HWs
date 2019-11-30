#include <stdio.h>

int main () {
  double f, i;

  printf("f = "); scanf("%lf", &f);
  printf("i = "); scanf("%lf", &i);

  double result = (f + i / 12) * 30.48;

  printf("%lf cm\n", result);
}
