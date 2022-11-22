#include <stdio.h>

int main()
{
  int a;
  scanf("%d", &a);
  int b[a];
  for (int i = 0; i < a; i++)
  {
    scanf("%d", b[i]);
  }
  // int c[4];
  for (int i = 0; i < a - 1; i++)
  {
    if (b[i] < b[i + 1])
    {
      continue;
    }
    else
    {
      int temp = b[i];
      b[i] = b[i + 1];
      b[i + 1] = temp;
    }
  }
  for (int i = 0; i < a; i++)
  {
    printf("%d\n", b[i]);
  }
  // printf("Maximum: %d\nMinimum: %d\nMedian: %lf\nStandard Deviation: %lf", c[0], c[1], c[2], c[3]);
  return 0;
}