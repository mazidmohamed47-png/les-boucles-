#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Base,puissance,i;
    int resulta =1;
    printf("veuillez entrer le nombre a elever : ");
    scanf("%d",&Base);
    printf("veuillez entrer le puissance a appliquer  : ");
    scanf("%d",&puissance);
    if (puissance==0)
        printf("%d^%d = 1",Base,puissance);
    else{
    for (i=1;i<=puissance;i++){
        resulta=resulta*Base;
    }
    printf(" %d ^ %d = %d",Base,puissance,resulta);
    }
    return 0;
}
