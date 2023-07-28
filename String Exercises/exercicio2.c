#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Escreva uma função que inverta uma string passada como argumento e retorne a string invertida. */

void reverseString(char string[], char string_reversa[]){
    int tamanho = strlen(string);

    for(int i = 0; i < tamanho; i++){
        string_reversa[i] = string[tamanho - i - 1];
    }
}

int main(){
    setlocale(LC_ALL, "");
    char frase[100], frase_reversa[100];
    printf("Insira uma frase: \n");
    fgets(frase, 100, stdin);
    frase[strlen(frase) - 1] = '\0';
    reverseString(frase, frase_reversa);

    printf("A string reversa da frase é %s", frase_reversa);

    return 0;
}