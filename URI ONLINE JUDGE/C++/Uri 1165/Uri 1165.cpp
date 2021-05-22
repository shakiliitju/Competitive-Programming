#include<iostream>
using namespace std;

int main()
{
    int i,j,t,n,count;
    cin >> t;
    while(t--)
    {
        cin >> n;
        count=0;
        for(j=2; j<n; j++)
        {
            if(n%j==0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
            cout << n << " eh primo" << endl;
        else
            cout << n << " nao eh primo" << endl;

    }
    return 0;
}
