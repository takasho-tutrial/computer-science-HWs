#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "gazou.h"

int main (void) {
  int i, j, r;
  r = 250;
  int size = 2 * r + 1;
  int output[size][size];
  
  for (i = 0; i < size; i++)
    for (j = 0; j < size; j++) {
      double distanceFromO = sqrt(pow(abs(i - r), 2) + pow(abs(j - r), 2));
      output[i][j] = distanceFromO > r ? 255 : 255 * (r - distanceFromO) / r;
    }
  
  write_pgm(output, size, size);
}
