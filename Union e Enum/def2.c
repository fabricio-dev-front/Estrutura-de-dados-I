#include <stdio.h>

// ENUMERAÇÃO //
enum novo_modo{
    VERDADEIRO,
    FALSO
}novo;

int main(void){
    // nova forma de estrutura //
    enum novo_modo resposta;

    printf("voce gosta de algoritmo? \n 0 - TRUE \n 1 - FALSE\n");
    scanf("%d", &resposta);

    if(resposta == VERDADEIRO){
        printf("Boa escolha");
    } 

    else if(resposta == FALSO){
        printf("Que pena");
    }
        
    return 0;
}