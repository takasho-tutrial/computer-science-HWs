#include <stdio.h>

int main () {
  int input, h, m, s;
  printf("x = "); scanf("%d", &input);

  h = input / 60 / 60;
  input %= 60 * 60;

  m = input / 60;
  input %= 60;

  s = input;

  printf("%d時間%d分%d秒\n", h, m, s);
}
