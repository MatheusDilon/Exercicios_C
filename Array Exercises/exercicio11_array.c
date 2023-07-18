#include <stdio.h>
#include <locale.h>
/*
programa que preenche um vetor 
com 10 numeros reais, calcule e mostre a
quantidade de numeros negativos e a 
soma dos numeros positivos desse vetor.
*/

int main(){
    int vetor[10], negativos, soma_positivos = 0, tamanho;
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    setlocale(LC_ALL, "");
    printf("Digite 10 números reais\n");

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        while(vetor[i] < 0){
            printf("Digite um valor válido\n");
            scanf("%d", &vetor[i]);
        }
        (vetor[i] > 0) ? soma_positivos += vetor[i] : negativos++;
    }

    printf("%d são negativos e a soma dos positivos é %d", negativos, soma_positivos);
    return 0;
}