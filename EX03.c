#include<stdio.h>

int main(){

int T[5];
int S,i;
printf("Saisie des elements : \n");
for(i=0;i<5;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}
printf("Afficharge des elements : \n");
for(i=0;i<5;i++){
    printf("T[%d] = %d\n",i+1,T[i]);
}
S=0;
for(i=0;i<5;i++){
    S+=T[i];
}
printf("la Somme est : %d", S);

return 0 ;
}
