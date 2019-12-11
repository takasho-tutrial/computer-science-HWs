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

int main () {
  int i, peopleCount;

  scanf("%d", &peopleCount);
  Student students[peopleCount];
  *students = readData(students, peopleCount);

  char sWord[5][100] = { "Judy", "Steve", "Wendy", "Ted", "Hikaru" };

  for (i = 0; i < 5; i++) {
    Student s = search(students, peopleCount, sWord[i]);
  if (s.code != -1)
    printf("番号%03d番 %sさん 数学%d点 英語%d点\n", s.code, s.name, s.math, s.eng);
  else
    printf("NOT FOUND: %s\n", sWord[i]);
  }
}
