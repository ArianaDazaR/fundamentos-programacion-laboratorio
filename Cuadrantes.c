#include <stdio.h>

int main () {

    float x, y;
    int r;

    printf ("Valor de X:");
    scanf ("%f", &x);

    printf ("Valor de y:");
    scanf ("%f", &y);

    if (x==0 && y==0) {
        printf ("ERROR: Punto (0,0) excluido");
        return 1;
    }

    if (x>0) {
       if (y>0){
            r=1;
        } else {
            r=4;
        }
    } else {
        if (y>0) {
        r=2;
        } else {
            r=3;
        }
    }

printf ("Cuadrante: %d\n", r);

return 0;
}
