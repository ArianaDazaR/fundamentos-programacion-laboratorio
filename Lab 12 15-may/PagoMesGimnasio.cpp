#include <iostream>
#include <iomanip>
using namespace std;

void mostrarMenu (int &opcion);
void leerMeses (int &meses);
float obtenerPrecio (int opcion);
float calcularSubtotal (float precio, int meses);
float calcularDescuento (int meses, float subtotal);
void TotalPagar (float montofinal);

int main () {
    int opcion, meses;
    float precio, subtotal, montofinal;

    mostrarMenu (opcion);
    leerMeses (meses);
    precio = obtenerPrecio(opcion);
    subtotal = calcularSubtotal(precio, meses);
    montofinal = calcularDescuento(meses, subtotal);
    TotalPagar (montofinal);
}

void mostrarMenu (int &opcion) {
    cout << "Bienvenido al Sistema\n";
    cout << "\nSeleccione su plan mensual:\n";
    cout << "1. Basico\n";
    cout << "2. Intermedio\n";
    cout << "3. Premium\n";
    cin >> opcion;
    while (opcion < 1 || opcion > 3) {
        cout << "Opcion invalida. Intente de nuevo: ";
        cin >> opcion;
    }
}

void leerMeses (int &meses) {
    cout << "\nMeses que desea asistir: ";
        cin >> meses;
        while (meses < 0) {
            cout << "Meses invalidos. Intente de nuevo: ";
            cin >> meses;
        }
}

float obtenerPrecio(int opcion) {
    switch (opcion) {
        case 1:
            return 100;
        case 2:
            return 180;
        case 3:
            return 250;
        default:
            return 0;
    }
}
float calcularSubtotal (float precio, int meses) {
    return precio * meses;
}

float calcularDescuento (int meses, float subtotal) {
    if (meses > 3) {
        cout << "\nAplica a descuento." << endl;
        cout << "Descuento aplicado: Bs.-" << fixed << setprecision (2) << subtotal*0.15 << endl;
        return subtotal * 0.85;
    } else {
        cout << "\nNo aplica a descuento." << endl;
        return subtotal;
    }
}

void TotalPagar (float montofinal) {
    cout << "Monto a pagar: Bs." << fixed << setprecision (2) << montofinal << endl;
}
