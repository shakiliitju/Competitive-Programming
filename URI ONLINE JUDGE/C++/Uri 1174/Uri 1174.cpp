#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A;

    for(int i=0; i<100; i++)
    {
        cin >> A;

        if(A<=10)
        {
            cout << fixed;
            cout << setprecision(1);
            cout << "A[" << i << "] = " << A << endl;
        }
    }
    return 0;
}


