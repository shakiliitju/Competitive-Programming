#include<iostream>
using namespace std;

int main()
{
    int sh, sm, eh, em, dm, dh;
    cin >> sh >> sm >> eh >> em;
    dh = eh - sh;
    if (dh < 0)
    {
        dh = 24 + (eh - sh);
    }
    dm = em - sm;
    if (dm < 0)
    {
        dm = 60 + (em - sm);
        dh--;
    }
    if (eh == sh && em == sm)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
        cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;

    return 0;
}

