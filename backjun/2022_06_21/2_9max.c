#include <stdio.h>

int main()
{
    int a[9];
    int i;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    i = 0;
    while(i < 9)
    {
        if(max <= a[i])
            max = a[i];
        i++;
    }
    printf("%d\n", max);
    i = 0;
    while(i < 9)
    {
        if(max == a[i])
            printf("%d", i + 1);
        i++;
    }
}