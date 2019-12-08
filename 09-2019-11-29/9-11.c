#include <stdio.h>

void deposit (int *paccount, int m) {

  if (m > *paccount) printf("===Not enough account===\n");
  else *paccount += m;
}

void interest (int account, int year) {
  int i;
  double r = 0.01,  result = account;

  for (i = 0; i < r; i++)
    account *= 1 + r / 100;
  printf("%d\n", account);
}


int main () {
  int account, m, year;
  printf("account = "); scanf("%d", &account);
  printf("m = "); scanf("%d", &m);
  printf("year = "); scanf("%d", &year);

  interest(account, year);

  printf("account = %d, m = %d\n", account, m);

  deposit(&account, m);

  printf("Result : account = %d\n", account);
  
}
