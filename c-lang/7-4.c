#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  double p = (pow(3.0, a) + log10(b) - exp(c));
  printf("%.2f\n", fabs(p));
  return 0;
}