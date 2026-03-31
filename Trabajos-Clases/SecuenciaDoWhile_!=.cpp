#include <iostream>
using namespace std;

int main () {

    int opcion;

    do {
        cout << "1. Nueva partida\n";
        cout << "2. Cargar partida\n";
        cout << "0. Salir\n";
        cin >> opcion;
    }
    while (opcion != 0);

return 0;
}
