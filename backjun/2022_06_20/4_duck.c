#include <stdio.h>

int main()
{
    int h;
    int m;
    int wait;
    int p = 0;
    int q;

    scanf("%d%d %d",&h,&m,&wait);

    if (m + wait >= 60)
    {
        h = (m + wait) / 60 + h;
        q = (m + wait) % 60;

        if (h >= 24)
            h = h - 24;
        printf("%d %d", h+p, q); 
    }
    else
        printf("%d %d", h, m+wait); 
    
}