#include <stdio.h>

int main(){
    int vetor[10], par;
    printf("Digite um vetor inteiro de 10 posições: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if((vetor[i] % 2) == 0){
            par ++;
        }
    }
    
    printf("Esse vetor possui %d numeros pares", par);
    
    return 0;
}