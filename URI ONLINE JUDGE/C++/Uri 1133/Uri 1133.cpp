#include<iostream>
using namespace std;

int main()
{
    int x,y,temp;
    cin >> x >> y;

    if (x>y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    for(int i=x+1; i<y; i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout << i << endl;
        }
    }
    return 0;
}
