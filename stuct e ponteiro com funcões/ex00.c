#include<stdio.h>
#include<stdlib.h>

struct aluno{
    char nome[80];
    int idade;
    int mat;
    char email[50];
};

int main(void){

    struct aluno estudante;

    printf("insira seu nome:\n");
    scanf("%[^\n]", estudante.nome);
    
    printf("insira sua idade:\n");
    scanf("%d", &estudante.idade);
    
    printf("insira sua matricula:\n");
    scanf("%d", &estudante.mat);
    
    printf("insira seu email:\n");
    scanf("%[^\n]", estudante.email);

    return 0;
}