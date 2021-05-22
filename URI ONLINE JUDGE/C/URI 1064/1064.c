#include <stdio.h>
int main()
{
    int i,count=0;
   double x[10],sum=0;

    for (i=0; i<6; i++)
    {
        scanf("%lf",&x[i]);
    }
    for (i=0; i<6; i++)
    {

        if (x[i]>0)
        {
            count++;
            sum = sum + x[i];
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",sum/count);
    return 0;
}

