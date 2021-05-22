#include <stdio.h>
int main()
{
    int i,N,X[1000],smallest,position;

    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }

    smallest = X[0];
    for(i=0; i<N; i++)
    {
        if (smallest > X[i])
        {
            smallest = X[i];
            position = i;
        }
    }

    printf("Menor valor: %d\n",smallest);
    printf("Posicao: %d\n",position);

    return 0;
}
