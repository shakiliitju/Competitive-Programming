#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    double n;
    cin >> n;
    cout << fixed;
    cout << setprecision(2);

    if(n<=400)
    {
        cout << "Novo salario: " << n+n*0.15 << endl;
        cout << "Reajuste ganho: " << n*0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else  if(n<=800)
    {
        cout << "Novo salario: " << n+n*0.12 << endl;
        cout << "Reajuste ganho: " << n*0.12 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(n<=1200)
    {
        cout << "Novo salario: " << n+n*0.10 << endl;
        cout << "Reajuste ganho: " << n*0.10 << endl;
        cout << "Em percentual: 10 %" << endl;

    }
    else if(n<=2000)
    {
        cout << "Novo salario: " << n+n*0.07 << endl;
        cout << "Reajuste ganho: " << n*0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else
    {
        cout << "Novo salario: " << n+n*0.04 << endl;
        cout << "Reajuste ganho: " << n*0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
