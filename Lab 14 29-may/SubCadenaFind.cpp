#include <iostream>
#include <string>
using namespace std;

void LeerDatos (string &cadena, string &subcadena);
int BuscarSubCadena (string cadena, string subcadena);
void Mostrar (string cadena, string subcadena, int posicion);

int main () {
    string cadena, subcadena;
    int posicion;
    LeerDatos (cadena, subcadena);
    posicion=BuscarSubCadena(cadena, subcadena);
    Mostrar(cadena, subcadena, posicion);

    return 0;
}

void LeerDatos (string &cadena, string &subcadena){
    cout << "Ingrese la cadena principal: ";
    getline (cin, cadena);
    cout << "Ingrese la subcadena a buscar: ";
    getline (cin, subcadena);
}

int BuscarSubCadena (string cadena, string subcadena) {
    int posicion;
    posicion=cadena.find(subcadena);
    if (posicion>=0) {
        return posicion;
    } else {
        return -1;
    }
}

void Mostrar (string cadena, string subcadena, int posicion) {
    cout << "\nResultados:";
    cout << "Cadena principal: " << cadena << endl;
    cout << "Subcadena buscada: " << subcadena << endl;

    if(posicion != -1) {
        cout << "La subcadena se encuentra en la posicion: "
             << posicion << endl;
    }
    else {
        cout << "La subcadena no se encuentra en la cadena." << endl;
    }
}
