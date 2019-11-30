#include <stdio.h>

int sum (int n) {
  int i, total;
  total = 0;
  for (i = 1; i < n+1; i++)
    total += i;
  return total;
}

int main () {
  int x;
  printf("x = ");
  scanf("%d", &x);
  printf("total is %d\n", sum(x));
}
