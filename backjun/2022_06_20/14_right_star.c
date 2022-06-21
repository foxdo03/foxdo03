#include <stdio.h>

int main()
{
    int t;
    int a;
    int b;
    int c;
    a = 0;
    b = 0;
    scanf("%d", &t);

    while(t)
    {
        a++;
        c = t - 1 ;
        while(c)
        {
            printf(" ");
            c--;
        }
        while(a)
        {
            printf("*");
            b++;
            a--;
        }
        a = b;
        b = 0;
        printf("\n");
        t--;
    }
}