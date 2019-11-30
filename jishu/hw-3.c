#include <stdio.h>
#include <math.h>
#include "gazou.h"

int main (void) {
  int i, j, r;
  r = 250;
  int size = 2 * r + 1;
  int output[size][size];
  
  for (j = 0; j < size; j++)
    for (i = 0; i < size; i++) {
      double value = sin(M_PI / r * j);
      int index = value * r;
      output[i][j] = size - index - r == i ? 0 : 255;
    }

  write_pgm(output, size, size);
}
