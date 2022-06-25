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
            {
                result++;
                i++;
            }  
            else if(alpha[i + 1] != '=' || alpha[i + 1] != '-')
            {
                result++;
            }
        }
        else if(alpha[i] == 'd')
        {
            if(alpha[i + 1] == '-')
            {
                result++;
                i++;
            }
            else if(alpha[i + 1] == 'z')
            {
                if(alpha[i + 2] == '=')
                {
                    result++;
                    i = i + 2;
                }
                else if(alpha[i + 2] != '=')
                {
                    result++;
                }      
            }
            else
                result++;
        }
        else if(alpha[i] == 'l')
        {
            if(alpha[i + 1] == 'j')
            {
                result++;
                i++;
            }
            else if(alpha[i + 1] != 'j')
            {
                result++;
            }
        }
        else if(alpha[i] == 'n')
        {
            if(alpha[i + 1] == 'j')
            {
                result++;
                i++;
            }
            else if(alpha[i + 1] != 'j')
            {
                result++;
            }
        }
        else if(alpha[i] == 's')
        {
            if(alpha[i + 1] == '=')
            {
                result++;
                i++;
            }
            else if(alpha[i + 1] != '=')
            {
                result++;
            }
        }
        else if(alpha[i] == 'z')
        {
            if(alpha[i + 1] == '=')
            {
                result++;
                i++;
            }
            else if(alpha[i + 1] != '=')
            {
                result++;
            }
        }
        else
            result++;
    }
    printf("%d", result);
}