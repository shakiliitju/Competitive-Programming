#include<stdio.h>
int main()
{
    int x,y,i;

    scanf("%d",&x);

    printf("2\n");
    for (i=1; i<1000; i++)
    {
        if(x*i<=10000)
        printf("%d\n",x*i+2);
    }

    return 0;
}

