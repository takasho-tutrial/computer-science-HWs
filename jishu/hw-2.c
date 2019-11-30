#include <stdio.h>
#include "gazou.h"

int main (void) {
  int i, j, r;
  r = 250;
  int size = 2 * r + 1;
  int weight = r / 3;
  int output[size][size];
  
  for (i = 0; i < size; i++)
    for (j = 0; j < size; j++) {
      if (
        (
          (i < weight) ||
          ((size - weight) / 2 < i && i < (size + weight) / 2) ||
          ((size - weight) < i)
        ) || (
          (j < weight) ||
          ((size - weight) < j)
        )
      ) {
        output[i][j] = 0;
      } else {
        output[i][j] = 255;
      }
    }
  
  write_pgm(output, size, size);
}
