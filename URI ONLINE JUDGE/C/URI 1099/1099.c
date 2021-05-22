#include<stdio.h>
int main()
{
    int i,j,t,x,y,temp,sum=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
       for(j=x+1; j<y; j++)
       {
           if(j%2!=0)
           {
               sum = sum + j;
           }
       }
       printf("%d\n",sum);
       sum = 0;
}
    return 0;
}
