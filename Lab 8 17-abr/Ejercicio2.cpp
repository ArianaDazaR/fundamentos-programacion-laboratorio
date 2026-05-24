#include <iostream>
using namespace std;

int main() {
    int ingresado, consumo, digito;
    int mayor = -1;
    int menor = 10;
    int MayorCont = 0;

    cout << "Ingrese un numero entero positivo (cada digido -> consumo de GB en un dia): ";
    cin >> consumo;

    while (consumo < 0) {
        cout << "Error: el numero debe ser positivo. Ingrese nuevamente: ";
        cin >> consumo;
    }

    ingresado = consumo;

    while (consumo > 0) {
        digito = consumo % 10;

         if (digito > mayor) {
            mayor = digito;
            MayorCont = 1;
        } else if (digito == mayor) {
            MayorCont++;
        }

        if (digito < menor) {
            menor = digito;
        }

        consumo = consumo / 10;
    }


    cout << "\nResultados\n";
    cout << "Numero ingresado: " << ingresado << "\n";
    cout << "Consumo maximo en un dia: " << mayor << " GB\n";
    cout << "Consumo minimo en un dia: " << menor << " GB\n";
    cout << "El valor maximo se repite: " << MayorCont << " veces.\n";

    return 0;
}
