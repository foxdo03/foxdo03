#include <stdio.h>

int main()
{
    int c;
    int x;
    int y;
    int z;
    int a = 100;
    int i = 0;

    scanf("%d", &c);
    y = c / 10;
    z = c % 10;

    if(c < 10)
    {
        c * 10;
    }
    while(c != a)
    {
        x = y + z;
        a = (z * 10) + (x % 10);
        i++;
        y = a / 10;
        z = a % 10;
        if (c == a)
            printf("%d", i);
    }
    return 0;
}