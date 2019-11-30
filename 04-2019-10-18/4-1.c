#include <stdio.h>

int main () {
  int i, n, result;
  scanf("%d", &n);

  result = 1;
  for (i = 1; i <= n; i++) {
    result *= i;
  }
  printf("%d\n", result);
}
