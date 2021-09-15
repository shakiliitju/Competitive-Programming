#include<iostream>
using namespace std;

int main()
{
    int n,a1,b1,c1,a2,b2,c2,s1,s2;
    cin >> n;
    while(n--)
    {
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        s1 = a1+b1+c1;
        s2 = a2+b2+c2;
        if (s1>s2)
            cout << "1" << endl;
        else
            cout << "2" <<endl;

    }

    return 0;
}
