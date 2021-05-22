#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x,c=0,sum=0;
    double avg;
    while(1)
    {
        cin >> x;
        if (x<0)
            break;
        c++;
        sum += x;
    }
    avg = (double)sum/c;
    cout << fixed;
    cout << setprecision(2);
    cout << avg << endl;

    return 0;
}
