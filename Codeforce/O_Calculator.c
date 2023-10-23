#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char s;
    scanf("%c", &s);
    int b;
    scanf("%d", &b);

    if (s == '+')
    {
        printf("%d", a + b);
    }
    else if (s == '-')
    {
        printf("%d", a - b);
    }
    else if (s == '*')
    {
        printf("%d", a * b);
    }
    else if (s == '/')
    {
        printf("%d", a / b);
    }

    return 0;
}