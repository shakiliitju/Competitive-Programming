#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf",&x);

    if(x<=2000)
    {
        printf("Isento\n");
    }
    else if(x<=3000)
    {
        y = ((x-2000)*8)/100;
        printf("R$ %0.2lf\n",y);
    }
    else if(x<=4500)
    {
        y = (10*8) + ((x-3000)*18)/100;
        printf("R$ %0.2lf\n",y);
    }
    else if(x>4500)
    {
        y = (10*8) + (15*18) + ((x-4500)*28)/100;
        printf("R$ %0.2lf\n",y);
    }
    return 0;
}
