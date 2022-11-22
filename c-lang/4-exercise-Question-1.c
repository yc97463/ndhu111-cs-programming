#include <stdio.h>

int main()
{
    char c = 'A';
    switch (c) {
        case 'a':
            printf("A");
        case 'A':
            printf("A");
        default:
            printf("B");
    }
    return 0;
}