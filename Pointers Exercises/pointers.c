#include <stdio.h>

int main(){

    int idade = 18;
    int *pIdade = NULL; // É considerado boa prática usar NULL
    pIdade = &idade;
    
    /*
    printf("valor de pIdade: %p", pIdade); -> o valor de um ponteiro é o endereço que foi vinculado a ele

    print("valor alocado em pIdade: %d", *pIdade); -> usa-se o asterisco para desreferenciar um ponteiro,
    assim acessando o valor nele alocado */

    return 0;
}