#include<stdio.h>
#include<stdlib.h>

//typedef = (usado para remonear os tipos)

struct aluno{
    char nome[80];
    int idade;
    int mat;
    char email[50];
};

void preenche(struct aluno * estudante){
    
    printf("insira seu nome:\n");
    scanf(" %[^\n]", estudante->nome);
    
    printf("insira sua idade:\n");
    scanf("%d", &estudante->idade);
    
    printf("insira sua matricula:\n");
    scanf("%d", &estudante->mat);
    
    printf("insira seu email:\n");
    scanf(" %[^\n]", estudante->email);
}

void imprime(struct aluno * estudante){
    printf("Nome:%s\n", estudante->nome);
    printf("Idade:%d\n", estudante->idade);
    printf("Matricula:%d\n", estudante->mat);
    printf("Email:%s\n", estudante->email);
}

int main(void){

    struct aluno * estudante = (struct aluno *) malloc(sizeof(struct aluno));
    if(estudante == NULL){
        exit(1);
    }

    preenche(estudante);
    imprime(estudante);
    free(estudante);

    return 0;
}