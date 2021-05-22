#include<iostream>
using namespace std;

int main()
{
    int N,X,a=0,b=0;
    cin >> N;
    while(N--)
    {
        cin >> X;
        if(X>=10 && X<=20)
            a++;
        else
            b++;
    }
    cout << a << " in" << endl;
        cout << b << " out" << endl;

}
