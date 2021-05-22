#include<iostream>
using namespace std;

int main()
{
    int T,N[1000],k=0;
    cin >> T;

    for(int i=0; i<1000; i++)
    {
        if(k%T == 0)
        {
            N[i] = k;
            k = 0;
        }
        cout << "N[" << i << "] = " << k << endl;
        k++;
    }


    return 0;
}
