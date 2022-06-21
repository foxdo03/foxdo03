#include <stdio.h>

int main()
{
    int a[10000];
    int b[10000];
    int i = 0;
    int c = 1;

    while(c)
    {
        scanf("%d %d", &a[i], &b[i]);
        c = a[i];
        i++;
    }

    for(i = 0; a[i] != 0; i++)
    {
        printf("%d\n", a[i] + b[i]);
    }
}