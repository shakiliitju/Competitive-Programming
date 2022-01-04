
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int ar[] = {1, 2,3,4,-4,6,3};
    int prefixsum[8];
    int currentsum = 0;
    for(int i=0; i<=6; i++)
    {

        currentsum += ar[i];
        prefixsum[i] = currentsum;
    }
    int l=2, r=4;

    int sumofindexltor = prefixsum[r]-prefixsum[l-1];
    cout << sumofindexltor << endl;


}
