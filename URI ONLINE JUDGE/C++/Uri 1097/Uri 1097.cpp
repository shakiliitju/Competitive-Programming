#include<iostream>
using namespace std;

int main()
{
    int i,j,k,a=7;
    for(i=1; i<=9; i+=2)
    {
        for(k=1,j=a; k<=3; j--,k++)
            cout << "I=" << i << " J=" << j << endl;
        a+=2;
    }
    return 0;
}


