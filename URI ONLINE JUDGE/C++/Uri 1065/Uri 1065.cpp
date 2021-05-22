#include<iostream>
using namespace std;
int main()
{
    int c=0,x[6];
    for(int i=1; i<=5; i++)
    {
        cin >> x[i];
        if(x[i]%2==0)
        c++;
    }
    cout << c << " valores pares" << endl;

    return 0;
}
