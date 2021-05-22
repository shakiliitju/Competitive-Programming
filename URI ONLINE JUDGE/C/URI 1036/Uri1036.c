#include <stdio.h>
#include <math.h>
int main ()
{
    double A,B,C,R1,R2,x,y;
    scanf("%lf %lf %lf",&A,&B,&C);

    x = ((B*B)-(4*A*C));

    if(x<0 || A==0)
    {
        printf("Impossivel calcular\n");

    }
    else
    {
         y = sqrt (x);
        R1 = (-B + y)/(2*A);
        R2 = (-B - y)/(2*A);

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    return 0;
}
