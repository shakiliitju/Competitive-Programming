#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c,d,x,R1,R2;
    cin >> a >> b >> c;
    d = (b*b) - (4*a*c);

    if(a==0 || d<0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        x = sqrt (d);
        R1 = (-b + x)/(2*a);
        R2 = (-b - x)/(2*a);

        cout << fixed;
        cout << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}
