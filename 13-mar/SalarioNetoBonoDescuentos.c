#include <stdio.h>

int main () {

    float antig, sueldob, bono, descAFP, RCIVA;
    char nombre[50];

    printf ("--Sistema de Salarios--\n");

    printf ("Ingrese su nombre: ");
    scanf (" %[^\n]", &nombre);

    printf ("Años de antiguedad: ");
    scanf ("%f", &antig);

    printf ("Sueldo basico: ");
    scanf ("%f", &sueldob);

    if (antig>5){
        bono = sueldob*1.1;
        printf ("Sueldo antes de AFP: %.2f\n", bono);
        descAFP = bono - bono*0.1271;
        printf ("Sueldo luego de AFP: %.2f\n", descAFP);
    }
    else {
        printf ("Sueldo antes de AFP: %.2f\n", sueldob);
        descAFP = sueldob - sueldob*0.1271;
        printf ("Sueldo luego de AFP: %.2f\n", descAFP);
    }

    if (bono>9500){
        RCIVA=descAFP-((bono-9500)*0.13);
        printf ("Aplica al descuento por Impuesto RC-IVA\n");
        printf ("Sueldo correspondiente: %.2f\n", RCIVA);
    } else {
        printf ("No aplica al descuento por Impuesto RC-IVA\n");
        printf ("Sueldo correspondiente: %.2f\n", descAFP);
    }

return 0;
}
