#include <stdio.h>

int main()
{
    int num;
    int loop;
    int pri = 0;
    int r;
    int i = 0;
    char str_arr[20];

    scanf("%d", &num);
    for(num = num; num > 0; num--)
    {
        scanf("%d", &loop);
        scanf("%s", str_arr);
        while(str_arr[i] != 0)
        {
            while(loop > pri)
            {
                printf("%c",str_arr[i]);
                pri++;
            }
            pri = 0;
            i++;
        }
        printf("\n");
        i = 0;
    }
}