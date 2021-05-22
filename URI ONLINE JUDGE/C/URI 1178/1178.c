#include<stdio.h>
int main()
{
    double X;
    int i,N[100];
    scanf("%lf",&X);

    for(i=0; i<100; i++)
    {
        printf("N[%d] = %0.4lf\n",i,X);
        X = X/2;
    }


    return 0;
}
