#include <stdio.h>
int main()
{

    int i,j,x,y,k=0;
    scanf("%d %d",&x,&y);

    for (i=1; i<=y; i++)
    {
        k++;
        if (k == x)
        {
            printf("%d",i);
            k=0;
            printf("\n");
        }
        else
            printf("%d ",i);

    }

    return 0;
}
