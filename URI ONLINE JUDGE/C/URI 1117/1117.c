#include<stdio.h>
int main()
{
    double x,Avg,sum=0,count=0;

    while(1)
    {
        scanf("%lf",&x);

        if(x<0 || x>10)
        {
            printf("nota invalida\n");
        }

        else if(x>=0 && x<=10)
        {
            count++;
            sum = sum + x;
        }
        if (count == 2)
            break;
    }
    Avg = sum/2.0;
    printf("media = %0.2lf\n",Avg);

    return 0;
}
