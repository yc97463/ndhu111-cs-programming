#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    float b = 0;
    int c = a * 100;
    if (a * 100 - c >= 0.5)
    {
        b = a + 0.01;
    }
    else
    {
        b = a;
    }
    printf("%.2f\n%.2f\n", b, a);
    return 0;
}