#include <stdio.h>

int isPrime (int n) {
  int f = 0, i;

  for(i = 2; i < n; i++) {
    n % i == 0 ? f = 1 : f ;
    break;
  }

  return f == 0 ? 1 : 0;
}

int main () {
  int f, n;

  scanf("%d", &n);
  f = 1;

  while (f) {
    n++;
    if (isPrime(n)) {
      printf("%d\n", n);
      f = 0;
    }
  }
}
