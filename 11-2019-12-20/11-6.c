#include <stdio.h>
#include <math.h>

void swap_int (int *a, int *b) {
  if (a > b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
  }
}

int gcd (int a, int b) {
  if (a > b)
    swap_int(&a, &b);

  if (b % a == 0) {
    return a;
  } else {
    return gcd(b % a, a);
  }
}

int lcm (int a, int b) {
  return a * b / gcd(a, b);
}

int main () {
  int a, b;
  printf("a, b = ");
  scanf("%d%d", &a, &b);

  printf("gcd : %d\n", gcd(a, b));
  printf("lcm : %d\n", lcm(a, b));
}
