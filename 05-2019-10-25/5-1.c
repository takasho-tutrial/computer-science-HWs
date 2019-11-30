#include <stdio.h>

int main () {
  int a[3][3], det, i, j;

  // input
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }

  // output
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }

  // det
  det = 
    (a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1]) -
    (a[0][2] * a[1][1] * a[2][0] + a[0][1] * a[1][0] * a[2][2] + a[0][0] * a[2][1] * a[1][2]);
  printf("%d\n", det);
}
