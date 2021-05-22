#include<stdio.h>
int main()
{
    int x,c=0,sum=0;
    double avg;
    while(1)
    {
        scanf("%d",&x);
        if (x<0)
            break;
        c++;
        sum += x;
    }
    avg = (double)sum/c;
    printf("%0.2lf\n",avg);

    return 0;
}
