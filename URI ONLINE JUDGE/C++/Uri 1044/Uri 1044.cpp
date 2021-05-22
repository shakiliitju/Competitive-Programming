#include<iostream>
using namespace std;
int main()
{
    int A,B,temp;
    cin >> A >> B;

    if(A>B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    if(B%A==0)
        cout << "Sao Multiplos" << endl;
    else if ((B%A)!=0)
        cout << "Nao sao Multiplos" << endl;

    return 0;
}
