#include<stdio.h>

int main(){

int T[5];
int n,i;
printf("Saisie des elements : \n");
for(i=0;i<5;i++){
    
    scanf("%d",&T[i]);
}

printf("veuillez saisie le facteur  : ");
scanf("%d",&n);

printf("le multiplication des elements de tableau avec un facteur est :");
for(i=1;i<5;i++){
   printf(" %d × %d = %d \n",n,T[i],n*T[i]); 
}


return 0 ;
}
