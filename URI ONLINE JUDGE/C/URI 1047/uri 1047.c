#include <stdio.h>
int main()
{
    int sh, sm, eh, em, dm, dh;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);
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
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);

    return 0;

}
