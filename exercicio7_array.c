#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[10], maior = 0, lugar;
    printf("Digite um vetor inteiro de 10 posições: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior){
            maior = vetor[i];
            lugar = i+1;
        }
    }

    printf("O vetor é: ");
    for (int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }
    printf("\nO maior elemento é %d e a posição dele no vetor é %d", maior, lugar);
    
    
    
    return 0;
}