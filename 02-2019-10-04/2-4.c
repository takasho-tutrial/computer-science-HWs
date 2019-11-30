#include <stdio.h>
#include <math.h>

int main () {
  int x, y, u, v;

  printf("x = "); scanf("%d", &x);
  printf("y = "); scanf("%d", &y);
  printf("u = "); scanf("%d", &u);
  printf("v = "); scanf("%d", &v);

  double result = sqrt(pow(u-x, 2) + pow(v-y, 2));

  printf("%lf\n", result);
}
