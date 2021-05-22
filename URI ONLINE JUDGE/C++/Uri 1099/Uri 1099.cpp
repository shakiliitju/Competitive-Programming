#include<iostream>
using namespace std;

int main()
{
  int i,j,t,x,y,temp,sum=0;
    cin>> t;
    for(i=0; i<t; i++)
    {
        cin >> x >> y;
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
       for(j=x+1; j<y; j++)
       {
           if(j%2!=0)
           {
               sum = sum + j;
           }
       }
       cout << sum << endl;
       sum = 0;
}
    return 0;
}



