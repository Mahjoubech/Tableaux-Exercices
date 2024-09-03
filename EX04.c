#include<stdio.h>

int main(){

int T[5];
int max,i;
printf("Saisie des elements : \n");
for(i=0;i<5;i++){
    
    scanf("%d",&T[i]);
}
printf("Afficharge des elements : \n");
for(i=0;i<5;i++){
    printf("T[%d] = %d\n",i+1,T[i]);
}
max = T[0];
for(i=1;i<5;i++){
    if(max < T[i]){
    max = T[i];}
}
printf("Maximun  est : %d", max);

return 0 ;
}
