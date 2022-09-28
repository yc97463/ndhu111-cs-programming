#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%d\n", a + (c - 1) * b);
  return 0;
}