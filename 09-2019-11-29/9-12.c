#include <stdio.h>

int str_length(const char *st) {
  int len = 0;
  while (*st) {
    st++;
    len++;
  }
  return len;
}

void reverse (char *rev, const char *st) {
  int len = str_length(st);
  int i;
  for (i = len-2; i >= 0; i--)
    rev[len-2-i] = st[i];
  rev[len-1] = '\0';
}

int main () {
  char st[100], rev[100];
  printf("文字を入力してください．");
  fgets(st, 100, stdin);

  reverse(rev, st);

  printf("%s\n", rev);
}
