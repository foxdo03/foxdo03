#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x;
    int *a;
    int i = 0;
    int j = 0;

    scanf("%d %d",&n, &x);
    a = (int *)malloc(sizeof(int) * n);
    for(n = n; n > 0; n--)
    {
        scanf("%d", &a[i]);
        i++;
        j++;
    }
    for(i = 0; i < j; i++)
    {
        if(a[i] < x)
            printf("%d ", a[i]);
    }
    free(a);
}