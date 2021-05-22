#include<stdio.h>
int main()
{
    int x,count1=0,count2=0,count3=0;
    while(x!=4)
    {
        scanf("%d",&x);
        if(x==1)
            count1++;
        if(x==2)
            count2++;
        if(x==3)
            count3++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",count1);
    printf("Gasolina: %d\n",count2);
    printf("Diesel: %d\n",count3);

    return 0;
}
