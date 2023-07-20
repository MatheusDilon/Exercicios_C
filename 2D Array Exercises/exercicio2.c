#include <stdio.h>

/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/
int main(){
    int matriz[5][5], rows = sizeof(matriz)/sizeof(matriz[0]), columns = sizeof(matriz[0])/sizeof(matriz[0][0]);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(i == j){
                matriz[i][j] = 1;
            }
            else matriz[i][j] = 0;

            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}