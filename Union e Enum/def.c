#include <stdio.h>
#include <stdio.h>

#define TRUE 0
#define FALSE 1

int main(void){
    int res;

    printf("voce gosta de algoritmo? \n 0 - TRUE \n 1 - FALSE\n");
    scanf("%d", &res);

    if(res == TRUE){
        printf("Boa escolha");
    } 

    else if(res == FALSE){
        printf("Que pena..");
    }
        
    return 0;
}