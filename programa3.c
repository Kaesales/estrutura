#include <stdio.h>
#include <stdlib.h>

int main(){
     int n[10];
     int maior;
     int menor;

    for(int i=0; i<10; i++){
        scanf("%d", &n[i]);
    }

     maior=n[0]; 
     menor=n[0];

     
    for(int i=0; i<10; i++){
    
      if(n[i]>maior){
        maior=n[i];
      }

      if(n[i]<menor){
        menor=n[i];
      }
    }

    printf("maior número do array: %d\n", maior);
    printf("menor número do array: %d", menor);
    return 0;
}