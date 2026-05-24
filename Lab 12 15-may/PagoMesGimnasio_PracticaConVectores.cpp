#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void mostrarMenu (int &opcion);
void leerMeses (int &meses);
float obtenerPrecio (int opcion);
float calcularSubtotal (float precio, int meses);
float calcularDescuento (int meses, float subtotal);
void TotalPagar (float montofinal);

int main () {
    char continuar;
    int opcion, meses;
    int cliente = 1;
    float precio, subtotal, montofinal;

    vector <int> planes;
    vector <int> mesesCliente;
    vector <float> montos;

    cout << "-----Bienvenido al Sistema-----" << endl;
    do {
        cout << "\n-----Cliente No." << cliente++ << "-----";
        mostrarMenu (opcion);
        leerMeses (meses);
        precio = obtenerPrecio(opcion);
        subtotal = calcularSubtotal(precio, meses);
        montofinal = calcularDescuento(meses, subtotal);
        TotalPagar (montofinal);

        planes.push_back(opcion);
        mesesCliente.push_back(meses);
        montos.push_back(montofinal);

        cout << "\nNuevo cliente? (s/n): ";
        cin >> continuar;
    } while (continuar == 's');
    cout << "Programa terminado." << endl;

    cout << "\n-----------------RESUMEN DE REGISTRO-----------------" << endl;
    cout << left << setw(8) << "No."<< setw(14) << "Plan" << setw(10) << "Meses" << "Monto Final (Bs.)" << endl;
    cout << "-----------------------------------------------------" << endl;

    for (size_t i=0; i<planes.size(); i++) {
        string nombrePlan;
        switch (planes[i]) {
        case 1:
            nombrePlan = "Basico";
            break;
        case 2:
            nombrePlan = "Intermedio";
            break;
        case 3:
            nombrePlan = "Premium";
            break;
        default:
            nombrePlan = "Desconocido";
        }
        cout << left << setw(8) << i+1 << setw(14) << nombrePlan << setw(10) << mesesCliente[i] <<fixed << setprecision (2) << montos[i] << endl;
    }

    return 0;
}

void mostrarMenu (int &opcion) {
    cout << "\nSeleccione su plan mensual:" << endl;
    cout << "1. Basico" << endl;
    cout << "2. Intermedio" << endl;
    cout << "3. Premium" << endl;
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
