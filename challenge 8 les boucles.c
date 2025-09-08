#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n,f0 = 0,f1 = 1,suivant;
    printf("entrez le nombere de chiffres que vous souhaitez voir apparaitre : ");
    scanf("%d",&n);
    if (n==1)
        printf("%d   ",f0);
    else if (n>=2){
        printf("%d   %d   ",f0,f1);
    for (i=2;i<n;i++){
        suivant=f0+f1;
        printf("%d   ",suivant);
        f0=f1;
        f1=suivant;

    }
    }
    else
        printf("!! Erreur Veuillez saisir des nombres superieurs a zero !!");

    return 0;
}
