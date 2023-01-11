#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", a + b + c);
  printf("%d %d\n", a / b, a % b);
  printf("%d %d", c * c, c * c * c);
  return 0;
}