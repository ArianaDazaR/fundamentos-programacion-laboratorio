#include <stdio.h>

int main () {

    char nombre [50];
    float hora, pagohora, diaslaborales, pagomes;

    printf ("---Registro de Usuario---\n");

    printf("Por favor introduce tu nombre: ");
    scanf ("%s", nombre);

    printf("-------------------------\n");
    printf("¡Hola, %s! Bienvenido al sistema.\n", nombre);
    printf("-------------------------\n");

    printf("Ingrese horas trabajadas al dia: ");
    scanf("%f", & hora);

    printf("Ingrese dias laborales del mes: ");
    scanf("%f", & diaslaborales);

    printf("Ingrese pago por hora: ");
    scanf("%f", & pagohora);

    pagomes = hora * diaslaborales * pagohora;

    printf("Su ingreso mensual total es: %.2f\n", pagomes);

    return 0;

    }
