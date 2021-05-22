#include<iostream>
using namespace std;

int main()
{
    int x[100],max,temp,count=0;
    for (int i=0; i<100; i++)
    {
        cin >> x[i];
    }
    max = x[0];
    for(int i=0; i<100; i++)
    {
        if(max < x[i])
        {
            temp = max;
            max = x[i];
            x[i] = temp;
            count = i+1;
        }
    }
    cout << max << endl;
    cout << count << endl;

    return 0;
}
