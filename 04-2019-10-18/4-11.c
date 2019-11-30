#include <stdio.h>
#include <math.h>

int main () {
  int x;
  for (x = 0; x <= 180; x += 5)
    printf("sin(%d) = %1.5lf, cos(%d) = %1.5lf\n", x, sin(x * M_PI / 180), x, cos(x * M_PI / 180));
}
