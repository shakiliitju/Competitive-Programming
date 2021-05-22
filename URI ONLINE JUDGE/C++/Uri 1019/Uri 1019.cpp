#include<iostream>
using namespace std;

int main()
{
    int a,h,m,s;
    cin >> a;

    h = (a/60)/60;
    m = (a/60)%60;
    s = (a%60)/1;

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}

