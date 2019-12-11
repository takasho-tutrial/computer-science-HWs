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

int main () {
  // input
  Complex a, b;
  printf("a:re im = "); scanComplex(&a);
  printf("b:re im = "); scanComplex(&b);
  printf("a = "); printCompexNumber(a);
  printf("b = "); printCompexNumber(b);

  // main
  printf(" addC(a, b) = "); printCompexNumber(addC(a, b));
  printf("multC(a, b) = "); printCompexNumber(multC(a, b));
  printf("congC(a, b) = "); printCompexNumber(congC(a));
  printf(" absC(a, b) = "); printCompexNumber(absC(a));
  printf(" divC(a, b) = "); printCompexNumber(divC(a, b));
}
