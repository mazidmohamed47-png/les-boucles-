#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,rolation ;
    printf("veuillez entrez le nobre de nombres pairs que vous souhitez voir : ");
    scanf("%d",&n);
    while (n<0){
    printf("veuillez entrez le nobre de nombres pairs que vous souhitez voir : ");
    scanf("%d",&n);
    }
    for (i=1;i<=n;i++){
        rolation=2*i;
        printf("%d , ",rolation);
    }
    return 0;
}
