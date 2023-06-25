#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[8], x, y, soma;
    printf("Digite um vetor inteiro de 8 posições: \n");
    for (int i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Digite dois valores inteiros de 1-8: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = (vetor[x-1]) + (vetor[y-1]);
    printf("Soma: %d", soma);
    
    return 0;
}