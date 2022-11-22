#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    scanf("%f", &a);
    a *= 100;
    float b = round(a);
    printf("%.2f\n%.2f\n", b / 100.0, a / 100.0);
    return 0;
}