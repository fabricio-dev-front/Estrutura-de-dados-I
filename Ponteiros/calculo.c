#include <stdio.h>
#include <math.h>

void calcula_hexagono(float lado, float *area, float *perimetro) {
    *area = (3 * sqrt(3) * pow(lado, 2)) / 2;
    *perimetro = 6 * lado;
}

int main() {
    float lado, area, perimetro;

    printf("DIGITE O COMPRIMENTO DO LADO DO HEXAGONO: ");
    scanf("%f", &lado);

    calcula_hexagono(lado, &area, &perimetro);

    printf("AREA: %.2f\n", area);
    printf("PERIMETRO: %.2f\n", perimetro);

    return 0;
}