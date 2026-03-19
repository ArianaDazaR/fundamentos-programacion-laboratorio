#include <stdio.h>

int main () {

    int cantA, cantB, cantC;
    float subtotal, desc1, desc2;
    const float A=10, B=20, C=30;

    printf ("Sistema de Ventas\n");

    printf ("Ingrese cantidad de producto A:");
    scanf ("%d", &cantA);

    printf ("Ingrese cantidad de producto B:");
    scanf ("%d", &cantB);

    printf ("Ingrese cantidad de producto C:");
    scanf ("%d", &cantC);

    subtotal = cantA*A + cantB*B + cantC*C;

    printf ("\nSubtotal: %.2f\n", subtotal);

    if (subtotal>100) {
        desc1 = subtotal*0.9;
        printf ("Aplica a descuento del 10%: %.2f\n", desc1);
        if (cantA+cantB+cantC>5) {
            desc2 = desc1-5;
            printf ("Aplica a descuento de Bs.5 - Monto final: %.2f\n", desc2);
        }
        else {
            printf ("No aplica a descuento de Bs.5 - Monto final: %.2f\n", desc1);
        }
    }
    else {
        printf ("No aplica a descuento del 10%: %.2f\n", subtotal);
         if (cantA+cantB+cantC>5) {
            desc2 = desc1-5;
            printf ("Aplica a descuento de Bs.5 - Monto final: %.2f\n", desc2);
        }
        else {
            printf ("No aplica a descuento de Bs.5 - Monto final: %.2f\n", desc1);
        }
    }

    return 0;
}
