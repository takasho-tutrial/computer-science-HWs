#include <stdio.h>
#include <math.h>

int main () {
  double r;

  printf("r = "); scanf("%lf", &r);

  double diameter = r * 2;

  double circumference = 2 * 3.14 * r;

  double area = 3.14 * pow(r, 2);

  double square = sqrt(pow(diameter, 2));

  double hexagon = sqrt(3) / 4 * pow(r, 2) * 6;

  printf(
    "直径：%lf\n円周の長さ：%lf\n円の面積：%lf\n内接する正方形の面積：%lf\n内接する正六角形の面積：%lf",
    diameter, circumference, area, square, hexagon
  );

}
