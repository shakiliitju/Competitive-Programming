#include<stdio.h>

int main()
{
    int x,i,sum=0;
    while(x!=0)
    {
        scanf("%d",&x);
        for(i=0; i<5; i++);
        if(x%2==0)
        {
            sum += x;
        }
        printf("%d\n",sum);
        sum=0;

    }

    return 0;
}
