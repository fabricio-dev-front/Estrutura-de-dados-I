#include <stdio.h>

int main(void){
    int c;
    int nlinhas = 0;
    FILE* fp;

    fp = fopen("entrada.txt", "rt");
    if(fp == NULL){
        printf("não foi possivel abrir arquivo.");
        return 1;
    }

    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            nlinhas++;
        }
  }
    // fechar o arquivo //
    fclose(fp);

    // imprimir o numero de linhas //
    printf("numero de linhas = %d\n", nlinhas);
    return 0;
}