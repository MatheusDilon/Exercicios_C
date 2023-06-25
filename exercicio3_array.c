#include <stdio.h>

int main(){
    int vetor[10];
    int vetor_final[10];
    printf("Digite 10 numeros inteiros: ");

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        vetor_final[i] = vetor[i] * vetor[i];
    }

    printf("Conjunto 1: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("Conjunto 2: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor_final[i]);
    }
    
    return 0;
}