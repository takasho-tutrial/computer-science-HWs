#include <stdio.h>
#include <math.h>
#include "gazou.h"

int main (void) {
  int a[5][6] = {
    { 0, 255, 255, 255, 255, 255 },
    { 0, 255, 0, 0, 0, 255},
    {0, 255, 0, 255, 0, 255},
    { 0, 255, 255, 255, 0, 255 },
    { 0, 0, 0, 0, 0, 255,}
  };
  write_pgm(a, 5, 6);
}
