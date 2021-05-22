#include<iostream>
using namespace std;

int main()
{
    int t,x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        if(x%2==0 && x>0)
            cout << "EVEN POSITIVE" << endl;

        if(x%2==0 && x<0)
            cout << "EVEN NEGATIVE" << endl;

        if(x%2!=0 && x>0)
            cout << "ODD POSITIVE" << endl;

        if(x%2!=0 && x<0)
            cout << "ODD NEGATIVE" << endl;

        if(x==0)
            cout << "NULL" << endl;
    }
    return 0;
}
