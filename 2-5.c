#include <stdio.h>
int main(void)
{
    long n;
    scanf("%ld", &n);
    switch (n % 6)
    {
    case 0:
        printf("m");
        break;
    case 1:
        printf("E");
        break;
    case 2:
        printf("X");
        break;
    case 3:
        printf("M");
        break;
    case 4:
        printf("e");
        break;
    case 5:
        printf("x");
        break;
    default:
        break;
    }

    return 0;
}