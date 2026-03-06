#include <stdio.h>

int main () {
    char nombre [50];
    float cantidad, total;

    printf("-------Registro de Ventas-------\n\n");

    printf("Nombre del cliente: ");
    scanf("%s", &nombre);

    printf("Cantidad de productos: ");
    scanf("%f", &cantidad);

    total = cantidad * 8;

    printf("\n");
    printf("Total a pagar: %.2f", total);

    return 0;

}

