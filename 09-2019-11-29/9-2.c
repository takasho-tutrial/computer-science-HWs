#include <stdio.h>

void sort2 (int *n1, int *n2) {
  if (*n1 > *n2) {
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
  }
}

int main () {
  int x, y;
  printf("x = "); scanf("%d", &x);
  printf("y = "); scanf("%d", &y);

  printf("x = %d, y = %d\n||\n|| swapping... \n\\/\n", x, y);
  sort2(&x, &y);
  printf("x = %d, y = %d\n", x, y);
}
