#include <iostream>
#include <math.h>
using namespace std;

void LeerDatos (float &x, int &y);
float POTEN (float x, int y);
void MostrarDatos (float x, int y, float resultado);

int main () {
    float x, resultado;
    int y;
    LeerDatos (x, y);
    resultado = POTEN (x, y);
    MostrarDatos (x, y, resultado);
    return 0;
}

void LeerDatos (float &x, int &y) {
    cout << "Ingrese un valor para x (x^y): ";
    cin >> x;
    cout << "Ingrese un valor para y (x^y): ";
    cin >> y;
}

float POTEN (float x, int y) {
    return pow (x, y);
}

void MostrarDatos (float x, int y, float resultado) {
    cout << "\nxxxx Resultado xxxx" << endl;
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "Resultado= " << resultado << endl;
}
