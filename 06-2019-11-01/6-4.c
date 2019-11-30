#include <stdio.h>

int main () {
  int n;
  printf("n = "); scanf("%d", &n);

  printf("今日を金曜日として，%d日後は", n);
  switch (n % 7) {
    case 0:
      printf("金");
      break;
    case 1:
      printf("土");
      break;
    case 2:
      printf("日");
      break;
    case 3:
      printf("月");
      break;
    case 4:
      printf("火");
      break;
    case 5:
      printf("水");
      break;
    case 6:
      printf("木");
      break;
  }
  printf("曜日です\n");
}
