#include <stdio.h>

int main()
{
    int i = 0;
    int j = 9;
    for (int i = 0; i < j - 1; i = i + 2) {
        printf("%d ", i);
    }
    printf("%d", i);
    return 0;
}
