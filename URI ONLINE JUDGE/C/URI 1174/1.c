#include <stdio.h>
int main()

{
    int i;
    double A[100];

    for(i=0; i<100; i++)
    {
        scanf("%lf",&A[i]);
    }
    for(i=0; i<100; i++)
    {
        if(A[i]<=10)
            printf("A[%d] = %0.1lf\n",i,A[i]);
    }

    return 0;
}

