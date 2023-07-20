#include <stdio.h>

/*Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.
*/

int main(){
    int matriz[4][4], fileiras = sizeof(matriz)/sizeof(matriz[0]), colunas = sizeof(matriz[0])/sizeof(matriz[0][0]);
    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i * j;
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}