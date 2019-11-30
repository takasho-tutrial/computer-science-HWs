#include <stdio.h>
#include <math.h>

int main () {
  int a, b, c;
  double s, result;

  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);
  printf("c = "); scanf("%d", &c);

  s = (double)(a + b + c) / 2;

  result = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("Answer : %.3lf\n", result);
}
