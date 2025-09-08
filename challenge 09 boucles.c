#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffres,initialisation;
    printf("veuillez entrer les chiffres : ");
    scanf("%d",&chiffres);
    if (chiffres<0)
            printf("!! Erreur Veuillez saisir des chiffres positif !! ");
    else if (chiffres==0)
            printf("le nombre de chiffres est : 1");
    else{
        for (initialisation=0;chiffres>0;chiffres/=10,initialisation++);

            printf("les lombres des chiffres est : %d",initialisation);
    }
    return 0;
}
