#include <stdio.h>

int main () {
  int a, b, c;
  printf("3つの整数を入力してください");
  scanf("%d%d%d", &a, &b, &c);

  int r = 0;

  if ((a  < b && c  > b) || (c < b && a > b)) {
    r = b;
  } else if ((b < a && c > a) || (c < a && b > a)) {
    r = a;
  } else {
    r = c;
  }

  printf("真ん中は%dです\n", r);
}
