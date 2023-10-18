#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    char b[1001];
    scanf("%s %s", a, b);
    int length_a = strlen(a);
    int length_b = strlen(b);

    printf("%d %d\n", length_a, length_b);
    printf("%s %s", a, b);

    return 0;
}