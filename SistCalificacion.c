#include <stdio.h>

int main () {

    float lab1, lab2, lab3, examt, proyef, lab1pond, lab2pond, lab3pond, examtpond, proyefpond, practlab, promediofinal;

    printf ("--Sistema de Calificaciones--\n");

    printf ("\nNotas Practicas de Laboratorio\n");
    printf ("Primer nota: ");
    scanf ("%f", &lab1);
    printf ("Segunda nota: ");
    scanf ("%f", &lab2);
    printf ("Tercer nota: ");
    scanf ("%f", &lab3);

    printf ("\nCalificacion examen teorico: ");
    scanf ("%f", &examt);
    printf ("\nCalificacion proyecto final: ");
    scanf ("%f", &proyef);

    lab1pond = lab1*0.15;
    lab2pond = lab2*0.15;
    lab3pond = lab3*0.15;
    examtpond = examt*0.35;
    proyefpond = proyef*0.2;
    promediofinal=lab1pond+lab2pond+lab3pond+examtpond+proyefpond;

    printf ("\n--Registro de Calificaciones--\n");

    printf ("\nLABORATORIO 1\tLABORATORIO 2\tLABORATORIO 3\tEXAM TEORICO\tPROYECTO\tPROMEDIO\n");
    printf ("------------------------------------------------------------------------------------------------\n");
    printf ("%.2f\t\t\%.2f\t\t\t\%.2f\t\t\%.2f\t\t\%.2f\t\t\%.2f\t\t", lab1pond, lab2pond, lab3pond, examtpond, proyefpond, promediofinal);

      if (promediofinal < 51){
        printf ("\n\nEstudiante reprobado");
    }
    else {
        printf ("\n\nEstudiante aprobado");
    }

return 0;
}
