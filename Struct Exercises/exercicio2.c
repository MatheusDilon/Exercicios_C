#include <stdio.h>
#include <locale.h>

/* Construa uma estrutura aluno com nome, numero de matricula e turma. Leia do usuario
a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela. */

typedef struct{
    char nome[25];
    int matricula;
    int turma;
} Aluno;

int main(){
    setlocale(LC_ALL, "");
    Aluno aluno1;
    Aluno aluno2;
    Aluno aluno3;
    Aluno aluno4;
    Aluno aluno5;
    Aluno estudantes[] = {aluno1, aluno2, aluno3, aluno4, aluno5};
    for(int i = 0; i < 5; i++){
        printf("\nDados do aluno %d:\n", i + 1);
        for(int j = 0; j < 3; j++){
            switch(j){
                case 0:
                    printf("Nome: ");
                    scanf("%s", &estudantes[i].nome);
                    break;
                case 1:
                    printf("Matrícula: ");
                    scanf("%d", &estudantes[i].matricula);
                    break;
                default:
                    printf("Turma: ");
                    scanf("%d", &estudantes[i].turma);
                    break;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%s, Matrícula: %d, Turma: %d\n", estudantes[i].nome, estudantes[i].matricula, estudantes[i].turma);
    }

    return 0;
}