#include <iostream>
using namespace std;

int main() {
    int ingresado, numero, digito;
    int totalHoras = 0;
    int appsExcesivas = 0;
    int cantidadApps = 0;
    double promedio;

    cout << "Ingrese un numero entero positivo (horas por app): ";
    cin >> numero;

    while (numero < 0) {
        cout << "Error: el numero debe ser positivo. Ingrese nuevamente: ";
        cin >> numero;
    }

    ingresado = numero;

    while (numero > 0) {
        digito = numero % 10;
        totalHoras = totalHoras + digito;
        cantidadApps++;
        if (digito > 5) {
            appsExcesivas++;
        }
        numero = numero / 10;
    }

    promedio = totalHoras / cantidadApps;

    cout << "\nResultados\n";
    cout << "Numero ingresado: " << ingresado << "\n";
    cout << "Total de horas: " << totalHoras << "\n";
    cout << "Cantidad de aplicaciones: " << cantidadApps << "\n";
    cout << "Aplicaciones con mas de 5 horas: " << appsExcesivas << "\n";
    cout << "Promedio de horas por aplicacion: " << promedio << "\n";

    return 0;
}
