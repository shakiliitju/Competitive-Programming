#include<stdio.h>
int main()
{
    int i,n;
    while(n!=0)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            printf("%d",i);
            if(i<n)
                printf(" ");
            if(i==n)
                printf("\n");
        }
    }
    return 0;
}



