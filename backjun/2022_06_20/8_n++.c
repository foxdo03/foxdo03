#include <stdio.h>

int main()
{
    int n;
    int a = 0;

    scanf("%d", &n);

    for(n; n > 0; n--)
    {
        a = a + n;    
    }
    printf("%d", a);
}