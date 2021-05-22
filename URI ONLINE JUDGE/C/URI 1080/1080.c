#include<stdio.h>
int main()
{
    int x[100],i,max,temp,count=0;
    for (i=0; i<100; i++)
    {

        scanf("%d",&x[i]);
    }
    max = x[0];
    for(i=0; i<100; i++)
    {
        if(max < x[i])
        {
            temp = max;
            max = x[i];
            x[i] = temp;
            count = i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",count);
    return 0;
}


