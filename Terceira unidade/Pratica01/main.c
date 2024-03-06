#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quest.h"

int main(){
    Lista* l = NULL;
    l = insere(l, 10);
    l = insere(l, 20);
    l = insere(l, 30);
    l = insere(l, 40);
    l = insere(l, 50);
    imprime(l);
    printf("Numero de nos com info maior que 25: %d\n", maiores(l, 25));
    return 0;
}