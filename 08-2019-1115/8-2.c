#include <stdio.h>

int power3_r (int n) {
  if (n <= 0) {
    return 1;
  } else if (n % 2 == 0) {
    int t = power3_r(n/2);
    return t * t;
  } else {
    return 3 * power3_r(n-1);
  }
}

int main () {
  int n;
  printf("n = "); scanf("%d", &n);
  printf("%d\n", power3_r(n));
}
