
#include<iostream>
using namespace std;

int main()
{
    int x,y,z,c=0;
    cin >> x >> y;

    for(int i=0; i<x; i++)
    {
        cin >> z;
        c = c + z/y;
        if (z>y)
        {
            c += 1;
        cout << c << endl;
        }
    }

    cout << c << endl;
}
