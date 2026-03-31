#include <iostream>
using namespace std;

int main () {

    int secreto=7, intento;

    cout<<"Adivina el numero: ";
    cin >> intento;

    while (intento != secreto) {
        cout << "Incorrecto, intenta de nuevo: ";
        cin >> intento;
    }

    cout << "Correcto!";

return 0;
}
