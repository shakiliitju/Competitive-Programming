#include <stdio.h>
int main()
{
    int i,t;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d",i);
    }
    if (i<10 && i>20)
        printf("%d out",i);
    else
        printf("%d in",i);


    return 0;
}

