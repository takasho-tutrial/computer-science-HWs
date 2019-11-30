#include <stdio.h>
#include <math.h>

int main () {
  double s, t, m;
  s = 0;
  t = 2;
  while (t - s > 0.0001) {
    m = (s + t) / 2;
    if (pow(m, 2) >= 2) t = m;
    else s = m;
  }

  printf("%lf\n", s);
}
