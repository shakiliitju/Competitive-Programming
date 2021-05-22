#include <stdio.h>
int main()
{
    int y;
    double x;
    scanf("%lf",&x);
    printf("NOTAS:\n");
    y = x;
    printf("%d nota(s) de R$ 100.00\n",y/100);
    y = (y%100);
    printf("%d nota(s) de R$ 50.00\n",y/50);
    y = (y%50);
    printf("%d nota(s) de R$ 20.00\n",y/20);
    y = (y%20);
    printf("%d nota(s) de R$ 10.00\n",y/10);
    y = (y%10);
    printf("%d nota(s) de R$ 5.00\n",y/5);
    y = (y%5);
    printf("%d nota(s) de R$ 2.00\n",y/2);


     printf("MOEDAS:\n");
    y = (y%2);
    printf("%d moeda(s) de R$ 1.00\n",y/1);
    y = x*100;
    y = (y%100);
    printf("%d moeda(s) de R$ 0.50\n",y/50);
    y = (y%50);
    printf("%d moeda(s) de R$ 0.25\n",y/25);
    y = (y%25);
    printf("%d moeda(s) de R$ 0.10\n",y/10);
    y = (y%10);
    printf("%d moeda(s) de R$ 0.05\n",y/5);
    y = (y%5);
    printf("%d moeda(s) de R$ 0.01\n",y/1);


    return 0;
}

