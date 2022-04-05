#include <stdio.h>
#include <stdlib.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


int rundeINT(int n, int e)
{
    int zp = 1;
    int erg = 0, a = 0;

    for(int i = 0; i < e; i++) {zp = zp * 10;}

    a = n%zp;
    //printf("rest: %d\n",a);

    a = (a*10) / zp;

    //printf("rest: %d\n",a);

    if(a >= 5) {erg = (n / zp + 1)*zp;}
    else {erg = n / zp * zp;}
    return erg;
}



int main(void)
{
    int n, e, erg = 0;
    char antwort;


    do
    {
        printf("Geben Sie bitte die Zahl: ");
        scanf("%d",&n);
        clean_stdin();

        printf("Geben Sie bitte den Exponenten ein: ");
        scanf("%d",&e);
        clean_stdin();

        erg = rundeINT(n,e);

        printf("Ergebnis: %d",erg);

        printf("\nNoch mal?: ");
        scanf("%c",&antwort);
        clean_stdin();

    }
    while(antwort == 'j');


    return 0;
}
