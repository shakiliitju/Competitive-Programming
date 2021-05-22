#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double t,x,y,z;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        cout << fixed;
        cout << setprecision(1);
        z = x/y;
        if(y==0)
        cout << "divisao impossivel" << endl;
        else
            cout << z << endl;

    }
    return 0;
}



