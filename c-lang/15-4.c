#include <stdio.h>
#include <string.h>

struct friendBook
{
  char name[20];
  char birthday[12];
  char tel[12];
  int age;
};

void printFriendBook(struct friendBook *fdbk)
{
  printf("Name: %s\n", fdbk->name);
  printf("Birthday: %s\n", fdbk->birthday);
  printf("Tel: %s\n", fdbk->tel);
  printf("Age: %d\n", fdbk->age);
}

int main()
{
  struct friendBook friends[3];
  int i, year;
  char name[20], birth[12], tel[12];
  for (i = 0; i < 3; i++)
  {
    scanf("%s%s%s%d", name, birth, tel, &year);
    strcpy(friends[i].name, name);
    strcpy(friends[i].birthday, birth);
    strcpy(friends[i].tel, tel);
    friends[i].age = year;
  }
  for (i = 0; i < 3; i++)
  {
    printf("#%d\n", i + 1);
    printFriendBook(&friends[i]);
  }
  return 0;
}