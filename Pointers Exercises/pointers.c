#include <stdio.h>

int main(){

    int idade = 18;
    int *pIdade = NULL; // � considerado boa pr�tica usar NULL
    pIdade = &idade;
    
    /*
    printf("valor de pIdade: %p", pIdade); -> o valor de um ponteiro � o endere�o que foi vinculado a ele

    print("valor alocado em pIdade: %d", *pIdade); -> usa-se o asterisco para desreferenciar um ponteiro,
    assim acessando o valor nele alocado */

    return 0;
}