#include <stdio.h>
int main(void)
{
    int n, days, hours, mins, secs;
    scanf("%d", &n);
    days = n / (24 * 60 * 60);
    hours = (n - days * (24 * 60 * 60)) / (60*60);
    mins = (n - days * (24 * 60 * 60) - hours * (60 * 60)) / 60;
    secs = n - days * (24 * 60 * 60) - hours * (60 * 60) - mins * 60;
    printf("%d秒为%d天%d小时%d分钟%d秒", n, days, hours, mins, secs);
    return 0;
}
