// TAD: tipo abstrato de dados 
// TAD: um novo tipo (struct) + conjunto de operações 

#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if(estudante == NULL){
        printf("Memória insuficiente!\n");
        exit(1);
    }

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", estudante->nome);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &estudante->matricula);

    printf("Digite o IRA do aluno: ");
    scanf("%f", &estudante->IRA);

    return estudante;
}

// feita por mim
void imprime(Aluno * aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("IRA: %.2f\n", aluno->IRA);
}

void libera(Aluno * estudante){
    free(estudante);
}