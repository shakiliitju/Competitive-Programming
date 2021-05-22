#include<iostream>
using namespace std;

int main()
{
    int N,X,sum;

    cin >> N;
    while(N--)
    {
        cin >> X;
        sum=0;
        for(int i=1; i<=X/2; i++)
        {
            if(X%i==0)
                sum += i;
        }
        if(sum==X)
            cout << X << " eh perfeito" << endl;
        else
            cout << X << " nao eh perfeito" << endl;
    }

    return 0;
}
