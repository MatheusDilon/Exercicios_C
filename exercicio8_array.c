#include <stdio.h>
#include <locale.h>

<<<<<<< HEAD
int main(void){
    int vetor[6] = {0}, inverso[6] = {0}, tamanho;
=======
int main(){
    int vetor[6] = {0}, reverso[6] = {0}, tamanho;
>>>>>>> 33c726e65ef75ea5e1b71fc1c0e14c184b7f224e
    printf("Digite 6 valores inteiros:\n");
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
        reverso[sizeof(vetor)/sizeof(vetor[0]) - i - 1] = vetor[i];        
    }

    printf("O reverso: ");
    for(int i = 0; i < tamanho; i++){
        (i <= 4) ? printf("%d, ", reverso[i]) : printf("%d", reverso[i]);
    }
    return 0;
}