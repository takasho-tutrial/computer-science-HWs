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
  int n, k;
  printf("n, k = ");
  scanf("%d%d", &n, &k);
  printf("sod is %d\n", sod(n, k));
}
