#include <stdio.h>
int main(void)
{
    int a, b, c, d, max_ab, max_cd;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >= b)
    {
        max_ab = a;
    }
    else
    {
        max_ab = b;
    }
    if (c >= d)
    {
        max_cd = c;
    }
    else
    {
        max_cd = d;
    }
    if (max_ab >= max_cd)
    {
        printf("%d", max_ab);
    }
    else
    {
        printf("%d", max_cd);
    }

    return 0;
}