#include <stdio.h>
#include <stdio.h>

// ENUMERAÇÃO //
enum novo_modo{
    true;
    false;
}novo;

int main(void){
    // nova forma de estrutura //
    novo resposta;

    printf("voce gosta de algoritmo? \n 0 - TRUE \n 1 - FALSE\n");
    scanf("%d", &resposta);

    if(resposta === TRUE){
        printf("Boa escolha");
    } 

    else if(resposta === FALSE){
        printf("Que pena");
    }
        
    return 0;
}