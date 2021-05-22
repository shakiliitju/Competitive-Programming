#include<stdio.h>
int main()
{
    double i,sum=0;
    for(i=1; i<=100; i++)
    {
        sum+=1/i;
    }
    printf("%.2lf\n",sum);

    return 0;
}
