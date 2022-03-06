#include <stdio.h>
int main(void)
{
    int n = 0;
    char ch[5];
    scanf("%s", ch);
    switch (ch[0])
    {
    case 'v':
        n += 0;
        break;
    case 'W':
        n += 625;
        break;
    case 'X':
        n += 1250;
        break;
    case 'Y':
        n += 1875;
        break;
    case 'Z':
        n += 2500;
        break;

    default:
        break;
    }
    switch (ch[1])
    {
    case 'v':
        n += 0;
        break;
    case 'W':
        n += 125;
        break;
    case 'X':
        n += 250;
        break;
    case 'Y':
        n += 375;
        break;
    case 'Z':
        n += 500;
        break;

    default:
        break;
    }
    switch (ch[2])
    {
    case 'v':
        n += 0;
        break;
    case 'W':
        n += 25;
        break;
    case 'X':
        n += 50;
        break;
    case 'Y':
        n += 75;
        break;
    case 'Z':
        n += 100;
        break;

    default:
        break;
    }
    switch (ch[3])
    {
    case 'v':
        n += 0;
        break;
    case 'W':
        n += 5;
        break;
    case 'X':
        n += 10;
        break;
    case 'Y':
        n += 15;
        break;
    case 'Z':
        n += 20;
        break;

    default:
        break;
    }
    switch (ch[4])
    {
    case 'v':
        n += 0;
        break;
    case 'W':
        n += 1;
        break;
    case 'X':
        n += 2;
        break;
    case 'Y':
        n += 3;
        break;
    case 'Z':
        n += 4;
        break;

    default:
        break;
    }
    printf("%d", n);
    return 0;
}