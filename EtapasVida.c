#include <stdio.h>

int main () {

    int x, e;

    printf ("Ingrese su edad:");
    scanf ("%d", &x);

    if (x<0) {
        printf ("ERROR: Ingrese un numero mayor a cero");
        return 1;
    }
    if (x >= 0 && x < 13){
           e = 1;
        }
        else {
            if (13<=x && x<18) {
                e = 2;
            }
            else {
                if (18<=x && x<30) {
                    e = 3;
                }
                else {
                    if (30<=x && x<60) {
                        e = 4;
                    }
                    else {
                            e = 5;
                        }
                    }
                }
            }

    printf ("Etapa de vida: %d", e);

    return 0;
    }
