#include<stdio.h>

int main() {

    int n,i;
    printf("saisie index de tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("Saisie des elements des tableaux : \n");
    for(i=0; i<n; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("Affichage les elements paires : \n");

    for(i=0; i<n; i++) {
        if(T[i]%2 == 0) {
            printf("T[%d] = %d \n",i+1,T[i]);
        }
    }
  

    return 0 ;
}
