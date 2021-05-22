#include<iostream>
using namespace std;

int main()
{
    int i,N;
    cin >> N;

    for(i=1; i<=N; i++)
    {
        if(N%i==0)
            cout << i << endl;
    }
    return 0;
}


