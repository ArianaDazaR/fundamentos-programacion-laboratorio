#include <stdio.h>

int main () {
    float base, altura, area;

    printf("-------Calculadora de Area de Triangulos-------\n\n");

    printf("Ingrese base: ");
    scanf("%f", &base);

    printf("Ingrese altura: ");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("\n");

    printf("El area total es: %.2f", area);

return 0;
}
