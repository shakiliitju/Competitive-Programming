#include<iostream>
using namespace std;

int main()
{
    int n,x[50];
    cin >> n;
    x[0] = 0;
    x[1] = 1;

    for (int i=2; i<n; i++)
    {
        x[i] = x[i-1] + x[i-2];
    }

    for (int i=0; i<n; i++)
    {
        cout << x[i];
        if(i<n-1)
            cout << " ";
        if(i==n-1)
            cout << endl;
    }

    return 0;
}
