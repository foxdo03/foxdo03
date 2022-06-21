#include <stdio.h>

int main()
{
    int n;
    int a = 1;

    scanf("%d", &n);

    for(n = n; n > 0; n--)
    {
        printf("%d\n", a++);
    }
}