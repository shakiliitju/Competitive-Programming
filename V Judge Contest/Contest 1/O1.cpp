#include<iostream>
using namespace std;

int gcd(int i, int j)
{
    if (i == 0)
        return j;
    if (j == 0)
        return i;

    if (i == j)
        return i;

    if (i > j)
        return gcd(i-j, j);
    return gcd(i, j-i);
}

int main()
{
    int N,G=0;
    cin >> N;

    while(N)
    {
        cin >> N;
        for(int i=1; i<N; i++)
            for(int j=i+1; j<=N; j++)
            {
                G += gcd(i,j);
            }

        cout << G << endl;
    }
    return 0;
}
