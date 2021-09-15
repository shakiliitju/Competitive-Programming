#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3,x4;
    cin >> x1 >> x2 >> x3 >> x4;


    if(x1==x2 && x1==x3 && x1==x4)
    {
        cout << "Weak" <<endl;
    }
    else if(x2==(x1+1)%10 && x3==x2+1 && x4==x3+1)
    {
        cout << "Weak" <<endl;
    }
    else
        cout << "Strong" <<endl;

    return 0;
}
