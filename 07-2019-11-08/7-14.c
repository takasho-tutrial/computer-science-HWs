#include <stdio.h>

int tnpo (int n) {
  return n % 2 ? 3 * n + 1 : n / 2 ;
}

int collatz (int n) {
  int index = 0;
  while (n != 1) {
    n = tnpo(n);
    index++;
  }
  return index;
}

int main () {
  int n;
  printf("Please enter n = ");
  scanf("%d", &n);
  printf("collatz(%d) = %d\n", n, collatz(n));
}
