#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int A1,B1,A2,B2;
    double C1,C2,X1,X2;

    cin >> A1 >> B1 >> C1;
    X1 = B1 * C1;

    cin >> A2 >> B2 >> C2;
    X2 = B2 * C2;

    cout << fixed;
    cout << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << X1+X2 << endl;


    return 0;
}
