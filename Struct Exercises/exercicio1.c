#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura. */

typedef struct{
    char nome[15];
    int idade;
    char endereco[25];
} Pessoa;

int main(){
    setlocale(LC_ALL, "");
    Pessoa pessoa1;
    printf("Digite seu nome:\n");
    fgets(pessoa1.nome, 15, stdin);
    pessoa1.nome[strlen(pessoa1.nome) - 1] = '\0';
    printf("Digite sua idade:\n");
    scanf("%d", &pessoa1.idade);
    getchar();
    printf("Digite seu endereço:\n");
    fgets(pessoa1.endereco, 25, stdin);

    printf("Nome: %s\nIdade: %d\nEndereço: %s", pessoa1.nome, pessoa1.idade, pessoa1.endereco);

    return 0;
}