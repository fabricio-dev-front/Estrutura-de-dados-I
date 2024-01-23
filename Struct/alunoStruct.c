#include <stdio.h>

// estrutura Estudante //
struct Estudante {
    char nome[20]; 
    char email[50];  
    
    int idade;       
    int matricula;  
};

int main(void) {
    struct Estudante estudante1;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", estudante1.nome); 

    printf("Digite sua idade: ");
    scanf("%d", &estudante1.idade); 

    printf("Digite sua matrícula: ");
    scanf("%d", &estudante1.matricula); 

    printf("Digite seu email: ");
    scanf(" %[^\n]", estudante1.email);

    printf("Nome: %s\n", estudante1.nome); 

    printf("Idade: %d\n", estudante1.idade); 
    
    printf("Matrícula: %d\n", estudante1.matricula); 

    printf("Email: %s\n", estudante1.email); 

    return 0;
}
