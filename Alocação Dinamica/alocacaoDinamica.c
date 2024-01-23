#include <stdio.h>
#include <stdlib.h> //funcões malloc, calloc, free, exit

int main(void){
    int tamanho = 5;
    int contador;
    int * vetor = (int*) malloc(tamanho*sizeof(int));

    if(vetor == NULL){
        printf("memoria insuficiente!");
        exit(1); //aborta a execução do programa
    } else{
        printf("memoria suficiente.\n");
    }

    // ler os valores do vetor:
    printf("digite os valores do vetor:\n");
    for(contador = 0; contador < tamanho; contador++){
        scanf("%d", &vetor[contador]);
    }
    free(vetor);

    return 0;
}

// ==================================================================================== //

// teste de realloc
#include <stdio.h>
#include <stdlib.h> //funcões malloc, calloc, free, exit

int main(void){
    int tamanho = 5, novo_tamanho;
    int * vetor = (int*) malloc(tamanho*sizeof(int));
    printf("entre com novo tamanho do vetor:\n");
    scanf("%d", &novo_tamanho);
    vetor = (int *) realloc(vetor, novo_tamanho * sizeof(int));

    if(vetor == NULL){
        printf("erro ao alocar memoria");
        exit(1); //aborta a execução do programa
    } 
    free(vetor);

    return 0;
}

// ==================================================================================== //

#include<stdio.h>
#include<stdlib.h>

int main(void){

    char * nome = (char *) malloc(50 * sizeof(char));
    if(nome == NULL){
        exit(1);
    } 
    printf("digite seu nome:\n");
    scanf("%[^\n]s", nome);

    free(nome);
    
    return 0;
}

