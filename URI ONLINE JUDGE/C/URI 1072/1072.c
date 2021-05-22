
#include <stdio.h>
int main()
{
    int n,t,i,count1=0,count2=0;

    scanf("%d",&t);
    for (i=1; i<=t; i++)
    {
        scanf("%d",&n);

        if (n>=10 && n<=20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
        printf("%d in\n",count1);
        printf("%d out\n",count2);

    return 0;
}

