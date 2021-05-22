#include <stdio.h>
int main()
{
     int i,count=0;
   double x[10];
    for (i=0; i<6; i++)
    {
        scanf("%lf",&x[i]);
    }
    for (i=0; i<6; i++)
    {

        if (x[i]>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
