#include <stdio.h>

int n_lenth_arr_save(unsigned int n, int *n_arr)
{
    int i = 0;
    while(n > 0)
    {
        n_arr[i] = n % 10;
        n = n / 10;
        i++;
    }
    return (i);
}

int self_num_cul(unsigned int n)
{
    unsigned int d = 0;
    unsigned int arr[10] = {0, };
    int i = n_lenth_arr_save(n, arr);
    int j=0;;
    for (j = 0; j < i; j++)
    {
        d += arr[j];
    }
    d = n + d;
    return d;
}
int main()
{
    unsigned int a = 1;
    unsigned int b;
    int c;
    int i =0;
    unsigned int d_arr[10036];

    for (c = 0 ; c < 10001; c++)
        d_arr[c] = c;
    while(a <= 10000)
    {
        b = self_num_cul(a);
        d_arr[b] = 0;
        if(b == 10035)
            break;
        a++;
    }
    while(i < 10000)
    {
        if(d_arr[i] != 0)
            printf("%d\n", d_arr[i]);
        i++;
    }
}
