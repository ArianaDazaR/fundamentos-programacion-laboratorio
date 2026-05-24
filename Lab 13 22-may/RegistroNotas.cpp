#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void leerVector(int notas[], int n);
void mostrarVector(int notas[], int n);
int calcularPromedio(int notas[], int n);
int buscarMayorNota(int notas[], int n);
int buscarMenorNota(int notas[], int n);
void mostrarResultados(int promedio, int mayorNota, int menorNota);

int main () {
    int n;
    cout << "Cuantos estudiantes desea registrar?: ";
    cin >> n;
    int notas [n];
    int promedio, mayorNota, menorNota;
    leerVector(notas, n);
    mostrarVector(notas, n);
    promedio = calcularPromedio(notas, n);
    mayorNota = buscarMayorNota(notas, n);
    menorNota = buscarMenorNota(notas, n);
    mostrarResultados(promedio, mayorNota, menorNota);
    return 0;
}

void leerVector(int notas[], int n) {
    for (int i=0; i<n; i++) {
        cout << "Ingrese nota del estudiante " << i+1 << ": ";
        cin >> notas[i];
        while (notas[i] < 0) {
            cout << "Error. Intente de nuevo: ";
            cin >> notas[i];
        }
    }
}

void mostrarVector(int notas[], int n) {
    cout << "\n--- Registro ---\n";
    for (int i=0; i<n; i++) {
        cout << "Estudiante " << i+1 << ": " << notas [i] << endl;
    }
}

int calcularPromedio(int notas[], int n) {
    int suma = 0;
    for (int i=0; i<n; i++) {
        suma = suma + notas[i];
    }
    return suma/n;
}

int buscarMayorNota(int notas[], int n) {
    int mayor = notas[0];
     for(int i = 1; i < n; i++) {
        if(notas[i] > mayor) {
            mayor = notas[i];
        }
    }
    return mayor;
}

int buscarMenorNota(int notas[], int n) {
    int menor = notas[0];
     for(int i = 1; i < n; i++) {
        if(notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

void mostrarResultados(int promedio, int mayorNota, int menorNota) {
    cout << "\nResultados" << endl;
    cout << "Promedio de notas: " << fixed << setprecision (2) << promedio << endl;
    cout << "Menor nota registrada: " << menorNota << endl;
    cout << "Mayor nota registrada: " << mayorNota << endl;
}
