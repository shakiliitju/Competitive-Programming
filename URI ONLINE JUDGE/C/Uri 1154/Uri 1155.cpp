#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double i,sum=0;
    for(i=1; i<=100; i++)
    {
        sum += 1/i;
    }
    cout << fixed;
    cout << setprecision(2);
    cout << sum << endl;

    return 0;
}
