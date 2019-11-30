#include <stdio.h>

int tnpo (int n) {
  return n % 2 ? 3 * n + 1 : n / 2 ;
}

int collatz (int n) {
  if (n == 1) {
    return 0;
  } else {
    return 1 + collatz(tnpo(n));
  }
}

int main () {
  int n;
  scanf("%d", &n);
  printf("%d\n", collatz(n));
}
