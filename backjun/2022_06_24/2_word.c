#include <stdio.h>

int main()
{
    char alpha[1000000];
    int space_index = 0;
    int i = 0;
    int j = 0;
    
    scanf("%[^\n]", alpha);
    if(alpha[0] == ' ')
    {
        i++;
    }
    for(i = i; alpha[i] != 0; i++)
    {
        if(alpha[i] == ' ')
        {
            space_index++;
        }
    }
    if(alpha[i - 1] == ' ')
        printf("%d", space_index);
    else if(alpha[i - 1] != ' ')
        printf("%d", space_index + 1);
}