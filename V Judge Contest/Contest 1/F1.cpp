#include<iostream>
using namespace std;

int main()
{
    int x,y,a,b,c=0;

    cin >> a >> b;

    x = a*3;
    y = b*2;
    c=1;

    while(x<=y)
    {
        x = x*3;
        y = y*2;
        c++;
        if(x>y)
            break;
    }
    cout << c << endl;

    return 0;
}

