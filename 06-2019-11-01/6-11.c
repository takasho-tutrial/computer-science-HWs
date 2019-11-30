#include <stdio.h>

int main () {
  int a[10], i, j, temp;

  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  
  for (i = 0; i < 9; i++)
    for (j = 9; j > i; j--) {
      if (a[j-1] > a[j]) {
        temp = a[j-1];
        a[j-1] = a[j];
        a[j] = temp;
      }
    }

  printf("%d, %d\n", a[9], a[8]);
}
