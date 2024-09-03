#include<stdio.h>

int main(){

int n,i;
printf("saisie index de tableau : ");
scanf("%d",&n);
int T[n],E[n];
printf("Saisie des elements des tableaux : \n");
for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

for(i=0;i<n;i++){
   E[n-1-i] =T[i];
   }

printf("Affichage de tableau original : \n");
 for(i=0;i<n;i++){
 printf(" %d ",T[i]);
 }
 printf("\n");
printf("Affichage l'inversion d'un tableau : \n");
 for(i=0;i<n;i++){
 printf(" %d ",E[i]);
 }

return 0 ;
}
