#include <stdio.h>

int main()
{
  int a, b, c, d, e, f;
  scanf("%d %d %d", &a, &b, &c);
  int z[a][b];
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      z[i][j] = 0;
    }
  }
  for (int i = 0; i < c; i++)
  {
    scanf("%d %d %d", &d, &e, &f);
    z[d][e] = f;
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      printf("%d ", z[i][j]);
    }
    if (i != a - 1)
    {
      printf("\n");
    }
  }
  return 0;
}