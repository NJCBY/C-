// #include <stdio.h>
// int main(void)
// {
//     int year, month;
//     int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     scanf("%d %d", &year, &month);
//     if (month > 12 || month < 1)
//     {
//         printf("���ݲ�����");
//     }
//     else
//     {
//         if (year % 4 == 0)
//         {
//             months[2] = 29;
//             printf("%d-%d-%d", year, month, months[month]);
//         }
//         else
//         {
//             printf("%d-%d-%d", year, month, months[month]);
//         }
//     }

//     return 0;
// }
#include <stdio.h>
int main(void)
{
    int y, m;
    int day;
    scanf("%d %d", &y, &m);
    if (m > 12 || m < 1)
    {
        printf("数据不合理");
    }
    else
    {
        switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                day = 29;
            else
                day = 28;
            break;
        }
        printf("%d-%d-%d", y, m, day);
    }

    return 0;
}
