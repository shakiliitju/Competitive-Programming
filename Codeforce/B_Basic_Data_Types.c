#include <stdio.h>
int main()
{
    int a;
    long long int b;
    char chr;
    float d;
    double e;
    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%c", &chr);
    scanf("%f", &d);
    scanf("%lf", &e);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", chr);
    printf("%f\n", d);
    printf("%lf\n", e);

    return 0;
}