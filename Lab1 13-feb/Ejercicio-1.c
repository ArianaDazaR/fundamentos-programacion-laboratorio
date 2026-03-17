#include <stdio.h>

int main() {

    //Declaraciòn de variables
    float numero1, numero2, numero3, numero4, numero5, suma, promedio;

    //Entrada de datos
    printf("Ingrese el primer numero:");
    scanf("%f", &numero1);

    printf("Ingrese el segundo numero:");
    scanf("%f", &numero2);

    printf("Ingrese el tercer numero:");
    scanf("%f", &numero3);

    printf("Ingrese el cuarto numero:");
    scanf("%f", &numero4);

    printf("Ingrese el quinto numero:");
    scanf("%f", &numero5);

    //Proceso
    suma = numero1 + numero2 + numero3 + numero4 + numero5;
    promedio = suma / 5;

    //Salida
    printf("La suma es: %.2f\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
