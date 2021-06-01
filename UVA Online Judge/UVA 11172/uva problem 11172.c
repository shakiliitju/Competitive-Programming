#include <stdio.h>
int main()
{
    int tc,ts,a,b;
    scanf("%d",&tc);
    for (ts=1; ts<=tc; ts++)

    {
        scanf("%d %d",&a,&b);
        if (a<b)

        {
            printf("<\n");
        }
        else if (a>b)
        {
            printf(">\n");
        }
        else if (a==b)
        {
            printf("=\n");
        }
    }
    return 0;
}
