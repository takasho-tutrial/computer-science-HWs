#include <stdio.h>

int main () {
  int a, b;
  printf("a = "); scanf("%d", &a);
  printf("b = "); scanf("%d", &b);

  if (a % b) {
    printf("%dは%dの約数ではありません\n", b, a);
  } else {
    printf("%dは%dの約数です\n", b, a);
  }
}
