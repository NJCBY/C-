#include <stdio.h>
int main(void)
{

    int n, m;
    scanf("%d", &n);
    m = (n / 1000) * 8 + ((n - (n / 1000) * 1000) / 100) * 4 + ((n -  (n / 1000) * 1000 - ((n-(n/1000)*1000)/100)*100)/10)*2 + n%10;
    printf("%d",m);
    return 0;
}