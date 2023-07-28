#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Escreva um programa que solicite ao usuário que insira uma frase e,
em seguida, conte o número de vogais presentes nessa frase. */

int main(){
    char frase[100];
    int vogais;
    printf("\n--Contador de vogais--\nInsira uma frase:\n");
    fgets(frase, 100, stdin);
    int tamanho_frase = strlen(frase);
    frase[tamanho_frase - 1] = '\0';

    for(int i = 0; i < tamanho_frase; i++){
        char letra = tolower(frase[i]);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            vogais++;
        }
    }

    (vogais > 1 || vogais == 0) ? printf("A frase tem %d vogais", vogais) : printf("A frase tem %d vogal", vogais);

    return 0;
}