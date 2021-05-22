#include <stdio.h>
int main()
{
     int i,x[5],count=0;

    for (i=0; i<5; i++)
    {
        scanf("%d",&x[i]);
    }
    for (i=0; i<5; i++)
    {

        if ((x[i]%2)==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);

    return 0;
}

