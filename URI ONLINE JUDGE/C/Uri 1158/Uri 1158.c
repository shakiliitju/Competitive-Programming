#include<stdio.h>

int main()
{
    int i,N,X,Y,sum=0;
    scanf("%d",&N);

    while(N--)
    {
        scanf("%d %d",&X,&Y);

        if(X%2==0)
            X++;
        for(i=1; i<=Y; i++)
        {
            sum += X;
            X += 2;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
