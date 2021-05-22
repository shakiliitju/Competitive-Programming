#include<stdio.h>

int main()
{
    int i,X,Z,sum=0,c=0;
    scanf("%d %d",&X,&Z);

    while(Z<=X)
    {
        scanf("%d",&Z);
    }
        c=0;
    for(i=0; i<Z; i++)
    {
        sum = sum + (sum+i);
        c++;
        if (sum >= Z)
            break;
    }
    printf("%d\n",c);

    return 0;
}

