#include <stdio.h>

int main()
{
    char alpha[16] = {0, };
    int time[16] = {0, };
    int i = 0;
    int j = 0;
    int dealay = 0;
    scanf("%s", alpha);
    while(alpha[i] != 0)
    {
        if(alpha[i] <= 'C')
            time[i] = 3;
        else if(alpha[i] <= 'F')
            time[i] = 4;
        else if(alpha[i] <= 'I')
            time[i] = 5;
        else if(alpha[i] <= 'L')
            time[i] = 6;
        else if(alpha[i] <= 'O')
            time[i] = 7;
        else if(alpha[i] <= 'S')
            time[i] = 8;
        else if(alpha[i] <= 'V')
            time[i] = 9;
        else if(alpha[i] <= 'Z')
            time[i] = 10;
        i++;
    }
    for(j = 0; j < 15; j++)
        dealay += time[j];
    printf("%d", dealay);
}