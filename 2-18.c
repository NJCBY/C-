// #include <stdio.h>
// int days(int month);
// int main(void)
// {

//     int year, month, day, year_days = 0;
//     scanf("%d %d %d", &year, &month, &day);
//     if (((year % 100 != 0 && year % 4 == 0 || year % 4 == 0) && month > 2))
//     {
//         year_days += days(month) + 1 + day;
//     }
//     else
//     {
//         year_days += days(month) + day;
//     }
//     printf("%d", year_days);
//     return 0;
// }
// int days(int month)
// //一月：31天；二月：28或者29天；三月：31天；四月：30天；五月：31天；六月：30天；
// //七月：31天；八月：31天；九月：30天；10月：31天；11月：30天；12月：31天。
// {
//     int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     int days = 0;
//     for (int i = 0; i < month; i++)
//     {
//         days += months[i];
//     }
//     return days;
// }
#include <stdio.h>
int days(int year, int month, int day);
int main(void)
{
    int year, month, day, sum = 0;
    scanf("%d %d %d", &year, &month, &day);
    sum = days(year, month, day);
    printf("%d", sum);
    return 0;
}
int days(int year, int month, int day)
{
    int s = 0, i;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        a[2] = 29;
    }
    for (i = 0; i < month; i++)
    {
        s += a[i];
    }
    s = s + day;
    return s;
}