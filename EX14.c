#include<stdio.h>

int main() {

    int n,i,M,S=0;
    printf("saisie index de tableau : ");
    scanf("%d",&n);
    int T[n];
    printf("Saisie des elements des tableaux : \n");
    for(i=0; i<n; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }

    for(i=0; i<n; i++) {
        S+=T[i];
    }
    M = S/(float)n;
    printf("la moyenne de tableau est : %d",M);

    return 0 ;
}
