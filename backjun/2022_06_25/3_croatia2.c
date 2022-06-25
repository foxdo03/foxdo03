#include <stdio.h>

int main()
{
    char alpha[101] = {0, };
    int i = 0;
    int result = 0;
    scanf("%s", alpha);
    for(i = 0; alpha[i] != 0; i++)
    {
        if(alpha[i] == 'c')
        {
            if(alpha[i + 1] == '=' || alpha[i + 1] == '-')
                i++;
            result++;
        }
        else if(alpha[i] == 'd')
        {
            if(alpha[i + 1] == '-')
                i++;
            else if(alpha[i + 1] == 'z')
            {
                if(alpha[i + 2] == '=')
                    i = i + 2;
            }
            result++;
        }
        else if(alpha[i] == 'l')
        {
            if(alpha[i + 1] == 'j')
                i++;
            result++;
        }
        else if(alpha[i] == 'n')
        {
            if(alpha[i + 1] == 'j')
                i++;
            result++;
        }
        else if(alpha[i] == 's')
        {
            if(alpha[i + 1] == '=')
                i++;
            result++;
        }
        else if(alpha[i] == 'z')
        {
            if(alpha[i + 1] == '=')
                i++;
            result++;
        }
        else
            result++;
    }
    printf("%d", result);
}