#include<stdio.h>
int main()
{
    double i=0,j=1;
    while(i<=2.1)
    {
        printf("I=%.1f J=%.1f\n",i,j+i);
        printf("I=%.1f J=%.1f\n",i,j+i+1);
        printf("I=%.1f J=%.1f\n",i,j+i+2);
        i += 0.2;
    }
    return 0;
}
