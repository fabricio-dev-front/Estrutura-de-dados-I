#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura Estudante com typedef //
typedef struct Estudante {
    char nome[20];
    char email[80];

    int idade;       
    int matricula;   
} Estudante;

int main() {
    Estudante estudante1; 
    estudante1.idade = 18; 
    estudante1.matricula = 123456; 
    strcpy(estudante1.email, "fabricio.silva@gmail.com"); 
    strcpy(estudante1.nome, "Gustavo"); 

    // Imprimindo as informações de estudante1
    printf("Nome: %s\n", estudante1.nome);
    printf("Idade: %d\n", estudante1.idade);
    printf("Matrícula: %d\n", estudante1.matricula);
    printf("Email: %s\n", estudante1.email);

    return 0;
}
