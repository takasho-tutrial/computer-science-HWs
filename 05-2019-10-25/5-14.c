#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
  int i, j, n;
  printf("n = ");
  scanf("%d", &n);

  // initialize
  int p[n+1];
  for (i = 0; i < n; i++)
    p[i] = 1;

  // main
  for (i = 2; i <= sqrt(n); i++) {
    if (p[i]) {
      for (j = 2; i * j <= n; j++)
        p[i*j] = 0;
    }
  }

  for (i = 2; i <= n ; i++) {
    if (p[i])
      printf("%d ", i);
  }
  printf("\n");


}
