#include <stdio.h>

/* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz. 
*/

int main(){
    float array[3][3] = {
        {5.5, 5.7, 4.8}, 
        {5.2, 10.2, 3.2},
        {4.2, 7.8, 2.3} 
    };
    float *p = array;

    for(int i = 0; i < 9; i++){
        printf("%d\n", p);
        p += 1;
    }

    return 0;
}