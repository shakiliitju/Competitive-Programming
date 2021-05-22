#include <stdio.h>
int main()
{
    int x,y;
    double x1,x2,x3,x4,x5;
    scanf("%d %d",&x,&y);

    if (x==1)
    {
        x1 = 4.00*y;
        printf("Total: R$ %0.2lf\n",x1);
    }

    else if (x==2)
    {
        x2 = 4.50*y;
        printf("Total: R$ %0.2lf\n",x2);
    }

    else if (x==3)
    {
        x3 = 5.00*y;
        printf("Total: R$ %0.2lf\n",x3);
    }

    else if (x==4)
    {
        x4 = 2.00*y;
        printf("Total: R$ %0.2lf\n",x4);
    }

    else if (x==5)
    {
        x5 = 1.50*y;
        printf("Total: R$ %0.2lf\n",x5);
    }
    return 0;
}
