#include <stdio.h>

int main () {
  int a[20] = {};
  int input;
  int i = 0;

  do {
    printf("a[%d] = ", i);
    scanf("%d", &input);
    if (input >= 0)
      a[i] = input;
    i++;
  } while (input >= 0);

  for (i = 19; i >= 0; i--)
    if (a[i]) {
      printf("%d ", a[i]);
    }
  printf("\n");
}
