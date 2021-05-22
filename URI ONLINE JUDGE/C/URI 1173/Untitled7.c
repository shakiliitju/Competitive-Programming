#include <stdio.h>
int main()
{
    int i,j,V;
    scanf("%d",&V);

    for(i=0; i<=10; i++)
    {
    printf("N[%d] = %d\n",i,V);
    V = V * 2;
    }

    return 0;
}
