#include <stdio.h>

int main () {
  int i, input, max;
  max = 0;

  for (i = 0; i < 10; i++) {
    scanf("%d", &input);
    if (input > max) max = input;
  }

  printf("入力されたあたいの中での最大値は%dです\n", max);
}
