#include<stdio.h>

int main() {

    int n1,n2,n3,i;
    printf("saisie index de tableau 1: ");
    scanf("%d",&n1);
    int T1[n1],T2[n2];
    printf("Saisie des elements des tableaux 1 : \n");
    for(i=0; i<n1; i++) {
        printf("T1[%d] = ",i+1);
        scanf("%d",&T1[i]);
    }
     printf("saisie index de tableau 2 : ");
    scanf("%d",&n2);
    printf("Saisie des elements des tableaux 2 : \n");
    for(i=0; i<n2; i++) {
        printf("T2[%d] = ",i+1);
        scanf("%d",&T2[i]);
    }
    n3 = n1+n2;
    int T3[n3];
    for(i=0; i<n1; i++) {
        T3[i] = T1[i];
    }
     for(i=0; i<n2; i++) {
        T3[n1 + i] = T2[i];
    }
    printf("le tableau fusioner est :\n");
     for(i=0; i<n3; i++) {
        printf("T[%d] = %d \n",i+1,T3[i]);
    }
    return 0 ;
}
