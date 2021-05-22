#include<stdio.h>
int main()
{
    int i,t;
    double x,y,z;
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        scanf("%lf %lf",&x,&y);

        z = x/y;
        if(y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n",z);
    }

    return 0;
}
