#include<stdio.h>

int main(){

int T[5];
int i;
printf("Saisie des elements : \n");
for(i=0;i<5;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
printf("Afficharge des elements : \n");
for(i=0;i<5;i++){
    printf("T[%d] = %d\n",i+1,T[i]);
}
return 0 ;
}
