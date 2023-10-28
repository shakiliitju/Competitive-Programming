#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    long long int x;
    int ans;
    x = a * b * c * d;
    ans = x % 100;
    printf("%d\n", ans);
    
    return 0;
}