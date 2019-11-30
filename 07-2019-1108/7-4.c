#include <stdio.h>

int count (int a[], int p, int length) {
  int i;
  int result = 0;
  
  for (i = 0; i < length; i++)
    a[i] >= p ? result++ : result;
  return result;
}

int main () {
  int i, input[10];

  for(i = 0; i < 10; i++)
    scanf("%d", &input[i]);

  printf("%d\n", count(input, 80, 10));
}
