#include <stdio.h>

int main()
{
    int a[3];
    int b[10] = {0, };
    int d;
    int e[1000];
    int i = 0;
    int j = 0;

    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    d = a[0] * a[1] * a[2];

    for(d = d; d > 0; d /= 10)
    {
        e[i] = d % 10;
        i++;
    }
    i = i -1;
    while(i >= 0)
    {
        if(e[i] == 0)
            b[0] = b[0] + 1;
        else if(e[i] == 1)
            b[1] = b[1] + 1;
        else if(e[i] == 2)
            b[2] = b[2] + 1;
        else if(e[i] == 3)
            b[3] = b[3] + 1;
        else if(e[i] == 4)
            b[4] = b[4] + 1;
        else if(e[i] == 5)
            b[5] = b[5] + 1;
        else if(e[i] == 6)
            b[6] = b[6] + 1;
        else if(e[i] == 7)
            b[7] = b[7] + 1;
        else if(e[i] == 8)
            b[8] = b[8] + 1;
        else if(e[i] == 9)
            b[9] = b[9] + 1; 
        i--;
    }
    i = 0;
    while(i <= 9)
    {
        printf("%d\n", b[i]);
        i++;
    }
}