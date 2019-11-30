/* 高さheight 幅widthの二次元int型配列を画像ファイルとして出力する．グレースケール */
void write_pgm(int (*a)[], int height, int width);

void write_pgm(int (*a)[], int height, int width) {
  int i, j;
  printf("P2\n");
  printf("%d %d\n", width, height);
  printf("%d\n", 255);
  for (i = 0; i < height; i++){
     for (j = 0; j < width; j++){
       printf("%d\n", (*a)[i*width + j]);
     }
  }
  return;
}

