#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nomber ,i; /* i = initialisation */
    printf("Saisir un nombre : ");
    scanf("%d",&Nomber);
    for (i=0;i<=10;i++)
    printf("%d x %d = %d\n",Nomber,i,Nomber*i);
    return 0;
}
