#include <stdio.h>
#include <locale.h>

/* Leia uma matriz 5 x 5. Leia tambem um valor X. O programa devera fazer uma busca
desse valor na matriz e, ao final, escrever a localizacao (linha e coluna) ou uma 
mensagem de ?nao encontrado? */

int main(){
    setlocale(LC_ALL, "");
    int matriz[5][5], valor, fileiras = sizeof(matriz)/sizeof(matriz[0]), colunas = sizeof(matriz[0])/sizeof(matriz[0][0]), encontrou = 0;
    printf("Digite os valores inteiros de uma matriz 5x5\n");
    for(int i = 0; i < fileiras; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Agora digite um valor qualquer (que esteja ou não na matriz):\n");
    scanf("%d", &valor);
    for(int i = 0; i < fileiras; i++){
        if(encontrou == 1){
            break;
        }
        for(int j = 0; j < colunas; j++){
            if(valor == matriz[i][j]){
                encontrou = 1;
                printf("Linha: %d e Coluna: %d", i + 1, j + 1);
                break;
            }
        }
    }

    if(encontrou == 0){
        printf("valor não encontrado na matriz");
    }

    return 0;
}
