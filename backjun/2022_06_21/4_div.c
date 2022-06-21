#include <stdio.h>

int main()
{
    int a = 0;
    int c[10];
    int d[42] = {0, };
    int i= 0;
    int j =0;
    for(i = i; i < 10; i++)
    {
        scanf("%d", &c[i]);
    }
    for(i = 0; i < 10; i++)
    {
        while(j < 42)
        {
            if(c[i] % 42 == j)
            {
                d[j]++;
                break;
            }
            else if(c[i] % 42 != j)
                j++;
        }
        j = 0;
    }
    j = 0;
    while(j < 42)
    {
        if (d[j] != 0)
            a++;
        j++;
    }
    printf("%d", a);
}