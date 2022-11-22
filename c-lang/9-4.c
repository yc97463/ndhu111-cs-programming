#include <stdio.h>

int mul(int m, int n)
{
  int aa = m;
  for (int i = m + 1; i <= n; i++)
  {
    aa *= i;
  }
  return aa;
}

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  printf("%d\n", mul(m, n));
  return 0;
}