#include <stdio.h>
int main()
{
  int a0 = 0, a1 = 1, a2 = 1, i = 3, fib, n;
  scanf("%d", &n);
  if (n == 0)
    printf("0\n");
  else if (n <= 2)
    printf("1\n");
  else
    while (n >= i)
    {
      a0 = a1;
      a1 = a2;
      a2 = a0 + a1;
      i++;
      fib = a2;
    }
  printf("%d", fib);
  return 0;
}