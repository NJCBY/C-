#include <stdio.h>
int main(void)
{
    long n;
    scanf("%ld", &n);
    switch (n % 6)
    {
    case 0:
        printf("c");
        break;
    case 1:
        printf("A");
        break;
    case 2:
        printf("B");
        break;
    case 3:
        printf("C");
        break;
    case 4:
        printf("a");
        break;
    case 5:
        printf("b");
        break;
    default:
        break;
    }

    return 0;
}