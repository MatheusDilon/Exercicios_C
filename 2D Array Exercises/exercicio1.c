#include <stdio.h>
#include <locale.h>

/* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui*/
int main(){
    setlocale(LC_ALL, "");
    int matriz[4][4], maior, rows, columns;
    rows = sizeof(matriz)/sizeof(matriz[0]);
    columns = sizeof(matriz[0])/sizeof(matriz[0][0]);
    printf("Digite os valores da matriz 4x4: \n");

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10) maior ++;
        }
    }

    printf("A matriz possui %d valor(es) maior(es) que 10\n", maior);

    return 0;
}