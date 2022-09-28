#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  double ans1 = (-b + sqrt(b * b - 4 * a * c)) % (2 * a);
  double ans2 = (-b - sqrt(b * b - 4 * a * c)) % (2 * a);
  if (ans1 == ans2)
  {
    printf("%.2f\n", ans1);
  }
  else
  {
    printf("%f,%f\n", ans1, ans2);
  }
  return 0;
}