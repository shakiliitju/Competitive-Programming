#include<stdio.h>
int main()
{
    int n,hour,minute,second;
    scanf("%d",&n);

    hour = (n/60)/60;
    minute = (n/60)%60;
    second = (n%60)/1;
    printf("%d:%d:%d\n",hour,minute,second);

    return 0;
}
