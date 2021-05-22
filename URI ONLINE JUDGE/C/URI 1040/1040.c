#include<stdio.h>
int main()
{
    double a,b,c,d,e,ave,f;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    ave = (a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1lf\n",ave);

    if (ave>=7.0)
        printf("Aluno aprovado.\n");

     else if (ave<5.0)
        printf("Aluno reprovado.\n");

    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        f = (ave+e)/2;
        if(f>=5)
            printf("Aluno aprovado.\n");
        else if(f<=4.9)
            printf("Aluno reprovado.\n");

    printf("Media final: %.1lf\n",f);
}

return 0;
}

