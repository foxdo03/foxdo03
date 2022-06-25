#include <stdio.h>

void swap(char *num)
{
    char temp = 0;
    temp = num[0];
    num[0] = num[2];
    num[2] = temp;
}
int main()
{
    char a[4];
    char b[4];

    scanf("%s %s", a, b);
    swap(a);
    swap(b);

    if(a[0] > b [0])
        printf("%s", a);
    else if(a[0] < b[0])
        printf("%s", b);
    else if(a[0] == b[0])
    {
        if(a[1] > b[1])
            printf("%s", a);
        else if(a[1] < b[1])
            printf("%s", b);
        else if(a[1] == b [1])
        {
            if(a[2] > b[2])
                printf("%s", a);
            else if(a[2] < b[2])
                printf("%s", b);
        }
    }
}