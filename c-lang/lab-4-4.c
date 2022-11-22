#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  int b = 0;
  for (int i = 0; i <= a / 2; i++)
  {
    int c[2] = {i, a - i};
    printf("%d %d\n", c[0], c[1]);
    int d = 0;

    for (int l = 0; l < 2; l++)
    {
      int flag = 0;
      for (int j = 2; j < c[l]; j++)
      {
        if (c[l] % j == 0)
        {
          flag = 1;
          break;
        }
      }
      if (flag == 0)
      {
        d += 1;
      }
    }
    if (d != 2)
    {
      continue;
    }
    else
    {
      b += 1;
    }
  }
  printf("%d\n", b);
  return 0;
}