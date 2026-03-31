#include <iostream>
using namespace std;

int main() {

    double Nota1, Nota2, sumaNotasPrevias;
    int cantidadPrevias = 2, contadorParciales;
    double nuevaNota, sumaParciales, promedioGeneral;

    cout << "Ingrese la nota del primer parcial:";
    cin >> Nota1;

    cout << "Ingrese la nota del segundo parcial:";
    cin >> Nota2;

    sumaNotasPrevias=Nota1+Nota2;

    do {
        cout << "Ingrese nueva nota de parcial: ";
        cin >> nuevaNota;

        sumaParciales = sumaParciales + nuevaNota;
        contadorParciales++;

        promedioGeneral = (sumaNotasPrevias + sumaParciales) / (cantidadPrevias + contadorParciales);

        cout << "Promedio actual: " << promedioGeneral << "\n" << endl;

        if (promedioGeneral >= 51) {
            cout << "Aprobaste la materia." << endl;
        } else {
            cout << "Aún no llegas al 51. Necesitas otro parcial." << endl;
        }

    } while (promedioGeneral < 51);

    cout << "Nota final: " << promedioGeneral << endl;
    return 0;
}
