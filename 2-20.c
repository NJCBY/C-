#include <stdio.h>
int main(void)
{
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    switch (month)
    {
    //31天
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (day + 1 <= 31)
        {
            printf("%d %d %d", year, month, day+1);
        }
        else
        {
            printf("%d %d %d", year, month + 1, day - 30);
        }
        break;
    //30天
    case 4:
    case 6:
    case 9:
    case 11:
        if (day + 1 <= 30)
        {
            printf("%d %d %d", year, month, day+1);
        }
        else
        {
            printf("%d %d %d", year, month + 1, day - 29);
        }
        break;
    //到第二年
    case 12:
        if (day + 1 <= 31)
        {
            printf("%d %d %d", year, month, day+1);
        }
        else
        {
            printf("%d %d %d", year + 1, month - 11, day - 30);
        }
        break;
    //闰年29 不闰年28
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (day + 1 <= 29)
            {
                printf("%d %d %d", year, month, day+1);
            }
            else
            {
                printf("%d %d %d", year, month + 1, day - 28);
            }
        }
        else
        {
            if (day + 1 <= 28)
            {
                printf("%d %d %d", year, month, day+1);
            }
            else
            {
                printf("%d %d %d", year, month + 1, day - 27);
            }
        }
        break;
    }

    return 0;
}