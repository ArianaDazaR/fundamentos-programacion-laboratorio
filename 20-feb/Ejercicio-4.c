#include <stdio.h>

int main() {

    float numero1, numero2, numero3, numero4, numero5, numero6, numero7, ventas, IVA, ganancias;

    printf("Ingrese las ventas del dia lunes: ");
    scanf("%f", &numero1);

    printf("Ingrese las ventas del dia martes: ");
    scanf("%f", &numero2);

    printf("Ingrese las ventas del dia miercoles: ");
    scanf("%f", &numero3);

    printf("Ingrese las ventas del dia jueves: ");
    scanf("%f", &numero4);

    printf("Ingrese las ventas del dua viernes: ");
    scanf("%f", &numero5);

    printf("Ingrese las ventas del dia sabado: ");
    scanf("%f", &numero6);

    printf("Ingrese las ventas del dia domingo: ");
    scanf("%f", &numero7);

    ventas = numero1 + numero2 + numero3 + numero4 + numero5 + numero6 + numero7;

    IVA = ventas * 0.13;

    ganancias = ventas - IVA;

    printf("Las ventas totales son de: %.2f\n", ventas);

    printf("El IVA total son de: %.2f\n", IVA);

    printf("Las ganancias netas totales son de: %.2f\n", ganancias);

    return 0;

}
