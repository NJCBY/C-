#include <stdio.h>
int main(void)
{
    int k;
    scanf("%d", &k);
    for (int i = 1; i < 10; i++)
    {
        k = 2 *( k + 1);
        printf("第%d天早上：%d个\n", 10 - i, k);
    }

    return 0;
}