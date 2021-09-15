#include<iostream>
using namespace std;

int main()
{
    int A,B;
    cin >> A >>B;
    if(0<A && 0==B)
    {
        cout << "Gold" <<endl;
    }
    else if(A==0 && 0<B)
    {
        cout << "Silver" <<endl;
    }
    else if(0<A && 0<B)
    {
        cout << "Alloy" <<endl;
    }


    return 0;
}
