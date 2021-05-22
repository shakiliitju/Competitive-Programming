#include<stdio.h>
int main()
{
    int i,j,temp,N[20];

    for(i=0; i<20; i++)
    {
    scanf("%d",&N[i]);
    }

    for(i=0,j=19; i<10; i++,j--)
    {
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
    }
    for(i=0; i<20; i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}
