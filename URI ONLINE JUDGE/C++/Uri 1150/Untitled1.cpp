#include<iostream>
using namespace std;

int main()
{

    int X,Z,sum;
    cin >> X >> Z;
    while(Z<=X)
    {
        cin >> Z;
        sum=0;
        for(int i=1; i<true; i++)
        {
            sum += X;
            X++;
            if (sum >= Z)
            {
                cout << X <<endl;
                break;
            }
        }
    }

    return 0;
}
