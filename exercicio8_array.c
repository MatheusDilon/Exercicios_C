#include <stdio.h>
#include <locale.h>

int main(void){
    int vetor[6] = {0}, reverso[6] = {0}, tamanho;
    printf("Digite 6 valores inteiros:\n");
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        reverso[sizeof(vetor)/sizeof(vetor[0]) - i - 1] = vetor[i];        
    }

    printf("O reverso: ");
    for(int i = 0; i < tamanho; i++){
        (i <= 4) ? printf("%d, ", reverso[i]) : printf("%d", reverso[i]);
    }
    return 0;
}