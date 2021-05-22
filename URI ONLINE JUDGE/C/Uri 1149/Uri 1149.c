#include<stdio.h>

int main()
{
    int i,A,N,sum=0;
    scanf("%d %d",&A,&N);

    while(N<=0)
        scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        sum += A;
        A++;
    }
    printf("%d\n",sum);

    return 0;
}
