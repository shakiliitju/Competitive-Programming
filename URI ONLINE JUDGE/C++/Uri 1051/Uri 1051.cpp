#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x,y;
    cin >> x;
    cout << fixed;
    cout << setprecision(2);

    if(x<=2000)
    {
        cout << "Isento" << endl;
    }
    else if(x<=3000)
    {
        y = ((x-2000)*8)/100;
        cout << "R$ " << y << endl;
    }
    else if(x<=4500)
    {
        y = (10*8) + ((x-3000)*18)/100;
        cout << "R$ " << y << endl;
    }
    else if(x>4500)
    {
        y = (10*8) + (15*18) + ((x-4500)*28)/100;
        cout << "R$ " << y << endl;
    }

    return 0;
}
