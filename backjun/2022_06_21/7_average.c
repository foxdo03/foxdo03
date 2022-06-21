#include <stdio.h>

int main()
{
    int cas;
    int n;
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;
    double grade[1000];
    double average;
    double total[1000];
    double sum = 0;

    scanf("%d", &cas);
    k = cas;
    for(cas = cas; cas > 0; cas--)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%lf", &grade[i]);
        for(i = 0; i < n; i++)
            sum += grade[i];
        average = sum / n;
        for (i = 0; i < n; i++)
        {
            if(average < grade[i])
                count ++;
        }
        total[j] = (double)count / (double)n * 100;
        j++;
        count = 0;
        sum = 0;
    }
    for(j = 0; j < k; j++)
        printf("%.3lf%%\n", total[j]);
}