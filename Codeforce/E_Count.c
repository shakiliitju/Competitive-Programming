#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    scanf("%s", a);
    int ans = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        ans = ans + (a[i] - 48);
    }
    printf("%d", ans);
    
    return 0;
}