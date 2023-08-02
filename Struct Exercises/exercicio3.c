#include <stdio.h>
#include <locale.h>

/* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. 
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. 
(d) Encontre o aluno com menor media geral 
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.  */

typedef struct{
    char nome[25];
    int matricula;
    float nota_prova1;
    float nota_prova2;
    float nota_prova3;
} Aluno;

int main(){
    setlocale(LC_ALL, "");
    Aluno aluno_1, aluno_2, aluno_3, aluno_4, aluno_5;
    Aluno alunos_total[] = {aluno_1, aluno_2, aluno_3, aluno_4, aluno_5};
    int tamanho_array = sizeof(alunos_total)/sizeof(alunos_total[0]), i_maior_nota, i_maior_media, i_menor_media;
    float maior_nota, maior_media, menor_media;

    printf("Insira os dados de 5 alunos\n");
    for(int i = 0; i < tamanho_array; i++){
        printf("\nDados do aluno %d:\n", i + 1);
        for(int j = 0; j < 5; j++){
            switch(j){
                case 0:
                    printf("Nome: ");
                    scanf("%[^\n]s", &alunos_total[i].nome);
                    break;
                case 1:
                    printf("Matrícula: ");
                    scanf("%d", &alunos_total[i].matricula);
                    break;
                case 2:
                    printf("Nota da Prova 01: ");
                    scanf("%f", &alunos_total[i].nota_prova1);
                    break;
                case 3:
                    printf("Nota da Prova 02: ");
                    scanf("%f", &alunos_total[i].nota_prova2);
                    break;
                case 4:
                    printf("Nota da Prova 03: ");
                    scanf("%f", &alunos_total[i].nota_prova3);
                    break;
            }
        }
    }

    // Achando a maior nota da primeira prova
    for(int i = 0; i < tamanho_array; i++){
        if(i == 0){
            maior_nota = alunos_total[i].nota_prova1;
        }
        else{
            if(alunos_total[i].nota_prova1 > maior_nota){
                maior_nota = alunos_total[i].nota_prova1;
                i_maior_nota = i;
            }
        }
    }

    printf("\nA maior nota da prova 01 foi %.1f do aluno %s\n", maior_nota, alunos_total[i_maior_nota].nome);

    // Achando a maior e menor media
    for(int i = 0; i < tamanho_array; i++){
        float media = (alunos_total[i].nota_prova1 + alunos_total[i].nota_prova2 + alunos_total[i].nota_prova1) / 3;
        if(i == 0){
            maior_media = (alunos_total[i].nota_prova1 + alunos_total[i].nota_prova2 + alunos_total[i].nota_prova3) / 3;
            menor_media = (alunos_total[i].nota_prova1 + alunos_total[i].nota_prova2 + alunos_total[i].nota_prova3) / 3;
        }
        else{
            if(media > maior_media){
                maior_media = media;
                i_maior_media = i;
            }
            else if(media < menor_media){
                menor_media = media;
                i_menor_media = i;
            }
        }
    }

    printf("\nA maior média foi %.1f do aluno %s\n", maior_media, alunos_total[i_maior_media].nome);
    printf("\nA menor média foi %.1f do aluno %s\n\n", menor_media, alunos_total[i_menor_media].nome);

    // Saída:
    for(int i = 0; i < tamanho_array; i++){
        float media = (alunos_total[i].nota_prova1 + alunos_total[i].nota_prova2 + alunos_total[i].nota_prova1) / 3;
        printf("Aluno %s - Média: %.1f ", alunos_total[i].nome, media);
        media >= 6 ? printf("Aprovado\n") : printf("Reprovado\n");
    }

    return 0;
}