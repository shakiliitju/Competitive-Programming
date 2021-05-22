#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=2002)
    {
        printf("Senha Invalida\n");
        scanf("%d",&n);
    }
        printf("Acesso Permitido\n");
    return 0;
}
