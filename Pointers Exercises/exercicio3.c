#include <stdio.h>

/* Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.
*/

int main(){
    float array[10] = {5.5, 5.7, 4.8, 5.2, 10.2, 3.2, 4.2, 7.8, 2.3, 2.9};
    float *p = array;

    for(int i = 0; i < 10; i++){
        printf("%d\n", p);
        p += 1;
    }

    return 0;
}