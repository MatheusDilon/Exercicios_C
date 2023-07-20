#include <stdio.h>
#include <locale.h>

/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/

int main(){
    setlocale(LC_ALL, "");
    int matriz[4][4], maior, local_fileira, local_coluna;
    int fileiras = sizeof(matriz)/sizeof(matriz[0]);
    int colunas = sizeof(matriz[0])/sizeof(matriz[0][0]);

    printf("Digite os valores inteiros de uma fileira de uma matriz 4x4 separados por espaço (troque de fileira com enter)\n");

    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
            if(i == 0){
                maior = matriz[i][j];
            }
            else{
                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    local_coluna = j + 1;
                    local_fileira = i + 1;
                }
            }
        }
    }
    
    printf("A Matriz é: \n");
    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior número é %d e está na fileira %d na coluna %d", maior, local_fileira, local_coluna);

    return 0;
}