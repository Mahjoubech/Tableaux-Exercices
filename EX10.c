#include<stdio.h>

int main(){

int n,i,x,k=0;
printf("saisie index de tableau : ");
scanf("%d",&n);
int T[n];
printf("Saisie des elements des tableaux : \n");
for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
printf("veuillez saisir l'element de recherche : ");
scanf("%d",&x);

for(i=0;i<n;i++){
   if(x==T[i]){
   k++;
   }
   }
   if(k==0){
   printf("%d ne exist pas dans le tableau.",x);
   }else{
    printf("%d  exist dans le tableau.",x);
   }



return 0 ;
}
