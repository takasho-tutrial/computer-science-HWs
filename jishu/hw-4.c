#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "gazou.h"
void underTriangle (int size);
void checker (int size, int checkerCount);
void sinCurve (int r, double period);
void concentricCircles (int r, int circleCounts);

int main (void) {
  int checkerCount, i, j, s;

  s = 250;
  int size = 2 * s + 1;

  /* (a) 左下のみ彩色 */
  // underTriangle(size);

  /* (b) チェッカー */
  checkerCount = 5;
  checker(size, checkerCount);

  /* (c) sinカーブ */
  // int period = 3 * M_PI;
  // sinCurve(s, period);

  /* (d) 同心円 */
  // int circleCounts = 10;
  // concentricCircles(s, circleCounts);
}

void underTriangle (int size) {
  int output[size][size];
  int i, j;

  for (j = 0; j < size; j++)
    for (i = 0; i < size; i++) {
      int color = (double)i / size * 255;
      output[i][j] = i >= j ? color : 255;
    }
  
  write_pgm(output, size, size);
}

void checker (int size, int checkerCount) {
  int output[size][size];
  int i, j;

  int weight = size / checkerCount;

  for (i = 0; i < size; i++)
    for (j = 0; j < size; j++) {
      output[i][j] = (i / weight + j / weight) % 2 ? 255 : 0 ;
    }
  
  write_pgm(output, size, size);
}

void sinCurve (int r, double period) {
  int size = 2 * r + 1;
  int output[size][size];
  int i, j;
  for (j = 0; j < size; j++)
    for (i = 0; i < size; i++) {
      double value = sin(period / r * j);
      int index = value * r;
      int color = (double)i / size * 255;

      output[i][j] = size - index - r > i ? color : 255;
    }

  write_pgm(output, size, size);
}

void concentricCircles (int r, int circleCounts) {
  int size = 2 * r + 1;
  int output[size][size];
  int i, j;

  int weight = size / circleCounts;

  for (j = 0; j < size; j++)
    for (i = 0; i < size; i++) {
      int distanceFromO = sqrt(pow(abs(i - r), 2) + pow(abs(j - r), 2));
      
      output[i][j] = (distanceFromO / weight) % 2 ? 0 : 255 ;
    }

  write_pgm(output, size, size);
}
