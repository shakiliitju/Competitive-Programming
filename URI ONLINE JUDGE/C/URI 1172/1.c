#include <stdio.h>
int main()

{
    int i,X[10];

    for(i=0; i<10; i++)
    {
        scanf("%d",&X[i]);
    }
    for(i=0; i<10; i++)
    {
        if(X[i]<=0)
            printf("X[%d] = 1\n",i);
        else
            printf("X[%d] = %d\n",i,X[i]);
    }

    return 0;
}
