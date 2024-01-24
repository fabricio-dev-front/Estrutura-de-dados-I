#include <stdio.h>

// Enum para gênero
typedef enum genero {
    MASCULINO,
    FEMININO
}Genero;

// struct para Pessoa //
typedef struct individuo {
    char nomeCompleto[50];
    int idade;
    Genero genero;
}Individuo;

// Função para ler os dados de uma pessoa //
void obterDados(Individuo *individuo) {
    printf("Digite o nome completo: ");
    scanf(" %[^\n]", individuo->nomeCompleto);

    printf("Digite a idade: ");
    scanf("%d", &(individuo->idade));

    printf("Digite o gênero (0 para masculino, 1 para feminino): ");
    scanf("%d", &(individuo->genero));
}

// Função para imprimir os dados de uma pessoa
void exibirDados(Individuo *individuo) {
    printf("Nome Completo: %s \n", individuo->nomeCompleto);
    printf("Idade: %d \n", individuo->idade);
    printf("Gênero: %s \n", individuo->genero == MASCULINO ? "Masculino" : "Feminino");
}

int main() {
    Individuo pessoa;

    obterDados(&pessoa);
    exibirDados(&pessoa);

    return 0;
}
