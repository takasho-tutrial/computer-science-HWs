#include <stdio.h>

int main () {
  double a, b, result;
  printf("a = "); scanf("%lf", &a);
  printf("b = "); scanf("%lf", &b);

  if (a < b) {
    result = b / a;
  } else {
    result = a / b;
  }
  printf("Average : %.3lf\n", result);
}
