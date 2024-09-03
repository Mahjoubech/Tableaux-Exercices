#include<stdio.h>

int main(){

int index,n,i;
printf("saisie index de tableau : ");
scanf("%d",&index);
int T[index];
printf("Saisie des elements : \n");
for(i=0;i<index;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

printf("veuillez saisie le facteur  : ");
scanf("%d",&n);

printf("le multiplication des elements de tableau avec un facteur est :\n");
for(i=0;i<index;i++){
   printf(" %d × %d = %d \n",n,T[i],n*T[i]); 
}


return 0 ;
}
