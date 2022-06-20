#include <stdio.h>

int main()
{
    int h;
    int m;

    scanf("%d %d",&h, &m);

    if (m >= 45)
        printf("%d %d", h, (m - 45));
    else if(m < 45)
    {
        if(h == 0)
            h = 24;
        printf("%d %d", (h-1),(15 + m));
    }
}