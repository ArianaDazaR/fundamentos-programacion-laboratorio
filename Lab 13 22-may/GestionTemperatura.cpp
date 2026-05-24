#include <iostream>
#include <vector>
using namespace std;

void LeerTemp (int temp[]);
void MostrarTemp (int temp[]);
int DefMayor (int temp[]);
int DefMenor (int temp[]);
int CalcPromedio (int temp[]);
int DefSuperior (int temp [], int promedio);
int DefInferiorDiez (int temp []);
void MostrarTodo (int mayor, int menor, int promedio, int superior, int inferior);

int main () {
    int temp[15];

    cout << "--- Sistema de Gestion del Clima ---\n";
    LeerTemp (temp);
    MostrarTemp (temp);
    int mayor = DefMayor (temp);
    int menor = DefMenor (temp);
    int promedio = CalcPromedio (temp);
    int superior = DefSuperior (temp, promedio);
    int inferior = DefInferiorDiez (temp);
    MostrarTodo (mayor, menor, promedio, superior, inferior);
}

void LeerTemp (int temp[]) {
    for (int i=0; i<15; i++) {
        cout << "Dia " << i+1 << " (C): ";
        cin >> temp[i];
    }
}

void MostrarTemp (int temp[]) {
    cout << "\n--- Temperaturas Registradas ---\n";
    for (int i=0; i<15; i++) {
        cout << "Dia " << i+1 << ": " << temp[i] << " C" << endl;
    }
}


int DefMayor (int temp[]) {
    int mayor = temp[0];
    for (int i=0; i<15; i++) {
        if (temp[i]>mayor) {
            mayor = temp[i];
        }
    }
    return mayor;
}

int DefMenor (int temp[]) {
    int menor = temp[0];
    for (int i=0; i<15; i++) {
        if (temp[i]<menor) {
            menor = temp[i];
        }
    }
    return menor;
}

int CalcPromedio (int temp[]) {
    int suma=0;
    for (int i=0; i<15; i++) {
        suma = suma + temp[i];
    }
    return suma/15;
}

int DefSuperior (int temp[], int promedio) {
    int contador=0;
    for (int i=0; i<15; i++) {
        if (temp[i]>promedio) {
            contador ++;
        }
    }
    return contador;
}

int DefInferiorDiez (int temp []) {
    int contador=0;
    for (int i=0; i<15; i++) {
        if (temp[i]>10) {
            contador ++;
        }
    }
    return contador;
}

void MostrarTodo (int mayor, int menor, int promedio, int superior, int inferior) {
    cout << "\n--- Resumen de Temperaturas ---\n";
    cout << "Maxima registrada: " << mayor << " C" << endl;
    cout << "Minima registrada: " << menor << " C" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Dias con temperatura superior al promedio: " << superior << endl;
    cout << "Dias con temperatura inferior a 10 C: " << inferior << endl;
}
