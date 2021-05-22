#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double i,a=1,b,sum=0;
    for(i=1; i<=39; i+=2)
    {
        b = i/a;
        sum += b;
        a *= 2;
    }
    cout << fixed;
    cout << setprecision(2);
    cout << sum << endl;

    return 0;
}

