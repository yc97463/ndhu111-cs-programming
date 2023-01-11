#include <stdio.h>

int main()
{
  int sum = 0;
  for (int i = 0; i < 9; i++)
  {
    int tmp;
    scanf("%d", &tmp);
    printf("%d", tmp);
    sum += tmp * (i + 1);
  }
  int safe = sum % 11;

  if (safe == 10)
  {
    printf("X");
  }
  else
  {
    printf("%d", safe);
  }
}