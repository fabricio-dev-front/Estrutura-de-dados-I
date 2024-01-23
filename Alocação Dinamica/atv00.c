#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_pessoas, indice, mulheres_gostaram = 0, homens_nao_gostaram = 0, total_mulheres = 0, total_homens = 0;

    char genero, opiniao;

    printf("Digite o numero de pessoas entrevistadas: ");
    scanf("%d", &numero_pessoas);

    char *generos = malloc(numero_pessoas * sizeof(char));
    char *opinioes = malloc(numero_pessoas * sizeof(char));

    if(generos == NULL || opinioes == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for(indice = 0; indice < numero_pessoas; indice++) {
        printf("Digite o genero (M/F) e a opiniao (G/N) da pessoa %d: ", indice + 1);
        scanf(" %c %c", &genero, &opiniao);

        generos[indice] = genero;
        opinioes[indice] = opiniao;

        if(genero == 'F' || genero == 'f') {
            total_mulheres++;
            if(opiniao == 'G' || opiniao == 'g') {
                mulheres_gostaram++;
            }
        } else if(genero == 'M' || genero == 'm') {
            total_homens++;
            if(opiniao == 'N' || opiniao == 'n') {
                homens_nao_gostaram++;
            }
        }
    }

    printf("Porcentagem do publico feminino que gostaram: %.2f%%\n", ((float)mulheres_gostaram / total_mulheres) * 100);
    printf("Porcentagem do publico masculino que nao gostaram: %.2f%%\n", ((float)homens_nao_gostaram / total_homens) * 100);

    free(generos);
    free(opinioes);

    return 0;
}
