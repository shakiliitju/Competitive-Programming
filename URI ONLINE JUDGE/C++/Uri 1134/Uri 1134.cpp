#include<iostream>
using namespace std;

int main()
{
    int x,count1=0,count2=0,count3=0;
    while(x!=4)
    {
        cin >> x;
        if(x==1)
            count1++;
        if(x==2)
            count2++;
        if(x==3)
            count3++;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << count1 << endl;
    cout << "Gasolina: " << count2 << endl;
    cout << "Diesel: " << count3 << endl;

    return 0;
}
