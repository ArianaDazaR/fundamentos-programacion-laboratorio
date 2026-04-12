#include <iostream>
#include <math.h>
using namespace std;

int main () {

    double n, x, i, j, k, factorial;
    double suma=0;

    cout << "Cuantos terminos quiere generar (incluyendo el termino constante 1)?: ";
    cin >> n;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "cosh(" << x << ") = ";

    for (i=0; i<=n; i++) {

        j = 2*i;
        factorial = 1;

        for (k=1; k<=j; k++) {
            factorial = factorial * k;
        }

        suma = suma + pow(x,j) / factorial;
        cout << x << "^" << j << "/" << j << "!";

        if (i<n) {
            cout << " + ";
        }
    }

    cout << " = " << suma << endl;

return 0;
}
