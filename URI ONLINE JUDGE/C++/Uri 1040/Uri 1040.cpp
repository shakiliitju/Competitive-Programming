#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c,d,e,ave,f_ave;
    cin >> a >> b >> c >> d;

    ave = (a*2+b*3+c*4+d*1)/10;
    cout << fixed;
    cout << setprecision(1);
    cout << "Media: " << ave << endl;

    if (ave>=7.0)
        cout << "Aluno aprovado." << endl;

     else if (ave<5.0)
        cout << "Aluno reprovado." << endl;

    else
    {
        cout << "Aluno em exame." << endl;
        cin >> e;
        cout << "Nota do exame: " << e << endl;

        f_ave = (ave+e)/2;

        if(f_ave>=5)
            cout << "Aluno aprovado." << endl;
        else if(f_ave<=4.9)
        cout << "Aluno reprovado." << endl;

        cout << "Media final: " << f_ave << endl;
}

    return 0;
}
