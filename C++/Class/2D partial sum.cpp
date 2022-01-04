
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[5][5];

    int x=1,y=2;
    int xx=2, yy=3;
    int sum =0;

    for(int i=x; i<xx; i++)
        for(int j=y; j<=yy; j++)
        {

            sum += a[i][j];
        }
    cout << sum << endl;
}
