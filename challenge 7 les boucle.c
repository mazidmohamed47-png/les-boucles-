#include <stdio.h>
#include <stdlib.h>

int main()
{
  int nombre,chiffre,initialisation;
  int inverse =0;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);
    for (initialisation= nombre; initialisation != 0; initialisation = initialisation / 10) {
        chiffre = initialisation % 10;
        inverse = inverse * 10 + chiffre;
    }
    printf("Nombre inverse  : %d\n", inverse);
    return 0;
}
