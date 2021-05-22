#include<iostream>
using namespace std;

int main()
{
    int x,y,k=0;
    cin >> x >> y;

    for (int i=1; i<=y; i++)
    {
        k++;
        if (k==x)
        {
            cout << i;
            k=0;
            cout << endl;
        }
        else
            cout << i << " ";

    }
    return 0;
}
