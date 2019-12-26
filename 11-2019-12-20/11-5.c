#include <stdio.h>
#include <math.h>

int kaijo (int x) {
  int i, result = 1;
  for (i = 1; i <= x; i++)
    result *= i;
  return result;
}

double taylor_e_r (double x, int n) {
  if (n <= 0) {
    return 1;
  } else {
    double result = pow(x, n) / kaijo(n);
    return result + taylor_e_r(x, n - 1);
  }
}

int main () {
  int i, n = 20;
  printf("n   taylor_e_r(2.0, n) error\n");
  for (i = 0; i < n; i++) {
    double t = taylor_e_r(2.0, i);
    printf("%02d      %lf     %lf\n", i, t, fabs(t - exp(2.0)));
  }
}
