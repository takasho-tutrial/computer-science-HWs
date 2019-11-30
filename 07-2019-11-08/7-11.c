#include <stdio.h>

int rank (int a[], int j, int len) {
  int i, r;
  r = 1;
  for(i = 0; i < len; i++) {
    a[j] >= a[i] ? r : r++;
  }
  return r;
}

int main () {
  int a[10], i;
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < 10; i++)
    printf("%d番目の人は%d位です\n", i, rank(a, i, 10));
}
