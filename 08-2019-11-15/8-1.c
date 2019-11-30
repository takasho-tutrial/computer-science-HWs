#include <stdio.h>

int power3 (int n) {
  if (n < 1) {
    return 1;
  } else {
    return 3 * power3(n-1);
  }
}

int main () {
  int n;
  printf("n = "); scanf("%d", &n);
  printf("%d\n", power3(n));

}
