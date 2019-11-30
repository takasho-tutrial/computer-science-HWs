#include <stdio.h>

int divisible (int n, int i) {
  return n % i ? 0 : 1;
}

int sod_r (int n, int k) {
  if (k == 1) {
    return 1;
  } else {
    if (divisible(n, k)) {
      return k + sod_r(n, k - 1);
    } else {
      return sod_r(n, k - 1);
    }
  }
}

int main () {
  int n, k;
  scanf("%d%d", &n, &k);

  printf("%d\n", sod_r(n, k));
}
