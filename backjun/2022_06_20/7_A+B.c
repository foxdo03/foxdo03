#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int a;
    int b;
    int *c;
    int i = 0;
    int j = 0;

    
    scanf("%d", &t);
    c = (int *)malloc(sizeof(int) * t);
    
    for(t = t; t > 0; t--)
    {
        scanf("%d %d", &a, &b);
        c[i] = a + b;
        i++;
        j++;
    }
    for (i = 0; j > i;  i++)
    {
        printf("%d\n", c[i]);
    }
    free(c);
}