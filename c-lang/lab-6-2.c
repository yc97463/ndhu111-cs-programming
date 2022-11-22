#include <stdio.h>

int main()
{
  int a, b[100], sum;
  float avg = 0;
  scanf("%d", &a);
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &b[i]);
    sum += b[i];
  }
  avg = (float)sum / a;
  int out = 0;
  for (int i = 0; i < a; i++)
  {
    if (b[i] < avg)
    {
      out += 1;
    }
  }
  printf("%d\n", out);
  return 0;
}