#include <stdio.h>

int main () {
  int i, j, n;
  printf("n = ");
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++) {
    for (j = 0; j <= n - i; j++)
      printf(" ");
    for (j = 0; j < i; j++)
      printf("*");
    printf("\n");
  }
}
