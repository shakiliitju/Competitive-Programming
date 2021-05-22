#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,N[20];

    for(i=0; i<20; i++)
    {
        cin >> N[i];
    }

    for(i=0,j=19; i<10; i++,j--)
    {
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
    }

    for(i=0; i<20; i++)
        cout << "N[" << i << "] = " << N[i] << endl;

    return 0;
}

