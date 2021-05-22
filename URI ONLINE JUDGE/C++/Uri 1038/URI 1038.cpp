#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X,Y;
    cin >> X >> Y;

    cout << fixed;
    cout << setprecision(2);
    if(X==1)
        cout << "Total: R$ " << 4.00*Y << endl;
    else if(X==2)
        cout << "Total: R$ " << 4.50*Y << endl;
    else if(X==3)
        cout << "Total: R$ " << 5.00*Y << endl;
    else if(X==4)
        cout << "Total: R$ " << 2.00*Y << endl;
    else if(X==5)
        cout << "Total: R$ " << 1.50*Y << endl;

    return 0;
}
