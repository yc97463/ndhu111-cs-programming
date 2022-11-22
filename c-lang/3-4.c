#include <stdio.h>

int main()
{
  char a[4];
  scanf("%s", a);
  int check = 0;
  for (int i = 0; i <= 4; i++)
  {
    if (a[i] == '4')
    {
      check = 1;
    }
  }
  if (check == 1)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
}