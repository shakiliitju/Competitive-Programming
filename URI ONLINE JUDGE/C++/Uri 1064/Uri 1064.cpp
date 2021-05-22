#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x[10],c=0,sum=0;
    for(int i=1; i<=6; i++)
    {
        cin >> x[i];
        if(x[i]>0)
        {
            c++;
            sum += x[i];
        }
    }
    cout << c << " valores positivos" << endl;
    cout << fixed;
    cout << setprecision(1);
    cout << sum/c << endl;

    return 0;
}


