#include <stdio.h>
int main(void)
{
    char i, j, k; /*i是a的对手，j是b的对手，k是c的对手*/
    for (i = 'X'; i <= 'Z'; i++)
    {
        for (j = 'X'; j <= 'Z'; j++)
        {
            if (i != j)
                for (k = 'X'; k <= 'Z'; k++)
                {
                    if (i != k && j != k)
                    {
                        if (i != 'Z' && k != 'X' && k != 'Z')
                            printf("A-%c\nB-%c\nC-%c\n", i, j, k);
                    }
                }
        }
    }
    return 0;
}