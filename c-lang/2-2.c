#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    float b = 0;
    int c = a * 100;
    // printf("a*100: %f\nc: %d\na*100-c: %f\n", a * 100, c, a * 100 - c);
    if ((a * 100 - c) >= 0.5)
    {
        b = a + 0.01;
    }
    else
    {
        b = a;
    }
    // printf("b: %f\n", b);
    int oa = a * 100;
    float oaa = oa / 100.0;
    int ob = b * 100;
    float obb = ob / 100.0;
    printf("%.2f\n%.2f\n", obb, oaa);
    // printf("%f\n%f\n", b, a);
    return 0;
}