#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[5], min, max, user;


    printf("Es werden nun 5 zufallszahlen ausgelost ...\n");
    for(int i = 0; i < 5; i++)
    {
        a[i] = rand()%10 + 1;
        printf("a[%d] = %d\n",i,a[i]);
    }

    min = a[0];
    max = a[0];
    for(int i = 0; i < 5; i++)
    {
        if(a[i] < min) {min = a[i];}
        if(a[i] > max) {max = a[i];}
    }


    printf("\nWollen Sie das Minimum ermitteln, dann geben Sie bitte 1 ein\n");
    printf("Wollen Sie das Maximum ermitteln, dann geben Sie bitte 2 ein\n");
    printf("Auswahl -> ");
    fflush(stdin);
    scanf("%d",&user);

    if(user == 1){printf("\nDas Minimum ist: %d (Programm endet)\n",min);}
    else if(user == 2){printf("\nDas Maximum ist: %d (Programm endet)\n",max);}
    else{printf("\n(Programm endet)\n");}

}
