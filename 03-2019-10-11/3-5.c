#include <stdio.h>

int main () {
  int input;
  printf("char as number = "); scanf("%d", &input);
  printf("入力された数字に対応する英小文字は %c です．\n", input + 'a' - 1);
}
