#include <stdio.h>
int main(void)
{
    int a = 1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", a);
        a *= n;
    }
}