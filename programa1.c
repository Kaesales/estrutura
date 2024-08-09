#include <stdio.h>
#include <stdlib.h>

int main(){

int n[6]={1, 0, 5, -2, -5, 7};
int soma;
soma=n[0] + n[1] + n[5];   

printf("soma dos valores do array: %d\n", soma);

n[4]= 100;

for(int i=0; i<6; i++){
    printf("%d\n", n[i]);
}
    return 0;
}