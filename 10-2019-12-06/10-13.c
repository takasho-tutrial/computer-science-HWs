#include <stdio.h>
#include <math.h>

typedef struct mat2 {
  double a, b, c, d;
} Mat2;

typedef struct complex {
  double re;
  double im;
} Complex;

int det (Mat2 m) {
  return m.a*m.d - m.b*m.c;
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
    result.re = (-b + sqrt(D)) / 2 / a;
    result.im = 0;
  }
  return result;
}

Complex eig (Mat2 m) {
  Complex eigenvalue;
  int a = 1;
  int b = -m.a - m.d;
  int c = m.a*m.d - m.b*m.c;

  return solve(a, b, c);
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

void scalarM (Mat2 *m, double p) {
  m->a = p * m->a;
  m->b = p * m->b;
  m->c = p * m->c;
  m->d = p * m->d;
}

void sumM (Mat2 m1, Mat2 m2) {
  printf("sumM(m1, m2) =\n");
  printf("{{%lf ", m1.a + m2.a);
  printf("%lf}\n", m1.b + m2.b);
  printf(" {%lf ", m1.c + m2.c);
  printf("%lf}}\n", m1.d + m2.d);
  printf("\n");
}

void multM (Mat2 m1, Mat2 m2) {
  printf("multM(m1, m2) =\n");
  printf("{{%lf ", m1.a*m2.a + m1.b*m2.c);
  printf("%lf}\n", m1.a*m2.b + m1.b*m2.d);
  printf(" {%lf ", m1.c*m2.a + m1.d*m2.c);
  printf("%lf}}\n", m1.c*m2.b + m1.d*m2.d);
}

int main () {
  Mat2 m1, m2;
  printf("m1: {{a b} {c d}} = ");
  scanf("%lf%lf%lf%lf", &m1.a, &m1.b, &m1.c, &m1.d);
  printf("\n");

  printf("one of eigenvalue : ");
  printCompexNumber(eig(m1));

  scalarM(&m1, 3);
  printf("%lf %lf %lf %lf\n", m1.a, m1.b, m1.c, m1.d);

  
  printf("\n");
  printf("m2: {{a b} {c d}} = ");
  scanf("%lf%lf%lf%lf", &m2.a, &m2.b, &m2.c, &m2.d);
  printf("\n");

  sumM(m1, m2);

  multM(m1, m2);


}

