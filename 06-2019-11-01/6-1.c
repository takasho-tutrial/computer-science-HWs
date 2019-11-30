#include <stdio.h>

int main () {
  int a, b, c;
  printf("3つの整数を入力してください");
  scanf("%d%d%d", &a, &b, &c);

  int r = a;
  if (b > r) {
    r = b;
  } else if (c > r) {
    r = c;
  }
  printf("最大は%dです\n", r);
}
