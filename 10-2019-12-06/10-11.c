#include <stdio.h>
#include <math.h>

typedef struct complex {
  double re;
  double im;
} Complex;

void scanComplex (Complex *c) {
  scanf("%lf%lf", &c->re, &c->im);
}

void printCompexNumber (Complex c) {
  if (c.re != 0)
    printf("%lf", c.re);
  if (c.re != 0 && c.im > 0)
    printf("+");
  if (c.im != 0)
    printf("%lf i", c.im);
  printf("\n");
}

Complex addC (Complex a, Complex b) {
  Complex result;
  result.re = a.re + b.re;
  result.im = a.im + b.im;
  return result;
}

Complex multC (Complex a, Complex b) {
  Complex result;
  result.re = a.re * b.re - a.im * b.im;
  result.im = a.re * b.im + a.im * b.re;
  return result;
}

Complex congC (Complex a) {
  a.im = -(a.im);
  return a;
}

Complex absC (Complex a) {
  Complex t = multC(a, congC(a));
  t.re = sqrt(t.re);
  return t;
}

Complex divC (Complex a, Complex b) {
  Complex molecule = multC(a, congC(b));
  Complex denominator = multC(b, congC(b));
  molecule.re = molecule.re / denominator.re;
  molecule.im = molecule.im / denominator.re;
  return molecule;
}

Complex solve (double a, double b, double c) {
  Complex result;
  double D = b*b - 4*a*c;
  if (D < 0) {
    Complex molecule, denominator;
    molecule.re = -b;
    molecule.im = sqrt(-(D));
    denominator.re = 2*a;
    denominator.im = 0;

    result = divC(molecule, denominator);
  } else {
    result.re = (-b + D) / 2 / a;
    result.im = 0;
  }
  return result;
}

int main () {
  double a, b, c;
  printf("a b c = ");
  scanf("%lf%lf%lf", &a, &b, &c);
  printCompexNumber(solve(a, b, c));
}
