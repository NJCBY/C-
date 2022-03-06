#include <stdio.h>
int max(int a, int b);
int min(int a, int b);

int main()
{
    int a1, b1, a2, b2, a3, b3, a4, b4;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    scanf("%d %d %d %d", &a3, &b3, &a4, &b4);

    int m1 = max(min(a1, a2), min(a3, a4));
    int n1 = max(min(b1, b2), min(b3, b4));
    int m2 = min(max(a1, a2), max(a3, a4));
    int n2 = min(max(b1, b2), max(b3, b4));

    //这四行取出第一个矩形最大的点，第二个矩形最小的点

    if (m1 < m2 && n1 < n2) //判断有没有相交
    {
        printf("%d\n", (m2 - m1) * (n2 - n1));
    }
    else
        printf("0\n");

    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}