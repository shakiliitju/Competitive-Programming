#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    if(n<=400)
    {
        printf("Novo salario: %.2lf\n",n+n*0.15);
        printf("Reajuste ganho: %.2lf\n",n*0.15);
        printf("Em percentual: 15 %%\n");
    }
   else  if(n<=800)
    {
        printf("Novo salario: %.2lf\n",n+n*0.12);
        printf("Reajuste ganho: %.2lf\n",n*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(n<=1200)
    {
        printf("Novo salario: %.2lf\n",n+n*0.10);
        printf("Reajuste ganho: %.2lf\n",n*0.10);
        printf("Em percentual: 10 %%\n");
    }
    else if(n<=2000)
    {
        printf("Novo salario: %.2lf\n",n+n*0.07);
        printf("Reajuste ganho: %.2lf\n",n*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        printf("Novo salario: %.2lf\n",n+n*0.04);
        printf("Reajuste ganho: %.2lf\n",n*0.04);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
