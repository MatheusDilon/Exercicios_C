#include <stdio.h>
#include <locale.h>

/*Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posicao
das matrizes lidas.*/

int main(){
    int matriz_1[4][4], matriz_2[4][4], matriz_final[4][4];

    printf("Digite os valores inteiros de uma matriz 4x4: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz_1[i][j]);
        }
    }
    
    printf("Repita o processo com outra matriz 4x4: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz_2[i][j]);
        }
    }
    
    printf("A matriz final foi:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz_final[i][j] = matriz_1[i][j] > matriz_2[i][j] ? matriz_1[i][j] : matriz_2[i][j]; 
            printf("%d \t", matriz_final[i][j]);
        }
        printf("\n");
    }

    return 0;
}
