#include <stdio.h>

long long sum(int *a, int n)
{
    int i;
    long long result = 0;
    for(i = 0; i < n; i++)
    {
         result += a[i];
    }
    return result;
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printf("%d", sum(a,n));
}