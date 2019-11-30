#include <stdio.h>

int max_of_r (int a[], int i) {
  if (i == 0) {
    return a[0];
  } else {
    if (max_of_r(a, i - 1) < a[i]) {
      return a[i];
    } else {
      return max_of_r(a, i - 1);
    }
  }

}

int main () {
  int i, n;
  int a[10];
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);

  printf("%d\n", max_of_r(a, 10));
}
