#include <stdio.h>
int main()
{
    int t,i,X,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&X);
        sum=0;
        for(i=1; i<=X/2; i++)
        {
            if(X%i==0)
                sum+=i;
        }
        if(sum==X)
        {
            printf("%d eh perfeito\n",X);
        }
        else
        {
            printf("%d nao eh perfeito\n",X);
        }
    }

    return 0;
}
