#include <stdio.h>

void sort2 (int *n1, int *n2) {
  if (*n1 > *n2) {
    int tmp;
    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
  }
}

void sort3 (int *n1, int *n2, int *n3) {
  sort2(n1, n2);
  sort2(n2, n3);
  sort2(n1, n3);
}

int main () {
  int x, y, z;

  printf("x = "); scanf("%d", &x);
  printf("y = "); scanf("%d", &y);
  printf("z = "); scanf("%d", &z);

  printf("x = %d, y = %d, z = %d\n||\n|| sorting... \n\\/\n", x, y, z);
  sort3(&x, &y, &z);
  printf("%d < %d < %d\n", x, y, z);
  
}
