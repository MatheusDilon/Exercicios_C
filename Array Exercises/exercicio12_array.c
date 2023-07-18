#include <stdio.h>
#include <locale.h>

/* Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores. */

int main(){ 
    setlocale(LC_ALL, "");
    int vetor[5] = {0}, maior, menor, soma, tamanho;
    float media;
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("Digite 5 valores inteiros\n");

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        
        if(i == 0){
            maior = menor = soma = vetor[i];
        }
        else{
            soma += vetor[i];
            if(vetor[i] > maior){
                maior = vetor[i];
            }
            else if(vetor[i] < menor){
                menor = vetor[i];
            }
        }
    }

    media = soma / tamanho;

    printf("O menor valor é %d, o maior é %d, e a média é %.2f", menor, maior, media);

    return 0;
}