#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,Affichage;
    printf("veuillez entrez le nobre de nombres impairs que vous souhitez voir : ");
    scanf("%d",&n);
    printf("les %d nombres impairs sont : ",n);
    for (i=1;i<=n;i++){
            Affichage=2*i-1;
        printf("%d,",Affichage);
    }
    return 0;
}
