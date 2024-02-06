#include <stdio.h>
#include <stdlib.h>

int main(void){


    FILE* fp;
    // criar o arquivo: entrada.txt no modo texto "t" //
    fp = fopen("entrada.txt", "rt");
    int c;

    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    } else{
        printf("Arquivo aberto com sucesso\n");
    }
    
    // uso do fgetc() //
    
    c = fgetc(fp); // lê o primeiro caractere do arquivo
    printf("%c\n", c); // imprime o primeiro caractere do arquivo

    if(fclose(fp)){
        printf("Arquivo fechado com sucesso.");
    } else{
        printf("Erro no fechamento do arquivo.");
    }

    return 0;
}