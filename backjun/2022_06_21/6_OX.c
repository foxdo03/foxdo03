#include <stdio.h>

int main()
{
    int a;
    int b[1000] = {0, };
    int c = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    char ox[80];

    scanf("%d", &a);

    for (a = a; a > 0; a--)
    {
        scanf("%s", &ox);
        while(ox[i] != 0)
        {
            while(ox[i] == 'O')
            {
                c++;
                i++;
            }
            if(ox[i] == 'X' || ox[i] == 0)
            {
                for(c = c; c > 0; c--)
                    b[j] += c;
            }
            if (ox[i] != 0)
                i++;
            c = 0;
        }
        j++;
        i = 0;
    }
    k = j;
    for(j = 0; j < k; j++)
    {
        printf("%d\n", b[j]);
    }
}