#include<stdio.h>
int main()
{
    int i,j,t,n,count;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        count=0;
        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);

    }
    return 0;
}
