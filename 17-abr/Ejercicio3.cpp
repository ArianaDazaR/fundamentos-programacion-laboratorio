#include <iostream>
using namespace std;

int main() {
    int pin, original, digito, anterior;
    int intentos = 0;
    bool valido = false;
    bool consecutivosIguales = false;

    do {
        cout << "Ingrese un PIN de 4 digitos (sin digitos consecutivos iguales): ";
        cin >> pin;
        intentos++;

        if (pin < 1000 || pin > 9999) {
            cout << "PIN Invalido - Debe tener 4 digitos. Intento " << intentos << " de 3.\n";
            continue;
        }

        original = pin;
        anterior = original % 10;
        original = original / 10;

        while (original > 0) {
            digito = original % 10;
            if (digito == anterior) {
                consecutivosIguales = true;
                break;
            }
            anterior = digito;
            original = original / 10;
        }

        if (consecutivosIguales) {
            cout << "PIN Invalido - Contiene digitos consecutivos iguales. Intento " << intentos << " de 3.\n";
        } else {
            valido = true;
            break;
        }

    } while (intentos < 3);


    if (valido) {
        cout << "\nPIN Valido - Acceso concedido.\n";
    } else {
        cout << "\nCuenta Bloqueada - Demasiados intentos fallidos.\n";
    }

    return 0;
}
