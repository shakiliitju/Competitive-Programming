#include <stdio.h>
int main()
{

    int i,M,N,temp,sum=0;
    while(1)
    {
        scanf("%d %d",&M,&N);
        if(M<=0 || N<=0)
            break;
        else
        {
            if(M>N)
            {
                temp = M;
                M = N;
                N = temp;
            }
            for(i=M; i<=N; i++)
            {
                sum = sum + i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
            sum = 0;
        }
    }
    return 0;
}
