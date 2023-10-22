#include <stdio.h>
int main()
{
    int a;
    long long int b;
    char ch;
    float d;
    double e;
    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%c", &ch);
    scanf("%f", &d);
    scanf("%lf", &e);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", ch);
    printf("%f\n", d);
    printf("%lf\n", e);

    return 0;
}