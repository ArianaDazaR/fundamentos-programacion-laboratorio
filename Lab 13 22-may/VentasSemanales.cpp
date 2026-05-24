#include <iostream>
#include <vector>
#include <string>
using namespace std;

string DefDia (int i);
void LeerVector(int ventas[], string dia);
void MostrarVentas (int ventas[], string dia);
int CalcTotalVentas (int ventas []);
int CalcPromedio (int totalventa);
string DefMayorVenta (int ventas [], string dia);
string DefMenorVenta (int ventas [], string dia);
int SuperiorProm (int ventas [], int promedio);
void MostrarTodo (int totalventa, int promedio, string mayorventa, string menorventa, int superior);

int main () {
    int ventas [7];
    int totalventa, promedio, superior, i;
    string dia, mayorventa, menorventa;

    cout << "--- Sistema de Ventas ---\n";
    LeerVector (ventas, dia);
    MostrarVentas (ventas, dia);
    totalventa = CalcTotalVentas (ventas);
    promedio = CalcPromedio (totalventa);
    mayorventa = DefMayorVenta (ventas, dia);
    menorventa = DefMenorVenta (ventas, dia);
    superior = SuperiorProm (ventas, promedio);
    MostrarTodo (totalventa, promedio, mayorventa, menorventa, superior);
    return 0;
}

string DefDia (int i) {
    switch (i) {
        case 0:
            return "Lunes";
            break;
        case 1:
            return "Martes";
            break;
        case 2:
            return "Miercoles";
            break;
        case 3:
            return "Jueves";
            break;
        case 4:
            return "Viernes";
            break;
        case 5:
            return "Sabado";
            break;
        case 6:
            return "Domingo";
            break;
        default:
            return "Invalido";
    }
}

void LeerVector(int ventas[], string dia) {
    for (int i=0; i<7; i++) {
        dia = DefDia(i);
        cout << "Ingrese ventas del " << dia << ": ";
        cin >> ventas[i];
        while (ventas [i] < 0) {
            cout << "ERROR. Ingrese un numero positivo. " << dia << ": ";
            cin >> ventas [i];
        }
    }
}

void MostrarVentas (int ventas[], string dia) {
    cout << "\n--- Registro ---\n";
    for (int i=0; i<7; i++) {
        dia = DefDia(i);
        cout << dia << ": " << ventas[i] << endl;
    }

}

int CalcTotalVentas (int ventas []) {
    int suma = 0;
    for (int i=0; i<7; i++) {
        suma = suma + ventas[i];
    }
    return suma;
}

int CalcPromedio (int totalventa) {
    return totalventa/7;
}


string DefMayorVenta (int ventas [], string dia) {
    int mayor = ventas [0];
    for (int i=0; i<7; i++) {
        if (mayor < ventas [i]) {
            dia = DefDia(i);
        }
    }
    return dia;
}


string DefMenorVenta (int ventas [], string dia) {
    int menor = ventas [0];
    for (int i=0; i<7; i++) {
        if (menor > ventas [i]) {
            dia = DefDia(i);
        }
    }
    return dia;
}

int SuperiorProm (int ventas [], int promedio) {
    int contador=0;
    for (int i=0; i<7; i++) {
        if(ventas [i] > promedio) {
            contador ++;
        }
    }
    return contador;
}

void MostrarTodo (int totalventa, int promedio, string mayorventa, string menorventa, int superior){
    cout << "\n---Resumen de Ventas Semanales--\n";
    cout << "Total de ventas: " << totalventa << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Dia con mayor venta: " << mayorventa << endl;
    cout << "Dia con menor venta: " << menorventa << endl;
    cout << "Dias con ventas superiores al promedio: " << superior << endl;
}
