#include<stdio.h>
int main()
{
    int a;

    scanf("%d",&a);
    while(a != EOF)
    {
        if(a<0)
            printf("vai ter copa!\n");
        else if(a>0)
            printf("vai ter duas!\n");
    }

    return 0;
}
