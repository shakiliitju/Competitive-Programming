#include<iostream>
using namespace std;

int main()
{
    int i,X[10];

    for(i=0; i<10; i++)
    {
        cin >> X[i];
    }
    for(i=0; i<10; i++)
    {
        if(X[i]<=0)
            cout << "X[" << i << "] = 1" << endl;
        else
            cout << "X[" << i << "] = " << X[i] << endl;
    }
    return 0;
}

