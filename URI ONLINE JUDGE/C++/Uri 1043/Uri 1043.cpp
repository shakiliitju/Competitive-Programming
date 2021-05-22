#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c,P,A;
    cin >> a >> b >> c;

    cout << fixed;
    cout << setprecision(1);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        P = a+b+c;
        cout << "Perimetro = " << P << endl;
    }
    else
    {
        A = 0.5 * (a+b) * c;
        cout << "Area = " << A << endl;
    }

    return 0;
}
