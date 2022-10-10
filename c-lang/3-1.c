#include <stdio.h>

int main()
{
  int a, b = 0;
  scanf("%d", &a);
  if (a % 3 == 2)
  {
    // printf("3");
    b += 1;
  }
  if (a % 7 == 5)
  {
    // printf("7");
    b += 1;
  }
  if (a % 11 == 7)
  {
    // printf("11");
    b += 1;
  }

  if (b == 3)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}