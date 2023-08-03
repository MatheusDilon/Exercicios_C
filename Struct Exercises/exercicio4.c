#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define NUM_PESSOAS 3
#define NUM_DADOS 3

/* Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabetica. */

struct Pessoa{
    char nome[25];
    char endereco[30];
    char telefone[15];
};

int ordemAlfabetica(const void * a, const void * b){
    return strcmp((*(struct Pessoa*)a).nome, (*(struct Pessoa*)b).nome);
}

int main(){
    struct Pessoa pessoas[NUM_PESSOAS];
    printf("Insira os dados de 5 pessoas:\n");
    for(int i = 0; i < NUM_PESSOAS; i++){
        printf("\nPessoa 0%d\n", i + 1);
        for(int j = 0; j < NUM_DADOS; j++){
            switch(j){
                case 0:
                    printf("Nome: ");
                    fgets(pessoas[i].nome, 25, stdin);
                    pessoas[i].nome[strlen(pessoas[i].nome) - 1] = '\0';
                    break;
                case 1:
                    printf("Endereço: ");
                    fgets(pessoas[i].endereco, 30, stdin);
                    pessoas[i].endereco[strlen(pessoas[i].endereco) - 1] = '\0';
                    break;
                case 2:
                    printf("Telefone: ");
                    fgets(pessoas[i].telefone, 15, stdin);
                    pessoas[i].telefone[strlen(pessoas[i].telefone) - 1] = '\0';
                    break;
            }
        }
    }

    qsort(pessoas, NUM_PESSOAS, sizeof(struct Pessoa), ordemAlfabetica);
    printf("\n");

    for(int i = 0; i < NUM_PESSOAS; i++){
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}