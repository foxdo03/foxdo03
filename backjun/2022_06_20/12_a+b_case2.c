#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int *a;
    int *b;
    int *c;
    int i = 0;
    int j = 0;

    
    scanf("%d", &t);
    c = (int *)malloc(sizeof(int) * t);
    a = (int *)malloc(sizeof(int) * t);
    b = (int *)malloc(sizeof(int) * t);
    
    for(t = t; t > 0; t--)
    {
        scanf("%d %d", &a[i], &b[i]);
        c[i] = a[i] + b[i];
        i++;
        j++;
    }
    for (i = 0; j > i;  i++)
    {
        printf("Case #%d: %d + %d = %d\n",(i + 1), a[i], b[i], c[i]);
    }
    free(c);
    free(a);
    free(b);
}