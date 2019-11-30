#include <stdio.h>
#include <math.h>

double vecmult (double a[], double b[], int n) {
  int i;
  double result = 0.0;
  for (i = 0; i < n; i++)
    result += a[i] * b[i];
  return result;
}

double norm (double a[], int n) {
  int i;
  double sqrtSum = 0.0;

  for (i =0; i < n; i++)
    sqrtSum += pow(a[i], 2);
  return sqrt(sqrtSum);
}

void vecsum (double a[], double b[], double c[], int n) {
  int i;
  for (i = 0; i < n; i++)
    c[i] = a[i] + b[i];
}

int main () {
  int i, n;
  printf("===INPUT START===\nn = ");
  scanf("%d", &n);
  double a[n], b[n];
  
  for (i = 0;i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%lf", &a[i]);
  }
  for (i = 0;i < n; i++) {
    printf("b[%d] = ", i);
    scanf("%lf", &b[i]);
  }

  printf("===INPUT END===\n");

  printf("vexmult(a, b, n) = %lf\n", vecmult(a, b, n));
  printf("norm(a, n) = %lf\n", norm(a, n));

  double c[n];
  printf("execute vecsum function...\n");
  vecsum(a, b, c, n);
  printf("c[%d]: ", n + 1);
  for (i = 0; i < n; i++)
    printf("%lf, ", c[i]);
  printf("\n");
}
