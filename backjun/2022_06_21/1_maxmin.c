#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *m;
    int i = 0;
    
    scanf("%d", &n);

    m = (int *)malloc(sizeof(int) * n);

    for (n = n;  n > 0; n --)
    {
        scanf("%d", &m[i]);
        i++;
    }
    int max = m[0];
    int min = m[0];

    while(n < i)
    {
        if (max <= m[n])
        {
            max = m[n];
        }
        if (min >= m[n])
        {
            min = m[n];
        }
        n++;
    }
    printf("%d %d", min, max);
    free(m);
}