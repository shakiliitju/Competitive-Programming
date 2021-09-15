#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,d;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c >> d;

        if (a==b && b==c && c==d)
            cout << "0" << endl;
        else if (a!=b && c==d || a==b && c!=d)
            cout << "1" << endl;
        else
            cout << "2" <<endl;

    }

    return 0;
}

