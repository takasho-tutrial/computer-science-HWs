#include <stdio.h>

int array_length(const int *stupid) {
  int len = 0;
  while (*stupid) {
    stupid++;
    len++;
  }
  return len;
}

void bsort (int *stupid) {
}

int main () {
  int i, stupid[10];
  for (i = 0; i < 10;i++) {
    printf("array[%d]", i);
    scanf("%d", &stupid[i]);
  }

  bsort(stupid);

  for (i = 0; i < 10;i++) {
    printf("%d ", stupid[i]);
  }  
  printf("\n");
}
