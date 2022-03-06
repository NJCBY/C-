#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%d", &x);
    if (x > 0)
    {
        y = 1 - x;
    }
    else if (x == 0)
    {
        y = 2;
    }
    else
    {
        y = x * x;
    }
    printf("%d", y);

    return 0;
}