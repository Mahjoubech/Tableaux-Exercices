#include<stdio.h>

int main(){

int n,i,j,cmp;
printf("saisie index de tableau : ");
scanf("%d",&n);
int T[n],C[n];
printf("Saisie des elements des tableaux : \n");
for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

for(i=0;i<n;i++){
   C[i] =T[i];
   }

printf("Affichage de tableau original : \n");
 for(i=0;i<n;i++){
 printf(" %d ",T[i]);
 }
 printf("\n");
printf("Affichage de tableau copie : \n");
 for(i=0;i<n;i++){
 printf(" %d ",C[i]);
 }

return 0 ;
}
