#include <stdio.h>
#include <stdlib.h>

int main(){

    int count;
    int number[10]={10, 21, 30, 11, 9, 6, 8, 52, 61, 101};
    
    for(int i=0; i<10; i++){  
        if(number[i]%2==0){
            count++;
        }
    }

    printf("número de valores do array que são pares:%d", count);
    return 0;
}