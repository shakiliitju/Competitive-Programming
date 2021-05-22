#include<stdio.h>
int main()
{
    double i,a=1,b,sum=0;
    for(i=1; i<=39; i+=2)
    {
        b = i/a;
        sum += b;
        a *= 2;
    }
    printf("%0.2lf\n",sum);

    return 0;
}
