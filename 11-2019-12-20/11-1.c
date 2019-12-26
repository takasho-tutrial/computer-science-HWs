#include <stdio.h>

int main () {
  int i, result, x, y;
  result = 0;

  printf("x, y = ");
  scanf("%d%d", &x, &y);

  if (x > y)
    for (i = y; i <= x; i++)
      result += i;
  else
    for (i = x; i <= y; i++)
      result += i;
  printf("%d\n", result);
  
}
