#include <stdio.h>

int main()
{
    int num;
    int index;
    double m[1000];
    double max = m[0];
    double sum = 0;
    double average = 0;

    scanf("%d", &num);
    index = num;
    for(num = 0; num < index; num++)
    {
        scanf("%lf", &m[num]);
    }
    for(num = 0; num < index; num++)
    {
        if(max < m[num])
            max = m[num];
    }
    for (num = 0; num < index; num++)
    {
        sum += m[num];
    }
    average = sum * 100 / index / max;

    printf("%lf", average);
}