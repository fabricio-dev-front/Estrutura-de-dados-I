#include <stdio.h>
#include <stdlib.h>

typedef enum prod{
    ALIMENTO, BEBIDA, ELETRONICO
}TipoProduto;

typedef union tipo{
    char Alimento[50];
    char Bebida[50];
    char Eletromico[50];
}Tipo;

typedef struct expecifidades{
    char nome[50];
    float preco;

    TipoProduto TipoProduto;

    Tipo tipo;
}expec;

void inplementarDdos(expec *dados){
    printf("Informe o nome do produto:");
    scanf(" %[^\n]", dados->nome);
    
    printf("Informe o preco:");
    scanf("%f", &(dados->preco));
    
    printf("Informe o tipo (0 - Alimento, 1 - bebida e 2 - eletronico):");
    scanf("%d", (int*)&(dados->TipoProduto));

    switch (dados->TipoProduto){
    case ALIMENTO:
        printf("Nome do alimento:");
        scanf(" %[^\n]", dados->tipo.Alimento);
        break;
    case BEBIDA:
        printf("Nome da bebida:");
        scanf(" %[^\n]", dados->tipo.Bebida);
        break;    
    case ELETRONICO:
        printf("Nome do eletronico:");
        scanf(" %[\n]", dados->tipo.Eletromico);
        break;
    default:
        printf("ERRO!!\n");
        printf("OPCAO INVALIDA");
        break;
    }
}

void mostrar_dados(expec *dados){
    printf("Nome: %s\n", dados->nome);
    printf("Preco: %f\n", dados->preco);

    switch (dados->TipoProduto){
    case ALIMENTO:
        printf("Tipo: Alimento %s\n", dados->tipo.Alimento);
        break;
    case BEBIDA:
        printf("Tipo: Bebida %s\n", dados->tipo.Bebida);
        break;
    case ELETRONICO:
        printf("Tipo: Eletronico %s\n", dados->tipo.Eletromico);
        break;
    default:
        printf("ERRO!!\n");
        printf("OPCAO INVALIDA");
        break;
    }
}

int main(void){
    expec * exp = (expec*) malloc(sizeof(expec));
    if(exp == NULL){
        exit(1);
    }

    inplementarDdos(exp);
    mostrar_dados(exp);

    free(exp);
    return 0;
}