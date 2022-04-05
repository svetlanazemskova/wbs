#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


int istPrimzahl(int n)
{
    for(int i = 2; i < n; i++)
    {
        if (n % i == 0){return 0;}

    }
    return 1;
}

int istPrimzahlZwilling(int n)
{
    if(istPrimzahl(n) && istPrimzahl(n+2)){return 1;}
    return 0;
}


int main(void)
{
    int eingabe;
    printf("Zahl: ");
    scanf("%d",&eingabe);
    clean_stdin();

    printf("\nRueckgabewert: %d\n",istPrimzahl(eingabe));
    printf("\nRueckgabewert %d und %d: %d\n",eingabe,(eingabe+2),istPrimzahlZwilling(eingabe));


    return 0;
}
