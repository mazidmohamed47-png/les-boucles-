#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Base,Exposant,i;
    int resulta =1;
    printf("veuillez entrer le nombre a elever : ");
    scanf("%d",&Base);
    printf("veuillez entrer le puissance a appliquer  : ");
    scanf("%d",&Exposant);
    if (Exposant==0)
        printf("%d=1",Exposant);
    else{
    for (i=1;i<=Exposant;i++){
        resulta=resulta*Base;
    }
    printf(" %d ",resulta);
    }
    return 0;
}
