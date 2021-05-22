#include<iostream>
using namespace std;
int main()
{
    int x,y,sum=0,temp;
        cin >> x >> y;
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
    for(int i=x+1; i<y; i++)
    {
        if(i%2!=0)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}


