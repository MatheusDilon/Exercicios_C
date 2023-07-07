#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float notas[15] = {0}, media;
    int soma = 0, tamanho = sizeof(notas)/sizeof(notas[0]);
    printf("Calculadora de média\n Digite a nota de 15 alunos\n");
    for(int i = 0; i < tamanho; i++){
        scanf("%f", &notas[i]);
        while(notas[i] < 0){
            printf("Digite um valor válido\n");
            scanf("%f", &notas[i]);
        }
    }
    
    for(int i = 0; i < tamanho; i++){
        soma += notas[i];
    }
    media = soma / tamanho;

    printf("A média geral das notas é: %.2f", media);
    return 0;
}