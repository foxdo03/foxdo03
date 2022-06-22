#include <stdio.h>

void integer_x(int n, int *x)
{
    x[2] = n % 10;
    x[1] = (n / 10) % 10;
    x[0] = (n / 100) % 10;
}

int main()
{
    int i = 0;
    int n;
    int x[3] = {0, };
    int j = 100;
    scanf("%d", &n);

    if(n < 100)
    {
        i = n;
        printf("%d", i);
    }
    else if(n == 0)
    {
        printf("1");
    }
    else if(n == 1000)
    {
        i = 144;
        printf("%d", i);
    }
    else if(n >= 100 || n < 1000)
    {
        i = 99;
        while(j <= n)
        {
            integer_x(j, x);
            if(x[1] - x[0] == x[2] - x[1])
                i++;
            j++;
        }
        printf("%d", i);      
    }
}