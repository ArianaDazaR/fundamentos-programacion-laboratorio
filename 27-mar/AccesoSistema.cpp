#include <iostream>
using namespace std;

int main () {

        int opcion;

        cout <<"Seleccione el tipo de usuario:\n";
        cout <<"1. Administrador\n";
        cout <<"2. Cliente\n";
        cout <<"3. Invitado\n";
        cout <<"Ingrese opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nAcceso total al sistema";
                break;
            case 2:
                cout << "\nAcceso limitado a compras";
                break;
            case 3:
                cout << "\nAcceso solo a visualizacion";
                break;
            default:
                cout << "\nERROR: Verifique la opcion ingresada";
        }

return 0;
}
