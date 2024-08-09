#include <stdio.h>
#include <stdlib.h>

int main(){

    float soma;
    float n[10];
    int count;

    for(int i=0; i<10; i++){
     scanf("%f", &n[i]);
    }
    
    for(int i=0; i<10; i++){
     if(n[i]<0){
        count++;     
        }

    if(n[i]>0){
        soma+=n[i];
    }

    }
    

    printf("número de valores negativos do array:%d\n", count);
     printf("soma dos números positivos do array:%2.f", soma);

    return 0;
}