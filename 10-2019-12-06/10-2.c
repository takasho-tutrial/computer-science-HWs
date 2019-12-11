#include <stdio.h>

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

Student max_eng (Student a[], int num) {
  int i, max = 0;
  Student m;
  for (i = 0; i < num; i++)
    if (max <= a[i].eng) {
      m = a[i];
      max = a[i].eng;
    }
      
  return m;
}

double ave_math (Student a[], int num, int score) {
  int i,
      successCount = 0,
      total = 0;
  for (i = 0; i < num; i++) {
    if (a[i].eng >= score) {
      successCount++;
      total += a[i].math;
    }
  }
  return (double)total / successCount;
}

int main () {
  int i, peopleCount;
  scanf("%d", &peopleCount);
  Student students[peopleCount];

  *students = readData(students, peopleCount);

  // for (i = 0; i < peopleCount; i++)
    // printf("番号%03d番%sの数学は%d点で，英語は%d点．\n", students[i].code, students[i].name, students[i].math, students[i].eng);
  
  Student bestEngPerson = max_eng(students, peopleCount);
  printf("英語が最高点の学生は番号%03d番%sの数学は%d点で，英語は%d点です．\n", bestEngPerson.code, bestEngPerson.name, bestEngPerson.math, bestEngPerson.eng);

  printf("英語が%d点以上の学生の数学の平均点は%lf点です．\n", 50, ave_math(students, peopleCount, 50));
}
