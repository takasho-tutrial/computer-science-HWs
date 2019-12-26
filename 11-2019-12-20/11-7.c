#include <stdio.h>

typedef struct rational {
  int num;
  int denum;
} Rational;

void swap_int (int *a, int *b) {
  if (a > b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
  }
}

int gcd (int a, int b) {
  if (a > b)
    swap_int(&a, &b);

  if (b % a == 0) {
    return a;
  } else {
    return gcd(b % a, a);
  }
}

int lcm (int a, int b) {
  return a * b / gcd(a, b);
}

void showRational (Rational *r) {
  if (r->denum == 1)
    printf("%d\n", r->num);
  else
    printf("%d / %d\n", r->num, r->denum);
}

void reduce (Rational *r) {
  int gcd_t = gcd(r->num, r->denum);
  r->num = r->num / gcd_t;
  r->denum = r->denum / gcd_t;
}

Rational mult_rat (Rational *r1, Rational *r2) {
  Rational result;
  result.num = r1->num * r2->num;
  result.denum = r1->denum * r2->denum;
  reduce(&result);
  return result;
}

Rational add_rat (Rational *r1, Rational *r2) {
  Rational result;
  result.num = r1->num * r2->denum + r1->denum * r2->num;
  result.denum = r1->denum * r2->denum;
  reduce(&result);
  return result;
}

int main () {
  Rational r1, r2;
  printf("r1 = num / denum = ");
  scanf("%d%d", &r1.num, &r1.denum);
  printf("r2 = num / denum = ");
  scanf("%d%d", &r2.num, &r2.denum);

  printf("r1 = "); showRational(&r1);
  printf("r2 = "); showRational(&r2);
  printf("\n");

  Rational multied = mult_rat(&r1, &r2);
  printf("multi: ");
  showRational(&multied);

  Rational added = add_rat(&r1, &r2);
  printf("add: ");
  showRational(&added);
  printf("\n");

}
