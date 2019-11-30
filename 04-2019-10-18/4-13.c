#include <stdio.h>
#include <math.h>
#include <time.h>

int main (void) {
  int total = 0;
  int times = 10000;
  int i;
  srand(time(NULL));

  for (i = 0; i < times; i++) 
    total += rand() % 10 + 1;

  printf("%lf\n", total / (double)times);
}
