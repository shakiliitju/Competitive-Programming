#include<iostream>
using namespace std;

int main()
{
    double x[10],c=0;
    for(int i=1; i<=6; i++)
    {
        cin >> x[i];
        if(x[i]>0)
            c++;
    }
        cout << c << " valores positivos" << endl;
    return 0;
}

