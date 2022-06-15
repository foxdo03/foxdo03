#include <stdio.h>

int main()
{
    char c[26] = "강한친구 대한육군";

    printf("%s\n", &c);
    printf("%s", &c);
    return 0;
}