#include <cstdio>
#include <cstring>

struct Student
{ // class 類別導向
  char name[100];
  int grade[10];
  int count;
  float avg()
  {
    int j;
    float avg = 0;
    for (j = 0; j < count; j++)
      avg += grade[j];
    return avg / count;
  }
};
float StuAvg(Student s)
{ // functional 功能導向
  int j;
  float avg = 0;
  for (j = 0; j < s.count; j++)
    avg += s.grade[j];
  return avg / s.count;
}

int main()
{
  Student red; // red 此物件
  strcpy(red.name, "Red");
  red.grade[0] = 54;
  red.grade[1] = 94;
  red.grade[2] = 48;
  red.count = 3; // 總計三科
  printf("%s\n%d\n%d\n%d\n", red.name, red.grade[0], red.grade[1], red.grade[2]);
  printf("%f\n", red.avg());
}