#include <stdio.h>

int main()
{
    char c[26] = "����ģ�� ��������";

    printf("%s\n", &c);
    printf("%s", &c);
    return 0;
}