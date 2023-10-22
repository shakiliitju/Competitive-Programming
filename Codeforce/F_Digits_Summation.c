#include <stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld", &a, &b);
    c = a % 10;
    d = b % 10;
    printf("%lld\n", c + d);

    return 0;
}