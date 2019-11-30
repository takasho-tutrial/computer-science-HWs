#include <stdio.h>

int factorical (int n) {
  int i, result = 1;
  for (i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int perm (int n, int m) {
  if (!n || !m) {
    printf("illegal data\n");
    return -1;
  }
  if (n < m) {
    printf("inconsistent data\n");
    return -1;
  }
  return factorical(n) / factorical(n - m);
}

int main () {
  int n, m;
  printf("Please enter two number with a space between these, n m: ");
  scanf("%d%d", &n, &m);
  
  printf("%d\n", perm(n, m));

}
