#include<iostream>
using namespace std;

int main()
{
  int M,N,temp,sum=0;
    while(1)
    {
        cin >> M >> N;

        if(M<=0 || N<=0)
            break;
        else
        {
            if(M>N)
            {
                temp = M;
                M = N;
                N = temp;
            }
            for(int i=M; i<=N; i++)
            {
                sum = sum + i;
                cout << i << " ";
            }
            cout << "Sum=" << sum <<endl;
            sum = 0;
        }
    }
    return 0;
}




