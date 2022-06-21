#include <stdio.h>

int main()
{
    int t;
    int a;
    int b;
    a = 0;
    b = 0;

    scanf("%d", &t);

    while(t)
    {
        a++;
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