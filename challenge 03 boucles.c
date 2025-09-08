#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nommber , i , somme=0;
    printf("Saisir un nombre : ");
    scanf("%d",&nommber);

    for (i=1; i<=nommber ; i++){
        somme=somme+i;}
        printf("la somme de nommbre: %d est %d\n",nommber,somme);
    return 0;
}
