#include <stdio.h>

int main()
{
    int n;
    int j = 0;
    int k = 0;
    int l = 0;
    int sum[100][27] = {0, };
    int result;
    int minus = 0;
    char alpha[27] = {0, };
    char word[100][101] = {0, };
    scanf("%d", &n);
    result = n;
    for(n = n; n > 0; n--)
        scanf("%s", word[k]);
    for(n = 0; n < 26; n++)
        alpha[n] += 'a' + n;
    n = 0;
    k = 0;

    while(word[n][0] != 0)
    {
        if(word[n][j] == alpha[k])
        {
            sum[n][k]++;
            k = 0;
            j++;
        }
        else if(word[n][j] != alpha[k])
            k++;
        if(word[n][j] == 0)
            n++;
    }
    k = 0;
    j = 0;
    n = 0;
    while(word[n][0] != 0)
    {
        for(n = n ; k < 26; k++)
        {
            l = sum[n][k] - 1;
            if(sum[n][k] > 1)
            {
                while(l > 0)
                {
                    while(alpha[k] == word[n][j])
                    {
                        if(word[n][j] != word[n][j + l])
                            minus = -1;
                            
                        l--;
                    }
                    while(alpha[k] != word[n][j])
                        j++;
                    l--;
                    printf("%d\n", minus);
                }
            }
        }
        result = result + minus;
        j = 0;
        k = 0;
        n++;
    }
    printf("%d", result);
}