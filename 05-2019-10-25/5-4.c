#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
  int i;
  char st[100];
  printf("Plz input some string : ");
  fgets(st, 100, stdin);
  int len = strlen(st);

  for (i = 0; i < len - 1; i++)
  if (isupper(st[i]))
    putchar(st[i]);
  printf("\n");
}
