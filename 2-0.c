#include <stdio.h>

int main()
{
    int num, left;
    int ave = 420;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (i == 0)
        {

            num = (ave - ave / 2) * (8 - i) / (8 - 1 - i);

            left = num / (8 - i);
            printf("%d\n", num);
        }
        else
        {

            num = ave * (8 - i) / (8 - 1 - i) - left;

            left = (num + left) / (8 - i);
            printf("%d\n", num);
        }
    }
    return 0;
}