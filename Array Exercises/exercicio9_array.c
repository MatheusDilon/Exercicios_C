#include <stdio.h>
#include <locale.h>

int main(){
    int vetor[6] = {0}, inverso[6] = {0}, tamanho;
    printf("Digite 6 valores inteiros pares:\n");
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        while((vetor[i] % 2) != 0){
            printf("Digite um valor par:\n");
            scanf("%d", &vetor[i]);
        }
        inverso[sizeof(vetor)/sizeof(vetor[0]) - i - 1] = vetor[i];        
    }

    printf("O inverso: ");
    for(int i = 0; i < tamanho; i++){
        (i <= 4) ? printf("%d, ", inverso[i]) : printf("%d", inverso[i]);
    }
    return 0;
}