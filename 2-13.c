#include <stdio.h>
int main(void)
{
    double n, x, y, end;
    scanf("%lf %lf %lf", &n, &x, &y);

    end = n - y / x;
    if (end <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", (int)end);
    }

    return 0;
}
