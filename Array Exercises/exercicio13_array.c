#include <stdio.h>
#include <locale.h>
#include <conio.h>

/* Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor. */

int main(){
    setlocale(LC_ALL, "");
    int vetor[5] = {0}, menor, maior, tamanho, index_maior, index_menor;
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("Digite 5 valores inteiros\n");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        if(i == 0){
            maior = menor = vetor[i];
            index_maior = i + 1;
            index_menor = i + 1;
        }
        else{
            if(vetor[i] > maior){
                maior = vetor[i];
                index_maior = i + 1;
            }
            else if(vetor[i] < menor){
                menor = vetor[i];
                index_menor = i + 1;
            }
        }
    }
    printf("A posição do menor é %d e do maior é %d\n", index_menor, index_maior);
    printf("\nPressione qualquer tecla para sair");
    
    while(1){
        if(kbhit()){
            break;
        }
    }

    return 0;
}