#include <stdio.h>

int main()
{
    int a[3];
    scanf("%d%d%d", &a[0], &a[1], &a[2]);
    float avg = ((a[0] + a[1] + a[2]) / 3.0);
    printf("%f\n", avg);
    return 0;
}