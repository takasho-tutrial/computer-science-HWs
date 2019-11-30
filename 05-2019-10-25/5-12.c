#include <stdio.h>

int main () {
  int cnt[10] = {};
  int i = 0;
  int input = 0;
  
  for (i = 0; i < 20; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &input);
    cnt[input] += 1;
  }

  for (i = 0; i < 10; i++)
    printf("%d: %d個\n", i+1, cnt[i]);
}
