#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    char s;
    scanf("%c", &s);

    int b;
    scanf("%d", &b);

    if (s = '>')
    {

        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (s = '<')
    {

        if (a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else
    {

        if (a = b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}