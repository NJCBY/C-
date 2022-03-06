#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && b >= c)
    {
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
    }
    else if (a >= c && c >= b)
    {
        printf("%d\n", a);
        printf("%d\n", c);
        printf("%d\n", b);
    }
    else if (a <= b && b <= c)
    {
        printf("%d\n", c);
        printf("%d\n", b);
        printf("%d\n", a);
    }
    else if (b <= a && c >= a)
    {
        printf("%d\n", c);
        printf("%d\n", a);
        printf("%d\n", b);
    }
    else if (b >= a && a >= c)
    {
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
    }
    else if (b >= c && c >= a)
    {
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%d\n", a);
    }

    return 0;
}
