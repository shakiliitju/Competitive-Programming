#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,x[6];
    for(int i=1; i<=5; i++)
    {
        cin >> x[i];
        if(x[i]%2==0)
            a++;
        if(x[i]%2!=0)
            b++;
        if(x[i]>0)
            c++;
        if(x[i]<0)
            d++;
    }
    cout << a << " valor(es) par(es)" << endl;
    cout << b << " valor(es) impar(es)" << endl;
    cout << c << " valor(es) positivo(s)" << endl;
    cout << d << " valor(es) negativo(s)" << endl;


    return 0;
}

