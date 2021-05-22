#include<iostream>
using namespace std;
int main()
{
    int X,sum=0,c=0;
   while (1)
   {
    cin >> X;
       if (X==0)
        break;
        sum=0;
       if(X%2==0)
       {
           sum += X;
       }
       else
        sum += ++X;
       for(int i=0; i<4; i++)
       {
           X += 2;
           sum += X;
       }
   cout << sum << endl;
}

    return 0;
}
