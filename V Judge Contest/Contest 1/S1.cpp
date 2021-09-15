#include<iostream>
using namespace std;

int main()
{
    int t,m,n;
    cin >> t;

    while(t--)
    {
        cin >> m >> n;

        if (m%n==0)
            cout << "YES" << endl;
        else if (m%n!=0)
            cout << "NO" << endl;

    }

    return 0;
}


