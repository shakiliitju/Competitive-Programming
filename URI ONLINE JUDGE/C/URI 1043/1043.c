#include<stdio.h>
int main()
{
    double a,b,c,s,x;
    scanf("%lf %lf %lf",&a,&b,&c);

    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        s = (a+b+c);
        printf("Perimetro = %0.1lf\n",s);
    }

    else
    {
        x = (0.5*(a+b)*c);
        printf("Area = %0.1lf\n",x);
    }


    return 0;
}
