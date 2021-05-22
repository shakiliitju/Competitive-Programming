#include<stdio.h>
int main()
{
    int i,t;
    double a,x,y,z;
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
      scanf("%lf %lf %lf",&x,&y,&z);
      a = (x*2+y*3+z*5)/10;
      printf("%0.1lf\n",a);
    }


    return 0;
}
