#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x;
    cout << "2" << endl;

    for (int i=1; i<1000; i++)
    {
        if(x*i<=10000)
            cout << x*i+2 << endl;
    }

    return 0;
}
