#include<iostream>
using namespace std;

int main()
{
    double a,b,c,temp;
    cin >> a >> b >> c;

    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b<c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (a>=(b+c))
        cout << "NAO FORMA TRIANGULO" << endl;

    else if ((a*a)==((b*b)+(c*c)))
        cout << "TRIANGULO RETANGULO" << endl;

    else if ((a*a)>((b*b)+(c*c)))
        cout << "TRIANGULO OBTUSANGULO" << endl;

    else if ((a*a)<((b*b)+(c*c)))
        cout << "TRIANGULO ACUTANGULO" << endl;

    if (a==b && b==c)
        cout << "TRIANGULO EQUILATERO" << endl;

    else if (a==b || b==c)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
