#include <stdio.h>
#include <math.h>

int main () {
  int x;
  printf("x = "); scanf("%d", &x);

  double area = sqrt(3) / 4 * pow(x, 2);

  double volume = sqrt(2) / 12 * pow(x, 3);

  printf("(a): %lf, (b): %lf\n", area, volume);
}
