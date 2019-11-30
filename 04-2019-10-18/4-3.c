#include <stdio.h>

int main () {
  int a[5], b, i;

  for (i = 0; i < 5; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("b = "); scanf("%d", &b);
  
  for (i = 0; i < 5; i++)
    a[i] *= b;
  
  for (i = 0; i < 5; i++)
    printf("%d ", a[i]);
  printf("\n");
}
