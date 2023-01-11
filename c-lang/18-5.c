#include <stdio.h>

void leapYear(int begin, int end)
{
  int c = begin;
  for (int i = 0; i <= end - begin; i++)
  {
    if (c % 4 == 0 && c % 100 != 0)
    {
      printf("%d\n", c);
    }
    else if (c % 400 == 0)
    {
      printf("%d\n", c);
    }
    c += 1;
  }
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  leapYear(a, b);
  return 0;
}