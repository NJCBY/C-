#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, F;
    scanf("%d", &n);
    F = pow(n, 5) - 181 * pow(n, 4) + 9880 * pow(n, 3) - 189700 * pow(n, 2) + 1180000 * n - 1000000;

    if (!F)
    {
        printf("%d是方程的根。\n", n);
    }
    else
    {
        printf("%d不是方程的根。\n", n);
    }

    return 0;
}