#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[10], menor = 0, maior = 0;
    printf("Digite um vetor inteiro de 10 posições: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor){
            menor = vetor[i];
        }
        else if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
    printf("O menor valor é %d e o maior é %d", menor, maior);
    
    return 0;
}