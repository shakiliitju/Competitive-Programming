#include<stdio.h>
int main()
{
    int i,j,n,temp,a=0,wall=0,x[100];
    scanf("%d",&n);
    //for (i=1; i<=50; )
    //{
        while(n>0)
        {
            for (i=0; i<n; i++)
            {
                scanf("%d",&x[i]);
                a = a + x[i];
                wall = a/n;
                for(j=0; j<n; j++)
                {
                    if (x[i]>x[j])
                    {
                        temp = x[i];
                        x[i] = x[j];
                        x[j] = temp;
                    }
                }
            }
        }
        printf("%d\n",a);
         printf("%d\n",wall);
          printf("%d\n",x[i]);
           printf("%d\n",x[j]);
    }


    return 0;
}
