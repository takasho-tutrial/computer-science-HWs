#include <stdio.h>
#include <string.h>

typedef struct student {
  int code;
  char name[100];
  int math;
  int eng;
} Student;

Student readData (Student *s, int peopleCount) {
  int i;
  for (i = 0; i < peopleCount; i++)
    scanf("%d %s %d %d ", &s[i].code, s[i].name, &s[i].math, &s[i].eng);
  return *s;
}

Student search (Student a[], int num, char target[]) {
  int i;
  Student result;
  result.code = -1;
  for (i = 0; i < num; i++)
    if (!strcmp(a[i].name, target)) result = a[i];
  return result;
}

void print_border (Student a[], int num, int s, int t) {
  int i;
  printf("数学が%d点以上%d以下の情報\n", s, t);
  for (i = 0; i < num; i++) {
    Student c = a[i];
    if (s < c.math && c.math < t)
      printf("|--%02d番 %s君 数学%d点 英語%d点\n", c.code, c.name, c.math, c.eng);
  }
  printf("以上\n\n");
}

void adjust (Student *a, int num, int s, int t) {
  int i;
  for (i = 0; i < num; i++) {
    if (s < a[i].math && a[i].math < t)
      a[i].math = 60;
  }
}

int main () {
  int i, peopleCount;

  scanf("%d", &peopleCount);
  Student students[peopleCount];
  *students = readData(students, peopleCount);


  print_border(students, peopleCount, 55, 60);
  adjust(students, peopleCount, 55, 60);

  printf("以下に修正後の情報を列挙する．\n");
  for (i = 0; i < peopleCount; i++) {
    Student c = students[i];
    printf("|--%02d番 %s君 数学%d点 英語%d点\n", c.code, c.name, c.math, c.eng);
  }
  printf("以上\n");
}
