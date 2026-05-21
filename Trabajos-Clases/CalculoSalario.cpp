#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void LeerDatos (string &nombre, double &htrab, double &ph, int &dt, double &hextra);
double calcSB (double htrab, double ph);
double calcP (double sb, int dt);
double calcHE (double hextra, double ph);
double calcB (double sb);
double calcSF (double sb, double p, double se, double b);
void MostrarTodo (string nombre, double sb, double p, double se, double b, double sf);

int main () {
    string nombre;
    double htrab, ph, hextra;
    int dt;
    LeerDatos (nombre, htrab, ph, dt, hextra);
    double sb = calcSB (htrab, ph);
    double p = calcP (sb, dt);
    double se = calcHE (hextra, ph);
    double b = calcB (sb);
    double sf = calcSF (sb, p, se, b);
    MostrarTodo (nombre, sb, p, se, b, sf);
    return 0;
}

void LeerDatos (string &nombre, double &htrab, double &ph, int &dt, double &hextra) {
    cout << "Ingrese los siguiente datos: \n";
    cout << "Nombre: ";
    getline (cin, nombre);
    cout << "Pago p/hora: ";
    cin >> ph;
    while (ph < 0) {
        cout << "Error. Ingrese un numero positivo: ";
        cin >> ph;
    }
    cout << "Horas trabajadas: ";
    cin >> htrab;
    while (htrab < 0) {
        cout << "Error. Ingrese un numero positivo: ";
        cin >> htrab;
    }
    cout << "Horas extras: ";
    cin >> hextra;
    while (hextra < 0) {
        cout << "Error. Ingrese un numero positivo: ";
        cin >> hextra;
    }
    cout << "Dias tarde: ";
    cin >> dt;
    while (dt < 0) {
        cout << "Error. Ingrese un numero positivo: ";
        cin >> dt;
    }
}

double calcSB (double htrab, double ph) {
    return htrab*ph;
}

double calcP (double sb, int dt) {
    if (dt > 3) {
        return sb*0.1;
    } else {
        return 0;
    }
}

double calcHE (double hextra, double ph) {
    return hextra *ph *1.25;
}

double calcB (double sb) {
    return sb*0.05;
}

double calcSF (double sb, double p, double se, double b) {
    return sb - p + se + b;
}

void MostrarTodo (string nombre, double sb, double p, double se, double b, double sf) {
    cout << "\n---Perfil del Trabajador---\n";
    cout << fixed << setprecision (2);
    cout << "Nombre: " << nombre << "\n";
    cout << "Salario bruto: " << sb << "\n";
    cout << "Retribucion por horas extra: " << se << "\n";
    cout << "Penalizacion correspondiente: " << p << "\n";
    cout << "Bonificacion: " << b << "\n";
    cout << "Salario total: " << sf << endl;
}

