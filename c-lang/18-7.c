#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int ars[99999];
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      int tmp;
      scanf("%d", &tmp);
      ars[j] += tmp;
    }
  }
  for (int i = 0; i < b; i++)
  {

    printf("%d ", ars[i]);
  }
  return 0;
}
