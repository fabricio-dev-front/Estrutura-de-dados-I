#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Professor
struct Professor {
    char nome[20];
    char email[50];
    char universidade[50]; 
    char disciplina[50];
};

// para imprimir os dados do professor //
void imprime(struct Professor *prof) {
    printf("Nome: %s\n", prof->nome);
    printf("Email: %s\n", prof->email);
    printf("Universidade: %s\n", prof->universidade);
    printf("Disciplina: %s\n", prof->disciplina);
}

// para preencher os dados do professor //
void preenche(struct Professor *prof) {
    printf("Digite seu nome: ");
    scanf(" %19s", prof->nome); // Limitando a entrada para 19 caracteres para evitar estouro de buffer //

    printf("Digite seu email: ");
    scanf(" %49s", prof->email); 

    printf("Digite o nome da sua universidade: ");
    scanf(" %49s", prof->universidade); 

    printf("Digite a disciplina que leciona: ");
    scanf(" %49s", prof->disciplina); 
}

int main(void) {
    // Alocação dinâmica de struct, porque a variável agora é um ponteiro //
    struct Professor *professor1 = (struct Professor *)malloc(sizeof(struct Professor));
    
    if (professor1 == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    preenche(professor1);
    imprime(professor1);

    free(professor1);

    return 0;
}
