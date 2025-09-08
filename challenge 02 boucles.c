#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nommber , i , factorielle=1;
    printf("Saisir un nombre : ");
    scanf("%d",&nommber);
    if (nommber<0)
        printf("la factorielle nest pas definie pour les entiers negatifs.");
    else {
    for (i=1; i<=nommber ; i++){
        factorielle=factorielle*i;}
        printf("la factorielle de nommber est : %d!=%d\n",nommber,factorielle);
    }

    return 0;
}
