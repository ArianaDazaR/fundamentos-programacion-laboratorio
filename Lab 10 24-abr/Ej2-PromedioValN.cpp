#include <iostream>
#include <iomanip>
using namespace std;

float CalcPromedio(int n);

int main() {
    int n;
    cout << "Ingrese la cantidad de valores: ";
    cin >> n;

    while (n <= 0) {
        cout << "Debe ingresar un entero positivo. Intente de nuevo: ";
        cin >> n;
    }

    float promedio = CalcPromedio(n);
    cout << fixed << setprecision (2) << "El promedio de los " << n << " valores es: " << promedio << endl;

    return 0;
}

float CalcPromedio(int n) {
    float suma = 0;
    float valor;
    for (int i=1; i<=n; i++) {
        cout << "Ingrese el valor " << i << ": ";
        cin >> valor;
        suma = suma + valor;
    }

    return suma / n;
}
