#include <stdio.h>
#include <math.h>

int main () {
  double b,n;

  printf("b = "); scanf("%lf", &b);
  printf("n = "); scanf("%lf", &n);

  double result = (log(n))/(log(b));

  printf("%lf\n", result);
}
