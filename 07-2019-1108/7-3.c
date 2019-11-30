#include <stdio.h>

int divisible (int n, int i) {
  return !(n%i) ? 1 : 0;
}

int sod (int n, int k) {
  int i, total;
  total = 0;

  for(i = 1; i < k + 1; i++) {
    divisible(n, i) ? total += i: total;
  }
  return total;
}

int main () {
  int i, n;
  printf("n = ");
  scanf("%d", &n);
  for(i = n; i >= 1; i--) {
    // printf("%d, %d\n", i, sod(i, i-1));
    if (sod(i, i-1) == i) {
      printf("%d 以下の最大の完全数は %d です\n", n, i);
      break;
    }
  }
}
