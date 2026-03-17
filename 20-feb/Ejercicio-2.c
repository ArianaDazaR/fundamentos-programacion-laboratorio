#include <stdio.h>

int main() {

    float numero1, numero2, numero3, numero4, numero5, numero6, multiplicar;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    printf("Ingrese el tercer numero: ");
    scanf("%f", &numero3);

    printf("Ingrese el cuarto numero: ");
    scanf("%f", &numero4);

    printf("Ingrese el quinto numero: ");
    scanf("%f", &numero5);

    printf("Ingrese el sexto numero: ");
    scanf("%f", &numero6);

    multiplicar = numero1 * numero2 * numero3 * numero4 * numero5 * numero6;

    printf("La multiplicacion es: %.3f\n", multiplicar);

    return 0;

}
