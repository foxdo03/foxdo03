#include <stdio.h>

int main()
{
    char alpha[1000000] = {0, };
    char alpha_list[26];
    char big_alpha[26];
    int num[26] = {0, };
    int max = 0;
    int i;
    int j = 0;
    int k = 0;
    scanf("%s", alpha);
    for(i = 0; i < 26; i++)
    {
        alpha_list[i] = 'a' + i;
        big_alpha[i] = 'A' + i;
    }
    while(alpha[j] != 0)
    {
        if(alpha[j] == alpha_list[k] || alpha[j] == big_alpha[k])
        {
            num[k]++;
            j++;
            k = 0;
        }
        else if(alpha[j] != alpha_list[k] || alpha[j] !=  big_alpha[k])
        {
            k++;
        }
    }
    k = 0;
    while(k < 26)
    {
        if(num[k] > max)
        {
            max = num[k];
        }
        k++;
    }
    i = 0;
    k = 0;
    while(k < 26)
    {
        if(num[k] == max)
        {
            i++;
        }
        k++;
    }
    k = 0;
    if(i != 1)
    {
        printf("?");
        return 0;
    }
    else if(i == 1)
    {
        while(num[k] != max)
            k++;
        while(num[k] == max)
        {
            printf("%c", big_alpha[k]);
            k++;
        }
    } 
}