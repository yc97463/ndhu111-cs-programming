#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmpfunc(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}
int main()
{
  int a[100], b = 0, temp, sum = 0;
  while (1)
  {
    if (feof(stdin))
    {
      break;
    }
    scanf("%d ", &temp);
    a[b] = (temp);
    sum += a[b];
    b++;
  }
  printf("%d \n", b);
  for (int i = 0; i < b; i++)
  {
    printf("%d\n", a[i]);
  }

  qsort(a, b + 1, sizeof(int), cmpfunc); // a[n]
  sum = 0;
  for (int i = 0; i <= b; i++)
  {

    if (i < 3 || i > (b - 3))
    {
      // printf("%d x\n", a[i]);
      continue;
    }
    else
    {
      // printf("%d o\n", a[i]);
      sum += a[i];
    }
  }
  float c = (float)sum / (b + 1 - 6);
  printf("%.2f\n", (c));
}