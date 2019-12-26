#include <stdio.h>

int main () {
  int count = 0,
      i, j, k;
  for (i = 1; i <= 20; i++)
    for (j = 1; j <= 20; j++)
      for (k = 1; k <= 20; k++)
        if (
          i + j > k &&
          i < j &&
          i*i+j*j == k*k
        ) {
          printf("%d %d %d\n", i, j, k);
          count++;
        }
  printf("total %d\n", count);
}
