#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    long long int x, y;
    x = pow(a, b);
    y = pow(c, d);

    if (x > y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}