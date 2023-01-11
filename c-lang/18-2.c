#include <stdio.h>

int main()
{
  float a;
  int b;
  scanf("%f %d", &a, &b);
  a /= 100;
  float c = b / (a * a);
  printf("%.1lf\n", c);

  if (c < 18.5)
  {
    printf("Underweight");
  }
  else if (c <= 24)
  {
    printf("Normal");
  }
  else if (c <= 27)
  {
    printf("Overweight");
  }
  else if (c < 30)
  {
    printf("Mild obesity");
  }
  else if (c < 35)
  {
    printf("Moderate obesity");
  }
  else
  {
    printf("Server obesity");
  }
  return 0;
}