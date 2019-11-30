#include <stdio.h>

int main () {
  int input, result;

  printf("x : ");
  scanf("%d", &input);

  result = (input % 100) / 10;

  printf("%d\n", result);
}
