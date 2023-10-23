#include <stdio.h>
int main()
{
    int a, ans = 0;
    scanf("%d", &a);

    if (a >= 365)
    {
        ans = a / 365;
        printf("%d years\n", ans);
        a = a % 365;
        ans = a / 30;
        printf("%d months\n", ans);
        a = a % 30;
        printf("%d days\n", a);
    }
    else if (a < 365 && a >= 30)
    {
        printf("0 years\n");
        ans = a / 30;
        printf("%d months\n", ans);
        a = a % 30;
        printf("%d days\n", a);
    }
    else if (a < 30)
    {
        printf("0 years\n");
        printf("0 months\n");
        a = a % 30;
        printf("%d days\n", a);
    }

    return 0;
}