#include<stdio.h>
int main()
{
    int t,i,x;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&x);
        if(x%2==0 && x>0)
            printf("EVEN POSITIVE\n");
        if(x%2==0 && x<0)
            printf("EVEN NEGATIVE\n");
        if(x%2!=0 && x>0)
            printf("ODD POSITIVE\n");
        if(x%2!=0 && x<0)
            printf("ODD NEGATIVE\n");
        if(x==0)
            printf("NULL\n");
    }


    return 0;
}
