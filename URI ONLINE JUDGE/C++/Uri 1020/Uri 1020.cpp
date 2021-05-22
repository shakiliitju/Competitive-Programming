#include<iostream>
using namespace std;

int main()
{
    int a,y,m,d;
    cin >> a;

    y = a/365;
    m = (a%365)/30;
    d = (a%365)%30;

    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}


