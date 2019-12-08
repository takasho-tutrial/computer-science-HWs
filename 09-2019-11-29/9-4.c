#include <stdio.h>

int countChoicer (const char *p, char target) {
  int count = 0;
  while (*p) {
    if (*p == target) count++;
    p++;
  }
  return count;
}

int main () {
  char st[100], c, *p;
  printf("Enter some strings : ");
  fgets(st, 100, stdin);
  printf("Enter a char to count : ");
  c = getchar();
 
  printf("There are %d \"%c\"s\n",countChoicer(st, c), c);
  
}
