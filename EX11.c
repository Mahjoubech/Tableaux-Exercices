#include<stdio.h>

int main() {

    int n,i,rmplc,nv;
    printf("saisie index de tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("Saisie des elements des tableaux : \n");
    for(i=0; i<n; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("veuillez saisir la valeur  remplacer dans le tableau : ");
    scanf("%d",&rmplc);
    printf("veuillez saisir la nouvelle valeur a remplacer : ");
    scanf("%d",&nv);

    for(i=0; i<n; i++) {
        if(T[i]==rmplc) {
            T[i]=nv;
        }
    }
    printf("les nouvelles valeurs dans le tableau est : \n");
    for(i=0; i<n; i++) {
    printf("T[%d] = %d \n",i+1,T[i]);
    }

    return 0 ;
}
