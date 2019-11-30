#include <stdio.h>

int main () {
  int i, n, result;
  scanf("%d", &n);

  result = 1;
  for (i = 0; i < n; i++) {
    result *= 2;
  }

  printf("%d\n", result);
}
