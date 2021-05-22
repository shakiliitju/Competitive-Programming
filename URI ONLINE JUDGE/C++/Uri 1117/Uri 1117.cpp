#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x,Avg,sum=0,count=0;

    while(true)
    {
        cin >> x;
        if(x<0 || x>10)
        {
            cout << "nota invalida" << endl;
        }

        else if(x>=0 && x<=10)
        {
            count++;
            sum = sum + x;
        }
        if (count == 2)
            break;
    }
    Avg = sum/2.0;
    cout << fixed;
    cout << setprecision(2);
    cout << "media = " << Avg << endl;

    return 0;
}
