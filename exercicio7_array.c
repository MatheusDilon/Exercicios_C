#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[10], maior = 0, lugar;
    printf("Digite um vetor inteiro de 10 posi��es: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior){
            maior = vetor[i];
            lugar = i+1;
        }
    }

    printf("O vetor �: ");
    for (int i = 0; i < 10; i++){
        printf("%d, ", vetor[i]);
    }
    printf("\nO maior elemento � %d e a posi��o dele no vetor � %d", maior, lugar);
    
    
    
    return 0;
}