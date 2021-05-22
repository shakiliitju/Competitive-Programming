#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double X;
    int i,N[100];
    cin >> X;

    for(i=0; i<100; i++)
    {
        cout << fixed;
        cout << setprecision(4);
        cout << "N[" << i << "] = " << X << endl;
        X = X/2;
    }
    return 0;
}



