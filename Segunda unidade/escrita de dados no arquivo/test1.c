#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE* fp;
    // criar o arquivo: entrada.txt no modo texto "t" //
    fp = fopen("entrada.txt", "w");

    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    } else{
        printf("Arquivo aberto com sucesso\n");
    }
    
    // uso do fputc() //
    fputc('A', fp); // escreve o caractere 'A' no arquivo. só permine colocar um caractere por vez

    if(fclose(fp)){
        printf("Arquivo fechado com sucesso.");
    } else{
        printf("Erro no fechamento do arquivo.");
    }

    return 0;
}