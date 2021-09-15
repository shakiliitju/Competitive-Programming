#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,A=0,D=0;
    char a;
    cin >> x ;

    for(int i=0; i<x; i++)
    {
        cin >> a;

        if (a=='A')
            A++;
        else
            D++;
    }

    if (A>D)
    {
        cout << "Anton" << endl;
    }
    else if (A<D)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }


    return 0;
}
