#include<stdio.h>

int main(){

int n,i,j,cmp;
printf("saisie index de tableau : ");
scanf("%d",&n);
int T[n];
printf("Saisie des elements des tableaux : \n");
for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

for(i=0;i<n;i++){
   for(j=i+1;j<n;j++){
   if(T[i]>T[j]){
    cmp = T[i];
    T[i] = T[j];
    T[j] = cmp;
   }
   }
}

printf("Affichage de tableau tri croissant : \n");
 for(i=0;i<n;i++){
 printf(" %d ",T[i]);
 }

return 0 ;
}
