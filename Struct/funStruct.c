#include <stdio.h>
#include <stdlib.h>

// estrutura Trabalhador //
struct Trabalhador {
    char nome[20];
    int idade;
    float salario;
    char cargo[20];
    char genero[10];
};

// preencher os dados do trabalhador //
void preenche(struct Trabalhador *trabalhador) {
    printf("Digite o nome do trabalhador: ");
    scanf(" %[^\n]", trabalhador -> nome);

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &trabalhador -> idade);

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &trabalhador -> salario);

    printf("Digite o cargo do trabalhador: ");
    scanf(" %[^\n]", trabalhador -> cargo);

    printf("Digite o gênero do trabalhador: ");
    scanf(" %[^\n]", trabalhador -> genero);
}

// imprimir os dados do trabalhador //
void imprimir(struct Trabalhador *trabalhador) {
    printf("Nome: %s\n", trabalhador -> nome);
    printf("Idade: %d\n", trabalhador -> idade);
    printf("Salário: %.2f\n", trabalhador -> salario);
    printf("Cargo: %s\n", trabalhador -> cargo);
    printf("Gênero: %s\n", trabalhador -> genero);
}

// para alterar o salário de um trabalhador //
void alterarSalario(struct Trabalhador *trabalhador) {
    printf("Digite o novo salario: ");
    scanf("%f", &trabalhador -> salario);
}

// para encontrar o trabalhador com maior e menor salário //
void maiorEMenor(struct Trabalhador *trabalhador, int n) {
    float maiorSalario = trabalhador[0].salario;
    float menorSalario = trabalhador[0].salario;
    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 0; i < n; i++) {
        if (trabalhador[i].salario > maiorSalario) {
            maiorSalario = trabalhador[i].salario;
            posicaoMaior = i;
        } else if (trabalhador[i].salario < menorSalario) {
            menorSalario = trabalhador[i].salario;
            posicaoMenor = i;
        }
    }

    printf("------------------------------------\n");
    printf("Cargo do trabalhador com maior salario: %s\nSalario: %.2f\n", trabalhador[posicaoMaior].cargo, trabalhador[posicaoMaior].salario);
    printf("------------------------------------\n");
    printf("Cargo do trabalhador com menor salario: %s\nSalario: %.2f\n", trabalhador[posicaoMenor].cargo, trabalhador[posicaoMenor].salario);
}

int main(void) {
    int quantidadeTrabalhadores, opcao;
    printf("Digite a quantidade de trabalhadores: ");
    scanf("%d", &quantidadeTrabalhadores);

    struct Trabalhador trabalhador[quantidadeTrabalhadores];

    // preenchimento dos dados dos trabalhadores //
    for (int i = 0; i < quantidadeTrabalhadores; i++) {
        printf("------------------------------------\n");
        printf("Digite os dados do trabalhador %d\n", i + 1);
        preenche(&trabalhador[i]);
        printf("------------------------------------\n");
    }

    // impressão dos dados dos trabalhadores //
    for (int i = 0; i < quantidadeTrabalhadores; i++) {
        printf("Dados do trabalhador %d\n", i + 1);
        printf("------------------------------------\n");
        imprimir(&trabalhador[i]);
        printf("------------------------------------\n");
    }

    printf("Você deseja alterar o valor de algum salario (1- Sim, 2- Não): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int trabalhadorEscolhido;
        printf("Digite o número do trabalhador que deseja alterar o salário: ");
        scanf("%d", &trabalhadorEscolhido);

        alterarSalario(&trabalhador[trabalhadorEscolhido - 1]);

        printf("------------------------------------\n");
        printf("Dados do trabalhador %d\n", trabalhadorEscolhido);
        printf("------------------------------------\n");
        imprimir(&trabalhador[trabalhadorEscolhido - 1]);
    }

    maiorEMenor(trabalhador, quantidadeTrabalhadores);

    return 0;
}
