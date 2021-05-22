#include <stdio.h>
int main()
{
    int i,j,a,b,c,temp;
    int x[3];
    scanf("%d %d %d",&a,&b,&c);
    x[0] = a;
    x[1] = b;
    x[2] = c;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if (x[i]<x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",x[0],x[1],x[2],a,b,c);

    return 0;

}

