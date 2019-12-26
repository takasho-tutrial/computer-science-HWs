#include <stdio.h>
#include <math.h>

int kaijo (int x) {
  int i, result = 1;
  for (i = 1; i <= x; i++)
    result *= i;
  return result;
}

double taylor_e (double x, int n) {
  int i;
  double result = 0;
  for (i = 0; i < n; i++)
    result += pow(x, i) / kaijo(i);
  return result;
}

int main () {
  int i, n = 20;
  printf("n   taylor_e(2.0, n) error\n");
  for (i = 1; i <= n; i++) {
    double t = taylor_e(2.0, i);
    printf("%02d      %lf     %lf\n", i, t, fabs(t - exp(2.0)));
  }
}
