#include <stdio.h>
int main(void)
{
    int a = 1;
    for (int i = 1; i < 11; i++)
    {
        a *= 3;
        printf("3的%d次幂为：%d\n",i,a);
    }
    
    return 0;
}