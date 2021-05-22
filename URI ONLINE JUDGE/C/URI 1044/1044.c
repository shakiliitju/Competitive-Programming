#include <stdio.h>
int main()
{

    int a,b,temp;
    scanf("%d %d",&a,&b);

    if (a>b)
{
    temp = a;
    a = b;
    b = temp;
}

    if (b%a==0)
    {
        printf("Sao Multiplos\n");
    }
    else if((b%a)!=0)
    {
        printf("Nao sao Multiplos\n");
    }


    return 0;
}
