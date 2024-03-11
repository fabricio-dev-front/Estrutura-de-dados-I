#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50

typedef struct {
    int identificador;
    char nome[MAX_NOME];
    float salario;
} DadosFuncionario;

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "funcionarios.txt";

    // Abrir o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }

    // Solicitar informações ao usuário e escrever no arquivo
    int quantidadeFuncionarios;
    printf(" =============== CADASTRO DE FUNCIONARIOS =============\n");
    printf("Quantidade de funcionarios a serem cadastrados: ");
    scanf("%d", &quantidadeFuncionarios);
    printf("========================================================\n");

    // Limpar o buffer de entrada após a leitura de quantidade
    while (getchar() != '\n');

    DadosFuncionario funcionario;

    for (int i = 0; i < quantidadeFuncionarios; i++) {
        printf("\nFuncionario %d:\n", i + 1);

        printf("Identificador: ");
        scanf("%d", &funcionario.identificador);

        printf("Nome: ");
        scanf(" %[^\n]", funcionario.nome);  // Ignorar espaços em branco no início e no final

        printf("Salario: ");
        scanf("%f", &funcionario.salario);

        // Limpar o buffer de entrada após a leitura do salário
        while (getchar() != '\n');

        // Escrever no arquivo
        fprintf(arquivo, "%d\t%s\t%.2f\n", funcionario.identificador, funcionario.nome, funcionario.salario);
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("\nInformacoes dos funcionarios foram armazenadas em %s\n", nomeArquivo);

    return EXIT_SUCCESS;
}
