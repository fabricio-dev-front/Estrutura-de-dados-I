#include <stdio.h>
#include <stdlib.h>

typedef enum meses{
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO,
    JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
}Meses;

typedef struct data{
    int dia;
    int ano;

    Meses mes;  
}Data;

void LerData(Data *ponteiro_data) {
    printf("Informe o dia:");
    scanf("%d", &(ponteiro_data->dia));

    printf("Informe o mes:\n");
    printf("============================\n");
    printf("1 - PARA - janeiro\n");
    printf("2 - PARA - fevereiro\n");
    printf("3 - PARA - marco\n");
    printf("4 - PARA - abril\n");
    printf("5 - PARA - maio\n");
    printf("6 - PARA - junho\n");
    printf("7 - PARA - julho\n");
    printf("8 - PARA - agosto\n");
    printf("9 - PARA - setembro\n");
    printf("10 - PARA - outubro\n");
    printf("11 - PARA - novembro\n");
    printf("12 - PARA - dezembro\n");
    printf("============================\n");
    scanf("%d", (int*)&(ponteiro_data->mes)); // para ler o mês como um inteiro e não como um Mes

    printf("Informe o ano:");
    scanf("%d", &(ponteiro_data->ano));
}

void ImprimirData(Data *p){
    printf("Data: %02d/%02d/%04d\n", p->dia, p->mes, p->ano); 
}

int main() {
    Data data;

    LerData(&data);
    ImprimirData(&data);

    return 0;
}