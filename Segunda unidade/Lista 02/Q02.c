#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50 

typedef struct {
    char nome[MAX_NOME];
    float primeiraNota, segundaNota, terceiraNota;
} InformacoesAluno;

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "alunos.txt";

    // Abrir o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }

    // Solicitar informações ao usuário e escrever no arquivo
    int quantidadeAlunos;

    printf("Quantidade de alunos a serem cadastrados: ");
    scanf("%d", &quantidadeAlunos);

    // Limpar o buffer de entrada após a leitura de quantidade
    while (getchar() != '\n');

    InformacoesAluno informacoesAluno;

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", informacoesAluno.nome);

        printf("Nota 1: ");
        scanf("%f", &informacoesAluno.primeiraNota);

        printf("Nota 2: ");
        scanf("%f", &informacoesAluno.segundaNota);

        printf("Nota 3: ");
        scanf("%f", &informacoesAluno.terceiraNota);

        // Limpar o buffer de entrada após a leitura das notas
        while (getchar() != '\n');

        // Escrever no arquivo
        fprintf(arquivo, "%s\t%.2f\t%.2f\t%.2f\n", informacoesAluno.nome, informacoesAluno.primeiraNota, informacoesAluno.segundaNota, informacoesAluno.terceiraNota);
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("\nInformacoes dos alunos foram armazenadas em %s\n", nomeArquivo);

    return EXIT_SUCCESS;
}
