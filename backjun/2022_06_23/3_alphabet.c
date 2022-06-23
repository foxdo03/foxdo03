#include <stdio.h>

int main()
{
    char a[100] = {0, };
    char alpha[26];
    int num[26];
    int i;
    int j = 0;

    scanf("%s", a);
    for(i = 0; i < 26; i++)
    {
        num[i] = -1;
    }
    for(i = 0; i < 26; i++)
    {
        alpha[i] = 'a' + i;
    }
    i = 0;
    while(a[j] != 0)
    {
        if(a[j] == alpha[i])
        {
            if(num[i] == -1)
                num[i] = j;
            j++;
            i = 0;
        }
        else if(a[j] != alpha[i])
            i++;
        
    }
    i = 0;
    while(i < 26)
    {
        printf("%d ", num[i]);
        i++;
    }
}