#include <stdio.h>
int main(void)
{
    int time, hour, minute, hour_add, minute_add, time_add, time_end;
    scanf("%d %d", &time, &time_add);
    hour = time / 100;
    minute = time - hour * 100;
    hour_add = time_add / 60;
    minute_add = time_add - hour_add * 60;
    if (minute + minute_add < 60)
    {
        if (hour + hour_add < 24)
        {
            time_end = (hour + hour_add) * 100 + minute + minute_add;
            printf("%03d", time_end);
        }
        else
        {
            time_end = (hour + hour_add - 24) * 100 + minute + minute_add;

            printf("%03d", time_end);
        }
    }
    else
    {
        if (hour + hour_add + (minute + minute_add) / 60 < 24)
        {
            time_end = (hour + hour_add + (minute + minute_add) / 60) * 100 + (minute + minute_add - ((minute + minute_add) / 60) * 60);
            printf("%03d", time_end);
        }
        else
        {
            time_end = (hour + hour_add + (minute + minute_add) / 60 - 24) * 100 + (minute + minute_add - ((minute + minute_add) / 60) * 60);
            printf("%03d", time_end);
        }
    }

    return 0;
}