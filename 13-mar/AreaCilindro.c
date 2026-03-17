#include <stdio.h>
#include <math.h>

int main () {

    float radio, altura, area, volumen, sumval;
    const float PI=3.14159265;

    printf ("--Calculadora de Area y Volumen de Cilindros--\n");

    printf ("Ingrese valor de la altura: ");
    scanf ("%f", &altura);

    printf ("Ingrese valor del radio: ");
    scanf ("%f", &radio);

    if (altura <= 0 || radio <= 0){
        printf ("ERROR: Por favor ingrese valores positivos\n");
    }
    else {

    area = 2*radio*altura*PI;
    volumen = PI*pow(radio,2)*altura;
    sumval = area + volumen;

    printf ("\nResultados\n");
    printf ("----------------------------------------------------------------\n");
    printf ("Altura ingresada:  %.2f\n", altura);
    printf ("Radio ingresada:  %.2f\n", radio);
    printf ("----------------------------------------------------------------\n");
    printf ("Area:  %.4f unidades cuadradas\n", area);
    printf ("Volumen:   %.4f unidades cubicas\n", volumen);
    printf ("----------------------------------------------------------------\n");
    printf ("Suma total de valoress:    %.4f unidades\n", sumval);
    }

return 0;
}
