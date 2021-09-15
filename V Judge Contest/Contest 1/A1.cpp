#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cin >> x;
    y=x%5;

    if(y==0)
    {
        y=x/5;
        cout << y <<endl;
    }
    else if(y!=0)
    {
        y=x/5;
        cout << y+1 <<endl;
    }
}


