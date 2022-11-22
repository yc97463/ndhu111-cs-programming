#include <stdio.h>

int *add(int *tot, int num);

int main()
{
  int n, total = 0;
  int *ptr = NULL;
  while (scanf("%d", &n) != EOF)
  {
    if (n % 13 == 0 || n < 0)
    {
      continue;
    }
    ptr = add(&total, n);
  }
  printf("*ptr=%d, total=%d", *ptr, total);
  return 0;
}

int *add(int *tot, int num)
{
  *tot += num;
  return tot;
}