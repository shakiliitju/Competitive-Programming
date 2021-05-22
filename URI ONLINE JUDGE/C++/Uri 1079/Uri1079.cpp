#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double t,x,y,z,ave;
    cin >> t;

    while(t--)
    {
        cin >> x >> y >> z;
        ave = (x*2+y*3+z*5)/10;
        cout << fixed;
        cout << setprecision(1);
        cout << ave << endl;
    }

    return 0;
}

