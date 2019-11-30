#include <stdio.h>

int main () {
  int year;
  printf("Please enter some year : "); scanf("%d", &year);

  int m = 1868;
  int t = 1912;
  int s = 1926;
  int h = 1989;
  int r = 2019;

  if (year - r >= 0) {
    printf("令和%d年\n", year - r + 1);
  } else if (year - r < 0 && year - h > 0) {
    printf("平成%d年\n", year - h + 1);
  } else if (year - h < 0 && year - s > 0) {
    printf("昭和%d年\n", year - s + 1);
  } else if (year - s < 0 && year - t > 0) {
    printf("大正%d年\n", year - t + 1);
  } else if (year - t < 0 && year - m > 0) {
    printf("明治%d年\n", year - m + 1);
  } else {
    printf("わかりません\n");
  }
}
