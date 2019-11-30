#include <stdio.h>

int main () {
  int a[5], i;
  double result;

  for (i = 0; i < 5; i++) {
    printf("a[%d] = ", i); scanf("%d", &a[i]);
  }
  
  for (i = 0; i < 5; i++)
    result += a[i] * a[i];
  
  printf("||a|| = %6.5lf\n", sqrt(result));
}
