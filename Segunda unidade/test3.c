#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE* fp;

    // criar o arquivo: entrada.txt no modo texto "t" //
    fp = fopen("entrada.txt", "rt");
    char c[20];

    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    } else{
        printf("Arquivo aberto com sucesso\n");
    }

    // uso do fgets() //
    fgets(c, 20, fp); // lê o string do arquivo
    printf("%s\n", c); // imprime a string lida

    if(fclose(fp)){
        printf("Arquivo fechado com sucesso.");
    } else{
        printf("Erro no fechamento do arquivo.");
    }

    return 0;
}