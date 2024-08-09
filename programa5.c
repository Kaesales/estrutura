#include <stdio.h>
#include <stdlib.h>


int main(){


int a[5];
int soma;
float media;

for(int i=0; i<5; i++){
    scanf("%d", &a[i]);
    soma+=a[i];
}

media=soma/5;

for(int i=0; i<5; i++){
    printf("%d ", a[i]);
}

printf("\nmedia:%.2f", media);

    return 0;
}