#include <stdio.h>
#include <math.h>

int main () {
  int a, b, c;
  double D;

  printf("a, b, c = ");
  scanf("%d%d%d", &a, &b, &c);

  D = pow(b, 2) - 4 * a * c;

  if (D < 0)
    printf("解無し\n");
  else if (a == b && b == 0)
    if (c)
      printf("不定\n");
    else
      printf("不能\n");
  else {
    printf(
      "%dx^2+%dx+%d=0 の解は%lfと%lfです\n",
      a, b, c,
      (-b + sqrt(D))/(2*a),
      (-b - sqrt(D))/(2*a)
    );
  }
}
