#include <stdio.h>
#include <stdlib.h>

// para armazenar dados individuais //
struct DadosIndividuais {
    char nome[20];
    int idade;
    int cpf;
};

// para preencher os dados individuais //
void preencherDados(struct DadosIndividuais *individuo) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", individuo -> nome);

    printf("Digite a idade: ");
    scanf("%d", &individuo -> idade);

    printf("Digite o CPF: ");
    scanf("%d", &individuo -> cpf);
} 

// para imprimir os dados individuais //
void imprimirDados(struct DadosIndividuais *individuo) {
    printf("Nome: %s\n", individuo -> nome);
    printf("Idade: %d\n", individuo -> idade);
    printf("CPF: %d\n", individuo -> cpf);
}

// para alterar a idade //
void alterarIdade(struct DadosIndividuais *individuo) {
    printf("Digite a nova idade: ");
    scanf("%d", &individuo -> idade);
}

// para encontrar o individuo mais velho e mais novo //
void encontrarMaisVelhoEMaisNovo(struct DadosIndividuais *individuos, int quantidade) {
    int idadeMaisVelha = individuos[0].idade;
    int idadeMaisNova = individuos[0].idade;
    int indiceMaisVelho = 0;
    int indiceMaisNovo = 0;

    for (int i = 0; i < quantidade; i++) {
        if(individuos[i].idade > idadeMaisVelha) {
            idadeMaisVelha = individuos[i].idade;
            indiceMaisVelho = i;
        }
        else if(individuos[i].idade < idadeMaisNova) {
            idadeMaisNova = individuos[i].idade;
            indiceMaisNovo = i;
        }
    }

    printf("A pessoa mais velha é: %s\n"
    "com a idade: %d\n", individuos[indiceMaisVelho].nome, individuos[indiceMaisVelho].idade);

    printf("A pessoa mais nova é: %s\n"
    "com a idade: %d\n", individuos[indiceMaisNovo].nome, individuos[indiceMaisNovo].idade);
}

int main(void) {
    int numIndividuos, posicao, opcao;
    printf("Digite o número de indivíduos: ");
    scanf("%d", &numIndividuos);

    struct DadosIndividuais *individuos = (struct DadosIndividuais*) malloc (numIndividuos * sizeof(struct DadosIndividuais));

    for(int i = 0; i < numIndividuos; i++) {
        printf("------------------------------------\n");
        printf("Digite os dados do indivíduo %d\n", i+1);
        preencherDados(&individuos[i]);
    }

    for(int i = 0; i < numIndividuos; i++) {
        printf("------------------------------------\n");
        printf("Dados do indivíduo %d\n", i+1);
        imprimirDados(&individuos[i]);
    }  

    printf("Deseja alterar a idade de algum indivíduo? (1 - sim, 2 - não): ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite a posição do indivíduo que deseja alterar a idade: ");
        scanf("%d", &posicao);
        alterarIdade(&individuos[posicao]);
    }

    encontrarMaisVelhoEMaisNovo(individuos, numIndividuos);

    free(individuos);
    return 0;
}
