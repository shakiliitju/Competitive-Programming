#include <stdio.h>
int main()
{
    int i,T,N[1000],k=0;
    scanf("%d",&T);

    for(i=0; i<1000; i++)
    {
        if(k%T == 0)
        {
            N[i] = k;
            k = 0;
        }
        printf("N[%d] = %d\n",i,k);
        k++;
    }
    return 0;
}
