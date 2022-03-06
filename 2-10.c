#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d大于%d", a, b);
    }
    else
    {
        printf("%d不大于%d", a, b);
    }

    return 0;
}