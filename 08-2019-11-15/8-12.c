#include <stdio.h>

int isPrime (int n) {
  int f = 0, i;

  for(i = 2; i < n; i++) {
    n % i == 0 ? f = 1 : f ;
    break;
  }

  return f == 0 ? 1 : 0;
}

int next_prime (int n) {
  if (isPrime(n)) {
    return n;
  } else {
    return next_prime(n + 1);
  }
}

int main () {
  int n;
  scanf("%d", &n);
  printf("%d\n", next_prime(n+1));

}
