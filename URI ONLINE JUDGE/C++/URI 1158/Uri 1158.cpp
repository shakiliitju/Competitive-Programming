#include<iostream>
using namespace std;

int main()
{
    int X,Y,n,sum=0;
    cin >> n;

    while(n--)
    {
        cin >> X >> Y;
        if(X%2==0)
            X++;
        for(int i=1; i<=Y; i++)
        {
            sum += X;
            X += 2;
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
