#include <stdio.h>

int main()
{
    int a[10000];
    int b[10000];
    int i = 0;

    while(scanf("%d %d", &a[i], &b[i]) != EOF)
    {
        printf("%d\n", a[i] + b[i]);
        i++;
    }
}