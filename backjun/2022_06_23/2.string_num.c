#include <stdio.h>

int main()
{
    int i;
    int j = 0;
    int k = 0;
    char a[101];

    scanf("%d", &i);
    scanf("%s", a);

    for(j = 0; a[j] != 0; j++)
    {
        k += (int)a[j] - 48;
    }
    printf("%d", k);
    
}